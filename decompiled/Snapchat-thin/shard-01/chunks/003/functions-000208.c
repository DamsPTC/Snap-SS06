/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100e89fe4; end: 100e8a023;  */

void FUN_100e89fe4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d451a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90abe8;
  func_0x000107c61520(&UNK_10d90abe8,&UNK_11035de00);
  puRam0000000112d451a8 = puVar1;
  return;
}



/* Entry: 100e8a024; end: 100e8a057;  */

undefined8 FUN_100e8a024(undefined8 param_1)

{
  (*(code *)(undefined *)0x100e9e944)();
  return param_1;
}



/* Entry: 100e8a058; end: 100e8a09b;  */

void FUN_100e8a058(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d36e50 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIWindow_1126c3e70;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d36e50 = puVar1;
  return;
}



/* Entry: 100e8a09c; end: 100e8a0af;  */

void FUN_100e8a09c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11035dbe0;
  if (lRam0000000112d451b0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d451b0 = param_1;
  }
  return;
}



/* Entry: 100e8a0b0; end: 100e8a107;  */

void FUN_100e8a0b0(void)

{
  FUN_100e8a108(0x112d451b8,FUN_100e8a09c,&UNK_10d90a834);
  return;
}



/* Entry: 100e8a108; end: 100e8a147;  */

void FUN_100e8a108(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 100e8a148; end: 100e8a173;  */

void FUN_100e8a148(void)

{
  FUN_100e8a108(0x112d451c8,FUN_100e8a09c,&UNK_10d90a8a4);
  return;
}



/* Entry: 100e8a174; end: 100e8a1b7;  */

void FUN_100e8a174(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 100e8a1b8; end: 100e8a1bb;  */

void FUN_100e8a1b8(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 100e8a1bc; end: 100e8a5b7;  */

undefined * FUN_100e8a1bc(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  long lVar16;
  undefined *puStack_b8;
  undefined *puStack_90;
  undefined *puStack_88;
  ulong *puStack_80;
  ulong uStack_78;
  long lStack_70;
  ulong uStack_68;
  undefined *puStack_58;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar15 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar12 = (ulong *)(param_1 + 0x38);
    uVar11 = ~uVar15;
    uVar15 = -uVar15;
    uVar8 = 0xffffffffffffffff;
    if (uVar15 < 0x40) {
      uVar8 = ~(-1L << (uVar15 & 0x3f));
    }
    uVar8 = uVar8 & *puVar12;
    puVar7 = param_1;
    func_0x000107c61434();
    lVar13 = 0;
  }
  else {
    puVar7 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar7 = param_1;
    }
    func_0x000107c61434(param_1);
    func_0x000107c60288();
    uVar4 = 0;
    FUN_100e8b5d4(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    FUN_100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar7,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    lVar13 = lStack_70;
    uVar8 = uStack_68;
  }
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_100e8a2a4:
  lVar2 = lVar13;
  uVar15 = uVar8;
  if (-1 < (long)param_1) goto joined_r0x000100e8a2e0;
  while (func_0x000107c602ac(), puVar7 != (undefined *)0x0) {
    uVar5 = 0;
    puStack_90 = puVar7;
    FUN_100e8b5d4(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
    uVar15 = uVar8;
    lVar2 = lVar13;
    lVar16 = lVar13;
    puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    puVar10 = puStack_58;
    while( true ) {
      lVar13 = lVar2;
      PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
      if (puVar10 == (undefined *)0x0) goto LAB_100e8a570;
      func_0x000107c61168(puVar7);
      puVar14 = puVar10;
      func_0x000107c6148c(puVar10,puVar7);
      if (puVar14 == (undefined *)0x0) {
        func_0x000107c61170();
        puVar7 = puVar10;
      }
      else {
        func_0x000107c5e408();
        func_0x000107c61180();
        uVar5 = 0;
        FUN_100e8b5d4(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
        puVar7 = puVar14;
        func_0x000107c5fc54(puVar14,uVar5);
        func_0x000107c61170(puVar14);
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar14 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar14 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar14 = puVar7;
          }
          func_0x000107c60480();
        }
        if (puVar14 != (undefined *)0x0) {
          uVar15 = 0;
          do {
            if (((ulong)puVar7 & 0xc000000000000001) == 0) {
              if (*(ulong *)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100e8a5b4);
                (*pcVar3)();
              }
              uVar6 = *(ulong *)(puVar7 + uVar15 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar6 = uVar15;
              FUN_100de9de8(uVar15,puVar7);
            }
            puVar1 = (undefined *)(uVar15 + 1);
            if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100e8a5b0);
              (*pcVar3)();
            }
            uVar9 = uVar6;
            func_0x000107c49f64();
            if ((int)uVar9 != 0) {
              func_0x000107c61170(puVar10);
              func_0x000107c6142c(puVar7);
              puVar7 = puStack_b8;
              func_0x000107c61550();
              if (((((ulong)puVar7 & 1) == 0) || ((long)puStack_b8 < 0)) ||
                 (((ulong)puStack_b8 >> 0x3e & 1) != 0)) {
                if ((ulong)puStack_b8 >> 0x3e == 0) {
                  puVar10 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar10 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puStack_b8) {
                    puVar10 = puStack_b8;
                  }
                  func_0x000107c60480(puVar10);
                }
                puVar7 = (undefined *)0x0;
                FUN_100dea1c8(0,puVar10 + 1,1,puStack_b8);
                puStack_b8 = puVar7;
              }
              uVar9 = (ulong)puStack_b8 & 0xffffffffffffff8;
              uVar15 = *(ulong *)(uVar9 + 0x10);
              if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar15) {
                puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
                FUN_100dea1c8(puVar7,uVar15 + 1,1,puStack_b8);
                uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
                puStack_b8 = puVar7;
              }
              *(ulong *)(uVar9 + 0x10) = uVar15 + 1;
              *(ulong *)(uVar9 + uVar15 * 8 + 0x20) = uVar6;
              goto LAB_100e8a2a4;
            }
            func_0x000107c61170(uVar6);
            uVar15 = uVar15 + 1;
          } while (puVar1 != puVar14);
        }
        func_0x000107c61170(puVar10);
        func_0x000107c6142c();
      }
      lVar2 = lVar13;
      uVar15 = uVar8;
      if ((long)param_1 < 0) break;
joined_r0x000100e8a2e0:
      while (uVar8 == 0) {
        lVar16 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100e8a5b8);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar16) {
          uVar8 = 0;
          goto LAB_100e8a56c;
        }
        lVar2 = lVar16;
        uVar8 = puVar12[lVar16];
      }
      uVar6 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 - 1 & uVar8;
      puVar10 = *(undefined **)
                 (*(long *)(param_1 + 0x30) + LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) * 8 +
                 lVar2 * 0x200);
      puStack_58 = puVar10;
      func_0x000107c61174(puVar10);
      lVar16 = lVar13;
      puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    }
  }
LAB_100e8a56c:
  puStack_58 = (undefined *)0x0;
  uVar15 = uVar8;
  lVar16 = lVar13;
LAB_100e8a570:
  FUN_100deaf38(param_1,puVar12,uVar11,lVar16,uVar15);
  return puStack_b8;
}



/* Entry: 100e8a5b8; end: 100e8a64f;  */

void FUN_100e8a5b8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  uVar3 = 0x112d45220;
  func_0x000100e8b614(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  *(undefined8 *)(unaff_x22 + 0x90) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8a650,uVar2,uVar3);
  return;
}



/* Entry: 100e8a650; end: 100e8a743;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8a650(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x78);
  if (*(long *)(lVar2 + _DAT_112d451e0) != 0) {
    puVar1 = *(undefined8 **)(unaff_x22 + 0x88);
    func_0x000107c61574();
    FUN_100e89fe4();
    func_0x000107c613f8(&UNK_11035de00,puVar1,0,0);
    puVar1[1] = 0;
    *puVar1 = 0xffffffffffffffff;
    *(undefined1 *)(puVar1 + 2) = 2;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100e8a6d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c5fce8();
  *(long *)(unaff_x22 + 0xa8) = param_1;
  func_0x000107c61614(unaff_x22 + 0x70,lVar2);
  if (param_1 == 0) {
    param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
    func_0x000107c614f0();
    func_0x000107c5fca8();
  }
  *(long *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8a744,param_1);
  return;
}



/* Entry: 100e8a744; end: 100e8a793;  */

void FUN_100e8a744(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100e8a794;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_100e8a8f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100e8a794; end: 100e8a803;  */

void FUN_100e8a794(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0xc0) = *(long *)(lVar4 + 0x30);
  if (*(long *)(lVar4 + 0x30) == 0) {
    *(undefined8 *)(lVar4 + 0xd0) = *(undefined8 *)(lVar4 + 0x58);
    *(undefined8 *)(lVar4 + 200) = *(undefined8 *)(lVar4 + 0x50);
    *(undefined8 *)(lVar4 + 0xe0) = *(undefined8 *)(lVar4 + 0x68);
    *(undefined8 *)(lVar4 + 0xd8) = *(undefined8 *)(lVar4 + 0x60);
    uVar2 = *(undefined8 *)(lVar4 + 0xb0);
    uVar3 = *(undefined8 *)(lVar4 + 0xb8);
    pcVar1 = FUN_100e8a804;
  }
  else {
    func_0x000107c61654();
    uVar2 = *(undefined8 *)(lVar4 + 0xb0);
    uVar3 = *(undefined8 *)(lVar4 + 0xb8);
    pcVar1 = (code *)0x100e8a880;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 100e8a804; end: 100e8a8f3;  */

void FUN_100e8a804(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c61610(unaff_x22 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x100e8a844,*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0));
  return;
}



/* Entry: 100e8a8f4; end: 100e8ac47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8a8f4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [24];
  
  puVar7 = auStack_68;
  func_0x000107c61428(param_2,puVar7,0,0);
  func_0x000107c61618();
  if (param_2 == (undefined8 *)0x0) {
    FUN_100e89fe4();
    puVar6 = &UNK_11035de00;
    func_0x000107c613f8(&UNK_11035de00,param_2,0,0);
    param_2[1] = 0;
    *param_2 = 6;
    *(undefined1 *)(param_2 + 2) = 3;
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar1 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar1 = puVar6;
    func_0x000107c61454(param_1,uVar3);
  }
  else {
    *(undefined8 *)((long)param_2 + _DAT_112d451e0) = param_1;
    puVar1 = param_2;
    func_0x00010011df08();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c5faec();
    func_0x000107c61170(puVar1);
    puVar1 = (undefined8 *)((long)param_2 + _DAT_112d451e8);
    uVar3 = puVar1[1];
    *puVar1 = puVar2;
    puVar1[1] = puVar7;
    func_0x000107c6142c(uVar3);
    puVar6 = PTR__OBJC_CLASS___ASAuthorizationAppleIDProvider_1126a5e88;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar4 = puVar6;
    func_0x000107c40b3c();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    lVar8 = 0x112d45228;
    func_0x0001000285a8(0x112d45228,&UNK_10d90aa70);
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 4;
    *(undefined8 *)(lVar8 + 0x10) = 2;
    uVar9 = *(undefined8 *)PTR__ASAuthorizationScopeFullName_110346c28;
    uVar10 = *(undefined8 *)PTR__ASAuthorizationScopeEmail_110346c20;
    *(undefined8 *)(lVar8 + 0x20) = uVar9;
    *(undefined8 *)(lVar8 + 0x28) = uVar10;
    uVar3 = 0;
    FUN_100e8a09c(0);
    func_0x000107c61174();
    func_0x000107c61174(uVar9);
    func_0x000107c61174(uVar10);
    lVar5 = lVar8;
    func_0x000107c5fc48(lVar8,uVar3);
    func_0x000107c61574(lVar8);
    func_0x000107c57e10(puVar4);
    func_0x000107c61170(lVar5);
    lVar8 = puVar1[1];
    if (lVar8 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar1;
      func_0x000107c61434(lVar8);
      func_0x000107c5fadc(uVar3,lVar8);
      func_0x000107c6142c(lVar8);
    }
    func_0x000107c56ad0(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar3);
    lVar8 = 0x112d3a200;
    FUN_100e8af34(0x112d3a200,&PTR__OBJC_CLASS___ASAuthorizationRequest_1126a5dd8,0x112d3a208,
                  &UNK_10d903bc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 3;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    *(undefined **)(lVar8 + 0x20) = puVar4;
    puVar6 = PTR__OBJC_CLASS___ASAuthorizationController_1126a5dd0;
    func_0x000107c610f8();
    uVar3 = 0;
    FUN_100e8b5d4(0,0x112d3a200,&PTR__OBJC_CLASS___ASAuthorizationRequest_1126a5dd8);
    func_0x000107c61174(puVar4);
    lVar5 = lVar8;
    func_0x000107c5fc48(lVar8,uVar3);
    func_0x000107c61574(lVar8);
    func_0x000107c458a8();
    func_0x000107c61170(lVar5);
    func_0x000107c53fcc(puVar6);
    func_0x000107c5771c(puVar6);
    uVar3 = *(undefined8 *)((long)param_2 + _DAT_112d451f0);
    *(undefined **)((long)param_2 + _DAT_112d451f0) = puVar6;
    func_0x000107c61174(puVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c4e5ac(puVar6);
    func_0x000107c61170(param_2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 100e8ac48; end: 100e8acab; -[_TtC41SCConnectedAccountsServicesImplementation34ConnectedAccountsAppleAuthProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8ac48(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112d451e0) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_112d451e8);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112d451f0) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100e8acac; end: 100e8acdf;  */

void FUN_100e8acac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100e8ace0; end: 100e8ad1b; -[_TtC41SCConnectedAccountsServicesImplementation34ConnectedAccountsAppleAuthProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8ace0(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d451e8 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d451f0));
  return;
}



/* Entry: 100e8ad1c; end: 100e8ad83;  */

void FUN_100e8ad1c(void)

{
  func_0x000107c61168(&PTR_PTR_11279c928);
  return;
}



/* Entry: 100e8ad84; end: 100e8adf3;  */

void FUN_100e8ad84(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100e8adf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100e8adf4; end: 100e8ae5b; -[_TtC41SCConnectedAccountsServicesImplementation34ConnectedAccountsAppleAuthProvider authorizationController:didCompleteWithAuthorization:] */

/* WARNING: Possible PIC construction at 0x000100e8ae3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e8ae40) */

void FUN_100e8adf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_100e8afac(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100e8ae5c; end: 100e8aec3; -[_TtC41SCConnectedAccountsServicesImplementation34ConnectedAccountsAppleAuthProvider authorizationController:didCompleteWithError:] */

/* WARNING: Possible PIC construction at 0x000100e8aea4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e8aea8) */

void FUN_100e8ae5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_100e8b254(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100e8aec4; end: 100e8af33; -[_TtC41SCConnectedAccountsServicesImplementation34ConnectedAccountsAppleAuthProvider presentationAnchorForAuthorizationController:] */

void FUN_100e8aec4(void)

{
  FUN_100e8b498();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100e8af34; end: 100e8afab;  */

void FUN_100e8af34(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100e8b5d4(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100e8afac; end: 100e8b253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8afac(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long extraout_x8;
  undefined8 *puVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_80 [8];
  
  lVar1 = 0;
  func_0x000107c5fb10();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c40d6c();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___ASAuthorizationAppleIDCredential_1126a5e90;
  func_0x000107c61168();
  puVar8 = param_1;
  func_0x000107c6148c();
  if (puVar8 == (undefined8 *)0x0) {
LAB_100e8b104:
    func_0x000107c615e8();
  }
  else {
    func_0x000107c45004();
    func_0x000107c61180();
    if (puVar8 == (undefined8 *)0x0) goto LAB_100e8b104;
    puVar3 = puVar8;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar8);
    lVar10 = *(long *)(unaff_x20 + _DAT_112d451e8 + 8);
    if (lVar10 == 0) {
      func_0x00010006c090(puVar3,puVar2);
      goto LAB_100e8b104;
    }
    lVar4 = lVar10;
    func_0x000107c61434(lVar10);
    func_0x000107c5fb04(puVar9);
    FUN_100e8b654();
    uVar7 = 0;
    puVar5 = puVar9;
    func_0x000107c60214(puVar9,0,PTR___sSSN_11034da80,lVar4);
    (**(code **)(lVar11 + 8))(puVar9,lVar1);
    func_0x000107c6142c(lVar10);
    lVar1 = _DAT_112d451e0;
    if (uVar7 >> 0x3c < 0xf) {
      lVar11 = *(long *)(unaff_x20 + _DAT_112d451e0);
      if (lVar11 == 0) {
        func_0x000107c615e8(param_1);
        func_0x00010006c090(puVar3,puVar2);
        func_0x0001000b44c0(puVar5,uVar7);
      }
      else {
        func_0x00010006c00c(puVar3,puVar2);
        FUN_100de78a0(puVar5,uVar7);
        puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x40) + 0x28);
        *puVar8 = puVar3;
        puVar8[1] = puVar2;
        puVar8[2] = puVar5;
        puVar8[3] = uVar7;
        func_0x000107c61450(lVar11);
        func_0x000107c615e8(param_1);
        func_0x0001000b44c0(puVar5,uVar7);
        func_0x00010006c090(puVar3,puVar2);
      }
      *(undefined8 *)(unaff_x20 + lVar1) = 0;
      goto LAB_100e8b190;
    }
    func_0x00010006c090(puVar3,puVar2);
    func_0x000107c615e8();
  }
  lVar1 = _DAT_112d451e0;
  lVar11 = *(long *)(unaff_x20 + _DAT_112d451e0);
  if (lVar11 != 0) {
    FUN_100e89fe4();
    puVar2 = &UNK_11035de00;
    func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
    param_1[1] = 0;
    *param_1 = 6;
    *(undefined1 *)(param_1 + 2) = 3;
    uVar6 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar8 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar8 = puVar2;
    func_0x000107c61454(lVar11,uVar6);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
LAB_100e8b190:
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d451f0);
  *(undefined8 *)(unaff_x20 + _DAT_112d451f0) = 0;
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 100e8b254; end: 100e8b497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8b254(undefined8 ***param_1)

{
  undefined8 **ppuVar1;
  undefined8 *puVar2;
  undefined8 ***pppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  undefined8 *puStack_68;
  undefined8 **ppuStack_60;
  undefined8 **ppuStack_58;
  
  ppuStack_58 = param_1;
  func_0x000107c614b0();
  uVar7 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar2 = (undefined8 *)0x0;
  func_0x000100e21e2c();
  pppuVar3 = &ppuStack_60;
  func_0x000107c6147c(pppuVar3,&ppuStack_58,uVar7,puVar2,6);
  ppuVar1 = ppuStack_60;
  if (((ulong)pppuVar3 & 1) != 0) {
    ppuStack_58 = ppuStack_60;
    uVar4 = 0x112d3a168;
    func_0x000100e8b614(0x112d3a168,0x100e21e2c,&UNK_10d9039f4);
    puVar5 = puVar2;
    func_0x000107c5ed1c(&ppuStack_60,puVar2,uVar4);
    if ((undefined8 ***)ppuStack_60 == (undefined8 ***)0x3e9) {
      lVar8 = *(long *)(unaff_x20 + _DAT_112d451e0);
      if (lVar8 != 0) {
        FUN_100e89fe4();
        puVar6 = &UNK_11035de00;
        func_0x000107c613f8(&UNK_11035de00,puVar5,0,0);
        puVar5[1] = 0;
        *puVar5 = 5;
        *(undefined1 *)(puVar5 + 2) = 3;
        puVar2 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
        func_0x000107c613f8(uVar7,PTR___ss5ErrorWS_11034ee10,0,0);
        *puVar2 = puVar6;
        func_0x000107c61454(lVar8,uVar7);
      }
      func_0x000107c61170(ppuVar1);
      goto LAB_100e8b460;
    }
    func_0x000107c61170(ppuVar1);
  }
  ppuStack_58 = param_1;
  func_0x000107c614b0(param_1);
  pppuVar3 = &ppuStack_60;
  func_0x000107c6147c(pppuVar3,&ppuStack_58,uVar7,puVar2,6);
  if ((int)pppuVar3 == 0) {
    puStack_68 = (undefined8 **)0xffffffffffffffff;
  }
  else {
    uVar4 = 0x112d3a168;
    func_0x000100e8b614(0x112d3a168,0x100e21e2c,&UNK_10d9039f4);
    func_0x000107c5ed1c(&puStack_68,puVar2,uVar4);
    func_0x000107c61170();
    pppuVar3 = (undefined8 ***)ppuStack_60;
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_112d451e0);
  if (lVar8 != 0) {
    FUN_100e89fe4();
    puVar6 = &UNK_11035de00;
    func_0x000107c613f8(&UNK_11035de00,pppuVar3,0,0);
    *pppuVar3 = (undefined8 **)puStack_68;
    pppuVar3[1] = (undefined8 **)0x0;
    *(undefined1 *)(pppuVar3 + 2) = 2;
    puVar2 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8(uVar7,PTR___ss5ErrorWS_11034ee10,0,0);
    *puVar2 = puVar6;
    func_0x000107c61454(lVar8,uVar7);
  }
LAB_100e8b460:
  *(undefined8 *)(unaff_x20 + _DAT_112d451e0) = 0;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d451f0);
  *(undefined8 *)(unaff_x20 + _DAT_112d451f0) = 0;
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 100e8b498; end: 100e8b5d3;  */

/* WARNING: Possible PIC construction at 0x000100e8b4c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e8b4d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e8b4c4) */
/* WARNING: Removing unreachable block (ram,0x000100e8b4d4) */
/* WARNING: Removing unreachable block (ram,0x000100e8b588) */
/* WARNING: Removing unreachable block (ram,0x000100e8b590) */
/* WARNING: Removing unreachable block (ram,0x000100e8b53c) */
/* WARNING: Removing unreachable block (ram,0x000100e8b59c) */
/* WARNING: Removing unreachable block (ram,0x000100e8b548) */
/* WARNING: Removing unreachable block (ram,0x000100e8b5c0) */
/* WARNING: Removing unreachable block (ram,0x000100e8b550) */
/* WARNING: Removing unreachable block (ram,0x000100e8b5d0) */
/* WARNING: Removing unreachable block (ram,0x000100e8b55c) */
/* WARNING: Removing unreachable block (ram,0x000100e8b564) */

void FUN_100e8b498(void)

{
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 100e8b5d4; end: 100e8b653;  */

void FUN_100e8b5d4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100e8b654; end: 100e8b693;  */

void FUN_100e8b654(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d45238 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR___sSSSysMc_11034dab8;
  func_0x000107c61520(PTR___sSSSysMc_11034dab8,PTR___sSSN_11034da80);
  puRam0000000112d45238 = puVar1;
  return;
}



/* Entry: 100e8b694; end: 100e8b6ab;  */

void FUN_100e8b694(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8b6ac,0,0);
  return;
}



/* Entry: 100e8b6ac; end: 100e8b78b;  */

void FUN_100e8b6ac(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0xa0);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100e8b78c;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar2 = &UNK_11035dce8;
  func_0x000107c613fc(&UNK_11035dce8,0x18,7);
  puVar5 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(long *)(puVar2 + 0x10) = lVar1;
  *(code **)(unaff_x22 + 0x70) = FUN_100e8bbd4;
  *(undefined **)(unaff_x22 + 0x78) = puVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_100e8ba8c;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11035dd00;
  func_0x000107c60bc4(puVar5);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
  func_0x000107c5afbc(uVar4);
  func_0x000107c60bd0(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100e8b78c; end: 100e8b7f7;  */

void FUN_100e8b78c(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  if (*(long *)(lVar1 + 0x30) != 0) {
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100e8b7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100e8b7f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))
            (*(undefined8 *)(lVar1 + 0x80),*(undefined8 *)(lVar1 + 0x88),
             *(undefined8 *)(lVar1 + 0x90),*(undefined8 *)(lVar1 + 0x98));
  return;
}



/* Entry: 100e8b7f8; end: 100e8b9a3;  */

void FUN_100e8b7f8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long extraout_x8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lStack_60;
  undefined8 *puStack_58;
  
  lVar1 = 0;
  puVar7 = param_2;
  func_0x000107c5fb10();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c44fd0();
  func_0x000107c61180();
  puVar4 = (undefined8 *)0x0;
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5cb90();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    lVar3 = lVar2;
    puVar4 = puVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    lStack_60 = lVar3;
    puStack_58 = puVar4;
    func_0x000107c5fb04(lVar10);
    FUN_100e8b654();
    uVar8 = 0;
    lVar3 = lVar10;
    func_0x000107c60214(lVar10,0,PTR___sSSN_11034da80,lVar2);
    (**(code **)(lVar11 + 8))(lVar10,lVar1);
    func_0x000107c6142c();
    if (uVar8 >> 0x3c < 0xf) {
      plVar9 = *(long **)(param_2[8] + 0x28);
      *plVar9 = lVar3;
      plVar9[1] = uVar8;
      plVar9[3] = -0x1000000000000000;
      plVar9[2] = 0;
      func_0x000107c61450(param_2);
      return;
    }
  }
  FUN_100e89fe4();
  puVar5 = &UNK_11035de00;
  func_0x000107c613f8(&UNK_11035de00,puVar4,0,0);
  puVar4[1] = 0;
  *puVar4 = 2;
  *(undefined1 *)(puVar4 + 2) = 3;
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar4 = puVar5;
  func_0x000107c61454(param_2,uVar6);
  return;
}



/* Entry: 100e8b9a4; end: 100e8ba8b;  */

void FUN_100e8b9a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_b0 [16];
  undefined8 *puStack_a0;
  undefined1 auStack_90 [16];
  undefined8 *puStack_80;
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 1;
  puStack_a0 = &uStack_58;
  puVar3 = (undefined8 *)0x100e8bc50;
  puStack_80 = puStack_a0;
  puStack_60 = puStack_a0;
  func_0x000104065378(0x100e8bc50,auStack_70,0x100e8bc7c,auStack_90,0x100e8bc88,auStack_b0);
  uVar2 = uStack_48;
  uVar1 = uStack_50;
  uVar5 = uStack_58;
  FUN_100e89fe4();
  puVar4 = &UNK_11035de00;
  func_0x000107c613f8(&UNK_11035de00,puVar3,0,0);
  *puVar3 = uVar5;
  puVar3[1] = uVar1;
  *(undefined1 *)(puVar3 + 2) = uVar2;
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar4;
  func_0x000107c61454(param_2,uVar5);
  return;
}



/* Entry: 100e8ba8c; end: 100e8bad7;  */

void FUN_100e8ba8c(long param_1,undefined8 param_2)

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



/* Entry: 100e8bad8; end: 100e8bb63;  */

void FUN_100e8bad8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e8bb64; end: 100e8bbd3;  */

void FUN_100e8bb64(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100e8bbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100e8bbd4; end: 100e8bc23;  */

void FUN_100e8bbd4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_30 = uStack_50;
  func_0x000104064d80(param_1,0x100e8bc40,auStack_40,0x100e8bc48,auStack_60);
  return;
}



/* Entry: 100e8bc24; end: 100e8bcc3;  */

void FUN_100e8bc24(long param_1,long param_2)

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



/* Entry: 100e8bcc4; end: 100e8bf4b;  */

void FUN_100e8bcc4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100e8bf4c; end: 100e8bf6f;  */

void FUN_100e8bf4c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 100e8bf70; end: 100e8c00b;  */

undefined8 * FUN_100e8bf70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100e8bf4c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100e8c00c; end: 100e8c04f;  */

undefined8 * FUN_100e8c00c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000100e8bcb0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 100e8c050; end: 100e8c393;  */

int FUN_100e8c050(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100e8c394; end: 100e8c3fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8c394(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar1 = (long *)(lVar2 + _DAT_112d45380);
  func_0x0001000a8868(plVar1,plVar1[3]);
  lVar2 = *plVar1;
  plVar1 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100e8c3fc;
  plVar1[0x16] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e88fcc,0,0);
  return;
}



/* Entry: 100e8c3fc; end: 100e8c467;  */

void FUN_100e8c3fc(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x50) = param_1;
    pcVar1 = FUN_100e8c468;
  }
  else {
    pcVar1 = FUN_100e8c510;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100e8c468; end: 100e8c50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8c468(double param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  double dVar5;
  
  dVar5 = *(double *)(unaff_x22 + 0x38);
  plVar1 = (long *)(*(long *)(unaff_x22 + 0x30) + _DAT_112d45398);
  func_0x0001000a8868(plVar1,plVar1[3]);
  func_0x000107c6071c();
  lVar3 = *plVar1;
  func_0x000104cb9640(*(undefined8 *)(lVar3 + 0x10),1);
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  uVar2 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000104cba25c(param_1 - dVar5,uVar4,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100e8c50c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Entry: 100e8c510; end: 100e8c683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8c510(double param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  double dVar8;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x48);
  lVar5 = unaff_x22 + 0x10;
  func_0x000107c614b0();
  uVar4 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar5,(undefined8 *)(unaff_x22 + 0x28),uVar4,&UNK_11035de00,6);
  if ((int)lVar5 == 0) {
    uVar6 = 0xe700000000000000;
    uVar4 = 0x6e776f6e6b6e75;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x20);
    uVar4 = uVar7;
    uVar6 = uVar1;
    func_0x000100e8bd08(uVar7,uVar1,uVar2);
    func_0x000100e8bcb0(uVar7,uVar1,uVar2);
  }
  dVar8 = *(double *)(unaff_x22 + 0x38);
  plVar3 = (long *)(*(long *)(unaff_x22 + 0x30) + _DAT_112d45398);
  func_0x0001000a8868(plVar3,plVar3[3]);
  func_0x000107c6071c();
  lVar5 = *plVar3;
  uVar7 = *(undefined8 *)(lVar5 + 0x10);
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000104cb96b8(uVar7,uVar4,1);
  func_0x000107c61170(uVar4);
  uVar7 = *(undefined8 *)(lVar5 + 0x10);
  uVar4 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  func_0x000104cba25c(param_1 - dVar8,uVar7,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c6142c(uVar6);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100e8c680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e8c684; end: 100e8c7af; -[_TtC41SCConnectedAccountsServicesImplementation28ConnectedAccountsServiceImpl fetchLinkedProvidersWithCompletionHandler:] */

void FUN_100e8c684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11035df98;
  func_0x000107c613fc(&UNK_11035df98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11035dfc0;
  func_0x000107c613fc(&UNK_11035dfc0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d90acf8;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11035dfe8;
  func_0x000107c613fc(&UNK_11035dfe8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d90ad00;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  FUN_100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10d90ad08,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 100e8c7b0; end: 100e8c80b;  */

void FUN_100e8c7b0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(long *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0x60;
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100e8c80c;
  plVar1[6] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8c394,0,0);
  return;
}



/* Entry: 100e8c80c; end: 100e8c8c3;  */

void FUN_100e8c80c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar5 + 0x18);
  lVar4 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar5 + 0x20));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    uVar1 = 0;
    func_0x0001033a8e58(0);
    lVar2 = param_1;
    func_0x000107c5fc48(param_1,uVar1);
    func_0x000107c6142c(param_1);
    unaff_x20 = 0;
    lVar3 = lVar2;
  }
  else {
    func_0x000107c5ed2c();
    func_0x000107c614ac();
    lVar2 = 0;
    lVar3 = unaff_x20;
  }
  (**(code **)(*(long *)(lVar5 + 0x10) + 0x10))(*(long *)(lVar5 + 0x10),lVar2,unaff_x20);
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x000100e8c8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Entry: 100e8c8c4; end: 100e8c8db;  */

void FUN_100e8c8c4(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8c8dc,0,0);
  return;
}



/* Entry: 100e8c8dc; end: 100e8c9d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8c8dc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  uVar1 = 0x6e776f6e6b6e75;
  if (lVar2 == 2) {
    uVar1 = 0x656c707061;
  }
  uVar5 = 0xe700000000000000;
  if (lVar2 == 2) {
    uVar5 = 0xe500000000000000;
  }
  uVar3 = 0x656c676f6f67;
  if (lVar2 != 1) {
    uVar3 = uVar1;
  }
  uVar1 = 0xe600000000000000;
  if (lVar2 != 1) {
    uVar1 = uVar5;
  }
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  lVar2 = _DAT_112d45398;
  *(long *)(unaff_x22 + 0x50) = _DAT_112d45398;
  plVar4 = (long *)(*(long *)(unaff_x22 + 0x38) + lVar2);
  func_0x0001000a8868(plVar4,plVar4[3]);
  uVar5 = *(undefined8 *)(*plVar4 + 0x10);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000104cb982c(uVar5,uVar3,1);
  func_0x000107c61170(uVar3);
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100e8c9d4;
  lVar2 = *(long *)(unaff_x22 + 0x38);
  plVar4[2] = *(long *)(unaff_x22 + 0x30);
  plVar4[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8d258,0,0);
  return;
}



/* Entry: 100e8c9d4; end: 100e8ca83;  */

void FUN_100e8c9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x68) = param_1;
  *(undefined8 *)(lVar2 + 0x70) = param_2;
  *(undefined8 *)(lVar2 + 0x78) = param_3;
  *(undefined8 *)(lVar2 + 0x80) = param_4;
  *(long *)(lVar2 + 0x88) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8cf4c,0,0);
    return;
  }
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x90) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_100e8ca84;
                    /* WARNING: Could not recover jumptable at 0x000100e8ca80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100e89be0(*(undefined8 *)(lVar2 + 0x30));
  return;
}



/* Entry: 100e8ca84; end: 100e8caef;  */

void FUN_100e8ca84(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0xa0) = param_1;
    pcVar1 = FUN_100e8caf0;
  }
  else {
    pcVar1 = FUN_100e8cc40;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100e8caf0; end: 100e8cc3f;  */

void FUN_100e8caf0(double param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  dVar12 = *(double *)(unaff_x22 + 0x58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  plVar5 = (long *)(*(long *)(unaff_x22 + 0x38) + *(long *)(unaff_x22 + 0x50));
  func_0x0001000a8868(plVar5,plVar5[3]);
  func_0x000107c6071c();
  lVar9 = *plVar5;
  uVar11 = *(undefined8 *)(lVar9 + 0x10);
  uVar7 = uVar6;
  func_0x000107c5fadc(uVar6,uVar8);
  func_0x000104cb99a0(uVar11,uVar7,1);
  func_0x000107c61170(uVar7);
  uVar11 = *(undefined8 *)(lVar9 + 0x10);
  func_0x000107c5fadc(uVar6,uVar8);
  uVar7 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000104cba3f0(param_1 - dVar12,uVar11,uVar6,uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c6142c(uVar8);
  func_0x0001033a94a0(0);
  uVar8 = uVar10;
  func_0x0001033a91a4(uVar10);
  func_0x000107c61170(uVar10);
  func_0x0001000b44c0(uVar1,uVar3);
  func_0x00010006c090(uVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100e8cc3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar8);
  return;
}



/* Entry: 100e8cc40; end: 100e8cf4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8cc40(double param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x0001000b44c0(*(undefined8 *)(unaff_x22 + 0x78),*(undefined8 *)(unaff_x22 + 0x80));
  func_0x00010006c090(uVar6,uVar8);
  lVar7 = *(long *)(unaff_x22 + 0x98);
  lVar3 = lVar7;
  FUN_100e8e4c8();
  *(long *)(unaff_x22 + 0x28) = lVar7;
  lVar9 = unaff_x22 + 0x10;
  func_0x000107c614b0(lVar7);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar9,(long *)(unaff_x22 + 0x28),uVar6,&UNK_11035de00,6);
  if ((int)lVar9 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x20);
    uVar6 = uVar1;
    uVar8 = uVar5;
    func_0x000100e8bd08(uVar1,uVar5,uVar2);
    func_0x000100e8bcb0(uVar1,uVar5,uVar2);
    goto LAB_100e8cd04;
  }
  lVar9 = *(long *)(lVar3 + _DAT_112f60d58);
  if (lVar9 < 3) {
    if (lVar9 == 0) {
      uVar8 = 0xe700000000000000;
      uVar6 = 0x73736563637573;
      goto LAB_100e8cd04;
    }
    if (lVar9 == 1) {
      uVar8 = 0xee0064656b6e696c;
      uVar6 = 0x5f79646165726c61;
      goto LAB_100e8cd04;
    }
    if (lVar9 == 2) {
      uVar8 = 0x800000010ef16200;
      uVar6 = 0xd000000000000017;
      goto LAB_100e8cd04;
    }
  }
  else if (lVar9 < 5) {
    if (lVar9 == 3) {
      uVar8 = 0xed00006e656b6f74;
      uVar6 = 0x5f64696c61766e69;
      goto LAB_100e8cd04;
    }
    if (lVar9 == 4) {
      uVar8 = 0xec00000064657469;
      uVar6 = 0x6d696c5f65746172;
      goto LAB_100e8cd04;
    }
  }
  else {
    if (lVar9 == 5) {
      uVar8 = 0xef6576697463615f;
      uVar6 = 0x6e776f646c6f6f63;
      goto LAB_100e8cd04;
    }
    if (lVar9 == 6) {
      uVar8 = 0xe600000000000000;
      uVar6 = 0x64656c696166;
      goto LAB_100e8cd04;
    }
  }
  uVar8 = 0xe700000000000000;
  uVar6 = 0x6e776f6e6b6e75;
LAB_100e8cd04:
  dVar12 = *(double *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  plVar4 = (long *)(*(long *)(unaff_x22 + 0x38) + *(long *)(unaff_x22 + 0x50));
  func_0x0001000a8868(plVar4,plVar4[3]);
  func_0x000107c6071c();
  lVar9 = *plVar4;
  uVar11 = *(undefined8 *)(lVar9 + 0x10);
  func_0x000107c5fadc(uVar6,uVar8);
  uVar10 = uVar5;
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000104cb9b14(uVar11,uVar6,uVar10,1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  uVar10 = *(undefined8 *)(lVar9 + 0x10);
  func_0x000107c5fadc(uVar5,uVar1);
  uVar6 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  func_0x000104cba3f0(param_1 - dVar12,uVar10,uVar5,uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c6142c(uVar8);
  func_0x000107c6142c(uVar1);
  func_0x000107c614ac(lVar7);
                    /* WARNING: Could not recover jumptable at 0x000100e8ce08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar3);
  return;
}



/* Entry: 100e8cf4c; end: 100e8d23f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8cf4c(double param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  
  lVar7 = *(long *)(unaff_x22 + 0x88);
  lVar3 = lVar7;
  FUN_100e8e4c8();
  *(long *)(unaff_x22 + 0x28) = lVar7;
  lVar9 = unaff_x22 + 0x10;
  func_0x000107c614b0(lVar7);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar9,(long *)(unaff_x22 + 0x28),uVar6,&UNK_11035de00,6);
  if ((int)lVar9 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x20);
    uVar6 = uVar1;
    uVar8 = uVar5;
    func_0x000100e8bd08(uVar1,uVar5,uVar2);
    func_0x000100e8bcb0(uVar1,uVar5,uVar2);
    goto LAB_100e8cff8;
  }
  lVar9 = *(long *)(lVar3 + _DAT_112f60d58);
  if (lVar9 < 3) {
    if (lVar9 == 0) {
      uVar8 = 0xe700000000000000;
      uVar6 = 0x73736563637573;
      goto LAB_100e8cff8;
    }
    if (lVar9 == 1) {
      uVar8 = 0xee0064656b6e696c;
      uVar6 = 0x5f79646165726c61;
      goto LAB_100e8cff8;
    }
    if (lVar9 == 2) {
      uVar8 = 0x800000010ef16200;
      uVar6 = 0xd000000000000017;
      goto LAB_100e8cff8;
    }
  }
  else if (lVar9 < 5) {
    if (lVar9 == 3) {
      uVar8 = 0xed00006e656b6f74;
      uVar6 = 0x5f64696c61766e69;
      goto LAB_100e8cff8;
    }
    if (lVar9 == 4) {
      uVar8 = 0xec00000064657469;
      uVar6 = 0x6d696c5f65746172;
      goto LAB_100e8cff8;
    }
  }
  else {
    if (lVar9 == 5) {
      uVar8 = 0xef6576697463615f;
      uVar6 = 0x6e776f646c6f6f63;
      goto LAB_100e8cff8;
    }
    if (lVar9 == 6) {
      uVar8 = 0xe600000000000000;
      uVar6 = 0x64656c696166;
      goto LAB_100e8cff8;
    }
  }
  uVar8 = 0xe700000000000000;
  uVar6 = 0x6e776f6e6b6e75;
LAB_100e8cff8:
  dVar12 = *(double *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  plVar4 = (long *)(*(long *)(unaff_x22 + 0x38) + *(long *)(unaff_x22 + 0x50));
  func_0x0001000a8868(plVar4,plVar4[3]);
  func_0x000107c6071c();
  lVar9 = *plVar4;
  uVar11 = *(undefined8 *)(lVar9 + 0x10);
  func_0x000107c5fadc(uVar6,uVar8);
  uVar10 = uVar5;
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000104cb9b14(uVar11,uVar6,uVar10,1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar6);
  uVar10 = *(undefined8 *)(lVar9 + 0x10);
  func_0x000107c5fadc(uVar5,uVar1);
  uVar6 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  func_0x000104cba3f0(param_1 - dVar12,uVar10,uVar5,uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c6142c(uVar8);
  func_0x000107c6142c(uVar1);
  func_0x000107c614ac(lVar7);
                    /* WARNING: Could not recover jumptable at 0x000100e8d0fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar3);
  return;
}



/* Entry: 100e8d240; end: 100e8d257;  */

void FUN_100e8d240(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8d258,0,0);
  return;
}



/* Entry: 100e8d258; end: 100e8d38b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8d258(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(long *)(unaff_x22 + 0x10) == 2) {
    lVar1 = *(long *)(unaff_x22 + 0x18) + _DAT_112d45390;
    uVar5 = *(undefined8 *)(lVar1 + 0x18);
    lVar6 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar5);
    piVar3 = *(int **)(lVar6 + 8);
    plVar2 = (long *)(ulong)(uint)piVar3[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar3 + (long)piVar3);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x28) = plVar2;
    pcVar4 = FUN_100e8d3fc;
  }
  else {
    if (*(long *)(unaff_x22 + 0x10) != 1) {
      FUN_100e89fe4();
      func_0x000107c613f8(&UNK_11035de00,param_1,0,0);
      param_1[1] = 0;
      *param_1 = 7;
      *(undefined1 *)(param_1 + 2) = 3;
      func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000100e8d388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    lVar1 = *(long *)(unaff_x22 + 0x18) + _DAT_112d45388;
    uVar5 = *(undefined8 *)(lVar1 + 0x18);
    lVar6 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar5);
    piVar3 = *(int **)(lVar6 + 8);
    plVar2 = (long *)(ulong)(uint)piVar3[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)*piVar3 + (long)piVar3);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x20) = plVar2;
    pcVar4 = FUN_100e8d38c;
  }
  *plVar2 = unaff_x22;
  plVar2[1] = (long)pcVar4;
                    /* WARNING: Could not recover jumptable at 0x000100e8d334. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar5,lVar6);
  return;
}



/* Entry: 100e8d38c; end: 100e8d3fb;  */

void FUN_100e8d38c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100e8d3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100e8d3fc; end: 100e8d46b;  */

void FUN_100e8d3fc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000100e8d468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100e8d46c; end: 100e8d5a7; -[_TtC41SCConnectedAccountsServicesImplementation28ConnectedAccountsServiceImpl linkProvider:completionHandler:] */

void FUN_100e8d46c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11035df20;
  func_0x000107c613fc(&UNK_11035df20,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11035df48;
  func_0x000107c613fc(&UNK_11035df48,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d90acc8;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11035df70;
  func_0x000107c613fc(&UNK_11035df70,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d90acd0;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  FUN_100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d90acd8,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 100e8d5a8; end: 100e8d613;  */

void FUN_100e8d5a8(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(long *)(unaff_x22 + 0x18) = param_3;
  plVar1 = (long *)0xb0;
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100e8d614;
  plVar1[6] = param_1;
  plVar1[7] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8c8dc,0,0);
  return;
}



/* Entry: 100e8d614; end: 100e8d6af;  */

void FUN_100e8d614(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x20));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    unaff_x20 = 0;
    lVar2 = param_1;
  }
  else {
    func_0x000107c5ed2c();
    func_0x000107c614ac();
    param_1 = unaff_x20;
    lVar2 = 0;
  }
  (**(code **)(*(long *)(lVar4 + 0x10) + 0x10))(*(long *)(lVar4 + 0x10),lVar2,unaff_x20);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100e8d6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 100e8d6b0; end: 100e8d6c7;  */

void FUN_100e8d6b0(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8d6c8,0,0);
  return;
}



/* Entry: 100e8d6c8; end: 100e8d7cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8d6c8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x30);
  uVar1 = 0x6e776f6e6b6e75;
  if (lVar2 == 2) {
    uVar1 = 0x656c707061;
  }
  uVar5 = 0xe700000000000000;
  if (lVar2 == 2) {
    uVar5 = 0xe500000000000000;
  }
  uVar4 = 0x656c676f6f67;
  if (lVar2 != 1) {
    uVar4 = uVar1;
  }
  uVar1 = 0xe600000000000000;
  if (lVar2 != 1) {
    uVar1 = uVar5;
  }
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
  lVar2 = _DAT_112d45398;
  *(long *)(unaff_x22 + 0x50) = _DAT_112d45398;
  plVar3 = (long *)(*(long *)(unaff_x22 + 0x38) + lVar2);
  func_0x0001000a8868(plVar3,plVar3[3]);
  uVar5 = *(undefined8 *)(*plVar3 + 0x10);
  func_0x000107c5fadc(uVar4,uVar1);
  func_0x000104cb9d44(uVar5,uVar4,1);
  func_0x000107c61170(uVar4);
  func_0x000107c6071c();
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  plVar3 = (long *)0x10;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100e8d7cc;
                    /* WARNING: Could not recover jumptable at 0x000100e8d7c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100e89e18();
  return;
}



/* Entry: 100e8d7cc; end: 100e8d827;  */

void FUN_100e8d7cc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100e8d828;
  }
  else {
    pcVar1 = FUN_100e8d924;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 100e8d828; end: 100e8d923;  */

void FUN_100e8d828(double param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  double dVar7;
  
  dVar7 = *(double *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  plVar2 = (long *)(*(long *)(unaff_x22 + 0x38) + *(long *)(unaff_x22 + 0x50));
  func_0x0001000a8868(plVar2,plVar2[3]);
  func_0x000107c6071c();
  lVar6 = *plVar2;
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  uVar4 = uVar3;
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000104cb9eb8(uVar5,uVar4,1);
  func_0x000107c61170(uVar4);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  func_0x000107c5fadc(uVar3,uVar1);
  uVar4 = 0x73736563637573;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000104cba660(param_1 - dVar7,uVar5,uVar3,uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar1);
  func_0x0001033a99fc(0);
  func_0x0001033a9780();
                    /* WARNING: Could not recover jumptable at 0x000100e8d920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100e8d924; end: 100e8dbe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8d924(double param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  double dVar13;
  
  lVar7 = *(long *)(unaff_x22 + 0x68);
  lVar3 = lVar7;
  func_0x000100e8e710();
  *(long *)(unaff_x22 + 0x28) = lVar7;
  lVar10 = unaff_x22 + 0x10;
  func_0x000107c614b0(lVar7);
  uVar6 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(lVar10,(long *)(unaff_x22 + 0x28),uVar6,&UNK_11035de00,6);
  if ((int)lVar10 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x20);
    uVar6 = uVar1;
    uVar8 = uVar5;
    func_0x000100e8bd08(uVar1,uVar5,uVar2);
    func_0x000100e8bcb0(uVar1,uVar5,uVar2);
    goto LAB_100e8d9d0;
  }
  lVar10 = *(long *)(lVar3 + _DAT_112f60da0);
  if (lVar10 < 3) {
    if (lVar10 == 0) {
      uVar8 = 0xe700000000000000;
      uVar6 = 0x73736563637573;
      goto LAB_100e8d9d0;
    }
    if (lVar10 == 1) {
      uVar8 = 0x800000010ef161e0;
      uVar6 = 0xd00000000000001c;
      goto LAB_100e8d9d0;
    }
    if (lVar10 == 2) {
      uVar8 = 0xec00000064657469;
      uVar6 = 0x6d696c5f65746172;
      goto LAB_100e8d9d0;
    }
  }
  else {
    if (lVar10 == 3) {
      uVar8 = 0xef6576697463615f;
      uVar6 = 0x6e776f646c6f6f63;
      goto LAB_100e8d9d0;
    }
    if (lVar10 == 4) {
      uVar6 = 0xd000000000000013;
      uVar8 = 0x800000010ef161c0;
      goto LAB_100e8d9d0;
    }
    if (lVar10 == 5) {
      uVar8 = 0xe600000000000000;
      uVar6 = 0x64656c696166;
      goto LAB_100e8d9d0;
    }
  }
  uVar8 = 0xe700000000000000;
  uVar6 = 0x6e776f6e6b6e75;
LAB_100e8d9d0:
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  dVar13 = *(double *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  plVar4 = (long *)(*(long *)(unaff_x22 + 0x38) + *(long *)(unaff_x22 + 0x50));
  func_0x0001000a8868(plVar4,plVar4[3]);
  func_0x000107c6071c();
  lVar10 = *plVar4;
  uVar12 = *(undefined8 *)(lVar10 + 0x10);
  func_0x000107c5fadc(uVar6,uVar8);
  uVar11 = uVar5;
  func_0x000107c5fadc(uVar5,uVar1);
  func_0x000104cba02c(uVar12,uVar6,uVar11,1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar6);
  uVar11 = *(undefined8 *)(lVar10 + 0x10);
  func_0x000107c5fadc(uVar5,uVar1);
  uVar6 = 0x6572756c696166;
  func_0x000107c5fadc(0x6572756c696166,0xe700000000000000);
  func_0x000104cba660(param_1 - dVar13,uVar11,uVar5,uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c6142c(uVar8);
  func_0x000107c6142c(uVar1);
  func_0x000107c614ac(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000100e8dad8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar3);
  return;
}



/* Entry: 100e8dbe4; end: 100e8dd1f; -[_TtC41SCConnectedAccountsServicesImplementation28ConnectedAccountsServiceImpl unlinkProvider:completionHandler:] */

void FUN_100e8dbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11035de58;
  func_0x000107c613fc(&UNK_11035de58,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11035de80;
  func_0x000107c613fc(&UNK_11035de80,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10d90ac70;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11035dea8;
  func_0x000107c613fc(&UNK_11035dea8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10d90ac80;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  FUN_100e8e0b0(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&UNK_10d90ac90,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 100e8dd20; end: 100e8dd8b;  */

void FUN_100e8dd20(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(long *)(unaff_x22 + 0x18) = param_3;
  plVar1 = (long *)0x70;
  func_0x000107c61174();
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100e8ec84;
  plVar1[6] = param_1;
  plVar1[7] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8d6c8,0,0);
  return;
}



/* Entry: 100e8dd8c; end: 100e8ddeb; -[_TtC41SCConnectedAccountsServicesImplementation28ConnectedAccountsServiceImpl init] */

void FUN_100e8dd8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCConnectedAccountsServicesImplementation.ConnectedAccountsServiceImpl",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100e8ddb8);
  (*pcVar1)();
}



/* Entry: 100e8ddec; end: 100e8de43; -[_TtC41SCConnectedAccountsServicesImplementation28ConnectedAccountsServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100e8de08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e8de28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e8de0c) */
/* WARNING: Removing unreachable block (ram,0x000100e8de2c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100e8ddec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112d45380))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d45380));
  return;
}



/* Entry: 100e8de44; end: 100e8de63;  */

void FUN_100e8de44(void)

{
  func_0x000107c61168(&PTR_PTR_11279c9f0);
  return;
}



/* Entry: 100e8de64; end: 100e8decf;  */

void FUN_100e8de64(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100e8ec98;
  plVar3[2] = lVar2;
  plVar3[3] = lVar5;
  plVar4 = (long *)0x70;
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar3[4] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_100e8ec84;
  plVar4[6] = lVar1;
  plVar4[7] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8d6c8,0,0);
  return;
}



/* Entry: 100e8ded0; end: 100e8df23;  */

void FUN_100e8ded0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_3;
  plVar2 = (long *)(ulong)(uint)param_3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x100e8ec90;
                    /* WARNING: Could not recover jumptable at 0x000100e8df20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))();
  return;
}



/* Entry: 100e8df24; end: 100e8df9b;  */

void FUN_100e8df24(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x20);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x100e8ec8c;
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  plVar4[2] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x100e8ec90;
                    /* WARNING: Could not recover jumptable at 0x000100e8df20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 100e8df9c; end: 100e8e02b;  */

void FUN_100e8df9c(void)

{
  int iVar1;
  long *plVar2;
  int *in_x3;
  long unaff_x22;
  
  iVar1 = *in_x3;
  plVar2 = (long *)(ulong)(uint)in_x3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x100e8dff0;
                    /* WARNING: Could not recover jumptable at 0x000100e8dfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)in_x3))();
  return;
}



/* Entry: 100e8e02c; end: 100e8e0af;  */

void FUN_100e8e02c(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  piVar2 = *(int **)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x100e8ec94;
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar5,(code *)((long)iVar1 + (long)piVar2),uVar3,piVar2,uVar4);
  plVar6[2] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = 0x100e8dff0;
                    /* WARNING: Could not recover jumptable at 0x000100e8dfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 100e8e0b0; end: 100e8e307;  */

void FUN_100e8e0b0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_c0 + -extraout_x8;
  func_0x0001000abe04(param_3,puVar5);
  lVar1 = 0;
  func_0x000107c5fd0c();
  lVar8 = *(long *)(lVar1 + -8);
  puVar2 = puVar5;
  (**(code **)(lVar8 + 0x30))(puVar5,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x0001000abe54(puVar5);
    uVar6 = 0x1c00;
    lVar1 = *(long *)(param_5 + 0x10);
  }
  else {
    func_0x000107c5fd08();
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    uVar6 = (ulong)puVar2 & 0xff | 0x1c00;
    lVar1 = *(long *)(param_5 + 0x10);
  }
  if (lVar1 == 0) {
    lVar8 = 0;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(param_5 + 0x18);
    lVar8 = lVar1;
    func_0x000107c614f0();
    func_0x000107c615f0(lVar1);
    func_0x000107c5fca8();
    func_0x000107c615e8(lVar1);
  }
  if (param_2 == 0) {
    func_0x0001000abe54(param_3);
    puVar3 = &UNK_11035ded0;
    func_0x000107c613fc(&UNK_11035ded0,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(long *)(puVar3 + 0x18) = param_5;
    if (lVar7 == 0 && lVar8 == 0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      uStack_80 = 0;
      uStack_78 = 0;
      puVar4 = &uStack_80;
      lStack_70 = lVar8;
      lStack_68 = lVar7;
    }
    func_0x000107c615bc(uVar6,puVar4,PTR___sytN_11034f1b0 + 8,&UNK_10d90aca0,puVar3);
  }
  else {
    func_0x000107c5fb28(param_1,param_2);
    func_0x000107c6142c(param_2);
    puVar3 = &UNK_11035def8;
    func_0x000107c613fc(&UNK_11035def8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = param_4;
    *(long *)(puVar3 + 0x18) = param_5;
    func_0x000107c6157c(param_5);
    if (lVar7 == 0 && lVar8 == 0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      uStack_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &uStack_a0;
      lStack_90 = lVar8;
      lStack_88 = lVar7;
    }
    uStack_b8 = 7;
    lStack_a8 = param_1 + 0x20;
    func_0x000107c615bc(uVar6,&uStack_b8,PTR___sytN_11034f1b0 + 8,&UNK_10d90aca8,puVar3);
    func_0x000107c61574(param_1);
    func_0x0001000abe54(param_3);
    func_0x000107c61574(param_5);
  }
  return;
}



/* Entry: 100e8e308; end: 100e8e36b;  */

void FUN_100e8e308(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100e8e36c;
                    /* WARNING: Could not recover jumptable at 0x000100e8e368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Entry: 100e8e36c; end: 100e8e3ab;  */

void FUN_100e8e36c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100e8e3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100e8e3ac; end: 100e8e41b;  */

void FUN_100e8e3ac(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x100e8ec88;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_100e8e36c;
                    /* WARNING: Could not recover jumptable at 0x000100e8e368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 100e8e41c; end: 100e8e48b;  */

void FUN_100e8e41c(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100e8e48c;
  iVar1 = *piVar2;
  plVar4 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar4,(code *)((long)iVar1 + (long)piVar2),uVar3);
  plVar5[2] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_100e8e36c;
                    /* WARNING: Could not recover jumptable at 0x000100e8e368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar4,param_1);
  return;
}



/* Entry: 100e8e48c; end: 100e8e4c7;  */

void FUN_100e8e48c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100e8e4c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100e8e4c8; end: 100e8e927;  */

ulong FUN_100e8e4c8(undefined8 param_1)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined1 auStack_a0 [8];
  ulong uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  ulong uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  ulong uStack_60;
  long lStack_58;
  char cStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_1;
  func_0x000107c614b0();
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar2 = &uStack_60;
  func_0x000107c6147c(puVar2,&uStack_48,uVar1,&UNK_11035de00,6);
  if ((int)puVar2 == 0) {
    func_0x0001033a94a0(0);
    func_0x000107c614cc(param_1,auStack_68,auStack_80);
    uVar1 = uStack_70;
    func_0x000107c60640(uStack_78,uStack_70);
    uVar3 = uStack_78;
    func_0x0001033a9290();
    func_0x000107c6142c(uVar1);
    return uVar3;
  }
  if (cStack_50 == '\0') {
    func_0x0001033a94a0(0);
    func_0x000107c61434(lStack_58);
    uVar3 = uStack_60;
    func_0x0001033a9290(uStack_60,lStack_58);
    func_0x000100e8bcb0(uStack_60,lStack_58,0);
    func_0x000100e8bcb0(uStack_60,lStack_58,0);
    return uVar3;
  }
  if (cStack_50 == '\x03') {
    uVar3 = lStack_58 + (ulong)(uStack_60 >= 10);
    if ((long)-uVar3 < 0 == SCARRY8(~uVar3,(ulong)(uStack_60 < 10))) {
      if (uStack_60 == 8 && lStack_58 == 0) {
        func_0x0001033a94a0(0);
        func_0x000107c610f8();
        uVar3 = 1;
      }
      else {
        if (uStack_60 != 9 || lStack_58 != 0) goto LAB_100e8e648;
        func_0x0001033a94a0(0);
        func_0x000107c610f8();
        uVar3 = 2;
      }
    }
    else if (uStack_60 == 10 && lStack_58 == 0) {
      func_0x0001033a94a0(0);
      func_0x000107c610f8();
      uVar3 = 3;
    }
    else if (uStack_60 == 0xb && lStack_58 == 0) {
      func_0x0001033a94a0(0);
      func_0x000107c610f8();
      uVar3 = 4;
    }
    else {
      if (uStack_60 != 0xc || lStack_58 != 0) goto LAB_100e8e648;
      func_0x0001033a94a0(0);
      func_0x000107c610f8();
      uVar3 = 5;
    }
    func_0x0001033a9078(uVar3,0,0,0);
  }
  else {
LAB_100e8e648:
    func_0x0001033a94a0(0);
    func_0x000107c614cc(param_1,auStack_88,auStack_a0);
    uVar1 = uStack_90;
    func_0x000107c60640(uStack_98,uStack_90);
    uVar3 = uStack_98;
    func_0x0001033a9290();
    func_0x000107c6142c(uVar1);
    func_0x000100e8bcb0(uStack_60,lStack_58,cStack_50);
  }
  return uVar3;
}



/* Entry: 100e8e928; end: 100e8e953;  */

void FUN_100e8e928(void)

{
  long unaff_x20;
  
  func_0x000107c60bd0(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100e8e954; end: 100e8e9bf;  */

void FUN_100e8e954(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100e8e9c0;
  plVar3[2] = lVar2;
  plVar3[3] = lVar5;
  plVar4 = (long *)0xb0;
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar3[4] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_100e8d614;
  plVar4[6] = lVar1;
  plVar4[7] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8c8dc,0,0);
  return;
}



/* Entry: 100e8e9c0; end: 100e8e9fb;  */

void FUN_100e8e9c0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100e8e9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100e8e9fc; end: 100e8ea73;  */

void FUN_100e8e9fc(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x20);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x100e8ec9c;
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  plVar4[2] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x100e8ec90;
                    /* WARNING: Could not recover jumptable at 0x000100e8df20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 100e8ea74; end: 100e8eaf7;  */

void FUN_100e8ea74(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  piVar2 = *(int **)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x100e8eca0;
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar5,(code *)((long)iVar1 + (long)piVar2),uVar3,piVar2,uVar4);
  plVar6[2] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = 0x100e8dff0;
                    /* WARNING: Could not recover jumptable at 0x000100e8dfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 100e8eaf8; end: 100e8eb5b;  */

void FUN_100e8eaf8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x100e8eca4;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
  plVar4 = (long *)0x60;
  func_0x000107c61174();
  func_0x000107c615b8();
  plVar3[4] = (long)plVar4;
  *plVar4 = (long)plVar3;
  plVar4[1] = (long)FUN_100e8c80c;
  plVar4[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100e8c394,0,0);
  return;
}



/* Entry: 100e8eb5c; end: 100e8ebd3;  */

void FUN_100e8eb5c(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  piVar2 = *(int **)(unaff_x20 + 0x20);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x100e8eca8;
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8();
  plVar4[2] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = 0x100e8ec90;
                    /* WARNING: Could not recover jumptable at 0x000100e8df20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 100e8ebd4; end: 100e8ebff;  */

void FUN_100e8ebd4(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100e8ec00; end: 100e8ec83;  */

void FUN_100e8ec00(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  piVar2 = *(int **)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x100e8ecac;
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar5,(code *)((long)iVar1 + (long)piVar2),uVar3,piVar2,uVar4);
  plVar6[2] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = 0x100e8dff0;
                    /* WARNING: Could not recover jumptable at 0x000100e8dfec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Entry: 100e8ec84; end: 100e8ecaf;  */

void FUN_100e8ec84(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x20));
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    unaff_x20 = 0;
    lVar2 = param_1;
  }
  else {
    func_0x000107c5ed2c();
    func_0x000107c614ac();
    param_1 = unaff_x20;
    lVar2 = 0;
  }
  (**(code **)(*(long *)(lVar4 + 0x10) + 0x10))(*(long *)(lVar4 + 0x10),lVar2,unaff_x20);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100e8d6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 100e8ecb0; end: 100e8ecf3;  */

void FUN_100e8ecb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 100e8ecf4; end: 100e8eeb3;  */

undefined * FUN_100e8ecf4(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  puVar5 = &UNK_11035e010;
  puVar1 = puVar5;
  func_0x000107c613fc(&UNK_11035e010,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112d453d0,&UNK_10d90ad20);
  func_0x000107c613fc();
  pcVar2 = FUN_100e8ef24;
  func_0x0001000bdd8c(FUN_100e8ef24,puVar1);
  lVar3 = 0;
  func_0x000100e8bce8();
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126a5e80;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar3 + 0x10) = puVar1;
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  func_0x000107c613fc(&UNK_11035e010,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar1 = &UNK_11035e038;
  func_0x000107c613fc(&UNK_11035e038,0x28,7);
  *(undefined **)(puVar1 + 0x10) = puVar5;
  *(code **)(puVar1 + 0x18) = pcVar2;
  *(long *)(puVar1 + 0x20) = lVar3;
  pcStack_50 = FUN_100e8f28c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_100e8f298;
  puStack_58 = &UNK_11035e050;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar5 = puStack_48;
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(lVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  uVar7 = 0;
  func_0x0001033a9b34(0);
  func_0x000107c610f8();
  func_0x0001033a9a78(puVar4,uVar7);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(lVar3);
  return puVar4;
}


