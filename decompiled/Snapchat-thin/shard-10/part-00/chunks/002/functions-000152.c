/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10756931c; end: 107569327;  */

undefined ** FUN_10756931c(void)

{
  return &PTR_DAT_1109bdc90;
}



/* Entry: 107569328; end: 107569347;  */

void FUN_107569328(void)

{
  func_0x000107569c50();
  FUN_1075666ec();
  return;
}



/* Entry: 107569348; end: 10756934f;  */

void FUN_107569348(void)

{
  return;
}



/* Entry: 107569350; end: 10756937b;  */

void FUN_107569350(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000107569bac();
  *param_1 = &PTR_FUN_1109bdcb0;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 10756937c; end: 10756939b;  */

void FUN_10756937c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109bdcb0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 10756939c; end: 1075693c3;  */

void FUN_10756939c(undefined8 param_1)

{
  func_0x0001075697e0();
  func_0x000107569738(param_1,&PTR_DAT_1109bdd10);
  func_0x0001075696dc();
  return;
}



/* Entry: 1075693c4; end: 1075693cf;  */

undefined ** FUN_1075693c4(void)

{
  return &PTR_DAT_1109bdd10;
}



/* Entry: 1075693d0; end: 107569403;  */

void FUN_1075693d0(long *param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_2;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x30))(param_1,&uStack_18);
    return;
  }
  func_0x000104bfeb48();
  return;
}



/* Entry: 107569404; end: 10756940b;  */

void FUN_107569404(void)

{
  return;
}



/* Entry: 10756940c; end: 107569437;  */

void FUN_10756940c(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 uVar1;
  
  func_0x000107569bac();
  *param_1 = &PTR_FUN_1109bdd30;
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  param_1[2] = *(undefined8 *)(unaff_x19 + 0x10);
  param_1[1] = uVar1;
  return;
}



/* Entry: 107569438; end: 107569457;  */

void FUN_107569438(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = &PTR_FUN_1109bdd30;
  uVar1 = *(undefined8 *)(param_1 + 8);
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[1] = uVar1;
  return;
}



/* Entry: 107569458; end: 10756947f;  */

void FUN_107569458(undefined8 param_1)

{
  func_0x0001075697e0();
  func_0x000107569738(param_1,&PTR_DAT_1109bdd90);
  func_0x0001075696dc();
  return;
}



/* Entry: 107569480; end: 10756948b;  */

undefined ** FUN_107569480(void)

{
  return &PTR_DAT_1109bdd90;
}



/* Entry: 10756948c; end: 1075694ab;  */

void FUN_10756948c(void)

{
  func_0x000107569c64();
  FUN_107566cb8();
  return;
}



/* Entry: 1075694ac; end: 1075694bf;  */

void FUN_1075694ac(void)

{
  FUN_10756948c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075694c0; end: 1075694f3;  */

undefined8 FUN_1075694c0(undefined8 param_1)

{
  func_0x000107569a40();
  FUN_107569554();
  return param_1;
}



/* Entry: 1075694f4; end: 10756951f;  */

void FUN_1075694f4(long param_1,undefined8 param_2)

{
  func_0x000107569c64(param_2,param_1 + 8);
  FUN_107566c8c();
  return;
}



/* Entry: 107569520; end: 107569547;  */

void FUN_107569520(undefined8 param_1)

{
  func_0x0001075697e0();
  func_0x000107569738(param_1,&PTR_DAT_1109bde10);
  func_0x0001075696dc();
  return;
}



/* Entry: 107569548; end: 107569553;  */

undefined ** FUN_107569548(void)

{
  return &PTR_DAT_1109bde10;
}



/* Entry: 107569554; end: 10756959b;  */

void FUN_107569554(void)

{
  func_0x000107569c64();
  FUN_107566c8c();
  return;
}



/* Entry: 10756959c; end: 1075695af;  */

void FUN_10756959c(void)

{
  func_0x000107569574();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1075695b0; end: 1075695d3;  */

undefined8 * FUN_1075695b0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  func_0x000107569a68();
  *puVar1 = &PTR_SUB_1109bde30;
  FUN_107566f80(puVar1 + 1,param_1 + 1);
  return puVar1;
}



/* Entry: 1075695d4; end: 1075695fb;  */

undefined8 * FUN_1075695d4(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_SUB_1109bde30;
  FUN_107566f80(param_2 + 1,param_1 + 8);
  return param_2;
}



/* Entry: 1075695fc; end: 107569623;  */

void FUN_1075695fc(undefined8 param_1)

{
  func_0x0001075697e0();
  func_0x000107569738(param_1,&PTR_DAT_1109bde90);
  func_0x0001075696dc();
  return;
}



/* Entry: 107569624; end: 10756962f;  */

undefined ** FUN_107569624(void)

{
  return &PTR_DAT_1109bde90;
}



/* Entry: 107569630; end: 10756965b;  */

undefined8 * FUN_107569630(undefined8 *param_1)

{
  *param_1 = &PTR_SUB_1109bde30;
  FUN_107566f80(param_1 + 1);
  return param_1;
}



/* Entry: 10756965c; end: 107569c9f;  */

void FUN_10756965c(void)

{
  return;
}



/* Entry: 107569ca0; end: 107569d1f;  */

void FUN_107569ca0(void)

{
  undefined8 *unaff_x19;
  undefined1 auStack_30 [16];
  
  func_0x00010756d438();
  func_0x0001072ca12c(auStack_30);
  func_0x0001072c9e90();
  func_0x0001072c9f9c();
  func_0x00010756d348();
  *unaff_x19 = &PTR_FUN_1109bdef0;
  func_0x0001072c9bc0(unaff_x19 + 9);
  return;
}



/* Entry: 107569d20; end: 107569d4f;  */

undefined8 * FUN_107569d20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109bdef0;
  func_0x0001072c9c34(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107569d50; end: 107569d53;  */

undefined8 * FUN_107569d50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109bdef0;
  func_0x0001072c9c34(param_1 + 9);
  *param_1 = &PTR_DAT_1109d4888;
  func_0x0001001148fc(param_1 + 5);
  func_0x0001072c9884(param_1 + 2);
  return param_1;
}



/* Entry: 107569d54; end: 10756a667;  */

void FUN_107569d54(long *param_1,long *param_2,long param_3,long param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 extraout_x8;
  code *extraout_x9;
  code *extraout_x9_00;
  code *extraout_x9_01;
  code *extraout_x9_02;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined1 uVar12;
  long *plVar13;
  undefined1 uVar14;
  float fVar15;
  long *unaff_x27;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 auStack_3a0 [8];
  undefined4 uStack_398;
  undefined1 uStack_390;
  undefined1 auStack_388 [16];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [24];
  long lStack_348;
  int iStack_340;
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [16];
  undefined8 uStack_310;
  undefined4 uStack_308;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 auStack_290 [4];
  undefined1 uStack_28c;
  long lStack_280;
  undefined1 auStack_258 [56];
  long lStack_220;
  undefined4 auStack_218 [2];
  long *plStack_210;
  long *plStack_208;
  char cStack_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_198;
  undefined4 uStack_150;
  undefined4 uStack_108;
  undefined4 uStack_c0;
  long alStack_b8 [2];
  ulong uStack_a8;
  undefined8 uStack_70;
  
  func_0x00010756d1a0();
  uStack_70 = extraout_x8;
  if ((bRam00000001136cba70 & 1) == 0) {
    iVar3 = 0x136cba70;
    ___cxa_guard_acquire();
    if (iVar3 != 0) {
      func_0x000100060964(alStack_b8,"string");
      func_0x000104c318bc(&lStack_220,alStack_b8);
      uStack_1e0 = 3;
      func_0x000100060964(&uStack_310,"image");
      func_0x00010756d2e4();
      uStack_198 = 0xb;
      func_0x000100060964(auStack_258,"number");
      func_0x00010756d2e4();
      uStack_150 = 1;
      func_0x000100060964(auStack_290,"boolean");
      func_0x00010756d2e4();
      uStack_108 = 2;
      func_0x000100060964(&uStack_2c8,&DAT_10f365d6f);
      func_0x00010756d2e4();
      uStack_c0 = 5;
      FUN_10756b064(0x1136cba78,&lStack_220,5,0,auStack_320,&lStack_348,&uStack_3b0);
      lVar10 = 0x120;
      do {
        func_0x00010756b67c((long)auStack_218 + lVar10 + -8);
        lVar10 = lVar10 + -0x48;
      } while (lVar10 != -0x48);
      func_0x000104c2f714(&uStack_2c8);
      func_0x000104c2f714(auStack_290);
      func_0x00010756d2d0();
      func_0x000104c2f714(&uStack_310);
      func_0x000104c2f714(alStack_b8);
      ___cxa_guard_release(0x1136cba70);
    }
  }
  plVar11 = param_2 + 1;
  plVar4 = plVar11;
  (**(code **)(*param_2 + 0x20))();
  uVar2 = (long)plVar4 - 1U == 0;
  if (plVar4 == (long *)0x0 || (bool)uVar2) {
    func_0x00010002b838(auStack_338,&UNK_10f417abc);
    FUN_10756a668(param_3,auStack_338);
    func_0x00010756d3dc();
    *(undefined1 *)param_1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
  }
  else {
    iStack_340 = 0;
    func_0x00010756d420();
    plVar9 = alStack_b8;
    (*extraout_x9)(alStack_b8,plVar11,0);
    func_0x00010756d3c4();
    func_0x000104c318bc(auStack_258,&lStack_220);
    func_0x00010756d3b4();
    func_0x00010756d2c0();
    puVar5 = auStack_258;
    func_0x000107278484(puVar5,"array");
    if ((int)puVar5 == 0) {
      lVar10 = 0x1136cba78;
      puVar5 = auStack_258;
      FUN_10756a670(0x1136cba78,puVar5);
      if (lVar10 == 0) goto LAB_10756a450;
      FUN_10756cb60(&lStack_348,puVar5 + 0x38);
      plVar13 = (long *)0x1;
LAB_107569fe0:
      uStack_310 = 0;
      FUN_107539a30(&uStack_310,(long)plVar4 - 1U);
      uVar12 = (undefined1)*param_1;
      uVar14 = (undefined1)param_1[2];
      do {
        uVar2 = plVar13 == plVar4;
        if (plVar4 <= plVar13) {
          *(undefined1 *)(param_1 + 2) = uVar14;
          *(undefined1 *)param_1 = uVar12;
          uVar2 = *(char *)(param_3 + 0x51) == '\x01';
          if ((bool)uVar2) {
            func_0x00010756d054(auStack_290,1);
            lVar10 = lStack_280;
            func_0x00010756d360();
            func_0x0001072c9ff4(auStack_320,&lStack_348);
            func_0x0001072c9bc0(alStack_b8,&uStack_310);
            func_0x0001072ca12c(&uStack_2c8,auStack_320);
            func_0x0001072c9bc0(&lStack_220,alStack_b8);
            FUN_107569ca0(lVar10 + 0x18,&uStack_2c8,&lStack_220);
            func_0x00010756d2c8();
            func_0x0001072c9884(&uStack_2c8);
            func_0x0001002a8234(lVar10 + 0x40,param_4 + 0x40);
            func_0x0001072c9c34(alStack_b8);
            func_0x0001072c9884(auStack_320);
            lVar10 = lStack_280;
            lStack_280 = 0;
            func_0x00010756d0e8(auStack_290);
            *param_1 = lVar10 + 0x18;
            param_1[1] = lVar10;
            uStack_3b0 = 0;
            uStack_3a8 = 0;
            *(undefined1 *)(param_1 + 2) = 1;
            puVar6 = &uStack_3b0;
          }
          else {
            func_0x00010756d054(alStack_b8,1);
            uVar7 = uStack_a8;
            func_0x00010756d360();
            func_0x0001072c9ff4(auStack_290,&lStack_348);
            func_0x0001072c9bc0(&lStack_220,&uStack_310);
            FUN_107569ca0(uVar7 + 0x18,auStack_290,&lStack_220);
            func_0x00010756d2c8();
            func_0x0001072c9884(auStack_290);
            uVar7 = uStack_a8;
            uStack_a8 = 0;
            func_0x00010756d0e8(alStack_b8);
            *param_1 = uVar7 + 0x18;
            param_1[1] = uVar7;
            uStack_2c8 = 0;
            uStack_2c0 = 0;
            *(undefined1 *)(param_1 + 2) = 1;
            puVar6 = &uStack_2c8;
          }
          FUN_10756d0f8(puVar6);
          goto LAB_10756a1d4;
        }
        func_0x00010756d420();
        (*extraout_x9_01)(alStack_b8,plVar11,plVar13);
        uStack_398 = 6;
        uStack_390 = 1;
        auStack_290[0] = 0;
        uStack_28c = 0;
        func_0x00010777067c(&lStack_220,param_3,alStack_b8,plVar13,param_4,auStack_3a0,auStack_290);
        func_0x0001072c9854(auStack_3a0);
        func_0x00010756d2c0();
        plVar9 = plStack_210;
        if (((ulong)plStack_210 & 1) == 0) {
          uVar14 = 0;
          uVar12 = 0;
        }
        else {
          func_0x0001072c995c(&uStack_310,&lStack_220);
        }
        func_0x0001072c95d0(&lStack_220);
        plVar13 = (long *)((long)plVar13 + 1);
      } while (((ulong)plVar9 & 1) != 0);
      *(undefined1 *)(param_1 + 2) = uVar14;
      *(undefined1 *)param_1 = uVar12;
LAB_10756a1d4:
      func_0x0001072c9c34(&uStack_310);
    }
    else {
      alStack_b8[0]._0_1_ = 0;
      uStack_a8 = uStack_a8 & 0xffffffffffffff00;
      if (plVar4 == (long *)0x2) {
        auStack_218[0] = 6;
        plStack_210 = (long *)CONCAT71(plStack_210._1_7_,1);
        FUN_10756bb10(alStack_b8,&lStack_220);
        func_0x0001072c9854(&lStack_220);
        func_0x00010756d444();
        plVar13 = (long *)0x1;
LAB_107569e74:
        func_0x0001072c9ff4(auStack_388,alStack_b8);
        func_0x0001072ca12c(&lStack_220,auStack_388);
        uVar2 = iStack_340 == 7;
        plStack_210 = plVar9;
        plStack_208 = unaff_x27;
        if ((bool)uVar2) {
          FUN_10756bb84(lStack_348,&lStack_220);
          *(long **)(lStack_348 + 0x10) = plStack_210;
          *(undefined1 *)(lStack_348 + 0x18) = plStack_208._0_1_;
        }
        else {
          func_0x00010756d400();
          func_0x0001072f6b08(&lStack_348,&lStack_220);
          iStack_340 = 7;
        }
        func_0x0001072c9884(&lStack_220);
        func_0x0001072c9884(auStack_388);
        bVar8 = true;
      }
      else {
        func_0x00010756d420();
        (*extraout_x9_00)(&uStack_310,plVar11,1);
        func_0x00010756d3c4();
        func_0x0001072f5f6c(&uStack_310);
        uVar2 = cStack_1e8 == '\x01';
        if ((bool)uVar2) {
          lVar10 = 0x1136cba78;
          plVar9 = &lStack_220;
          FUN_10756a670();
          if (lVar10 == 0) goto LAB_107569f60;
          uStack_308 = 5;
          unaff_x27 = plVar9 + 7;
          FUN_10745de74(unaff_x27,&uStack_310);
          func_0x0001072c9884(&uStack_310);
          if ((int)unaff_x27 != 0) goto LAB_107569f60;
          uVar2 = (char)uStack_a8 == '\x01';
          if ((bool)uVar2) {
            FUN_10756cb60(alStack_b8,plVar9 + 7);
          }
          else {
            func_0x0001072c9ff4(alStack_b8,plVar9 + 7);
            uStack_a8 = CONCAT71(uStack_a8._1_7_,1);
          }
          plVar9 = (long *)0x0;
          plVar13 = (long *)0x2;
        }
        else {
LAB_107569f60:
          func_0x00010002b838(auStack_360,&UNK_10f417adc);
          FUN_10756a69c(param_3,auStack_360,1);
          __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_360);
          *(undefined1 *)param_1 = 0;
          *(undefined1 *)(param_1 + 2) = 0;
          plVar9 = (long *)0x1;
          plVar13 = (long *)0x1;
        }
        func_0x00010756d3b4();
        if ((int)plVar9 == 0) {
          uVar2 = plVar4 == (long *)0x4;
          if (plVar4 < (long *)0x4) {
            func_0x00010756d444();
          }
          else {
            func_0x00010756d420();
            plVar9 = &lStack_220;
            (*extraout_x9_02)(&lStack_220,plVar11,2);
            unaff_x27 = (long *)auStack_218;
            (**(code **)(lStack_220 + 0x58))();
            uVar7 = 0;
            (**(code **)(lStack_220 + 0x10))();
            fVar15 = SUB84(unaff_x27,0);
            if ((uVar7 & 1) == 0) {
              if (((ulong)unaff_x27 >> 0x20 & 1) != 0) {
                uVar2 = false;
                if ((0.0 <= fVar15) && (uVar2 = false, !NAN((float)(int)fVar15) && !NAN(fVar15))) {
                  uVar2 = (float)(int)fVar15 == fVar15;
                }
                if ((bool)uVar2) goto LAB_10756a290;
              }
              func_0x00010002b838(auStack_378,&UNK_10f417b25);
              FUN_10756a69c(param_3,auStack_378,2);
              __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_378);
              func_0x00010756d444();
              bVar8 = false;
              *(undefined1 *)param_1 = 0;
              *(undefined1 *)(param_1 + 2) = 0;
            }
            else {
              if (((ulong)unaff_x27 >> 0x20 & 1) == 0) {
                func_0x00010756d444();
              }
              else {
LAB_10756a290:
                plVar9 = (long *)(long)fVar15;
                unaff_x27 = (long *)0x1;
              }
              plVar13 = (long *)((long)plVar13 + 1);
              bVar8 = true;
            }
            func_0x0001072f5f6c(&lStack_220);
            if (!bVar8) goto LAB_107569fa0;
          }
          goto LAB_107569e74;
        }
LAB_107569fa0:
        bVar8 = false;
      }
      func_0x0001072c9854(alStack_b8);
      if (bVar8) goto LAB_107569fe0;
    }
    func_0x00010756d2d0();
    func_0x00010756d400();
  }
  func_0x00010756d18c(uStack_70);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
LAB_10756a450:
  func_0x00010ae87d60(&UNK_10f40ec73);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10756a460);
  (*pcVar1)();
}



/* Entry: 10756a668; end: 10756a66f;  */

void FUN_10756a668(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38,param_1);
  FUN_10756b71c(uVar1,&uStack_50);
  func_0x0001072c97dc(&uStack_50);
  return;
}



/* Entry: 10756a670; end: 10756a69b;  */

long FUN_10756a670(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long *unaff_x19;
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
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000080;
  undefined8 in_stack_00000088;
  
  func_0x00010756d250();
  func_0x00010756d2b0();
  func_0x00010756d450();
  func_0x00010756d2d8();
  lVar6 = 0;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar7 = *unaff_x20;
  uVar5 = uVar7 >> 0xc ^ param_1 >> 7;
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
      puVar4 = (undefined1 *)register0x00000008;
      FUN_10756b420(&stack0x00000000,uVar1 + uVar9 * 0x48);
      if ((int)puVar4 != 0) {
        return *unaff_x19 + uVar9;
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



/* Entry: 10756a69c; end: 10756a767;  */

void FUN_10756a69c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x00010756d250();
  func_0x000100456794(auStack_78);
  func_0x000107878fec(auStack_90,param_3);
  func_0x00010533a9c0(auStack_60,auStack_78,auStack_90);
  func_0x00010048a6c8(auStack_48,auStack_60,&DAT_10f62a9ea);
  FUN_10756b6a8();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_48);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_60);
  func_0x00010756d328();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_78);
  return;
}



/* Entry: 10756a768; end: 10756a787;  */

long FUN_10756a768(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x18) == 7) {
    func_0x000100060934(param_1,"array");
    *(undefined8 *)(param_1 + 0x30) = 0xffffffffffffffff;
    return param_1;
  }
  param_2 = param_2 + 0x10;
  FUN_10756c4c0(param_2,&stack0xffffffffffffffef);
  return param_2;
}



/* Entry: 10756a788; end: 10756a7a3;  */

void FUN_10756a788(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10756c4c0(param_1,&uStack_11);
  return;
}



/* Entry: 10756a7a4; end: 10756aa6f;  */

void FUN_10756a7a4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 extraout_x8;
  undefined8 *puVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  undefined1 auStack_1f0 [24];
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [24];
  undefined1 auStack_1a8 [24];
  undefined1 auStack_190 [56];
  undefined1 auStack_158 [56];
  undefined1 auStack_120 [24];
  byte bStack_108;
  undefined1 auStack_e8 [8];
  undefined1 auStack_e0 [112];
  int iStack_70;
  undefined8 uStack_68;
  
  lVar9 = 0;
  uVar10 = 0;
  lVar3 = param_2;
  func_0x00010756d1a0();
  uStack_68 = extraout_x8;
  do {
    uVar8 = *(ulong *)(param_2 + 0x48) >> 1;
    uVar2 = uVar10 == uVar8;
    if (uVar8 <= uVar10) {
      func_0x000100060964(auStack_e8,&UNK_10f417b9d);
      puVar5 = auStack_e8;
      FUN_10756c0ec(param_1,puVar5);
      func_0x000104c2f714();
LAB_10756a9ac:
      func_0x00010756d18c(uStack_68);
      if (!(bool)uVar2) {
        ___stack_chk_fail();
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_220);
        func_0x000104c2f714(auStack_190);
        func_0x0001072c9884(auStack_230);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d8);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f0);
        __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
        puVar4 = auStack_158;
        func_0x000104c2f714();
        func_0x00010756d3e4();
        func_0x00010756d1cc();
        plVar7 = (long *)(puVar4 + 0x50);
        if ((*(ulong *)(puVar4 + 0x48) & 1) != 0) {
          plVar7 = (long *)*plVar7;
        }
        uVar10 = *(ulong *)(puVar4 + 0x48) & 0x1ffffffffffffffe;
        uVar8 = uVar10 << 3;
        while (uVar10 != 0) {
          FUN_10745df58(puVar5,*plVar7);
          uVar8 = uVar8 - 0x10;
          plVar7 = plVar7 + 2;
          uVar10 = uVar8;
        }
        return;
      }
      return;
    }
    puVar6 = (undefined8 *)(lVar3 + 0x50);
    if ((*(ulong *)(param_2 + 0x48) & 1) != 0) {
      puVar6 = *(undefined8 **)(lVar3 + 0x50);
    }
    func_0x000107753050(auStack_e8,*(undefined8 *)((long)puVar6 + lVar9),param_3,param_4);
    uVar2 = iStack_70 == 1;
    if (!(bool)uVar2) {
LAB_10756a880:
      puVar5 = auStack_e0;
      FUN_10756c040(param_1 + 8,puVar5);
LAB_10756a9a8:
      func_0x00010756d3e4();
      goto LAB_10756a9ac;
    }
    FUN_1073405dc(auStack_e8);
    func_0x000107775f1c(auStack_158);
    FUN_10756f724(auStack_120,param_2 + 0x10,auStack_158);
    bVar1 = bStack_108;
    func_0x0001001148fc(auStack_120);
    func_0x0001072c9884(auStack_158);
    if ((bVar1 & 1) == 0) goto LAB_10756a880;
    uVar2 = uVar10 == (*(ulong *)(param_2 + 0x48) >> 1) - 1;
    if ((bool)uVar2) {
      FUN_10756a788(auStack_158,param_2 + 0x10);
      func_0x00010724ef84(auStack_208,auStack_158);
      func_0x0001004c3cd0(auStack_1f0,&UNK_10f417b68,auStack_208);
      func_0x00010048a6c8(auStack_1d8,auStack_1f0,&UNK_10f417b86);
      FUN_1073405dc(auStack_e8);
      func_0x000107775f1c(auStack_230);
      FUN_10756a788(auStack_190,auStack_230);
      func_0x00010724ef84(auStack_220,auStack_190);
      func_0x00010533a9c0(auStack_1c0,auStack_1d8,auStack_220);
      func_0x00010048a6c8(auStack_1a8,auStack_1c0,&UNK_10f417b93);
      func_0x0001072625b4(auStack_120,auStack_1a8);
      puVar5 = auStack_120;
      FUN_10756c0ec(param_1,puVar5);
      func_0x000104c2f714(auStack_120);
      func_0x00010756d3dc();
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1c0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_220);
      func_0x000104c2f714(auStack_190);
      func_0x0001072c9884(auStack_230);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1d8);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_1f0);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEED2Ev(auStack_208);
      func_0x000104c2f714();
      goto LAB_10756a9a8;
    }
    func_0x00010756d3e4();
    uVar10 = uVar10 + 1;
    lVar9 = lVar9 + 0x10;
  } while( true );
}



/* Entry: 10756aa70; end: 10756aabb;  */

void FUN_10756aa70(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = (long *)(param_1 + 0x50);
  if ((*(ulong *)(param_1 + 0x48) & 1) != 0) {
    plVar2 = (long *)*plVar2;
  }
  uVar1 = *(ulong *)(param_1 + 0x48) & 0x1ffffffffffffffe;
  uVar3 = uVar1 << 3;
  while (uVar1 != 0) {
    FUN_10745df58(param_2,*plVar2);
    uVar3 = uVar3 - 0x10;
    plVar2 = plVar2 + 2;
    uVar1 = uVar3;
  }
  return;
}



/* Entry: 10756aabc; end: 10756ab0b;  */

undefined1 FUN_10756aabc(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x19;
  undefined1 uVar4;
  long unaff_x20;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  if (*(int *)(param_2 + 8) == 5) {
    func_0x00010756d250();
    param_1 = param_1 + 0x10;
    FUN_10745de74(param_1,param_2 + 0x10);
    if ((int)param_1 != 0) {
      uVar2 = *(ulong *)(unaff_x20 + 0x48);
      if ((*(ulong *)(unaff_x19 + 0x48) ^ uVar2) < 2) {
        plVar5 = (long *)(unaff_x20 + 0x50);
        plVar3 = (long *)*plVar5;
        plVar6 = plVar5;
        if ((uVar2 & 1) != 0) {
          plVar6 = plVar3;
        }
        puVar7 = (undefined8 *)(unaff_x19 + 0x50);
        if ((*(ulong *)(unaff_x19 + 0x48) & 1) != 0) {
          puVar7 = *(undefined8 **)(unaff_x19 + 0x50);
        }
        while( true ) {
          plVar1 = plVar5;
          if ((uVar2 & 1) != 0) {
            plVar1 = plVar3;
          }
          uVar4 = 1;
          if (plVar6 == plVar1 + (uVar2 & 0xfffffffffffffffe)) break;
          plVar3 = (long *)*plVar6;
          (**(code **)(*plVar3 + 0x18))(plVar3,*puVar7);
          if ((int)plVar3 == 0) {
            return 0;
          }
          uVar2 = *(ulong *)(unaff_x20 + 0x48);
          plVar3 = *(long **)(unaff_x20 + 0x50);
          plVar6 = plVar6 + 2;
          puVar7 = puVar7 + 2;
        }
      }
      else {
        uVar4 = 0;
      }
      return uVar4;
    }
  }
  return 0;
}



/* Entry: 10756ab0c; end: 10756abab;  */

undefined1 FUN_10756ab0c(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  long *plVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined1 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  
  uVar3 = *param_1;
  if ((*param_2 ^ uVar3) < 2) {
    puVar6 = param_1 + 1;
    puVar4 = (ulong *)*puVar6;
    puVar7 = puVar6;
    if ((uVar3 & 1) != 0) {
      puVar7 = puVar4;
    }
    puVar8 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      puVar8 = (ulong *)param_2[1];
    }
    while( true ) {
      puVar1 = puVar6;
      if ((uVar3 & 1) != 0) {
        puVar1 = puVar4;
      }
      uVar5 = 1;
      if (puVar7 == puVar1 + (uVar3 & 0xfffffffffffffffe)) break;
      plVar2 = (long *)*puVar7;
      (**(code **)(*plVar2 + 0x18))(plVar2,*puVar8);
      if ((int)plVar2 == 0) {
        return 0;
      }
      uVar3 = *param_1;
      puVar4 = (ulong *)param_1[1];
      puVar7 = puVar7 + 2;
      puVar8 = puVar8 + 2;
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



/* Entry: 10756abac; end: 10756ac67;  */

void FUN_10756abac(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lStack_58;
  long lStack_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar4 = (undefined8 *)(param_2 + 0x50);
  if ((*(ulong *)(param_2 + 0x48) & 1) != 0) {
    puVar4 = (undefined8 *)*puVar4;
  }
  puVar1 = puVar4 + (*(ulong *)(param_2 + 0x48) & 0xfffffffffffffffe);
  for (; puVar4 != puVar1; puVar4 = puVar4 + 2) {
    (**(code **)(*(long *)*puVar4 + 0x20))(&lStack_58);
    lVar2 = lStack_50;
    for (lVar3 = lStack_58; lVar3 != lVar2; lVar3 = lVar3 + 0x78) {
      FUN_10756c12c(param_1,lVar3);
    }
    func_0x00010756c400(&lStack_58);
  }
  return;
}



/* Entry: 10756ac68; end: 10756aea7;  */

long * FUN_10756ac68(undefined4 *param_1,long *param_2)

{
  ulong uVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  undefined8 extraout_x8;
  long *plVar4;
  ulong uVar5;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  int iStack_a8;
  undefined8 uStack_a0;
  char cStack_98;
  long lStack_90;
  undefined4 *puStack_88;
  undefined4 *puStack_80;
  undefined1 auStack_78 [16];
  undefined4 *puStack_68;
  undefined8 uStack_38;
  
  plVar4 = param_2;
  func_0x00010756d1a0();
  lStack_90 = 0;
  puStack_88 = (undefined4 *)0x0;
  puStack_80 = (undefined4 *)0x0;
  uStack_38 = extraout_x8;
  (**(code **)(*plVar4 + 0x40))(auStack_78);
  func_0x00010756d390();
  func_0x0001074d2254();
  func_0x00010756d310();
  uVar3 = 0;
  if ((int)param_2[3] == 7) {
    plVar4 = param_2 + 2;
    FUN_10756aea8(plVar4);
    func_0x0001072ca108(auStack_b0,plVar4);
    uVar3 = iStack_a8 - 1U == 2;
    if (iStack_a8 - 1U < 3) {
      FUN_10756a788(auStack_78,auStack_b0);
      func_0x00010756d390();
      func_0x0001074d2254();
      func_0x00010756d310();
      if (cStack_98 == '\x01') {
        uVar3 = puStack_88 == puStack_80;
        if (puStack_88 < puStack_80) {
          *puStack_88 = 5;
          *(undefined8 *)(puStack_88 + 2) = uStack_a0;
          puStack_88 = puStack_88 + 0x10;
        }
        else {
          plVar4 = &lStack_90;
          func_0x000107289660(plVar4,((long)puStack_88 - lStack_90 >> 6) + 1);
          func_0x000107289720(auStack_78,plVar4,(long)puStack_88 - lStack_90 >> 6,&puStack_80);
          *puStack_68 = 5;
          *(undefined8 *)(puStack_68 + 2) = uStack_a0;
          puStack_68 = puStack_68 + 0x10;
          func_0x00010756d390();
          func_0x0001072896a0();
          puVar2 = puStack_88;
          func_0x000107289820(auStack_78);
          puStack_88 = puVar2;
        }
      }
      else {
        uVar3 = param_2[9] == 4;
        if (3 < (ulong)param_2[9]) {
          func_0x00010756d390();
          func_0x000107539bd0();
        }
      }
    }
    func_0x00010756d348();
  }
  plVar4 = param_2 + 10;
  if ((param_2[9] & 1U) != 0) {
    plVar4 = (long *)*plVar4;
  }
  uVar1 = param_2[9] & 0x1ffffffffffffffe;
  uVar5 = uVar1 << 3;
  while (uVar1 != 0) {
    (**(code **)(*(long *)*plVar4 + 0x28))(auStack_78);
    func_0x00010756d390();
    func_0x0001072aad1c();
    func_0x000104c3323c(auStack_78);
    uVar5 = uVar5 - 0x10;
    plVar4 = plVar4 + 2;
    uVar1 = uVar5;
  }
  FUN_107327958(&uStack_c0,&lStack_90);
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = uStack_b8;
  *(undefined8 *)(param_1 + 2) = uStack_c0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  func_0x000104c33108(&uStack_c0);
  plVar4 = &lStack_90;
  func_0x000107269124(plVar4);
  func_0x00010756d18c(uStack_38);
  if ((bool)uVar3) {
    return plVar4;
  }
  ___stack_chk_fail();
  func_0x000107289820(auStack_78);
  func_0x00010756d348();
  plVar4 = &lStack_90;
  func_0x000107269124();
  func_0x00010756d1cc();
  FUN_10756d120();
  return (long *)*plVar4;
}



/* Entry: 10756aea8; end: 10756aebf;  */

undefined8 FUN_10756aea8(undefined8 *param_1)

{
  FUN_10756d120();
  return *param_1;
}



/* Entry: 10756aec0; end: 10756af97;  */

void FUN_10756aec0(long *param_1)

{
  undefined1 in_ZR;
  long *plVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  ulong uVar4;
  long lVar5;
  undefined1 uStack_91;
  long lStack_90;
  ulong uStack_88;
  undefined1 *puStack_80;
  code *pcStack_78;
  ulong uStack_68;
  ulong auStack_60 [7];
  undefined8 uStack_28;
  
  plVar1 = param_1;
  func_0x00010756d1a0();
  uStack_28 = extraout_x8;
  (**(code **)(*plVar1 + 0x40))(auStack_60);
  puVar2 = auStack_60;
  FUN_1074d25b4();
  func_0x000104c2f714(auStack_60);
  uVar4 = param_1[9];
  param_1 = param_1 + 10;
  if ((uVar4 & 1) != 0) {
    param_1 = (long *)*param_1;
  }
  lVar5 = (uVar4 >> 1) << 4;
  uVar4 = (long)puVar2 * 0x1000 + ((ulong)puVar2 >> 4) + (uVar4 >> 1) + 0x9e3779b97f4a7c15 ^
          (ulong)puVar2;
  for (; uStack_68 = uVar4, lVar5 != 0; lVar5 = lVar5 + -0x10) {
    FUN_10756af98(&uStack_68,param_1);
    param_1 = (long *)((long)param_1 + 0x10);
    uVar4 = uStack_68;
  }
  func_0x00010756d18c(uStack_28);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar2 = auStack_60;
    func_0x000104c2f714();
    func_0x00010756d1cc();
    pcStack_78 = FUN_10756af98;
    puVar3 = &uStack_91;
    lStack_90 = lVar5;
    uStack_88 = uVar4;
    puStack_80 = &stack0xfffffffffffffff0;
    func_0x00010756d13c();
    uVar4 = *puVar2;
    *puVar2 = (ulong)(puVar3 + (uVar4 >> 4) + uVar4 * 0x1000 + -0x61c8864680b583eb) ^ uVar4;
    return;
  }
  return;
}



/* Entry: 10756af98; end: 10756afe3;  */

void FUN_10756af98(ulong *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined1 uStack_21;
  
  puVar1 = &uStack_21;
  func_0x00010756d13c();
  uVar2 = *param_1;
  *param_1 = (ulong)(puVar1 + (uVar2 >> 4) + uVar2 * 0x1000 + -0x61c8864680b583eb) ^ uVar2;
  return;
}



/* Entry: 10756afe4; end: 10756b04f;  */

void FUN_10756afe4(undefined1 *param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = (long *)(param_2 + 0x50);
  if ((*(ulong *)(param_2 + 0x48) & 1) != 0) {
    plVar2 = (long *)*plVar2;
  }
  uVar1 = *(ulong *)(param_2 + 0x48) & 0x1ffffffffffffffe;
  uVar3 = uVar1 << 3;
  while( true ) {
    if (uVar1 == 0) {
      *param_1 = 0;
      param_1[0x38] = 0;
      return;
    }
    (**(code **)(*(long *)*plVar2 + 0x50))(param_1);
    if ((param_1[0x38] & 1) != 0) break;
    func_0x00010756c434(param_1);
    uVar3 = uVar3 - 0x10;
    plVar2 = plVar2 + 2;
    uVar1 = uVar3;
  }
  return;
}



/* Entry: 10756b050; end: 10756b063;  */

void FUN_10756b050(void)

{
  FUN_107569d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10756b064; end: 10756b06f;  */

undefined8
FUN_10756b064(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  if (param_4 == 0) {
    if (param_3 * 0x48 == 0x1f8) {
      param_4 = 8;
    }
    else {
      param_4 = (param_3 * 0x48) / 0x48;
      param_4 = (param_4 + -1) / 7 + param_4;
    }
  }
  FUN_10756b0fc(param_1,param_4,param_5,param_6,param_7);
  FUN_10756b144();
  return param_1;
}



/* Entry: 10756b070; end: 10756b0fb;  */

undefined8
FUN_10756b070(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  if (param_4 == 0) {
    if (param_3 - param_2 == 0x1f8) {
      param_4 = 8;
    }
    else {
      param_4 = (param_3 - param_2) / 0x48;
      param_4 = (param_4 + -1) / 7 + param_4;
    }
  }
  FUN_10756b0fc(param_1,param_4,param_5,param_6,param_7);
  FUN_10756b144();
  return param_1;
}



/* Entry: 10756b0fc; end: 10756b143;  */

undefined8 * FUN_10756b0fc(undefined8 *param_1,long param_2)

{
  *param_1 = &UNK_10e52b660;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 != 0) {
    param_1[2] = 0xffffffffffffffff >> (LZCOUNT(param_2) & 0x3fU);
    FUN_107324d80(param_1);
  }
  return param_1;
}



/* Entry: 10756b144; end: 10756b18b;  */

void FUN_10756b144(void)

{
  long unaff_x19;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x00010756d350();
  for (; unaff_x20 != unaff_x19; unaff_x20 = unaff_x20 + 0x48) {
    FUN_10756b1c8(auStack_48);
  }
  return;
}



/* Entry: 10756b18c; end: 10756b1c7;  */

long * FUN_10756b18c(long *param_1)

{
  if (param_1[2] != 0) {
    FUN_10756b640(param_1);
    __ZdlPv(*param_1 + -8);
  }
  return param_1;
}



/* Entry: 10756b1c8; end: 10756b1e7;  */

void FUN_10756b1c8(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  FUN_10756b1e8(&uStack_18);
  return;
}



/* Entry: 10756b1e8; end: 10756b1ef;  */

void FUN_10756b1e8(undefined8 param_1,long param_2)

{
  long lStack_20;
  long lStack_18;
  
  lStack_18 = param_2 + 0x38;
  lStack_20 = param_2;
  FUN_10756b220(param_1,param_2,&UNK_10dd5b8f9,&lStack_20,&lStack_18);
  return;
}



/* Entry: 10756b1f0; end: 10756b21f;  */

void FUN_10756b1f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_2;
  uStack_18 = param_3;
  FUN_10756b220(param_1,param_2,&UNK_10dd5b8f9,&uStack_20,&uStack_18);
  return;
}



/* Entry: 10756b220; end: 10756b29b;  */

void FUN_10756b220(long *param_1,long *param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_2;
  FUN_10756b29c();
  if ((param_3 & 1) != 0) {
    FUN_10756b370(*param_2,lVar2,param_4,param_5,param_6);
  }
  lVar1 = ((long *)*param_2)[1];
  *param_1 = *(long *)*param_2 + lVar2;
  param_1[1] = lVar1 + lVar2 * 0x48;
  *(char *)(param_1 + 2) = (char)param_3;
  return;
}



/* Entry: 10756b29c; end: 10756b36f;  */

undefined1  [16] FUN_10756b29c(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x19;
  ulong *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  uint6 uVar10;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  undefined8 uVar11;
  byte bVar17;
  undefined1 auVar18 [16];
  
  func_0x00010756d450();
  func_0x00010756d2d8();
  func_0x00010756d2b0();
  lVar5 = 0;
  uVar6 = *unaff_x19;
  uVar7 = unaff_x19[2];
  uVar3 = uVar6 >> 0xc ^ param_1 >> 7;
  bVar1 = (byte)param_1;
  uVar10 = CONCAT15(bVar1,CONCAT14(bVar1,CONCAT13(bVar1,CONCAT12(bVar1,CONCAT11(bVar1,bVar1))))) &
           0x7f7f7f7f7f7f;
  while( true ) {
    uVar3 = uVar3 & uVar7;
    uVar11 = *(undefined8 *)(uVar6 + uVar3);
    cVar12 = (char)((ulong)uVar11 >> 8);
    cVar13 = (char)((ulong)uVar11 >> 0x10);
    cVar14 = (char)((ulong)uVar11 >> 0x18);
    cVar15 = (char)((ulong)uVar11 >> 0x20);
    cVar16 = (char)((ulong)uVar11 >> 0x28);
    bVar9 = (byte)((ulong)uVar11 >> 0x30);
    bVar17 = (byte)((ulong)uVar11 >> 0x38);
    for (uVar8 = CONCAT17(-(bVar17 == (bVar1 & 0x7f)),
                          CONCAT16(-(bVar9 == (bVar1 & 0x7f)),
                                   CONCAT15(-(cVar16 == (char)(uVar10 >> 0x28)),
                                            CONCAT14(-(cVar15 == (char)(uVar10 >> 0x20)),
                                                     CONCAT13(-(cVar14 == (char)(uVar10 >> 0x18)),
                                                              CONCAT12(-(cVar13 ==
                                                                        (char)(uVar10 >> 0x10)),
                                                                       CONCAT11(-(cVar12 ==
                                                                                 (char)(uVar10 >> 8)
                                                                                 ),-((char)uVar11 ==
                                                                                    (char)uVar10))))
                                                    )))) & 0x8080808080808080; uVar8 != 0;
        uVar8 = uVar8 - 1 & uVar8) {
      uVar2 = (uVar8 >> 7 & 0xff00ff00ff00ff00) >> 8 | (uVar8 >> 7 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar4 = (ulong *)(uVar3 + ((ulong)LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) >> 3) & uVar7);
      uVar2 = 0;
      FUN_10756b420();
      if ((uVar2 & 1) != 0) {
        uVar11 = 0;
        goto LAB_10756b34c;
      }
    }
    bVar9 = NEON_umaxv(CONCAT17(-(bVar17 == 0x80),
                                CONCAT16(-(bVar9 == 0x80),
                                         CONCAT15(-(cVar16 == -0x80),
                                                  CONCAT14(-(cVar15 == -0x80),
                                                           CONCAT13(-(cVar14 == -0x80),
                                                                    CONCAT12(-(cVar13 == -0x80),
                                                                             CONCAT11(-(cVar12 ==
                                                                                       -0x80),-((
                                                  char)uVar11 == -0x80)))))))),1);
    if ((bVar9 & 1) != 0) break;
    lVar5 = lVar5 + 8;
    uVar3 = lVar5 + uVar3;
  }
  FUN_10756b38c();
  uVar11 = 1;
  puVar4 = unaff_x19;
LAB_10756b34c:
  auVar18._8_8_ = uVar11;
  auVar18._0_8_ = puVar4;
  return auVar18;
}



/* Entry: 10756b370; end: 10756b38b;  */

void FUN_10756b370(long param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = *param_4;
  uStack_20 = *param_5;
  FUN_10756b600(*(long *)(param_1 + 8) + param_2 * 0x48,&uStack_18,&uStack_20);
  return;
}



/* Entry: 10756b38c; end: 10756b41f;  */

void FUN_10756b38c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x19;
  byte unaff_w20;
  
  func_0x00010756d2d8();
  func_0x000100061de0();
  lVar1 = *unaff_x19;
  if ((*(long *)(lVar1 + -8) == 0) && (*(char *)(lVar1 + (long)param_1) != -2)) {
    FUN_10756b500();
    param_1 = unaff_x19;
    func_0x000100061de0();
    lVar1 = *unaff_x19;
  }
  unaff_x19[3] = unaff_x19[3] + 1;
  *(ulong *)(lVar1 + -8) =
       *(long *)(lVar1 + -8) - (ulong)(*(char *)(lVar1 + (long)param_1) == -0x80);
  uVar2 = unaff_x19[2];
  *(byte *)(lVar1 + (long)param_1) = unaff_w20 & 0x7f;
  *(byte *)(lVar1 + (uVar2 & (long)param_1 - 7U) + (uVar2 & 7)) = unaff_w20 & 0x7f;
  return;
}



/* Entry: 10756b420; end: 10756b437;  */

bool FUN_10756b420(undefined8 *param_1,long param_2)

{
  long unaff_x20;
  
  func_0x000104c2fe38(param_2,*param_1,param_2 + 0x38);
  func_0x000104c345b0();
  func_0x000104c2fe38();
  return unaff_x20 == param_2;
}



/* Entry: 10756b438; end: 10756b4ff;  */

void FUN_10756b438(long *param_1,long param_2)

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
  FUN_107324d80();
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
      FUN_10756b530(param_1,lVar9 + (long)plVar3 * 0x48,lVar6);
    }
    lVar6 = lVar6 + 0x48;
  }
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1 + -8);
    return;
  }
  return;
}



/* Entry: 10756b500; end: 10756b52f;  */

/* WARNING: Possible PIC construction at 0x00010756b484: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010756b488) */

long * FUN_10756b500(long *param_1)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 extraout_x8;
  long *unaff_x19;
  long *plVar5;
  long *unaff_x20;
  undefined8 unaff_x21;
  long unaff_x22;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_60 [16];
  
  uVar4 = param_1[2];
  if ((uVar4 < 9) ||
     (uVar2 = uVar4 * 0x19 + param_1[3] * -0x20 == 0, uVar4 * 0x19 < (ulong)(param_1[3] * 0x20))) {
    puVar1 = &stack0xffffffffffffffb0;
    unaff_x22 = *param_1;
    plVar3 = (long *)param_1[1];
    lVar6 = param_1[2];
    param_1[2] = uVar4 << 1 | 1;
    plVar5 = param_1;
    FUN_107324d80();
    lVar7 = 0;
    while( true ) {
      if (lVar6 == lVar7) {
        if (lVar6 != 0) {
          plVar3 = (long *)(unaff_x22 + -8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR___ZdlPv_110352258)(plVar3);
          return plVar3;
        }
        return plVar5;
      }
      if (-1 < *(char *)(unaff_x22 + lVar7)) break;
      lVar7 = lVar7 + 1;
      plVar3 = plVar3 + 9;
    }
    pcVar8 = (code *)0x10756b488;
    unaff_x19 = param_1;
    unaff_x20 = plVar3;
  }
  else {
    puVar1 = auStack_60;
    func_0x00010756d1a0();
    plVar3 = (long *)&UNK_1109bdf68;
    func_0x00010ae6c914();
    func_0x00010756d18c(extraout_x8);
    if ((bool)uVar2) {
      return param_1;
    }
    pcVar8 = FUN_10756b5c4;
    ___stack_chk_fail();
  }
  *(long *)(puVar1 + -0x30) = unaff_x22;
  *(undefined8 *)(puVar1 + -0x28) = unaff_x21;
  *(long **)(puVar1 + -0x20) = unaff_x20;
  *(long **)(puVar1 + -0x18) = unaff_x19;
  *(undefined1 **)(puVar1 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar1 + -8) = pcVar8;
  plVar5 = (long *)plVar3[6];
  if (plVar5 == (long *)0xffffffffffffffff) {
    plVar5 = plVar3;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(plVar3);
    func_0x0001001030f4(plVar5,(undefined *)((long)plVar5 + (long)plVar3));
    *(undefined8 *)(puVar1 + -0x38) = 0xffffffffffffffff;
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return plVar5;
}



/* Entry: 10756b530; end: 10756b587;  */

long FUN_10756b530(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010756b55c(param_2,param_3);
  func_0x0001072c9884(param_3 + 0x38);
  func_0x000104c2f714(param_3);
  return param_3;
}



/* Entry: 10756b588; end: 10756b5c3;  */

undefined * FUN_10756b588(undefined *param_1)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined8 extraout_x8;
  undefined *puVar2;
  
  func_0x00010756d1a0();
  puVar1 = &UNK_1109bdf68;
  func_0x00010ae6c914();
  func_0x00010756d18c(extraout_x8);
  if ((bool)in_ZR) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = *(undefined **)(puVar1 + 0x30);
  if (puVar2 == (undefined *)0xffffffffffffffff) {
    puVar2 = puVar1;
    func_0x000104c2fcd4();
    func_0x000104c2fcf0(puVar1);
    func_0x0001001030f4(puVar2,puVar2 + (long)puVar1);
    func_0x000104c343b0();
    func_0x000104c2ffc0();
  }
  return puVar2;
}



/* Entry: 10756b5c4; end: 10756b5db;  */

long FUN_10756b5c4(undefined8 param_1,long param_2)

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



/* Entry: 10756b5dc; end: 10756b5ff;  */

void FUN_10756b5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_20 = param_3;
  uStack_18 = param_2;
  FUN_10756b600(param_1,&uStack_18,&uStack_20);
  return;
}



/* Entry: 10756b600; end: 10756b63f;  */

void FUN_10756b600(long param_1)

{
  undefined8 *unaff_x20;
  
  func_0x00010756d438();
  func_0x000104c2fe00();
  func_0x0001072c9ff4(param_1 + 0x38,*unaff_x20);
  return;
}



/* Entry: 10756b640; end: 10756b6a7;  */

void FUN_10756b640(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  
  pcVar3 = (char *)*param_1;
  lVar1 = param_1[1];
  for (lVar2 = param_1[2]; lVar2 != 0; lVar2 = lVar2 + -1) {
    if (-1 < *pcVar3) {
      func_0x00010756b67c(lVar1);
    }
    pcVar3 = pcVar3 + 1;
    lVar1 = lVar1 + 0x48;
  }
  return;
}



/* Entry: 10756b6a8; end: 10756b71b;  */

void FUN_10756b6a8(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_40 = param_2[2];
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_(auStack_38,param_3);
  FUN_10756b71c(uVar1,&uStack_50);
  func_0x0001072c97dc(&uStack_50);
  return;
}



/* Entry: 10756b71c; end: 10756b787;  */

undefined8 * FUN_10756b71c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 < (undefined8 *)param_1[2]) {
    uVar3 = param_2[1];
    uVar2 = *param_2;
    puVar1[2] = param_2[2];
    puVar1[1] = uVar3;
    *puVar1 = uVar2;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar3 = param_2[4];
    uVar2 = param_2[3];
    puVar1[5] = param_2[5];
    puVar1[4] = uVar3;
    puVar1[3] = uVar2;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    puVar1 = puVar1 + 6;
  }
  else {
    puVar1 = param_1;
    FUN_10756b788();
  }
  param_1[1] = puVar1;
  return puVar1 + -6;
}



/* Entry: 10756b788; end: 10756b82f;  */

undefined8 FUN_10756b788(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  undefined8 *puStack_48;
  
  func_0x00010756d2d8();
  FUN_10756b830();
  func_0x00010756d2ec();
  FUN_10756b8d0();
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20;
  puStack_48[2] = unaff_x20[2];
  puStack_48[1] = uVar2;
  *puStack_48 = uVar1;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0;
  *unaff_x20 = 0;
  uVar2 = unaff_x20[4];
  uVar1 = unaff_x20[3];
  puStack_48[5] = unaff_x20[5];
  puStack_48[4] = uVar2;
  puStack_48[3] = uVar1;
  unaff_x20[4] = 0;
  unaff_x20[5] = 0;
  unaff_x20[3] = 0;
  puStack_48 = puStack_48 + 6;
  FUN_10756b878();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010756baa8(auStack_58);
  return uVar1;
}



/* Entry: 10756b830; end: 10756b877;  */

long * FUN_10756b830(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x555555555555556) {
    uVar1 = (param_1[2] - *param_1) / 0x30;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x2aaaaaaaaaaaaa9 < uVar1) {
      plVar2 = (long *)0x555555555555555;
    }
    return plVar2;
  }
  FUN_10756b8bc();
  func_0x00010756d250();
  plVar2 = param_1 + 2;
  FUN_10756b958(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0x30) * 0x30);
  func_0x00010756d1e8();
  return plVar2;
}



/* Entry: 10756b878; end: 10756b8bb;  */

void FUN_10756b878(long *param_1,long param_2)

{
  func_0x00010756d250();
  FUN_10756b958(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x30) * 0x30);
  func_0x00010756d1e8();
  return;
}



/* Entry: 10756b8bc; end: 10756b8cf;  */

void FUN_10756b8bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  func_0x00010756d438();
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x00010756b908(param_4);
  }
  func_0x00010756d378(0x30);
  return;
}



/* Entry: 10756b8d0; end: 10756b92b;  */

void FUN_10756b8d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010756d438();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x00010756b908(param_4);
  }
  func_0x00010756d378(0x30);
  return;
}



/* Entry: 10756b92c; end: 10756b957;  */

void FUN_10756b92c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 **ppuStack_58;
  undefined8 **ppuStack_50;
  undefined1 uStack_48;
  undefined8 *puStack_40;
  undefined8 *puStack_38;
  
  if (param_2 < (undefined8 *)0x555555555555556) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)((long)param_2 * 0x30);
    return;
  }
  func_0x000104bd35f4();
  ppuStack_58 = &puStack_40;
  ppuStack_50 = &puStack_38;
  puStack_38 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 6) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    puStack_38[2] = param_2[2];
    puStack_38[1] = uVar2;
    *puStack_38 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    puStack_38[5] = param_2[5];
    puStack_38[4] = uVar2;
    puStack_38[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    puStack_38 = puStack_38 + 6;
  }
  uStack_48 = 1;
  uStack_60 = param_1;
  puStack_40 = param_4;
  FUN_10756b9f8();
  FUN_10756ba28(&uStack_60);
  return;
}



/* Entry: 10756b958; end: 10756b9f7;  */

void FUN_10756b958(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 **ppuStack_48;
  undefined8 **ppuStack_40;
  undefined1 uStack_38;
  undefined8 *puStack_30;
  undefined8 *puStack_28;
  
  ppuStack_48 = &puStack_30;
  ppuStack_40 = &puStack_28;
  puStack_28 = param_4;
  for (; param_2 != param_3; param_2 = param_2 + 6) {
    uVar2 = param_2[1];
    uVar1 = *param_2;
    puStack_28[2] = param_2[2];
    puStack_28[1] = uVar2;
    *puStack_28 = uVar1;
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    uVar2 = param_2[4];
    uVar1 = param_2[3];
    puStack_28[5] = param_2[5];
    puStack_28[4] = uVar2;
    puStack_28[3] = uVar1;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[3] = 0;
    puStack_28 = puStack_28 + 6;
  }
  uStack_38 = 1;
  uStack_50 = param_1;
  puStack_30 = param_4;
  FUN_10756b9f8();
  FUN_10756ba28(&uStack_50);
  return;
}



/* Entry: 10756b9f8; end: 10756ba27;  */

void FUN_10756b9f8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x30) {
    func_0x0001072c97dc();
  }
  return;
}



/* Entry: 10756ba28; end: 10756ba57;  */

long FUN_10756ba28(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10756ba58(param_1);
  }
  return param_1;
}



/* Entry: 10756ba58; end: 10756ba77;  */

void FUN_10756ba58(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x30;
    func_0x0001072c97dc();
  }
  return;
}



/* Entry: 10756ba78; end: 10756bad3;  */

void FUN_10756ba78(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x30;
    func_0x0001072c97dc();
  }
  return;
}



/* Entry: 10756bad4; end: 10756badb;  */

void FUN_10756bad4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010756d250(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x30;
    func_0x0001072c97dc();
  }
  return;
}



/* Entry: 10756badc; end: 10756bb0f;  */

void FUN_10756badc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010756d250();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x30;
    func_0x0001072c97dc();
  }
  return;
}



/* Entry: 10756bb10; end: 10756bb37;  */

long FUN_10756bb10(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 != *(char *)(param_2 + 0x10)) {
    if (cVar1 != '\0') {
      lVar2 = param_1;
      if (*(char *)(param_1 + 0x10) == '\x01') {
        func_0x0001072c9884();
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      return lVar2;
    }
    func_0x0001072ca12c();
    *(undefined1 *)(param_1 + 0x10) = 1;
    return param_1;
  }
  if (cVar1 != '\0') {
    FUN_10756bba8();
    return param_1;
  }
  return param_1;
}



/* Entry: 10756bb38; end: 10756bb67;  */

void FUN_10756bb38(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    func_0x0001072c9884();
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



/* Entry: 10756bb68; end: 10756bb83;  */

void FUN_10756bb68(long param_1)

{
  func_0x0001072ca12c();
  *(undefined1 *)(param_1 + 0x10) = 1;
  return;
}



/* Entry: 10756bb84; end: 10756bba7;  */

undefined8 FUN_10756bb84(undefined8 param_1)

{
  FUN_10756bba8();
  return param_1;
}



/* Entry: 10756bba8; end: 10756bbfb;  */

void FUN_10756bba8(long param_1,long param_2)

{
  if (*(int *)(param_1 + 8) != -1 || *(int *)(param_2 + 8) != -1) {
    if (*(int *)(param_2 + 8) == -1) {
      if (*(uint *)(param_1 + 8) != 0xffffffff) {
        func_0x0001072ce6fc((&PTR_DAT_11099acf0)[*(uint *)(param_1 + 8)],param_1,param_1,param_2);
      }
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      return;
    }
    func_0x00010756d3d0();
  }
  return;
}



/* Entry: 10756bbfc; end: 10756bc33;  */

void FUN_10756bbfc(long *param_1)

{
  if (*(int *)(*param_1 + 8) != 0) {
    func_0x00010756d1c0();
    FUN_10756bc5c();
  }
  return;
}



/* Entry: 10756bc34; end: 10756bc5b;  */

void FUN_10756bc34(long param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    func_0x00010756d1c0();
    FUN_10756bc5c();
  }
  return;
}



/* Entry: 10756bc5c; end: 10756bc77;  */

void FUN_10756bc5c(void)

{
  long unaff_x19;
  
  FUN_10756d180();
  *(undefined4 *)(unaff_x19 + 8) = 0;
  return;
}



/* Entry: 10756bc78; end: 10756bc7f;  */

void FUN_10756bc78(long *param_1)

{
  if (*(int *)(*param_1 + 8) != 1) {
    func_0x00010756d1c0();
    FUN_10756bcac();
  }
  return;
}



/* Entry: 10756bc80; end: 10756bcab;  */

void FUN_10756bc80(long param_1)

{
  if (*(int *)(param_1 + 8) != 1) {
    func_0x00010756d1c0();
    FUN_10756bcac();
  }
  return;
}



/* Entry: 10756bcac; end: 10756bccb;  */

void FUN_10756bcac(void)

{
  long unaff_x19;
  
  FUN_10756d180();
  *(undefined4 *)(unaff_x19 + 8) = 1;
  return;
}



/* Entry: 10756bccc; end: 10756bcd3;  */

void FUN_10756bccc(long *param_1)

{
  if (*(int *)(*param_1 + 8) != 2) {
    func_0x00010756d1c0();
    FUN_10756bd00();
  }
  return;
}



/* Entry: 10756bcd4; end: 10756bcff;  */

void FUN_10756bcd4(long param_1)

{
  if (*(int *)(param_1 + 8) != 2) {
    func_0x00010756d1c0();
    FUN_10756bd00();
  }
  return;
}



/* Entry: 10756bd00; end: 10756bd1f;  */

void FUN_10756bd00(void)

{
  long unaff_x19;
  
  FUN_10756d180();
  *(undefined4 *)(unaff_x19 + 8) = 2;
  return;
}



/* Entry: 10756bd20; end: 10756bd27;  */

void FUN_10756bd20(long *param_1)

{
  if (*(int *)(*param_1 + 8) != 3) {
    func_0x00010756d1c0();
    FUN_10756bd54();
  }
  return;
}



/* Entry: 10756bd28; end: 10756bd53;  */

void FUN_10756bd28(long param_1)

{
  if (*(int *)(param_1 + 8) != 3) {
    func_0x00010756d1c0();
    FUN_10756bd54();
  }
  return;
}



/* Entry: 10756bd54; end: 10756bd73;  */

void FUN_10756bd54(void)

{
  long unaff_x19;
  
  FUN_10756d180();
  *(undefined4 *)(unaff_x19 + 8) = 3;
  return;
}


