/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1032d49cc; end: 1032d4a33; -[_TtC16LensFullScreenUX25LensViewTouchDownDetector .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d49cc(long param_1)

{
  FUN_1032d4b5c(param_1 + _DAT_112f55c90);
  func_0x000107c61610(param_1 + _DAT_112f55c98);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f55ca0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f55ca8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f55cb0));
  return;
}



/* Entry: 1032d4a34; end: 1032d4a53;  */

void FUN_1032d4a34(void)

{
  func_0x000107c61168(&PTR_PTR_1128cb518);
  return;
}



/* Entry: 1032d4a54; end: 1032d4a5b; -[_TtC16LensFullScreenUX25LensViewTouchDownDetector gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1032d4a54(void)

{
  return 1;
}



/* Entry: 1032d4a5c; end: 1032d4b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d4a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = unaff_x20 + _DAT_112f55c90;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar2 = _DAT_112f55c98;
  func_0x000107c61614(unaff_x20 + _DAT_112f55c98,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f55ca8) = 0;
  lVar3 = _DAT_112f55cb0;
  puVar4 = &UNK_10dbacf80;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar3) = puVar4;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112f55ca0) = param_2;
  *(undefined8 *)(lVar1 + 8) = param_4;
  func_0x000107c61604(lVar1,param_3);
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_2);
  func_0x000107c61154(&stack0xffffffffffffff90,puVar4);
  return;
}



/* Entry: 1032d4b5c; end: 1032d4b7f;  */

undefined8 FUN_1032d4b5c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1032d4b80; end: 1032d4d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1032d4b80(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  double dVar7;
  double dVar8;
  double dVar9;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  lVar4 = unaff_x20 + _DAT_112f55d28;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    if ((lVar5 != 0) || (FUN_1032d5b74(), lVar5 != 0)) {
      lVar2 = _DAT_112f55d18;
      lVar6 = *(long *)(unaff_x20 + _DAT_112f55d18);
      func_0x000107c4e1ec();
      func_0x000107c61180();
      if (lVar6 != 0) {
        func_0x000107c4abec(*(undefined8 *)(unaff_x20 + lVar2));
        func_0x000107c4073c(lVar6);
        dVar7 = param_1;
        func_0x000107c609b8();
        dVar9 = dVar7 + -5.0;
        FUN_1032d6540();
        func_0x000107c609b8(param_1,param_2,param_3,param_4);
        func_0x000107c515a0(lVar6);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar4);
        dVar8 = (param_1 - param_3) - (dVar9 - dVar7);
        dVar9 = *(double *)(unaff_x20 + _DAT_112f55d30);
        dVar7 = 20.0;
        if (20.0 <= dVar8) {
          dVar7 = dVar8;
          if (dVar8 < dVar9) goto LAB_1032d4cd0;
        }
        else if (20.0 < dVar9) goto LAB_1032d4cd0;
        dVar7 = dVar9;
LAB_1032d4cd0:
        return dVar7 / dVar9;
      }
      func_0x000107c61170(lVar4);
      lVar4 = lVar5;
    }
    func_0x000107c61170(lVar4);
  }
  func_0x000104366fc4(0xd000000000000034,0x800000010f13b560,lVar3,&PTR_DAT_110638590);
  pdVar1 = (double *)(unaff_x20 + _DAT_112f55d30);
  if (*(char *)(pdVar1 + 1) == '\x01') {
    lVar4 = unaff_x20;
    func_0x000107c614f0(unaff_x20);
    FUN_1032d6b98(unaff_x20,lVar4);
    *pdVar1 = param_1;
    *(undefined1 *)(pdVar1 + 1) = 0;
  }
  else {
    param_1 = *pdVar1;
  }
  return param_1;
}



/* Entry: 1032d4d44; end: 1032d4fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1032d4d44(double param_1,undefined8 param_2,double param_3)

{
  long lVar1;
  double dVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  lVar5 = unaff_x20 + _DAT_112f55d28;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    if ((lVar6 != 0) || (FUN_1032d5b74(), lVar6 != 0)) {
      lVar1 = _DAT_112f55d18;
      lVar7 = *(long *)(unaff_x20 + _DAT_112f55d18);
      func_0x000107c4e1ec();
      func_0x000107c61180();
      if (lVar7 != 0) {
        func_0x000107c4abec(*(undefined8 *)(unaff_x20 + lVar1));
        func_0x000107c4073c(lVar7);
        func_0x000107c609b8();
        func_0x000107c515a0(lVar7);
        func_0x000107c5cf28(&uStack_a0,*(undefined8 *)(unaff_x20 + _DAT_112f55cf8));
        dStack_a8 = 0.0;
        puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar9 = &UNK_1106384b0;
        func_0x000107c613fc(&UNK_1106384b0,0x58,7);
        *(long *)(puVar9 + 0x10) = unaff_x20;
        *(double **)(puVar9 + 0x18) = &dStack_a8;
        *(long *)(puVar9 + 0x20) = lVar6;
        *(undefined8 *)(puVar9 + 0x30) = uStack_98;
        *(undefined8 *)(puVar9 + 0x28) = uStack_a0;
        *(undefined8 *)(puVar9 + 0x40) = uStack_88;
        *(undefined8 *)(puVar9 + 0x38) = uStack_90;
        *(undefined8 *)(puVar9 + 0x50) = uStack_78;
        *(undefined8 *)(puVar9 + 0x48) = uStack_80;
        puVar10 = &UNK_1106384d8;
        func_0x000107c613fc(&UNK_1106384d8,0x20,7);
        *(code **)(puVar10 + 0x10) = FUN_1032d5c9c;
        *(undefined **)(puVar10 + 0x18) = puVar9;
        pcStack_b8 = FUN_1032d5cc4;
        puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d0 = 0x42000000;
        puStack_c8 = &UNK_10006eb60;
        puStack_c0 = &UNK_1106384f0;
        ppuVar11 = &puStack_d8;
        puStack_b0 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        puVar12 = puStack_b0;
        func_0x000107c61174();
        func_0x000107c61174(lVar6);
        func_0x000107c6157c(puVar10);
        func_0x000107c61574(puVar12);
        func_0x000107c4e5fc(puVar8);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar5);
        func_0x000107c60bd0(ppuVar11);
        puVar12 = puVar10;
        func_0x000107c61544(puVar10,"",0x60,0x67,0x28,1);
        func_0x000107c61574(puVar10);
        dVar2 = dStack_a8;
        if (((ulong)puVar12 & 1) == 0) {
          func_0x000107c61574(puVar9);
          return (param_1 - param_3) - dVar2;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1032d4fd4);
        (*pcVar3)();
      }
      func_0x000107c61170(lVar5);
      lVar5 = lVar6;
    }
    func_0x000107c61170(lVar5);
  }
  func_0x000104366fc4(0xd000000000000034,0x800000010f13b560,lVar4,&PTR_DAT_110638590);
  return 100.0;
}



/* Entry: 1032d4fd4; end: 1032d5183;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1032d4fd4(double param_1,undefined8 param_2,double param_3)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  double dVar7;
  double dVar8;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  lVar4 = unaff_x20 + _DAT_112f55d28;
  func_0x000107c61618();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    if ((lVar5 != 0) || (FUN_1032d5b74(), lVar5 != 0)) {
      lVar2 = _DAT_112f55d18;
      lVar6 = *(long *)(unaff_x20 + _DAT_112f55d18);
      func_0x000107c4e1ec();
      func_0x000107c61180();
      if (lVar6 != 0) {
        func_0x000107c4abec(*(undefined8 *)(unaff_x20 + lVar2));
        func_0x000107c4073c(lVar6);
        func_0x000107c609b8();
        dVar8 = param_1 + 5.0;
        func_0x000107c61174(lVar5);
        func_0x000107c3ec60();
        func_0x000107c609b8();
        func_0x000107c515a0(lVar5);
        func_0x000107c61170(lVar5);
        param_1 = param_1 - param_3;
        dVar8 = param_1 - dVar8;
        FUN_1032d6540();
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(lVar4);
        dVar7 = 20.0;
        if (20.0 <= dVar8) {
          dVar7 = dVar8;
          if (dVar8 < param_1) goto LAB_1032d510c;
        }
        else if (20.0 < param_1) goto LAB_1032d510c;
        dVar7 = param_1;
LAB_1032d510c:
        return dVar7 / *(double *)(unaff_x20 + _DAT_112f55d30);
      }
      func_0x000107c61170(lVar4);
      lVar4 = lVar5;
    }
    func_0x000107c61170(lVar4);
  }
  func_0x000104366fc4(0xd000000000000034,0x800000010f13b560,lVar3,&PTR_DAT_110638590);
  pdVar1 = (double *)(unaff_x20 + _DAT_112f55d30);
  if (*(char *)(pdVar1 + 1) == '\x01') {
    lVar4 = unaff_x20;
    func_0x000107c614f0(unaff_x20);
    FUN_1032d6b98(unaff_x20,lVar4);
    *pdVar1 = param_1;
    *(undefined1 *)(pdVar1 + 1) = 0;
  }
  else {
    param_1 = *pdVar1;
  }
  return param_1;
}



/* Entry: 1032d5184; end: 1032d5413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1032d5184(double param_1,undefined8 param_2,double param_3)

{
  long lVar1;
  double dVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  lVar5 = unaff_x20 + _DAT_112f55d28;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar6 = lVar5;
    func_0x000107c5e3f8();
    func_0x000107c61180();
    if ((lVar6 != 0) || (FUN_1032d5b74(), lVar6 != 0)) {
      lVar1 = _DAT_112f55d18;
      lVar7 = *(long *)(unaff_x20 + _DAT_112f55d18);
      func_0x000107c4e1ec();
      func_0x000107c61180();
      if (lVar7 != 0) {
        func_0x000107c4abec(*(undefined8 *)(unaff_x20 + lVar1));
        func_0x000107c4073c(lVar7);
        func_0x000107c609b8();
        func_0x000107c515a0(lVar7);
        func_0x000107c5cf28(&uStack_a0,*(undefined8 *)(unaff_x20 + _DAT_112f55cf8));
        dStack_a8 = 0.0;
        puVar8 = PTR__OBJC_CLASS___UIView_1126aec20;
        func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
        puVar9 = &UNK_110638528;
        func_0x000107c613fc(&UNK_110638528,0x58,7);
        *(long *)(puVar9 + 0x10) = unaff_x20;
        *(double **)(puVar9 + 0x18) = &dStack_a8;
        *(long *)(puVar9 + 0x20) = lVar6;
        *(undefined8 *)(puVar9 + 0x30) = uStack_98;
        *(undefined8 *)(puVar9 + 0x28) = uStack_a0;
        *(undefined8 *)(puVar9 + 0x40) = uStack_88;
        *(undefined8 *)(puVar9 + 0x38) = uStack_90;
        *(undefined8 *)(puVar9 + 0x50) = uStack_78;
        *(undefined8 *)(puVar9 + 0x48) = uStack_80;
        puVar10 = &UNK_110638550;
        func_0x000107c613fc(&UNK_110638550,0x20,7);
        *(code **)(puVar10 + 0x10) = FUN_1032d5d40;
        *(undefined **)(puVar10 + 0x18) = puVar9;
        uStack_b8 = 0x1032d5d70;
        puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d0 = 0x42000000;
        puStack_c8 = &UNK_10006eb60;
        puStack_c0 = &UNK_110638568;
        ppuVar11 = &puStack_d8;
        puStack_b0 = puVar10;
        func_0x000107c60bc4(ppuVar11);
        puVar12 = puStack_b0;
        func_0x000107c61174();
        func_0x000107c61174(lVar6);
        func_0x000107c6157c(puVar10);
        func_0x000107c61574(puVar12);
        func_0x000107c4e5fc(puVar8);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(lVar5);
        func_0x000107c60bd0(ppuVar11);
        puVar12 = puVar10;
        func_0x000107c61544(puVar10,"",0x60,0x51,0x28,1);
        func_0x000107c61574(puVar10);
        dVar2 = dStack_a8;
        if (((ulong)puVar12 & 1) == 0) {
          func_0x000107c61574(puVar9);
          return (param_1 + param_3) - dVar2;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1032d5414);
        (*pcVar3)();
      }
      func_0x000107c61170(lVar5);
      lVar5 = lVar6;
    }
    func_0x000107c61170(lVar5);
  }
  func_0x000104366fc4(0xd000000000000034,0x800000010f13b560,lVar4,&PTR_DAT_110638590);
  return 100.0;
}



/* Entry: 1032d5414; end: 1032d54ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d5414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 *param_6,undefined8 param_7,undefined8 *param_8,
                  code *param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar1 = _DAT_112f55cf8;
  uStack_a0 = 0x3ff0000000000000;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0x3ff0000000000000;
  uStack_80 = 0;
  uStack_78 = 0;
  func_0x000107c5a03c(*(undefined8 *)(param_5 + _DAT_112f55cf8),param_6,&uStack_a0);
  uVar2 = *(undefined8 *)(param_5 + lVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c3ec60();
  func_0x000107c4073c(uVar2);
  func_0x000107c61170(uVar2);
  (*param_9)(param_1,param_2,param_3,param_4);
  *param_6 = param_1;
  uStack_98 = param_8[1];
  uStack_a0 = *param_8;
  uStack_88 = param_8[3];
  uStack_90 = param_8[2];
  uStack_78 = param_8[5];
  uStack_80 = param_8[4];
  func_0x000107c5a03c(*(undefined8 *)(param_5 + lVar1));
  return;
}



/* Entry: 1032d5500; end: 1032d58fb;  */

undefined * FUN_1032d5500(undefined *param_1)

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
    FUN_1032d5d00(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    uVar5 = uVar4;
    func_0x000100deaee4();
    func_0x000107c5fe30(&puStack_88,puVar7,uVar4,uVar5);
    uVar11 = uStack_78;
    param_1 = puStack_88;
    puVar12 = puStack_80;
    lVar13 = lStack_70;
    uVar8 = uStack_68;
  }
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_1032d55e8:
  lVar2 = lVar13;
  uVar15 = uVar8;
  if (-1 < (long)param_1) goto joined_r0x0001032d5624;
  while (func_0x000107c602ac(), puVar7 != (undefined *)0x0) {
    uVar5 = 0;
    puStack_90 = puVar7;
    FUN_1032d5d00(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
    func_0x000107c6147c(&puStack_58,&puStack_90,PTR___syXlN_11034f1a0 + 8,uVar5,7);
    uVar15 = uVar8;
    lVar2 = lVar13;
    lVar16 = lVar13;
    puVar7 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
    puVar10 = puStack_58;
    while( true ) {
      lVar13 = lVar2;
      PTR__OBJC_CLASS___UIWindowScene_1126b6b80 = puVar7;
      if (puVar10 == (undefined *)0x0) goto LAB_1032d58b4;
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
        FUN_1032d5d00(0,0x112d36e50,&PTR__OBJC_CLASS___UIWindow_1126c3e70);
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
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1032d58f8);
                (*pcVar3)();
              }
              uVar6 = *(ulong *)(puVar7 + uVar15 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar6 = uVar15;
              func_0x000100de9de8(uVar15,puVar7);
            }
            puVar1 = (undefined *)(uVar15 + 1);
            if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1032d58f4);
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
                func_0x000100dea1c8(0,puVar10 + 1,1,puStack_b8);
                puStack_b8 = puVar7;
              }
              uVar9 = (ulong)puStack_b8 & 0xffffffffffffff8;
              uVar15 = *(ulong *)(uVar9 + 0x10);
              if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar15) {
                puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
                func_0x000100dea1c8(puVar7,uVar15 + 1,1,puStack_b8);
                uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
                puStack_b8 = puVar7;
              }
              *(ulong *)(uVar9 + 0x10) = uVar15 + 1;
              *(ulong *)(uVar9 + uVar15 * 8 + 0x20) = uVar6;
              goto LAB_1032d55e8;
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
joined_r0x0001032d5624:
      while (uVar8 == 0) {
        lVar16 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1032d58fc);
          (*pcVar3)();
        }
        if ((long)(uVar11 + 0x40 >> 6) <= lVar16) {
          uVar8 = 0;
          goto LAB_1032d58b0;
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
LAB_1032d58b0:
  puStack_58 = (undefined *)0x0;
  uVar15 = uVar8;
  lVar16 = lVar13;
LAB_1032d58b4:
  func_0x000100deaf38(param_1,puVar12,uVar11,lVar16,uVar15);
  return puStack_b8;
}



/* Entry: 1032d58fc; end: 1032d5b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032d58fc(double param_1,double param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  double dVar8;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar1 = _DAT_112f55d18;
  lVar3 = *(long *)(unaff_x20 + _DAT_112f55d18);
  func_0x000107c4e1ec();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000104366fc4(0xd00000000000001f,0x800000010f13b540,lVar2,&PTR_DAT_110638590);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c3f74c(param_3);
    dVar8 = param_1;
    func_0x000107c5c42c();
    func_0x000107c61180();
    if (param_3 != 0) {
      func_0x000107c40720(param_1,param_2);
      dVar8 = param_1;
      func_0x000107c61170(param_3);
    }
    func_0x000107c4abec(*(undefined8 *)(unaff_x20 + lVar1));
    func_0x000107c609bc();
    param_1 = param_1 - dVar8;
    puVar4 = *(undefined **)(unaff_x20 + lVar1);
    func_0x000107c4abec();
    func_0x000107c609b8();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(puVar4 + 0x18) = 9;
    *(undefined8 *)(puVar4 + 0x10) = 4;
    lVar2 = _DAT_112f55cf8;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f55cf8);
    func_0x000107c3f75c();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c3f75c(uVar6);
    func_0x000107c61180();
    uVar7 = uVar5;
    func_0x000107c40284(param_1);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(undefined8 *)(puVar4 + 0x20) = uVar7;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c3f764();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c3ec1c(uVar6);
    func_0x000107c61180();
    uVar7 = uVar5;
    func_0x000107c40284(param_2 - dVar8);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    *(undefined8 *)(puVar4 + 0x28) = uVar7;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c5e308();
    func_0x000107c61180();
    FUN_1032d6540();
    uVar7 = uVar5;
    func_0x000107c40290();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    *(undefined8 *)(puVar4 + 0x30) = uVar7;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar7 = uVar5;
    func_0x000107c40290(*(undefined8 *)(unaff_x20 + _DAT_112f55d30));
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar3);
    *(undefined8 *)(puVar4 + 0x38) = uVar7;
  }
  return puVar4;
}



/* Entry: 1032d5b74; end: 1032d5c9b;  */

undefined8 FUN_1032d5b74(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar4 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168();
  func_0x000107c5a9c4();
  func_0x000107c61180();
  puVar2 = puVar4;
  func_0x000107c40210();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  uVar3 = 0;
  FUN_1032d5d00(0,0x112d36e40,&PTR__OBJC_CLASS___UIScene_1126a5d50);
  uVar5 = uVar3;
  func_0x000100deaee4();
  puVar4 = puVar2;
  func_0x000107c5fe10(puVar2,uVar3,uVar5);
  func_0x000107c61170(puVar2);
  puVar2 = puVar4;
  FUN_1032d5500();
  func_0x000107c6142c(puVar4);
  if ((ulong)puVar2 >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)puVar2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar2) {
      puVar4 = puVar2;
    }
    func_0x000107c60480();
  }
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c6142c(puVar2);
    uVar5 = 0;
  }
  else {
    if (((ulong)puVar2 & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)puVar2 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1032d5c9c);
        (*pcVar1)();
      }
      uVar5 = *(undefined8 *)(puVar2 + 0x20);
      func_0x000107c61174(uVar5);
    }
    else {
      uVar5 = 0;
      func_0x000100de9de8(0,puVar2);
    }
    func_0x000107c6142c(puVar2);
  }
  return uVar5;
}



/* Entry: 1032d5c9c; end: 1032d5cc3;  */

void FUN_1032d5c9c(void)

{
  long unaff_x20;
  
  FUN_1032d5414(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + 0x28,PTR__CGRectGetMaxY_110347580);
  return;
}



/* Entry: 1032d5cc4; end: 1032d5ce3;  */

void FUN_1032d5cc4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1032d5ce4; end: 1032d5cff;  */

void FUN_1032d5ce4(long param_1,long param_2)

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



/* Entry: 1032d5d00; end: 1032d5d3f;  */

void FUN_1032d5d00(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1032d5d40; end: 1032d5d67;  */

void FUN_1032d5d40(void)

{
  long unaff_x20;
  
  FUN_1032d5414(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + 0x28,PTR__CGRectGetMinY_1103475a0);
  return;
}



/* Entry: 1032d5d68; end: 1032d5d73;  */

void FUN_1032d5d68(long param_1,long param_2)

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



/* Entry: 1032d5d74; end: 1032d653f;  */

/* WARNING: Possible PIC construction at 0x0001032d5df8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d5e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d5f5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d6040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d6068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d609c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d60c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d60f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d6120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d6154: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d61a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d61cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d61f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d6224: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d623c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d624c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032d6240) */
/* WARNING: Removing unreachable block (ram,0x0001032d6228) */
/* WARNING: Removing unreachable block (ram,0x0001032d61fc) */
/* WARNING: Removing unreachable block (ram,0x0001032d61d0) */
/* WARNING: Removing unreachable block (ram,0x0001032d61ac) */
/* WARNING: Removing unreachable block (ram,0x0001032d6158) */
/* WARNING: Removing unreachable block (ram,0x0001032d6124) */
/* WARNING: Removing unreachable block (ram,0x0001032d60fc) */
/* WARNING: Removing unreachable block (ram,0x0001032d60c8) */
/* WARNING: Removing unreachable block (ram,0x0001032d60a0) */
/* WARNING: Removing unreachable block (ram,0x0001032d606c) */
/* WARNING: Removing unreachable block (ram,0x0001032d6044) */
/* WARNING: Removing unreachable block (ram,0x0001032d5f60) */
/* WARNING: Removing unreachable block (ram,0x0001032d5e2c) */
/* WARNING: Removing unreachable block (ram,0x0001032d5dfc) */
/* WARNING: Removing unreachable block (ram,0x0001032d6250) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d5d74(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  lVar3 = unaff_x20 + _DAT_112f55d28;
  func_0x000107c61618();
  if (lVar3 != 0) {
    lVar4 = unaff_x20 + _DAT_112f55d20;
    func_0x000107c61618();
    lVar1 = _DAT_112f55cf8;
    if (lVar4 != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112f55cf8);
      func_0x000107c5c42c();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x0001007d6c6c(1,0xd000000000000018,0x800000010f13b5f0,lVar2,&PTR_DAT_110638590);
        func_0x000107c5a050(*(undefined8 *)(unaff_x20 + lVar1));
        func_0x000107c526c0(0,*(undefined8 *)(unaff_x20 + lVar1));
        func_0x000107c5a378(*(undefined8 *)(unaff_x20 + lVar1));
        func_0x000107c3d89c(lVar3);
        FUN_1032d6594();
        func_0x0001000d224c(&uStack_70);
        uVar5 = uStack_70;
        func_0x000107c614f0(uStack_70);
        (**(code **)(lStack_68 + 0x18))(0,uVar5,lStack_68);
        func_0x000107c615e8(uStack_70);
        func_0x000107c610f8(PTR__OBJC_CLASS___UIImageView_1126aec28);
        func_0x000107c46db4();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
    func_0x000107c61170(lVar3);
  }
  func_0x000104366fc4(0xd000000000000042,0x800000010f13b5a0,lVar2,&PTR_DAT_110638590);
  return;
}



/* Entry: 1032d6540; end: 1032d6593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d6540(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f55d30);
  if (*(char *)(puVar1 + 1) == '\x01') {
    func_0x000107c614f0();
    FUN_1032d6b98();
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  return;
}



/* Entry: 1032d6594; end: 1032d67ff;  */

/* WARNING: Possible PIC construction at 0x0001032d6694: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d66ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d6744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d679c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032d6748) */
/* WARNING: Removing unreachable block (ram,0x0001032d66f0) */
/* WARNING: Removing unreachable block (ram,0x0001032d6698) */
/* WARNING: Removing unreachable block (ram,0x0001032d67a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d6594(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = _DAT_112f55cf8;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f55cf0);
  func_0x000107c3d89c(*(undefined8 *)(unaff_x20 + _DAT_112f55cf8),param_2,uVar3);
  func_0x000107c53840(uVar3);
  func_0x000107c5a050(uVar3);
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar2 = 0x112d360b8;
  FUN_1032d7030(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 9;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  func_0x000107c5cbe4(uVar3);
  func_0x000107c61180();
  func_0x000107c5cbe4(*(undefined8 *)(unaff_x20 + lVar1));
  func_0x000107c61180();
  func_0x000107c40284(0x401e000000000000,uVar3);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1032d6800; end: 1032d6993;  */

/* WARNING: Possible PIC construction at 0x0001032d691c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d693c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d6950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d6964: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032d6954) */
/* WARNING: Removing unreachable block (ram,0x0001032d6968) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d6800(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = *(undefined **)(unaff_x20 + _DAT_112f55d10);
  puVar2 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x000107c48c2c();
  }
  puVar4 = *(undefined **)(unaff_x20 + _DAT_112f55d08);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    func_0x000107c610f8(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x000107c61174(puVar3);
    func_0x000107c48c2c(puVar4);
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174(puVar3);
    puVar3 = puVar4;
  }
  func_0x000107c61174(puVar2);
  func_0x000107c61174(puVar3);
  func_0x000107c53fcc(puVar2);
  func_0x000107c61174(puVar4);
  func_0x000107c53fcc();
  func_0x000107c56704(0x3fd0000000000000,puVar4);
  func_0x000107c50474(puVar2,param_2,puVar4);
  lVar1 = _DAT_112f55d28;
  puVar3 = (undefined *)(unaff_x20 + _DAT_112f55d28);
  func_0x000107c61618();
  if (puVar3 == (undefined *)0x0) {
    puVar3 = (undefined *)(unaff_x20 + lVar1);
    func_0x000107c61618();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c5317c(puVar2,param_2,0);
    }
    else {
      func_0x000107c3d6fc();
      puVar2 = puVar3;
    }
  }
  else {
    func_0x000107c3d6fc();
    puVar2 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1032d6994; end: 1032d6b47; -[_TtC16LensFullScreenUX15RecordingButton handleTap] */

/* WARNING: Possible PIC construction at 0x0001032d6a14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032d6a18) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d6994(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  func_0x0001007d6c6c(1,0x74206e6f74747542,0xed00006465707061,lVar1,&PTR_DAT_110638590);
  lVar2 = param_1 + _DAT_112f55ce0;
  func_0x000107c61618();
  if (lVar2 == 0) {
    func_0x0001007d6c6c(2,0x65746167656c6544,0xef6c696e20736920,lVar1,&PTR_DAT_110638590);
  }
  else {
    FUN_1032ddb28();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1032d6b48; end: 1032d6b97; -[_TtC16LensFullScreenUX15RecordingButton handleLongPress:] */

/* WARNING: Possible PIC construction at 0x0001032d6b80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032d6b84) */

void FUN_1032d6b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001032d6a74(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1032d6b98; end: 1032d6c27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1032d6b98(double param_1,long param_2,undefined8 param_3)

{
  param_2 = param_2 + _DAT_112f55d20;
  func_0x000107c61618();
  if (param_2 == 0) {
    func_0x000104366fc4(0xd000000000000036,0x800000010f13b640,param_3,&PTR_DAT_110638590);
    param_1 = 100.0;
  }
  else {
    func_0x000107c5b078();
    func_0x000107c61170(param_2);
    param_1 = param_1 * 0.85;
  }
  return param_1;
}



/* Entry: 1032d6c28; end: 1032d6c87; -[_TtC16LensFullScreenUX15RecordingButton init] */

void FUN_1032d6c28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensFullScreenUX.RecordingButton",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032d6c54);
  (*pcVar1)();
}



/* Entry: 1032d6c88; end: 1032d6d3f; -[_TtC16LensFullScreenUX15RecordingButton .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032d6d24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032d6d28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d6c88(long param_1)

{
  func_0x0001032d73f4(param_1 + _DAT_112f55ce0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f55ce8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f55cf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f55cf8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f55d00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f55d08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f55d10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f55d18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f55d20);
  return;
}



/* Entry: 1032d6d40; end: 1032d6d5f;  */

void FUN_1032d6d40(void)

{
  func_0x000107c61168(&PTR_PTR_1128cb5f8);
  return;
}



/* Entry: 1032d6d60; end: 1032d6ebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d6d60(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f55d10);
  if (lVar3 != 0) {
    FUN_1032d73b4(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    uVar1 = param_1;
    func_0x000107c61174();
    func_0x000107c61174(lVar3);
    uVar2 = uVar1;
    func_0x000107c60118(uVar1,lVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(lVar3);
    if ((uVar2 & 1) != 0) goto LAB_1032d6e58;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112f55d08);
  if (lVar3 == 0) {
    return;
  }
  FUN_1032d73b4(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
  uVar1 = param_1;
  func_0x000107c61174();
  func_0x000107c61174(lVar3);
  uVar2 = uVar1;
  func_0x000107c60118(uVar1,lVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar3);
  if ((uVar2 & 1) == 0) {
    return;
  }
LAB_1032d6e58:
  uVar1 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (uVar1 != 0) {
    func_0x000107c61170();
    lVar3 = _DAT_112f55cf8;
    func_0x000107c4b8b8(param_1);
    func_0x000107c3ec60(*(undefined8 *)(unaff_x20 + lVar3));
    func_0x000107c609a4();
  }
  return;
}



/* Entry: 1032d6ec0; end: 1032d6f1b; -[_TtC16LensFullScreenUX15RecordingButton gestureRecognizerShouldBegin:] */

uint FUN_1032d6ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1032d6d60(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1032d6f1c; end: 1032d7027; -[_TtC16LensFullScreenUX15RecordingButton gestureRecognizer:shouldRequireFailureOfGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1032d6f1c(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112f55d10);
  if (lVar3 != 0) {
    FUN_1032d73b4(0,0x112daba28,&PTR__OBJC_CLASS___UIGestureRecognizer_1126cb6a0);
    func_0x000107c61174();
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar3);
    uVar1 = param_3;
    func_0x000107c60118(param_3,lVar3);
    func_0x000107c61170(lVar3);
    if ((uVar1 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
      func_0x000107c61168(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
      lVar3 = param_4;
      func_0x000107c6148c(param_4,puVar2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_1);
      return lVar3 != 0;
    }
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_1);
  }
  return false;
}



/* Entry: 1032d7028; end: 1032d702f; -[_TtC16LensFullScreenUX15RecordingButton gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1032d7028(void)

{
  return 1;
}



/* Entry: 1032d7030; end: 1032d70a7;  */

void FUN_1032d7030(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1032d73b4(0,param_1,param_2);
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



/* Entry: 1032d70a8; end: 1032d7207;  */

ulong FUN_1032d70a8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032d7208);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1032d7208(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1032d7204);
      (*pcVar1)();
    }
    FUN_1032d7298(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1032d7208; end: 1032d7297;  */

undefined *
FUN_1032d7208(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1032d7030(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1032d7298; end: 1032d73b3;  */

long FUN_1032d7298(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1032d73b0);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1032d73b4);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1032d73b4(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      FUN_1032d73b4(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1032d73ac);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1032d73b4; end: 1032d7417;  */

void FUN_1032d73b4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1032d7418; end: 1032d749b; -[_TtC16LensFullScreenUX26TouchDownGestureRecognizer touchesBegan:withEvent:] */

void FUN_1032d7418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000102be1030(0);
  uVar2 = uVar1;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar1,uVar2);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1032d7554(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1032d749c; end: 1032d74ef; -[_TtC16LensFullScreenUX26TouchDownGestureRecognizer initWithTarget:action:] */

void FUN_1032d749c(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined1 auStack_40 [32];
  
  if (param_3 != 0) {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(auStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x000107c60eb0("LensFullScreenUX.TouchDownGestureRecognizer",0x2b,"init(target:action:)",0x14
                      ,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032d74f0);
  (*pcVar1)();
}



/* Entry: 1032d74f0; end: 1032d7523;  */

void FUN_1032d74f0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1032d7524; end: 1032d7533; -[_TtC16LensFullScreenUX26TouchDownGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d7524(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f55d68));
  return;
}



/* Entry: 1032d7534; end: 1032d7553;  */

void FUN_1032d7534(void)

{
  func_0x000107c61168(&PTR_PTR_1128cb708);
  return;
}



/* Entry: 1032d7554; end: 1032d7643;  */

/* WARNING: Possible PIC construction at 0x0001032d760c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032d7628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032d7610) */
/* WARNING: Removing unreachable block (ram,0x0001032d762c) */
/* WARNING: Removing unreachable block (ram,0x0001032d7630) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d7554(long param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if ((lVar1 != 0) && (func_0x000102be0e84(), param_1 != 0)) {
    func_0x000107c4b8b8();
    uVar2 = *(ulong *)(unaff_x20 + _DAT_112f55d68);
    func_0x000107c4abec();
    func_0x000107c609a4();
    if ((uVar2 & 1) == 0) {
      func_0x000107c3ec60();
      func_0x000107c609a4();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c209fd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1032d7644; end: 1032d76e3;  */

void FUN_1032d7644(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001007d6c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1032d76e4; end: 1032d7763;  */

void FUN_1032d76e4(undefined1 *param_1)

{
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  *param_1 = 2;
  puStack_30 = param_1;
  func_0x0001043da1e4(FUN_1032d7908,auStack_40);
  puStack_30 = param_1;
  func_0x0001043da474(0x1032d7918,auStack_40);
  puStack_30 = param_1;
  func_0x0001043da518(0x1032d7940,auStack_40);
  puStack_30 = param_1;
  func_0x0001043da5bc(0x1032d7924,auStack_40);
  return;
}



/* Entry: 1032d7764; end: 1032d7907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d7764(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 uStack_41;
  
  lVar1 = *(long *)(param_1 + _DAT_113074f68);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4c238();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c4c940();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar4 = lVar2;
        func_0x000107c5d58c();
        func_0x000107c61180();
        func_0x000107c615e8(lVar2);
        if (lVar4 != 0) {
          func_0x0001000285a8(0x112d5a928,&UNK_10db22d90);
          lVar2 = lVar4;
          func_0x0001000b637c(lVar4);
          pcVar5 = FUN_1032d76e4;
          func_0x0001000d5158(FUN_1032d76e4,0,PTR___sSbN_11034dd40);
          func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
          func_0x000107c615e8(lVar1);
          func_0x000107c615e8(lVar3);
          func_0x000107c61170(lVar4);
          func_0x000107c61574(lVar2);
          func_0x000107c61574(pcVar5);
          return;
        }
      }
      func_0x000107c615e8(lVar1);
      lVar1 = lVar3;
    }
    func_0x000107c615e8(lVar1);
  }
  func_0x000104366fc4(0xd000000000000014,0x800000010f13b720,&UNK_110638728,&PTR_DAT_1106386b0);
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  uStack_41 = 0;
  func_0x000100854cb0(&uStack_41);
  return;
}



/* Entry: 1032d7908; end: 1032d7a17;  */

void FUN_1032d7908(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 1032d7a18; end: 1032d7b77;  */

undefined1  [16] FUN_1032d7a18(uint param_1)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1 >> 6 & 3;
  if (uVar1 == 0) {
    func_0x000107c602fc(0x20);
    func_0x000107c6142c(0xe000000000000000);
    uStack_30 = 0xd00000000000001d;
    uStack_28 = 0x800000010f13b760;
    bVar2 = (param_1 & 0xff) != 1;
    uVar3 = 0x6e6f6349736e656c;
    if (bVar2) {
      uVar3 = 0x726564726f636572;
    }
    uVar4 = 0xec000000796c6e4f;
    if (bVar2) {
      uVar4 = 0xef79616c7265764f;
    }
  }
  else {
    if (uVar1 != 1) {
      uStack_28 = 0xe800000000000000;
      uStack_30 = 0x6e6f747475426f6e;
      goto LAB_1032d7b68;
    }
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    uStack_30 = 0xd000000000000016;
    uStack_28 = 0x800000010f13b740;
    bVar2 = (param_1 & 1) == 0;
    uVar3 = 0x65757274;
    if (bVar2) {
      uVar3 = 0x65736c6166;
    }
    uVar4 = 0xe400000000000000;
    if (bVar2) {
      uVar4 = 0xe500000000000000;
    }
  }
  func_0x000107c5fb78(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x29,0xe100000000000000);
LAB_1032d7b68:
  auVar5._8_8_ = uStack_28;
  auVar5._0_8_ = uStack_30;
  return auVar5;
}



/* Entry: 1032d7b78; end: 1032d7bcf;  */

undefined1  [16] FUN_1032d7b78(void)

{
  byte bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  bVar1 = *unaff_x20;
  if (bVar1 >> 6 == 0) {
    func_0x000107c602fc(0x20);
    func_0x000107c6142c(0xe000000000000000);
    uStack_30 = 0xd00000000000001d;
    uStack_28 = 0x800000010f13b760;
    uVar3 = 0x6e6f6349736e656c;
    if (bVar1 != 1) {
      uVar3 = 0x726564726f636572;
    }
    uVar4 = 0xec000000796c6e4f;
    if (bVar1 != 1) {
      uVar4 = 0xef79616c7265764f;
    }
  }
  else {
    if (bVar1 >> 6 != 1) {
      uStack_28 = 0xe800000000000000;
      uStack_30 = 0x6e6f747475426f6e;
      goto LAB_1032d7b68;
    }
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    uStack_30 = 0xd000000000000016;
    uStack_28 = 0x800000010f13b740;
    bVar2 = (bVar1 & 1) == 0;
    uVar3 = 0x65757274;
    if (bVar2) {
      uVar3 = 0x65736c6166;
    }
    uVar4 = 0xe400000000000000;
    if (bVar2) {
      uVar4 = 0xe500000000000000;
    }
  }
  func_0x000107c5fb78(uVar3,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c5fb78(0x29,0xe100000000000000);
LAB_1032d7b68:
  auVar5._8_8_ = uStack_28;
  auVar5._0_8_ = uStack_30;
  return auVar5;
}



/* Entry: 1032d7bd0; end: 1032d80e7;  */

void FUN_1032d7bd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001000d224c(&uStack_70);
  func_0x000107c61428(param_7 + 0x10,auStack_88,0,0);
  lVar1 = param_7 + 0x10;
  func_0x000107c61618(lVar1);
  func_0x00010434c30c(param_2,param_3,param_4,param_5,uStack_70,uStack_68,lVar1,
                      *(undefined8 *)(param_7 + 0x18));
  func_0x000107c615e8(uStack_70);
  func_0x000107c615e8(lVar1);
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 1032d80e8; end: 1032d81eb;  */

void FUN_1032d80e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 uStack_51;
  undefined8 uStack_50;
  long lStack_48;
  
  uVar3 = *unaff_x20;
  uStack_50 = 0;
  lStack_48 = -0x2000000000000000;
  func_0x000107c602fc(0x19);
  func_0x000107c5fb78(0xd000000000000017,0x800000010f13b780);
  uStack_51 = (undefined1)param_1;
  func_0x000107c603d0(&uStack_51,&uStack_50,&UNK_11075d960,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  lVar1 = lStack_48;
  func_0x0001007d6c6c(1,uStack_50,lStack_48,uVar3,&PTR_DAT_110638670);
  func_0x000107c6142c(lVar1);
  func_0x0001000d224c(&uStack_50);
  lVar1 = lStack_48;
  uVar3 = uStack_50;
  uVar2 = uStack_50;
  func_0x000107c614f0(uStack_50);
  (**(code **)(lVar1 + 0x58))(param_1,param_2,uVar2,lVar1);
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 1032d81ec; end: 1032d8247;  */

void FUN_1032d81ec(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001032d8364(unaff_x20 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032d8248; end: 1032d830f;  */

void FUN_1032d8248(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0(uStack_40);
  (**(code **)(lStack_38 + 0x50))(param_1,uVar1,lStack_38);
  func_0x000107c615e8(uStack_40);
  return;
}



/* Entry: 1032d8310; end: 1032d83c3;  */

void FUN_1032d8310(void)

{
  long lStack_30;
  long lStack_28;
  
  func_0x000104875e28(&lStack_30);
  if (lStack_30 != 0) {
    func_0x000107c614f0(lStack_30);
    (**(code **)(lStack_28 + 0x40))();
    func_0x000107c615e8(lStack_30);
  }
  return;
}



/* Entry: 1032d83c4; end: 1032d85af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d83c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *plVar9;
  long lStack_70;
  long lStack_68;
  
  plVar9 = &lStack_70;
  lVar4 = 0;
  FUN_1032d6d40();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar1 = lVar5 + _DAT_112f55ce0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(lVar5 + _DAT_112f55d00) = 0;
  *(undefined8 *)(lVar5 + _DAT_112f55d08) = 0;
  *(undefined8 *)(lVar5 + _DAT_112f55d10) = 0;
  lVar1 = _DAT_112f55d20;
  func_0x000107c61614(lVar5 + _DAT_112f55d20,0);
  lVar3 = _DAT_112f55d28;
  func_0x000107c61614(lVar5 + _DAT_112f55d28,0);
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f55d30);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  func_0x000107c61604(lVar5 + lVar3,param_2);
  func_0x000107c61604(lVar5 + lVar1,param_3);
  *(undefined8 *)(lVar5 + _DAT_112f55d18) = param_4;
  *(undefined8 *)(lVar5 + _DAT_112f55ce8) = param_5;
  puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c61174(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c453e4();
  lVar1 = _DAT_112f55cf8;
  *(undefined **)(lVar5 + _DAT_112f55cf8) = puVar6;
  func_0x000107c55528();
  uVar7 = *(undefined8 *)(lVar5 + lVar1);
  func_0x000107c61174(uVar7);
  uVar8 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f13b820);
  func_0x000107c520f4(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  puVar6 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + _DAT_112f55cf0) = puVar6;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *param_1 = plVar9;
  return;
}



/* Entry: 1032d85b0; end: 1032d8653;  */

void FUN_1032d85b0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x0001032d2a1c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  func_0x000107c61614(lVar1 + 0x10,0);
  func_0x000107c61614(lVar1 + 0x20,0);
  *(undefined8 *)(lVar1 + 0x30) = 0;
  func_0x000107c61604(lVar1 + 0x20,param_2);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  FUN_1032d27dc();
  func_0x000107c61170(param_2);
  *param_1 = lVar1;
  return;
}



/* Entry: 1032d8654; end: 1032d87af;  */

void FUN_1032d8654(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  if (lRam0000000112f55a70 != -1) {
    func_0x000107c61568(0x112f55a70,FUN_1032d220c);
  }
  uVar5 = uRam0000000113807218;
  uVar4 = uRam0000000113807210;
  uVar3 = uRam0000000113807208;
  uVar2 = uRam0000000113807200;
  uVar1 = uRam00000001138071f8;
  uVar8 = uRam00000001138071f0;
  lVar6 = 0;
  func_0x0001032d2474();
  func_0x000107c613fc();
  func_0x000107c61614(lVar6 + 0x10,0);
  func_0x000107c61604(lVar6 + 0x10,param_2);
  *(undefined8 *)(lVar6 + 0x20) = uVar8;
  *(undefined8 *)(lVar6 + 0x28) = uVar1;
  *(undefined8 *)(lVar6 + 0x30) = uVar2;
  *(undefined8 *)(lVar6 + 0x38) = uVar3;
  *(undefined8 *)(lVar6 + 0x40) = uVar4;
  *(undefined8 *)(lVar6 + 0x48) = uVar5;
  *(undefined8 *)(lVar6 + 0x18) = param_3;
  puVar7 = PTR_PTR_1126b09c0;
  func_0x000107c610f8();
  func_0x000107c61438(uVar1,2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c5fadc(uVar8,uVar1);
  func_0x000107c48cac();
  func_0x000107c61170(uVar8);
  *(undefined **)(lVar6 + 0x50) = puVar7;
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c6142c(uVar1);
  *param_1 = lVar6;
  return;
}



/* Entry: 1032d87b0; end: 1032d8b57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d87b0(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  long *plVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long unaff_x20;
  long *plVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uStack_98;
  long alStack_90 [3];
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x0001000d224c(alStack_90);
  lVar2 = alStack_90[0];
  func_0x0001000d224c(alStack_90);
  *(undefined8 *)(alStack_90[0] + 0x18) = param_3;
  func_0x000107c61604(alStack_90[0] + 0x10,param_2);
  lVar4 = lVar2 + _DAT_112f55ce0;
  *(undefined8 *)(lVar4 + 8) = param_5;
  func_0x000107c61604(lVar4,param_4);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  func_0x0001000a8868(unaff_x20 + 0x38,uVar1);
  (**(code **)(lVar4 + 8))(uVar1,lVar4);
  func_0x000107c6157c(alStack_90[0]);
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_68);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001000d224c(alStack_90);
  func_0x0001000a8868(alStack_90,uStack_78);
  uVar9 = uStack_78;
  (**(code **)(lStack_70 + 0x10))(uStack_78,lStack_70);
  lVar3 = 0;
  func_0x0001032d45fc();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x28) = 0;
  func_0x000107c61614(lVar4 + 0x30,0);
  *(undefined8 *)(lVar4 + 0x48) = 0;
  func_0x000107c61614(lVar4 + 0x40,0);
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined1 *)(lVar4 + 0x58) = 0;
  pcVar5 = "FullScreenUIController";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar4 + 0x60) = pcVar5;
  uVar6 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar4 + 0x68) = uVar6;
  func_0x000107c61604(lVar4 + 0x30,uVar1);
  *(long *)(lVar4 + 0x18) = alStack_90[0];
  *(long *)(lVar4 + 0x20) = lVar2;
  *(undefined8 *)(lVar4 + 0x10) = uStack_68;
  *(undefined8 *)(lVar4 + 0x48) = param_9;
  func_0x000107c61604(lVar4 + 0x40,param_8);
  *(byte *)(lVar4 + 0x38) = (byte)uVar9 & 1;
  uStack_98 = 0;
  func_0x000107c6157c(alStack_90[0]);
  func_0x000107c61174(lVar2);
  func_0x000107c6157c(uStack_68);
  puVar7 = &uStack_98;
  func_0x0001006c71a4(puVar7);
  puVar8 = puVar7;
  func_0x0001032d8c20();
  func_0x0001000c2068();
  func_0x000107c61574(puVar7);
  uVar9 = 0;
  func_0x0001032d8cd4(0);
  pcVar10 = FUN_1032d43e0;
  func_0x0001000d5158(FUN_1032d43e0,0,uVar9);
  func_0x000107c61574(puVar8);
  plVar15 = *(long **)(lVar4 + 0x60);
  plVar11 = plVar15;
  func_0x000107c615f0();
  func_0x000100471e0c();
  func_0x000107c61574(pcVar10);
  func_0x000107c615e8(plVar15);
  puVar12 = &UNK_1106387b0;
  func_0x000107c613fc(&UNK_1106387b0,0x18,7);
  func_0x000107c61644(puVar12 + 0x10,lVar4);
  puVar13 = &UNK_1106387d8;
  func_0x000107c613fc(&UNK_1106387d8,0x20,7);
  *(undefined8 *)(puVar13 + 0x18) = param_7;
  func_0x000107c61614(puVar13 + 0x10,param_6);
  puVar14 = &UNK_110638800;
  func_0x000107c613fc(&UNK_110638800,0x28,7);
  *(undefined **)(puVar14 + 0x10) = puVar12;
  *(undefined8 *)(puVar14 + 0x18) = uVar17;
  *(undefined **)(puVar14 + 0x20) = puVar13;
  pcVar16 = *(code **)(*plVar11 + 0x60);
  func_0x000107c61174(uVar17);
  pcVar10 = FUN_1032d8d18;
  puVar12 = puVar14;
  (*pcVar16)(FUN_1032d8d18);
  func_0x000107c61574(plVar11);
  func_0x000107c61574(puVar14);
  func_0x000107c614f0(pcVar10);
  uVar17 = *(undefined8 *)(lVar4 + 0x68);
  pcVar16 = *(code **)(puVar12 + 0x10);
  func_0x000107c6157c(uVar17);
  (*pcVar16)();
  func_0x000107c61170(uVar1);
  func_0x000107c61574(alStack_90[0]);
  func_0x000107c61170(lVar2);
  func_0x000107c61574(uStack_68);
  func_0x000107c615e8(pcVar10);
  func_0x000107c61574(uVar17);
  func_0x0001000834e4(alStack_90);
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110638470;
  func_0x000107c61170(lVar2);
  func_0x000107c61574(alStack_90[0]);
  *param_1 = lVar4;
  return;
}



/* Entry: 1032d8b58; end: 1032d8bcb;  */

void FUN_1032d8b58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x0001000834e4(unaff_x20 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032d8bcc; end: 1032d8c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d8bcc(undefined8 param_1,undefined8 param_2)

{
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  func_0x000107c55258(*(undefined8 *)(lStack_28 + _DAT_112f55cf0),param_2,param_1);
  func_0x000107c61170(lStack_28);
  return;
}



/* Entry: 1032d8c90; end: 1032d8d17;  */

void FUN_1032d8c90(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f55f30 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001032d8cd4(0xff);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112f55f30 = puVar2;
  return;
}



/* Entry: 1032d8d18; end: 1032d8d23;  */

void FUN_1032d8d18(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *param_1;
  func_0x000107c61428(lVar1 + 0x10,auStack_68,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar3 + 0x10,auStack_80,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618(lVar3);
    FUN_1032d4a34(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar4);
    func_0x000107c61174();
    uVar2 = uVar5;
    FUN_1032d4a5c();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(lVar3);
    uVar5 = *(undefined8 *)(lVar1 + 0x50);
    *(undefined8 *)(lVar1 + 0x50) = uVar2;
    func_0x000107c61174(uVar2);
    FUN_1032d4374(uVar5);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 1032d8d24; end: 1032d8e7f;  */

void FUN_1032d8d24(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long lStack_48;
  
  uVar4 = *unaff_x20;
  uVar3 = 0x4965727574706163;
  lVar2 = 1;
  func_0x0001007d6c6c(1,0x4965727574706163,0xec0000006567616d,uVar4,&PTR_DAT_110638650);
  func_0x0001000d224c(&lStack_48);
  lVar1 = lStack_48;
  if (lStack_48 == 0) {
    func_0x000104366fc4(0xd000000000000032,0x800000010f13b890,uVar4,&PTR_DAT_110638650);
  }
  else {
    func_0x00010011df08();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar3);
    }
    func_0x000107c5bae0(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar2);
  }
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    func_0x000104366fc4(0xd000000000000032,0x800000010f13b890,uVar4,&PTR_DAT_110638650);
  }
  else {
    func_0x000107c3f604(lStack_48);
    func_0x000107c615e8(lStack_48);
  }
  return;
}



/* Entry: 1032d8e80; end: 1032d9213;  */

void FUN_1032d8e80(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long lStack_38;
  
  uVar4 = *unaff_x20;
  func_0x0001007d6c6c(1,0x6365527472617473,0xee00676e6964726f,uVar4,&PTR_DAT_110638650);
  puVar3 = PTR_PTR_1126affa8;
  func_0x000107c61168();
  func_0x000107c5aa04();
  func_0x000107c61180();
  if (puVar3 != (undefined *)0x0) {
    func_0x000107c4e57c();
    func_0x000107c61170(puVar3);
    func_0x0001000d224c(&lStack_38);
    lVar1 = lStack_38;
    if (lStack_38 == 0) {
      func_0x000104366fc4(0xd000000000000032,0x800000010f13b890,uVar4,&PTR_DAT_110638650);
    }
    else {
      func_0x000107c5bc34(lStack_38);
      func_0x000107c615e8(lVar1);
    }
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 == 0) {
      func_0x000104366fc4(0xd000000000000032,0x800000010f13b890,uVar4,&PTR_DAT_110638650);
    }
    else {
      func_0x000107c4edf0(lStack_38);
      func_0x000107c615e8(lStack_38);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1032d8fd4);
  (*pcVar2)();
}



/* Entry: 1032d9214; end: 1032d925f;  */

void FUN_1032d9214(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032d9260; end: 1032d92bf;  */

void FUN_1032d9260(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_40 = param_1;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_1032d92d0,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 1032d92c0; end: 1032d92cf;  */

void FUN_1032d92c0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  long lStack_48;
  
  uVar4 = *unaff_x20;
  uVar3 = 0x4965727574706163;
  lVar2 = 1;
  func_0x0001007d6c6c(1,0x4965727574706163,0xec0000006567616d,uVar4,&PTR_DAT_110638650);
  func_0x0001000d224c(&lStack_48);
  lVar1 = lStack_48;
  if (lStack_48 == 0) {
    func_0x000104366fc4(0xd000000000000032,0x800000010f13b890,uVar4,&PTR_DAT_110638650);
  }
  else {
    func_0x00010011df08();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar3);
    }
    func_0x000107c5bae0(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar2);
  }
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    func_0x000104366fc4(0xd000000000000032,0x800000010f13b890,uVar4,&PTR_DAT_110638650);
  }
  else {
    func_0x000107c3f604(lStack_48);
    func_0x000107c615e8(lStack_48);
  }
  return;
}



/* Entry: 1032d92d0; end: 1032d9313;  */

void FUN_1032d92d0(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61574(*param_1);
  *param_1 = uVar1;
  func_0x000107c6157c(uVar1);
  return;
}



/* Entry: 1032d9314; end: 1032d95c3;  */

void FUN_1032d9314(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x0001007d6c6c(1,0x4965727574706163,0xec0000006567616d,*unaff_x20,&PTR_DAT_110638630);
  uVar1 = unaff_x20[2];
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&lStack_30);
  func_0x000107c61574(uVar1);
  if (lStack_30 != 0) {
    func_0x000107c614f0(lStack_30);
    (**(code **)(lStack_28 + 0x30))();
    func_0x000107c615e8(lStack_30);
  }
  return;
}



/* Entry: 1032d95c4; end: 1032d9607;  */

void FUN_1032d95c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032d9608; end: 1032d9667;  */

void FUN_1032d9608(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(FUN_1032d9678,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 1032d9668; end: 1032d9677;  */

void FUN_1032d9668(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long lStack_30;
  long lStack_28;
  
  func_0x0001007d6c6c(1,0x4965727574706163,0xec0000006567616d,*unaff_x20,&PTR_DAT_110638630);
  uVar1 = unaff_x20[2];
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&lStack_30);
  func_0x000107c61574(uVar1);
  if (lStack_30 != 0) {
    func_0x000107c614f0(lStack_30);
    (**(code **)(lStack_28 + 0x30))();
    func_0x000107c615e8(lStack_30);
  }
  return;
}



/* Entry: 1032d9678; end: 1032d96bb;  */

void FUN_1032d9678(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c615e8(*param_1);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  func_0x000107c615f0(uVar1);
  return;
}



/* Entry: 1032d96bc; end: 1032d9ac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1032d96bc(ulong param_1)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  if (param_1 == 0) {
    uVar5 = 0x736e656c206f6e;
  }
  else {
    func_0x000107c61174();
    uVar5 = param_1;
    func_0x000107c4a4d8();
    if ((uVar5 & 1) == 0) {
      func_0x000100768c7c(unaff_x20 + _DAT_112f56178,&uStack_88);
      func_0x0001000a8868(&uStack_88,lStack_70);
      lVar6 = lStack_70;
      (**(code **)(lStack_68 + 8))();
      func_0x0001000834e4(&uStack_88);
      uVar5 = param_1;
      func_0x000107c4f220();
      func_0x000107c61180();
      if (uVar5 == 0) {
        uVar3 = 0;
        uVar11 = 0;
        lVar10 = 0;
      }
      else {
        uVar11 = uVar5;
        lVar10 = lStack_68;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        uVar5 = uVar11;
        func_0x000100077018(uVar11,lVar10,lVar6);
        uVar3 = (uint)uVar5;
      }
      uVar5 = param_1;
      func_0x000107c4a63c();
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f56130);
      lVar9 = ((undefined8 *)(unaff_x20 + _DAT_112f56130))[1];
      func_0x000107c614f0(uVar7);
      uVar8 = (ulong)(((uint)uVar5 | uVar3) & 1);
      uVar5 = param_1;
      (**(code **)(lVar9 + 0x20))(param_1,uVar8,uVar7,lVar9);
      if (uVar8 == 0) {
        uVar5 = param_1;
        func_0x000107c4a63c();
        if ((int)uVar5 == 0) {
          lVar9 = *(long *)(lVar6 + 0x10);
          func_0x000107c6142c(lVar6);
          if (lVar9 == 0) {
            func_0x000107c6142c(lVar10);
          }
          else if (lVar10 != 0) {
            uStack_88 = 0;
            uStack_80 = 0xe000000000000000;
            func_0x000107c602fc(0x37);
            func_0x000107c5fb78(0xd000000000000014,0x800000010f13b960);
            func_0x000107c5fb78(uVar11,lVar10);
            func_0x000107c5fb78(0xd00000000000001f,0x800000010f13b980);
            bVar2 = (uVar3 & 1) == 0;
            uVar7 = 0x65757274;
            if (bVar2) {
              uVar7 = 0x65736c6166;
            }
            uVar1 = 0xe400000000000000;
            if (bVar2) {
              uVar1 = 0xe500000000000000;
            }
            func_0x000107c5fb78(uVar7,uVar1);
            func_0x000107c6142c(uVar1);
            uVar7 = uStack_80;
            func_0x0001007d6c6c(1,uStack_88,uStack_80,lVar4,&PTR_DAT_1106385d0);
            func_0x000107c6142c(uVar7);
            uVar5 = param_1;
            func_0x000107c4a73c();
            if ((int)uVar5 != 0) {
              func_0x000107c61170(param_1);
              func_0x000107c6142c(lVar10);
              return 1;
            }
            uVar5 = param_1;
            func_0x000107c49b94();
            if ((int)uVar5 != 0) {
              func_0x000107c61170(param_1);
              func_0x000107c6142c(lVar10);
              return 2;
            }
            if ((uVar3 & 1) != 0) {
              func_0x000107c6142c(lVar10);
              func_0x000107c61170(param_1);
              return 0;
            }
            uStack_88 = 0;
            uStack_80 = 0xe000000000000000;
            func_0x000107c602fc(0x2b);
            func_0x000107c6142c(uStack_80);
            uStack_88 = 0xd000000000000017;
            uStack_80 = 0x800000010f13b9a0;
            func_0x000107c5fb78(uVar11,lVar10);
            func_0x000107c6142c(lVar10);
            func_0x000107c5fb78(0xd000000000000012,0x800000010f13b9c0);
            func_0x000107c61170(param_1);
            return uStack_88;
          }
          func_0x000107c61170(param_1);
          uVar5 = 0xd000000000000043;
        }
        else {
          func_0x000107c6142c(lVar6);
          func_0x000107c6142c(lVar10);
          uVar5 = param_1;
          func_0x000107c5db58(param_1);
          func_0x000107c61170(param_1);
          uVar5 = uVar5 & 0xffffffff;
        }
      }
      else {
        func_0x000107c6142c(lVar6);
        func_0x000107c61170(param_1);
        func_0x000107c6142c(lVar10);
      }
    }
    else {
      func_0x000107c61170(param_1);
      uVar5 = 0x65726f736e6f7073;
    }
  }
  return uVar5;
}



/* Entry: 1032d9ac8; end: 1032d9bb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d9ac8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_38;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f56108);
  func_0x000107c6157c(uVar3);
  func_0x0001000c74f0(&lStack_38);
  func_0x000107c61574(uVar3);
  lVar1 = lStack_38;
  if (lStack_38 != 0) {
    func_0x0001000d224c(&lStack_38);
    func_0x000107c61574(lVar1);
    if (lStack_38 != 0) {
      func_0x000107c50584(lStack_38);
      func_0x0001007d6c6c(1,0x6f7a207465736572,0xed0000676e696d6f,lVar2,&PTR_DAT_1106385d0);
      func_0x000107c615e8(lStack_38);
      return;
    }
  }
  func_0x000104366fc4(0xd00000000000001d,0x800000010f13b8d0,lVar2,&PTR_DAT_1106385d0);
  return;
}



/* Entry: 1032d9bb8; end: 1032d9c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1032d9bb8(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  if (*(char *)(unaff_x20 + _DAT_112f561c0) == '\x01') {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f560e8);
    if (lVar2 != 0) {
      func_0x000107c6157c(lVar2);
      func_0x0001000d224c(&uStack_30);
      func_0x000107c61574(lVar2);
      goto LAB_1032d9c50;
    }
    func_0x000104366fc4(0xd000000000000017,0x800000010f13b8f0,lVar1,&PTR_DAT_1106385d0);
  }
  uStack_30 = 0;
  uStack_28 = 0;
LAB_1032d9c50:
  auVar3._8_8_ = uStack_28;
  auVar3._0_8_ = uStack_30;
  return auVar3;
}



/* Entry: 1032d9c60; end: 1032d9c7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1032d9c60(void)

{
  long unaff_x20;
  
  return (*(ushort *)(unaff_x20 + _DAT_112f56090) & 0x2000) == 0;
}



/* Entry: 1032d9c7c; end: 1032d9ca7;  */

bool FUN_1032d9c7c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_1032d96bc();
  func_0x0001032d9cb0();
  return (param_3 & 0xff) == 0;
}



/* Entry: 1032d9ca8; end: 1032d9cc3;  */

/* WARNING: Removing unreachable block (ram,0x0001032e0444) */
/* WARNING: Removing unreachable block (ram,0x0001032e043c) */
/* WARNING: Removing unreachable block (ram,0x0001032e0454) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d9ca8(undefined8 param_1,undefined **param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined **ppuStack_a8;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar7 = unaff_x20;
  func_0x000107c614f0();
  puVar12 = *(undefined **)(unaff_x20 + _DAT_112f56098);
  puVar8 = puVar12;
  func_0x000107c61174(puVar12);
  FUN_1032d96bc();
  ppuVar10 = param_2;
  func_0x000107c61170(puVar8);
  if ((((uint)param_3 & 0xff) < 2) ||
     (param_2 == (undefined **)0x0 && !CARRY8((long)param_2 - 1,(ulong)((undefined *)0x1 < puVar12))
     )) {
    cVar2 = *(char *)(unaff_x20 + _DAT_112f560a8);
    puVar8 = puVar12;
    ppuStack_a8 = param_2;
    if (cVar2 == '\n') {
      func_0x0001007d6c6c(1,0xd00000000000001a,0x800000010f13bfb0,lVar7,&PTR_DAT_1106385d0);
      FUN_1032e077c(puVar12,param_2,param_3);
    }
    else {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x1b);
      func_0x000107c6142c(ppuStack_90);
      puStack_98 = (undefined *)0xd000000000000019;
      ppuStack_90 = (undefined **)0x800000010f13bfd0;
      func_0x00010434e040(cVar2);
      func_0x000107c5fb78();
      func_0x000107c6142c(ppuVar10);
      ppuVar10 = ppuStack_90;
      func_0x0001007d6c6c(1,puStack_98,ppuStack_90,lVar7,&PTR_DAT_1106385d0);
      func_0x000107c6142c(ppuVar10);
      FUN_1032e05c4(puVar12,param_2,param_3,cVar2);
    }
  }
  else {
    func_0x0001007d6c6c(1,0xd000000000000040,0x800000010f13bf00,lVar7,&PTR_DAT_1106385d0);
    ppuStack_a8 = &PTR_DAT_110638e10;
    puVar8 = &UNK_110638e00;
  }
  puStack_98 = (undefined *)0x0;
  ppuStack_90 = (undefined **)0xe000000000000000;
  func_0x000107c602fc(0x40);
  puStack_70 = puStack_98;
  uStack_68 = ppuStack_90;
  func_0x000107c5fb78(0x6574617473206e4f,0xea0000000000203a);
  lVar5 = _DAT_112f56090;
  puVar4 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
  puVar3 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
  puStack_98 = (undefined *)CONCAT62(puStack_98._2_6_,*(undefined2 *)(unaff_x20 + _DAT_112f56090));
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_1106390f8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf50);
  puStack_98 = (undefined *)CONCAT71(puStack_98._1_7_,0xc1);
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_110639058,puVar3,puVar4);
  func_0x000107c5fb78(0x74616320726f6620,0xef203a79726f6765);
  uStack_88 = (undefined1)param_3;
  puStack_98 = puVar12;
  ppuStack_90 = param_2;
  func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_11075e238,puVar3,puVar4);
  func_0x0001032d9cb0(puVar12,param_2,param_3 & 0xffffffff);
  func_0x000107c5fb78(0x72656c646e616820,0xee00203a65707954);
  uVar11 = 0;
  func_0x000107c60714(puVar8,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar11);
  uVar11 = uStack_68;
  func_0x0001007d6c6c(1,puStack_70,uStack_68,lVar7,&PTR_DAT_1106385d0);
  func_0x000107c6142c(uVar11);
  uVar9 = (ulong)*(ushort *)(unaff_x20 + lVar5);
  FUN_1032e1610(uVar9,0xc1,puVar8,ppuStack_a8);
  uVar6 = (uint)uVar9;
  if (((uint)(uVar9 >> 0x18) & 0xff) == 1) {
    if ((uVar6 & 0xff) == 1) {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x2d);
      func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf70);
      func_0x000107c5fb78(0x706e6920726f6620,0xec000000203a7475);
      puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar12 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,0xc1);
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_110639058,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x74617473206e6920,0xeb00000000203a65);
      puStack_70 = (undefined *)CONCAT62(puStack_70._2_6_,*(undefined2 *)(unaff_x20 + lVar5));
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_1106390f8,puVar12,puVar3);
      func_0x000107c5fb78(0x72656c646e616820,0xee00203a65707954);
      uVar11 = 0;
      func_0x000107c60714(puVar8,0);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar11);
      uVar11 = 3;
    }
    else {
      puStack_98 = (undefined *)0x0;
      ppuStack_90 = (undefined **)0xe000000000000000;
      func_0x000107c602fc(0x1d);
      func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf90);
      func_0x000107c5fb78(0x706e6920726f6620,0xec000000203a7475);
      puVar12 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
      puVar8 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
      puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,0xc1);
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_110639058,
                          PTR___ss26DefaultStringInterpolationVN_11034ec00,
                          PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
      func_0x000107c5fb78(0x74617473206e6920,0xeb00000000203a65);
      puStack_70 = (undefined *)CONCAT62(puStack_70._2_6_,*(undefined2 *)(unaff_x20 + lVar5));
      func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_1106390f8,puVar8,puVar12);
      uVar11 = 1;
    }
    ppuVar10 = ppuStack_90;
    func_0x0001007d6c6c(uVar11,puStack_98,ppuStack_90,lVar7,&PTR_DAT_1106385d0);
    func_0x000107c6142c(ppuVar10);
  }
  else {
    FUN_1032e0888(uVar6 >> 0x10);
    func_0x000100768c7c(unaff_x20 + _DAT_112f56178,&puStack_98);
    func_0x0001000a8868(&puStack_98,uStack_80);
    (**(code **)(lStack_78 + 0x10))(uStack_80,lStack_78);
    func_0x0001000834e4(&puStack_98);
    if (((*(ushort *)(unaff_x20 + lVar5) >> 0xd & 1) != 0) &&
       ((*(byte *)(unaff_x20 + _DAT_112f561c0) & 1) != 0)) {
      uVar1 = uVar6 | 0x1000;
      if (((uVar9 & 0x3000) == 0 & *(byte *)(unaff_x20 + _DAT_112f561c8)) == 0) {
        uVar1 = uVar6;
      }
      uVar9 = (ulong)uVar1;
    }
    FUN_1032e0bc8(uVar9);
  }
  return;
}



/* Entry: 1032d9cc4; end: 1032d9d6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d9cc4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f56130))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f56130));
  (**(code **)(lVar2 + 0x18))();
  lVar1 = _DAT_112f560d0;
  lVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f560d0) != 0) {
    func_0x000107c498f8();
    lVar2 = *(long *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170();
  FUN_1032d9bb8();
  if (lVar2 != 0) {
    func_0x0001032d8228(0);
    FUN_1032d8310();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 1032d9d6c; end: 1032d9d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1032d9d6c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f56098);
  func_0x000107c61174(uVar1);
  return uVar1;
}



/* Entry: 1032d9d9c; end: 1032d9eb3;  */

/* WARNING: Removing unreachable block (ram,0x0001032e0444) */
/* WARNING: Removing unreachable block (ram,0x0001032e05b0) */
/* WARNING: Removing unreachable block (ram,0x0001032e0454) */
/* WARNING: Removing unreachable block (ram,0x0001032e05c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032d9d9c(byte param_1)

{
  uint uVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  long unaff_x20;
  undefined *puVar16;
  undefined **ppuStack_a8;
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar10 = unaff_x20;
  func_0x000107c614f0();
  bVar3 = *(byte *)(unaff_x20 + _DAT_112f560a0);
  *(byte *)(unaff_x20 + _DAT_112f560a0) = param_1;
  if ((param_1 & 1) != bVar3) {
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(0xe000000000000000);
    bVar8 = (param_1 & 1) == 0;
    uVar15 = 0x65757274;
    if (bVar8) {
      uVar15 = 0x65736c6166;
    }
    uVar2 = 0xe400000000000000;
    if (bVar8) {
      uVar2 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar15,uVar2);
    func_0x000107c6142c(uVar2);
    ppuVar13 = (undefined **)0xd000000000000017;
    uVar12 = 0x800000010f13bee0;
    func_0x0001007d6c6c(1,0xd000000000000017,0x800000010f13bee0,lVar10,&PTR_DAT_1106385d0);
    func_0x000107c6142c(0x800000010f13bee0);
    lVar10 = unaff_x20;
    func_0x000107c614f0(unaff_x20);
    puVar16 = *(undefined **)(unaff_x20 + _DAT_112f56098);
    puVar11 = puVar16;
    func_0x000107c61174(puVar16);
    FUN_1032d96bc();
    ppuVar14 = ppuVar13;
    func_0x000107c61170(puVar11);
    if ((((uint)uVar12 & 0xff) < 2) ||
       (ppuVar13 == (undefined **)0x0 &&
        !CARRY8((long)ppuVar13 - 1,(ulong)((undefined *)0x1 < puVar16)))) {
      cVar4 = *(char *)(unaff_x20 + _DAT_112f560a8);
      puVar11 = puVar16;
      ppuStack_a8 = ppuVar13;
      if (cVar4 == '\n') {
        func_0x0001007d6c6c(1,0xd00000000000001a,0x800000010f13bfb0,lVar10,&PTR_DAT_1106385d0);
        FUN_1032e077c(puVar16,ppuVar13,uVar12);
      }
      else {
        puStack_98 = (undefined *)0x0;
        ppuStack_90 = (undefined **)0xe000000000000000;
        func_0x000107c602fc(0x1b);
        func_0x000107c6142c(ppuStack_90);
        puStack_98 = (undefined *)0xd000000000000019;
        ppuStack_90 = (undefined **)0x800000010f13bfd0;
        func_0x00010434e040(cVar4);
        func_0x000107c5fb78();
        func_0x000107c6142c(ppuVar14);
        ppuVar14 = ppuStack_90;
        func_0x0001007d6c6c(1,puStack_98,ppuStack_90,lVar10,&PTR_DAT_1106385d0);
        func_0x000107c6142c(ppuVar14);
        FUN_1032e05c4(puVar16,ppuVar13,uVar12,cVar4);
      }
    }
    else {
      func_0x0001007d6c6c(1,0xd000000000000040,0x800000010f13bf00,lVar10,&PTR_DAT_1106385d0);
      ppuStack_a8 = &PTR_DAT_110638e10;
      puVar11 = &UNK_110638e00;
    }
    puStack_98 = (undefined *)0x0;
    ppuStack_90 = (undefined **)0xe000000000000000;
    func_0x000107c602fc(0x40);
    puStack_70 = puStack_98;
    uStack_68 = ppuStack_90;
    func_0x000107c5fb78(0x6574617473206e4f,0xea0000000000203a);
    lVar7 = _DAT_112f56090;
    puVar6 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
    puVar5 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
    puStack_98 = (undefined *)CONCAT62(puStack_98._2_6_,*(undefined2 *)(unaff_x20 + _DAT_112f56090))
    ;
    func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_1106390f8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf50);
    puStack_98 = (undefined *)(CONCAT71(puStack_98._1_7_,param_1) & 0xffffffffffffff01);
    func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_110639058,puVar5,puVar6);
    func_0x000107c5fb78(0x74616320726f6620,0xef203a79726f6765);
    uStack_88 = (undefined1)uVar12;
    puStack_98 = puVar16;
    ppuStack_90 = ppuVar13;
    func_0x000107c603d0(&puStack_98,&puStack_70,&UNK_11075e238,puVar5,puVar6);
    func_0x0001032d9cb0(puVar16,ppuVar13,uVar12 & 0xffffffff);
    func_0x000107c5fb78(0x72656c646e616820,0xee00203a65707954);
    uVar15 = 0;
    func_0x000107c60714(puVar11,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar15);
    uVar15 = uStack_68;
    func_0x0001007d6c6c(1,puStack_70,uStack_68,lVar10,&PTR_DAT_1106385d0);
    func_0x000107c6142c(uVar15);
    uVar12 = (ulong)*(ushort *)(unaff_x20 + lVar7);
    FUN_1032e1610(uVar12,param_1 & 1,puVar11,ppuStack_a8);
    uVar9 = (uint)uVar12;
    if (((uint)(uVar12 >> 0x18) & 0xff) == 1) {
      if ((uVar9 & 0xff) == 1) {
        puStack_98 = (undefined *)0x0;
        ppuStack_90 = (undefined **)0xe000000000000000;
        func_0x000107c602fc(0x2d);
        func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf70);
        func_0x000107c5fb78(0x706e6920726f6620,0xec000000203a7475);
        puVar5 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
        puVar16 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
        puStack_70 = (undefined *)(CONCAT71(puStack_70._1_7_,param_1) & 0xffffffffffffff01);
        func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_110639058,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000107c5fb78(0x74617473206e6920,0xeb00000000203a65);
        puStack_70 = (undefined *)CONCAT62(puStack_70._2_6_,*(undefined2 *)(unaff_x20 + lVar7));
        func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_1106390f8,puVar16,puVar5);
        func_0x000107c5fb78(0x72656c646e616820,0xee00203a65707954);
        uVar15 = 0;
        func_0x000107c60714(puVar11,0);
        func_0x000107c5fb78();
        func_0x000107c6142c(uVar15);
        uVar15 = 3;
      }
      else {
        puStack_98 = (undefined *)0x0;
        ppuStack_90 = (undefined **)0xe000000000000000;
        func_0x000107c602fc(0x1d);
        func_0x000107c5fb78(0xd000000000000011,0x800000010f13bf90);
        func_0x000107c5fb78(0x706e6920726f6620,0xec000000203a7475);
        puVar16 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08;
        puVar11 = PTR___ss26DefaultStringInterpolationVN_11034ec00;
        puStack_70 = (undefined *)(CONCAT71(puStack_70._1_7_,param_1) & 0xffffffffffffff01);
        func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_110639058,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000107c5fb78(0x74617473206e6920,0xeb00000000203a65);
        puStack_70 = (undefined *)CONCAT62(puStack_70._2_6_,*(undefined2 *)(unaff_x20 + lVar7));
        func_0x000107c603d0(&puStack_70,&puStack_98,&UNK_1106390f8,puVar11,puVar16);
        uVar15 = 1;
      }
      ppuVar13 = ppuStack_90;
      func_0x0001007d6c6c(uVar15,puStack_98,ppuStack_90,lVar10,&PTR_DAT_1106385d0);
      func_0x000107c6142c(ppuVar13);
    }
    else {
      FUN_1032e0888(uVar9 >> 0x10);
      func_0x000100768c7c(unaff_x20 + _DAT_112f56178,&puStack_98);
      func_0x0001000a8868(&puStack_98,uStack_80);
      (**(code **)(lStack_78 + 0x10))(uStack_80,lStack_78);
      func_0x0001000834e4(&puStack_98);
      if (((*(ushort *)(unaff_x20 + lVar7) >> 0xd & 1) != 0) &&
         ((*(byte *)(unaff_x20 + _DAT_112f561c0) & 1) != 0)) {
        uVar1 = uVar9 | 0x1000;
        if (((uVar12 & 0x3000) == 0 & *(byte *)(unaff_x20 + _DAT_112f561c8)) == 0) {
          uVar1 = uVar9;
        }
        uVar12 = (ulong)uVar1;
      }
      FUN_1032e0bc8(uVar12);
    }
    return;
  }
  return;
}



/* Entry: 1032d9eb4; end: 1032da063;  */

void FUN_1032d9eb4(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  long param_9)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_9 + 0x10,auStack_78,0,0);
  param_9 = param_9 + 0x10;
  func_0x000107c61618();
  puVar2 = &UNK_110638b60;
  func_0x000107c613fc(&UNK_110638b60,0x20,7);
  ppuVar1 = (undefined **)0x0;
  if (param_9 != 0) {
    ppuVar1 = &PTR_DAT_1106389b8;
  }
  *(undefined ***)(puVar2 + 0x18) = ppuVar1;
  func_0x000107c61614(puVar2 + 0x10,param_9);
  puVar3 = &UNK_110638b88;
  func_0x000107c613fc(&UNK_110638b88,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  puVar3[0x28] = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined **)(puVar3 + 0x38) = puVar2;
  func_0x0001000285a8(0x112f56288,&UNK_10dbad408);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  uVar4 = 0x1032de6ec;
  func_0x0001000bdd8c(0x1032de6ec,puVar3);
  lVar5 = 0;
  func_0x0001032d8228();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x38) = 0;
  func_0x000107c61614(lVar5 + 0x30,0);
  *(undefined8 *)(lVar5 + 0x10) = uVar4;
  *(undefined8 *)(lVar5 + 0x18) = param_6;
  *(undefined8 *)(lVar5 + 0x20) = param_7;
  *(undefined1 *)(lVar5 + 0x28) = param_8;
  *(undefined ***)(lVar5 + 0x38) = ppuVar1;
  func_0x000107c61604(lVar5 + 0x30,param_9);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c61170(param_9);
  *param_1 = lVar5;
  param_1[1] = (long)&PTR_DAT_110638748;
  return;
}



/* Entry: 1032da064; end: 1032da213;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032da064(long *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_58;
  
  uStack_58 = 0;
  puVar1 = &uStack_58;
  func_0x0001006c71a4(puVar1);
  uVar2 = 0x112f562b8;
  FUN_1032de700(0x112f562b8,0x112f562c0,&UNK_10dbad430,FUN_1032de864);
  func_0x0001000c2068();
  func_0x000107c61574(puVar1);
  uVar3 = 0;
  func_0x000100768718(0);
  pcVar4 = FUN_1032db23c;
  func_0x0001000d5158(FUN_1032db23c,0,uVar3);
  func_0x000107c61574(uVar2);
  puVar7 = &UNK_110638a48;
  puVar5 = puVar7;
  func_0x000107c613fc(&UNK_110638a48,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  pcVar6 = FUN_1032de8a8;
  puVar8 = puVar5;
  (**(code **)(*(long *)pcVar4 + 0x60))(FUN_1032de8a8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  pcVar4 = pcVar6;
  func_0x000107c614f0(pcVar6);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f56158);
  (**(code **)(puVar8 + 0x10))(uVar9,pcVar4,puVar8);
  func_0x000107c615e8(pcVar6);
  func_0x000107c613fc(&UNK_110638a48,0x18,7);
  func_0x000107c61614(puVar7 + 0x10);
  uVar2 = 0x1032de8b0;
  puVar5 = puVar7;
  (**(code **)(*param_1 + 0x60))(0x1032de8b0);
  func_0x000107c61574(puVar7);
  uVar3 = uVar2;
  func_0x000107c614f0(uVar2);
  (**(code **)(puVar5 + 0x10))(uVar9,uVar3,puVar5);
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 1032da214; end: 1032da32b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032da214(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  long *plVar7;
  undefined1 uStack_41;
  
  uStack_41 = 0;
  puVar1 = &uStack_41;
  func_0x0001006c71a4(puVar1);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(puVar1);
  plVar7 = *(long **)(unaff_x20 + _DAT_112f56160);
  plVar3 = plVar7;
  func_0x000107c615f0();
  func_0x000100471e0c();
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(plVar7);
  puVar2 = &UNK_110638a48;
  func_0x000107c613fc(&UNK_110638a48,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uVar4 = 0x1032de85c;
  puVar6 = puVar2;
  (**(code **)(*plVar3 + 0x60))(0x1032de85c);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar2);
  uVar5 = uVar4;
  func_0x000107c614f0(uVar4);
  (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f56158),uVar5,puVar6);
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 1032da32c; end: 1032da577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032da32c(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  long *plVar7;
  code *pcVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  undefined8 uStack_60;
  long lStack_58;
  
  puVar3 = &uStack_80;
  FUN_1032de814(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar1 = 0;
  func_0x000107c6010c();
  puVar2 = auStack_78;
  auStack_78[0] = uVar1;
  func_0x0001006c71a4(puVar2);
  func_0x000107c61170(uVar1);
  puVar6 = PTR___sSbN_11034dd40;
  uVar1 = 0x1032db674;
  func_0x0001000bfde0(0x1032db674,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(puVar2);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f56150);
  func_0x000107c6157c(uVar10);
  func_0x0001000d224c(auStack_78);
  func_0x000107c61574(uVar10);
  func_0x0001000a8868(auStack_78,uStack_60);
  uVar10 = uStack_60;
  (**(code **)(lStack_58 + 0x40))(uStack_60,lStack_58);
  uStack_80 = 0;
  func_0x0001006c71a4(&uStack_80);
  func_0x000107c61574(uVar10);
  func_0x0001000834e4(auStack_78);
  pcVar4 = FUN_1032db69c;
  func_0x0001000bfde0(FUN_1032db69c,0,puVar6);
  func_0x000107c61574(puVar3);
  pcVar5 = pcVar4;
  func_0x0001006c733c(pcVar4);
  uVar10 = 0x1032db6b0;
  func_0x0001000bfde0(0x1032db6b0,0,puVar6);
  func_0x000107c61574(pcVar5);
  puVar6 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(uVar10);
  plVar11 = *(long **)(unaff_x20 + _DAT_112f56160);
  plVar7 = plVar11;
  func_0x000107c615f0();
  func_0x000100471e0c();
  func_0x000107c61574(puVar6);
  func_0x000107c615e8(plVar11);
  puVar6 = &UNK_110638a48;
  func_0x000107c613fc(&UNK_110638a48,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcVar5 = FUN_1032de854;
  puVar9 = puVar6;
  (**(code **)(*plVar7 + 0x60))(FUN_1032de854);
  func_0x000107c61574(plVar7);
  func_0x000107c61574(puVar6);
  pcVar8 = pcVar5;
  func_0x000107c614f0(pcVar5);
  (**(code **)(puVar9 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f56158),pcVar8,puVar9);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(pcVar4);
  func_0x000107c615e8(pcVar5);
  return;
}



/* Entry: 1032da578; end: 1032da9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032da578(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  code *pcVar8;
  long unaff_x20;
  long *plVar9;
  undefined8 uStack_48;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  uStack_48 = 0;
  puVar2 = &uStack_48;
  func_0x0001006c71a4(puVar2);
  uVar3 = 0x112eec468;
  FUN_1032de700(0x112eec468,0x112d3b7d8,&UNK_10d920690,&UNK_102ac6998);
  func_0x0001000c2068();
  func_0x000107c61574(puVar2);
  plVar9 = *(long **)(unaff_x20 + _DAT_112f56160);
  plVar4 = plVar9;
  func_0x000107c615f0();
  func_0x000100471e0c();
  func_0x000107c61574(uVar3);
  func_0x000107c615e8(plVar9);
  puVar5 = &UNK_110638a48;
  func_0x000107c613fc(&UNK_110638a48,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_110638c00;
  func_0x000107c613fc(&UNK_110638c00,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(long *)(puVar6 + 0x18) = lVar1;
  pcVar7 = FUN_1032de7dc;
  puVar5 = puVar6;
  (**(code **)(*plVar4 + 0x60))(FUN_1032de7dc);
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar6);
  pcVar8 = pcVar7;
  func_0x000107c614f0(pcVar7);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112f56158),pcVar8,puVar5);
  func_0x000107c615e8(pcVar7);
  return;
}



/* Entry: 1032da9d8; end: 1032da9fb; -[_TtC16LensFullScreenUX24LensFullScreenUXWorkflow dealloc] */

void FUN_1032da9d8(void)

{
  func_0x000107c61174();
  func_0x0001032da928();
  return;
}



/* Entry: 1032da9fc; end: 1032dac33; -[_TtC16LensFullScreenUX24LensFullScreenUXWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001032daa98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032daab8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032daad8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032daaf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dab48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dab68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dab88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dabf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dac18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032dabfc) */
/* WARNING: Removing unreachable block (ram,0x0001032dab8c) */
/* WARNING: Removing unreachable block (ram,0x0001032dab6c) */
/* WARNING: Removing unreachable block (ram,0x0001032dab4c) */
/* WARNING: Removing unreachable block (ram,0x0001032daafc) */
/* WARNING: Removing unreachable block (ram,0x0001032daadc) */
/* WARNING: Removing unreachable block (ram,0x0001032daabc) */
/* WARNING: Removing unreachable block (ram,0x0001032daa9c) */
/* WARNING: Removing unreachable block (ram,0x0001032dac1c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032da9fc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f56098));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f560b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f560b8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f560c0));
  func_0x0001032de5b8(param_1 + _DAT_112f560c8);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f560d0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f560d8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f560e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f560e8));
  return;
}



/* Entry: 1032dac34; end: 1032daedb;  */

/* WARNING: Possible PIC construction at 0x0001032daca0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dacf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dad90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dadf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dae30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001032dae90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001032dae34) */
/* WARNING: Removing unreachable block (ram,0x0001032dadf4) */
/* WARNING: Removing unreachable block (ram,0x0001032dad94) */
/* WARNING: Removing unreachable block (ram,0x0001032dacfc) */
/* WARNING: Removing unreachable block (ram,0x0001032daca4) */
/* WARNING: Removing unreachable block (ram,0x0001032dae94) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032dac34(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112f56198);
  lVar3 = *plVar1;
  if (lVar3 == 0) {
    *plVar1 = 0;
    plVar1[1] = 0;
    func_0x000107c615e8(0);
    plVar1 = (long *)(unaff_x20 + _DAT_112f561a0);
    lVar3 = *plVar1;
    if (lVar3 == 0) {
      *plVar1 = 0;
      plVar1[1] = 0;
      func_0x000107c615e8(0);
      if (param_1 == 0) {
        return;
      }
      lVar3 = param_1;
      func_0x000107c614f0();
      pcVar5 = *(code **)(param_2 + 8);
      func_0x000107c615f0(param_1);
      (*pcVar5)(lVar3,param_2);
      pcVar5 = FUN_1032daedc;
      func_0x0001000c0ebc(FUN_1032daedc,0);
      func_0x000107c61574(lVar3);
      lVar3 = *(long *)(unaff_x20 + _DAT_112f56160);
      func_0x000107c615f0(lVar3);
      func_0x000100471e0c();
      func_0x000107c61574(pcVar5);
    }
    else {
      lVar4 = plVar1[1];
      lVar2 = lVar3;
      func_0x000107c614f0(lVar3);
      pcVar5 = *(code **)(lVar4 + 8);
      func_0x000107c615f0(lVar3);
      (*pcVar5)(lVar2,lVar4);
    }
  }
  else {
    lVar4 = plVar1[1];
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar2,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 1032daedc; end: 1032daee3;  */

undefined1 FUN_1032daedc(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 1032daee4; end: 1032daf53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032daee4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (((*(ushort *)(param_2 + _DAT_112f56090) >> 0xd & 1) != 0) &&
       ((*(ushort *)(param_2 + _DAT_112f56090) & 0xfffe) != 0x2000)) {
      FUN_1032daf54();
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1032daf54; end: 1032db1a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032daf54(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined2 uStack_42;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  puStack_78 = (undefined *)0x0;
  uStack_70 = 0xe000000000000000;
  func_0x000107c602fc(0x19);
  func_0x000107c5fb78(0xd000000000000017,0x800000010f13bc50);
  uStack_42 = *(undefined2 *)(unaff_x20 + _DAT_112f56090);
  func_0x000107c603d0(&uStack_42,&puStack_78,&UNK_1106390f8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar7 = uStack_70;
  func_0x0001007d6c6c(1,puStack_78,uStack_70,lVar2,&PTR_DAT_1106385d0);
  func_0x000107c6142c(uVar7);
  lVar1 = _DAT_112f560d0;
  if (*(long *)(unaff_x20 + _DAT_112f56098) == 0) {
    func_0x0001007d6c6c(2,0xd000000000000040,0x800000010f13bc70,lVar2,&PTR_DAT_1106385d0);
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_112f560d0) != 0) {
      func_0x0001007d6c6c(1,0xd000000000000044,0x800000010f13bcc0,lVar2,&PTR_DAT_1106385d0);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f56160);
    puVar3 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
    func_0x000107c61168();
    puVar4 = &UNK_110638a48;
    func_0x000107c613fc(&UNK_110638a48,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    puVar5 = &UNK_110638ac0;
    func_0x000107c613fc(&UNK_110638ac0,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = uVar7;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    *(long *)(puVar5 + 0x20) = lVar2;
    uStack_58 = 0x1032de6d8;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_100fef460;
    puStack_60 = &UNK_110638ad8;
    ppuVar6 = &puStack_78;
    puStack_50 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_50;
    func_0x000107c615f4(uVar7,2);
    func_0x000107c61574(puVar4);
    func_0x000107c51924(0x3ff0000000000000);
    func_0x000107c61180();
    func_0x000107c615e8(uVar7);
    func_0x000107c60bd0(ppuVar6);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 1032db1a4; end: 1032db23b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032db1a4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar2 = *(ushort *)(param_2 + _DAT_112f56090) >> 0xc & 3;
    if (((uVar2 == 1) || (uVar2 == 0)) &&
       ((*(ushort *)(param_2 + _DAT_112f56090) & 0xc000) == 0x4000)) {
      puVar1 = (undefined8 *)(param_2 + _DAT_112f560f0);
      uVar3 = *puVar1;
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000107c615e8(uVar3);
      FUN_1032dfee4(0xa0);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1032db23c; end: 1032db247;  */

void FUN_1032db23c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1032db248; end: 1032db367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032db248(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_68 [24];
  
  plVar2 = (long *)*param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if ((int)plVar2[2] == *(int *)(param_2 + _DAT_112f56110)) {
      uVar4 = *(undefined8 *)(param_2 + _DAT_112f560d8);
      pcVar5 = *(code **)(*plVar2 + 0x68);
      uVar3 = uVar4;
      func_0x000107c615f0(uVar4);
      (*pcVar5)();
      uVar1 = 0;
      func_0x0001032d9240(0);
      FUN_1032d9260(uVar3,uVar1,&PTR_DAT_110638848);
      func_0x000107c615e8(uVar4);
      func_0x000107c61574(uVar3);
      uVar3 = *(undefined8 *)(param_2 + _DAT_112f56108);
      func_0x000107c6157c(uVar3);
      func_0x000100075034(FUN_1032de954,plVar2,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1032db368; end: 1032db583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1032db368(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auStack_c0 [16];
  long *plStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long alStack_90 [3];
  undefined1 auStack_78 [24];
  
  lVar3 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_2 + _DAT_112f560f8);
      func_0x000107c6157c(uVar4);
      func_0x000107c6157c(lVar3);
      puVar1 = PTR___sytN_11034f1b0;
      func_0x000100075034(FUN_1032de8b8,lVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar4);
      alStack_90[0] = 0;
      alStack_90[1] = 0;
      uVar4 = *(undefined8 *)(param_2 + _DAT_112f56100);
      plStack_b0 = alStack_90;
      func_0x000107c6157c(uVar4);
      func_0x000100075034(FUN_1032de8f0,auStack_c0,puVar1 + 8);
      func_0x000107c61574(uVar4);
      lVar2 = alStack_90[0];
      if (alStack_90[0] != 0) {
        func_0x000107c615f0(alStack_90[0]);
        func_0x0001000d224c(auStack_c0);
        func_0x0001000a8868(auStack_c0,uStack_a8);
        pcVar6 = *(code **)(lStack_a0 + 0x20);
        func_0x000107c615f0(lVar2);
        (*pcVar6)();
        func_0x000107c615ec(lVar2,2);
        func_0x0001000834e4(auStack_c0);
      }
      uVar5 = *(undefined8 *)(param_2 + _DAT_112f560e0);
      uVar4 = *(undefined8 *)(lVar3 + 0x28);
      func_0x0001032d95e8(0);
      func_0x000107c615f0(uVar5);
      func_0x000107c615f0(uVar4);
      FUN_1032d9608();
      func_0x000107c615e8(uVar5);
      func_0x000107c615e8(uVar4);
      uVar4 = *(undefined8 *)(param_2 + _DAT_112f561a8);
      func_0x000107c6157c(uVar4);
      func_0x000100075034(FUN_1032de908,lVar3,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar4);
      uVar4 = *(undefined8 *)(lVar3 + 0x28);
      func_0x000107c615f0(uVar4);
      FUN_1032dac34();
      func_0x000107c615e8(lVar2);
      func_0x000107c61574(lVar3);
      func_0x000107c615e8(uVar4);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1032db584; end: 1032db617;  */

void FUN_1032db584(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      lVar1 = lVar3;
      func_0x000107c614f0();
      func_0x000107c61440();
      if (lVar1 != 0) goto LAB_1032db5e4;
    }
    func_0x000107c615e8(lVar3);
  }
  lVar3 = 0;
  lVar1 = 0;
LAB_1032db5e4:
  lVar4 = *param_2;
  *param_2 = lVar3;
  param_2[1] = lVar1;
  func_0x000107c61574(lVar2);
  func_0x000107c615e8(lVar4);
  *param_1 = 0;
  return;
}



/* Entry: 1032db618; end: 1032db69b;  */

void FUN_1032db618(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1032d9d9c(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}


