/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10035e404; end: 10035e433;  */

void FUN_10035e404(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126a7080;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 10035e434; end: 10035e507; -[SCCameraLoggingQueueImpl init] */

undefined1 * FUN_10035e434(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e89e0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    func_0x000107c4f7c0(uVar4);
    func_0x000107c61180();
    func_0x000107c60f90();
    func_0x000107c61170(uVar4);
    *(undefined1 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10035e508; end: 10035e58f; -[SCCameraLoggingQueueImpl runWhenActive:] */

void FUN_10035e508(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  puStack_38 = &UNK_1054cb724;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c4e524(uVar1,param_2,&puStack_48);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10035e590; end: 10035e5e3; -[_TtC26SCCaptureDeviceManagerImpl24CaptureDeviceManagerImpl lensSmudgeHandler] */

void FUN_10035e590(undefined8 param_1)

{
  undefined *puVar1;
  
  func_0x000107c61174();
  puVar1 = &DAT_112da0d48;
  FUN_1002e9854(&DAT_112da0d48,FUN_10035e5e4,&DAT_112da0c48,&DAT_112da0c50);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10035e5e4; end: 10035e603;  */

void FUN_10035e5e4(void)

{
  func_0x000107c61168(&PTR_PTR_1127d8928);
  return;
}



/* Entry: 10035e604; end: 10035e61f;  */

void FUN_10035e604(undefined8 param_1)

{
  FUN_1000285a8(0x112f1f490,&UNK_10db57e68);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006f90e8,param_1);
  return;
}



/* Entry: 10035e620; end: 10035e66f;  */

void FUN_10035e620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10035e670; end: 10035e69f; -[_TtC26SCCaptureDeviceManagerImpl34CaptureDeviceLensSmudgeHandlerImpl enableSmudgeDetectionForDeviceAtPosition:] */

void FUN_10035e670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_10035e6a0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10035e6a0; end: 10035e7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035e6a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  puStack_68 = (undefined *)0x0;
  uStack_60 = 0xe000000000000000;
  func_0x000107c602fc(0x4e);
  func_0x000107c5fb78(0xd00000000000004c,0x800000010ef82430);
  uStack_38 = param_1;
  func_0x000107c603d0(&uStack_38,&puStack_68,&UNK_11077dd00,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(uStack_60);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112da0c48);
  puVar1 = &UNK_1103c1d30;
  func_0x000107c613fc(&UNK_1103c1d30,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1103c1d58;
  func_0x000107c613fc(&UNK_1103c1d58,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  uStack_48 = 0x10035e7f8;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0x42000000;
  pcStack_58 = FUN_1000f6b44;
  puStack_50 = &UNK_1103c1d70;
  ppuVar3 = &puStack_68;
  puStack_40 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_40);
  func_0x000107c4e590(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 10035e7e4; end: 10035e7ff;  */

void FUN_10035e7e4(long param_1,long param_2)

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



/* Entry: 10035e800; end: 10035e97b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035e800(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  long alStack_70 [3];
  undefined1 auStack_58 [24];
  
  puVar4 = auStack_58;
  func_0x000107c61428(param_1 + 0x10,puVar4,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112da0c50);
    func_0x000107c61174(uVar6);
    func_0x000107c61170(param_1);
    uVar5 = 2;
    if (param_2 != 1) {
      uVar5 = (uint)(param_2 == 0);
    }
    uVar1 = (ulong)uVar5;
    FUN_1002a1e70();
    func_0x000107c61170(uVar6);
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c614f0(uVar1);
      uVar3 = uVar1;
      func_0x000107c446d8();
      if ((int)uVar3 == 0) {
        alStack_70[1] = 0;
        alStack_70[2] = 0xe000000000000000;
        func_0x000107c602fc(0x7f);
        func_0x000107c5fb78(0xd00000000000004c,0x800000010ef82480);
        alStack_70[0] = param_2;
        func_0x000107c603d0(alStack_70,alStack_70 + 1,&UNK_11077dd00,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        func_0x000107c5fb78(0xd000000000000031,0x800000010ef824d0);
        func_0x000107c615e8(uVar1);
        func_0x000107c6142c(alStack_70[2]);
      }
      else {
        (**(code **)(puVar4 + 0x1f0))(uVar2,puVar4);
        func_0x000107c615e8(uVar1);
      }
    }
  }
  return;
}



/* Entry: 10035e97c; end: 10035e97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035e97c(void)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(unaff_x20 + _DAT_112da1130);
  func_0x000107c3e208(lVar12);
  iVar2 = 2;
  FUN_100029b9c(2,0x1a,0,0);
  if (iVar2 != 0) {
    uVar13 = *(ulong *)(unaff_x20 + _DAT_112da1120);
    uVar3 = uVar13;
    func_0x000107c49b08();
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar13;
      func_0x000107c3d11c();
      func_0x000107c61180();
      uVar7 = uVar3;
      func_0x000107c49b0c();
      func_0x000107c61170(uVar3);
      lVar15 = _DAT_112da10f0;
      if ((int)uVar7 == 0) {
        func_0x000107c61428(unaff_x20 + _DAT_112da10f0,&lStack_80,0,0);
        if (*(char *)(unaff_x20 + lVar15) == '\x01') {
          FUN_100083b20(&lStack_88);
          lVar12 = lStack_88;
          lVar15 = lStack_88;
          func_0x000107c41948();
          func_0x000107c61180();
          func_0x000107c615e8(lVar12);
          if (lVar15 != 0) {
            func_0x000107c41a58(lVar15);
            func_0x000107c615e8(lVar15);
          }
        }
      }
      else {
        func_0x000107c3e208(lVar12);
        lStack_80 = 0;
        uStack_78 = 0xe000000000000000;
        func_0x000107c602fc(0x40);
        func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
        func_0x000107c5fb78(0xd000000000000017,0x800000010ef83590);
        func_0x000107c6142c(uStack_78);
        lStack_80 = 0;
        uVar3 = uVar13;
        func_0x000107c4b948();
        lVar15 = lStack_80;
        puVar8 = PTR__kCMTimeZero_110348670;
        if ((int)uVar3 == 0) {
          lVar12 = lStack_80;
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(lVar12);
          func_0x000107c61654();
          lStack_80 = 0;
          uStack_78 = 0xe000000000000000;
          func_0x000107c602fc(0x41);
          func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
          uVar11 = 0x112d393f0;
          lStack_88 = lVar15;
          FUN_1000285a8(0x112d393f0,&UNK_10d903bb0);
          func_0x000107c603d0(&lStack_88,&lStack_80,uVar11,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          func_0x000107c6142c(uStack_78);
          func_0x000107c614ac(lVar15);
        }
        else {
          lVar15 = *(long *)PTR__kCMTimeZero_110348670;
          uVar11 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
          func_0x000107c61174();
          uStack_78 = *(undefined8 *)(puVar8 + 8);
          lStack_80 = lVar15;
          uStack_70 = uVar11;
          func_0x000107c53034(uVar13);
          func_0x000107c5d284(uVar13);
          if ((*(byte *)(unaff_x20 + _DAT_112da1118) & 1) == 0) {
            *(undefined1 *)(unaff_x20 + _DAT_112da1118) = 1;
            lVar15 = 0x112da1178;
            FUN_1000285a8(0x112da1178,&UNK_10d9442b0);
            lStack_a8 = *(long *)(lVar15 + -8);
            lStack_a0 = lVar15;
            puStack_98 = (undefined1 *)&lStack_b0;
            (*(code *)PTR____chkstk_darwin_11034bd40)
                      (*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
            lVar10 = (long)&lStack_b0 - extraout_x8_02;
            lVar15 = 0x112da1180;
            FUN_1000285a8(0x112da1180,&UNK_10d9442b8);
            lVar14 = *(long *)(lVar15 + -8);
            lStack_b0 = lVar10;
            (*(code *)PTR____chkstk_darwin_11034bd40)
                      (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
            lVar16 = lVar10 - extraout_x8_03;
            puVar8 = &UNK_10d9442e0;
            func_0x000107c614e0(&UNK_10d9442e0);
            func_0x000107c5ed58(lVar16);
            func_0x000107c61574(puVar8);
            func_0x000107c4f7c0();
            func_0x000107c61180();
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10035f280);
              (*pcVar1)();
            }
            lVar4 = 0x112d6f510;
            lStack_80 = lVar12;
            FUN_1000285a8(0x112d6f510,&UNK_10d930f80);
            (*(code *)PTR____chkstk_darwin_11034bd40)
                      (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
            lVar17 = lVar16 - extraout_x8_04;
            lVar4 = 0;
            func_0x000107c5ffd4();
            (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar17,1,1,lVar4);
            uVar5 = 0;
            FUN_1002507d4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
            uVar11 = 0x112da1188;
            func_0x000100250814(0x112da1188,0x112da1180,&UNK_10d9442b8,
                                PTR___sSo8NSObjectC10FoundationE26KeyValueObservingPublisherVy_xq_G7Combine0F0ACMc_110351210
                               );
            uVar9 = uVar11;
            FUN_100250858();
            func_0x000107c5f218(lVar10,&lStack_80,lVar17,lVar15,uVar5,uVar11,uVar9);
            FUN_10025089c(lVar17,0x112d6f510,&UNK_10d930f80);
            func_0x000107c61170(lVar12);
            (**(code **)(lVar14 + 8))(lVar16,lVar15);
            puVar8 = &UNK_1103c2370;
            func_0x000107c613fc(&UNK_1103c2370,0x18,7);
            func_0x000107c61614(puVar8 + 0x10);
            uVar11 = 0x112da1190;
            func_0x000100250814(0x112da1190,0x112da1178,&UNK_10d9442b0,
                                PTR___s7Combine10PublishersO9ReceiveOnVy_xq_GAA9PublisherAAMc_11034adb8
                               );
            lVar12 = lStack_a0;
            uVar9 = 0x10038e958;
            func_0x000107c5f21c(0x10038e958,puVar8,lStack_a0,uVar11);
            func_0x000107c61574(puVar8);
            (**(code **)(lStack_a8 + 8))(lVar10,lVar12);
            func_0x000100266a08();
            lStack_80 = lVar10;
            func_0x000107c5f1d8(&lStack_80);
            func_0x000107c61574(uVar9);
            lVar12 = lStack_80;
            goto LAB_10035ed70;
          }
        }
      }
    }
    else {
      lStack_80 = 0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x4e);
      uVar11 = 0x800000010ef835b0;
      func_0x000107c5fb78(0xd00000000000004b,0x800000010ef835b0);
      uVar3 = uVar13;
      func_0x000107c4b86c(uVar13);
      func_0x000107c61180();
      uVar7 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      func_0x000107c5fb78(uVar7,uVar11);
      func_0x000107c6142c(uVar11);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      func_0x000107c6142c(uStack_78);
      lVar15 = _DAT_112da10f0;
      func_0x000107c61428(unaff_x20 + _DAT_112da10f0,&lStack_80,0,0);
      if (*(char *)(unaff_x20 + lVar15) == '\x01') {
        func_0x000107c3f114(uVar13);
        FUN_10038e9bc();
      }
      if ((*(byte *)(unaff_x20 + _DAT_112da1118) & 1) == 0) {
        *(undefined1 *)(unaff_x20 + _DAT_112da1118) = 1;
        lVar15 = 0x112da1178;
        FUN_1000285a8(0x112da1178,&UNK_10d9442b0);
        lStack_a8 = *(long *)(lVar15 + -8);
        lStack_a0 = lVar15;
        puStack_98 = (undefined1 *)&lStack_b0;
        (*(code *)PTR____chkstk_darwin_11034bd40)
                  (*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
        lVar10 = (long)&lStack_b0 - extraout_x8;
        lVar15 = 0x112da1180;
        FUN_1000285a8(0x112da1180,&UNK_10d9442b8);
        lVar14 = *(long *)(lVar15 + -8);
        lStack_b0 = lVar10;
        (*(code *)PTR____chkstk_darwin_11034bd40)
                  (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
        lVar16 = lVar10 - extraout_x8_00;
        puVar8 = &UNK_10d9442e0;
        func_0x000107c614e0(&UNK_10d9442e0);
        func_0x000107c5ed58(lVar16);
        func_0x000107c61574(puVar8);
        func_0x000107c4f7c0();
        func_0x000107c61180();
        if (lVar12 == 0) goto LAB_10035f278;
        lVar4 = 0x112d6f510;
        lStack_88 = lVar12;
        FUN_1000285a8(0x112d6f510,&UNK_10d930f80);
        (*(code *)PTR____chkstk_darwin_11034bd40)
                  (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
        lVar17 = lVar16 - extraout_x8_01;
        lVar4 = 0;
        func_0x000107c5ffd4();
        (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar17,1,1,lVar4);
        uVar5 = 0;
        FUN_1002507d4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        uVar11 = 0x112da1188;
        func_0x000100250814(0x112da1188,0x112da1180,&UNK_10d9442b8,
                            PTR___sSo8NSObjectC10FoundationE26KeyValueObservingPublisherVy_xq_G7Combine0F0ACMc_110351210
                           );
        uVar9 = uVar11;
        FUN_100250858();
        func_0x000107c5f218(lVar10,&lStack_88,lVar17,lVar15,uVar5,uVar11,uVar9);
        FUN_10025089c(lVar17,0x112d6f510,&UNK_10d930f80);
        func_0x000107c61170(lVar12);
        (**(code **)(lVar14 + 8))(lVar16,lVar15);
        puVar8 = &UNK_1103c2370;
        func_0x000107c613fc(&UNK_1103c2370,0x18,7);
        func_0x000107c61614(puVar8 + 0x10);
        uVar11 = 0x112da1190;
        func_0x000100250814(0x112da1190,0x112da1178,&UNK_10d9442b0,
                            PTR___s7Combine10PublishersO9ReceiveOnVy_xq_GAA9PublisherAAMc_11034adb8)
        ;
        lVar12 = lStack_a0;
        puVar6 = &UNK_1014739f4;
        func_0x000107c5f21c(&UNK_1014739f4,puVar8,lStack_a0,uVar11);
        func_0x000107c61574(puVar8);
        (**(code **)(lStack_a8 + 8))(lVar10,lVar12);
        func_0x000100266a08();
        lStack_88 = lVar10;
        func_0x000107c5f1d8(&lStack_88);
        func_0x000107c61574(puVar6);
        lVar12 = lStack_88;
LAB_10035ed70:
        uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112da10b0);
        *(long *)(unaff_x20 + _DAT_112da10b0) = lVar12;
        func_0x000107c6142c(uVar11);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
LAB_10035f278:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10035f27c);
  (*pcVar1)();
}



/* Entry: 10035e980; end: 10035f35f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10035e980(void)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined1 *puStack_98;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *(long *)(unaff_x20 + _DAT_112da1130);
  func_0x000107c3e208(lVar12);
  iVar2 = 2;
  FUN_100029b9c(2,0x1a,0,0);
  if (iVar2 != 0) {
    uVar13 = *(ulong *)(unaff_x20 + _DAT_112da1120);
    uVar3 = uVar13;
    func_0x000107c49b08();
    if ((uVar3 & 1) == 0) {
      uVar3 = uVar13;
      func_0x000107c3d11c();
      func_0x000107c61180();
      uVar7 = uVar3;
      func_0x000107c49b0c();
      func_0x000107c61170(uVar3);
      lVar15 = _DAT_112da10f0;
      if ((int)uVar7 == 0) {
        func_0x000107c61428(unaff_x20 + _DAT_112da10f0,&lStack_80,0,0);
        if (*(char *)(unaff_x20 + lVar15) == '\x01') {
          FUN_100083b20(&lStack_88);
          lVar12 = lStack_88;
          lVar15 = lStack_88;
          func_0x000107c41948();
          func_0x000107c61180();
          func_0x000107c615e8(lVar12);
          if (lVar15 != 0) {
            func_0x000107c41a58(lVar15);
            func_0x000107c615e8(lVar15);
          }
        }
      }
      else {
        func_0x000107c3e208(lVar12);
        lStack_80 = 0;
        uStack_78 = 0xe000000000000000;
        func_0x000107c602fc(0x40);
        func_0x000107c5fb78(0xd00000000000003e,0x800000010ef83130);
        func_0x000107c5fb78(0xd000000000000017,0x800000010ef83590);
        func_0x000107c6142c(uStack_78);
        lStack_80 = 0;
        uVar3 = uVar13;
        func_0x000107c4b948();
        lVar15 = lStack_80;
        puVar8 = PTR__kCMTimeZero_110348670;
        if ((int)uVar3 == 0) {
          lVar12 = lStack_80;
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(lVar12);
          func_0x000107c61654();
          lStack_80 = 0;
          uStack_78 = 0xe000000000000000;
          func_0x000107c602fc(0x41);
          func_0x000107c5fb78(0xd00000000000003f,0x800000010ef83170);
          uVar11 = 0x112d393f0;
          lStack_88 = lVar15;
          FUN_1000285a8(0x112d393f0,&UNK_10d903bb0);
          func_0x000107c603d0(&lStack_88,&lStack_80,uVar11,
                              PTR___ss26DefaultStringInterpolationVN_11034ec00,
                              PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08)
          ;
          func_0x000107c6142c(uStack_78);
          func_0x000107c614ac(lVar15);
        }
        else {
          lVar15 = *(long *)PTR__kCMTimeZero_110348670;
          uVar11 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
          func_0x000107c61174();
          uStack_78 = *(undefined8 *)(puVar8 + 8);
          lStack_80 = lVar15;
          uStack_70 = uVar11;
          func_0x000107c53034(uVar13);
          func_0x000107c5d284(uVar13);
          if ((*(byte *)(unaff_x20 + _DAT_112da1118) & 1) == 0) {
            *(undefined1 *)(unaff_x20 + _DAT_112da1118) = 1;
            lVar15 = 0x112da1178;
            FUN_1000285a8(0x112da1178,&UNK_10d9442b0);
            lStack_a8 = *(long *)(lVar15 + -8);
            lStack_a0 = lVar15;
            puStack_98 = (undefined1 *)&lStack_b0;
            (*(code *)PTR____chkstk_darwin_11034bd40)
                      (*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
            lVar10 = (long)&lStack_b0 - extraout_x8_02;
            lVar15 = 0x112da1180;
            FUN_1000285a8(0x112da1180,&UNK_10d9442b8);
            lVar14 = *(long *)(lVar15 + -8);
            lStack_b0 = lVar10;
            (*(code *)PTR____chkstk_darwin_11034bd40)
                      (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
            lVar16 = lVar10 - extraout_x8_03;
            puVar8 = &UNK_10d9442e0;
            func_0x000107c614e0(&UNK_10d9442e0);
            func_0x000107c5ed58(lVar16);
            func_0x000107c61574(puVar8);
            func_0x000107c4f7c0();
            func_0x000107c61180();
            if (lVar12 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10035f280);
              (*pcVar1)();
            }
            lVar4 = 0x112d6f510;
            lStack_80 = lVar12;
            FUN_1000285a8(0x112d6f510,&UNK_10d930f80);
            (*(code *)PTR____chkstk_darwin_11034bd40)
                      (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
            lVar17 = lVar16 - extraout_x8_04;
            lVar4 = 0;
            func_0x000107c5ffd4();
            (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar17,1,1,lVar4);
            uVar5 = 0;
            FUN_1002507d4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
            uVar11 = 0x112da1188;
            func_0x000100250814(0x112da1188,0x112da1180,&UNK_10d9442b8,
                                PTR___sSo8NSObjectC10FoundationE26KeyValueObservingPublisherVy_xq_G7Combine0F0ACMc_110351210
                               );
            uVar9 = uVar11;
            FUN_100250858();
            func_0x000107c5f218(lVar10,&lStack_80,lVar17,lVar15,uVar5,uVar11,uVar9);
            FUN_10025089c(lVar17,0x112d6f510,&UNK_10d930f80);
            func_0x000107c61170(lVar12);
            (**(code **)(lVar14 + 8))(lVar16,lVar15);
            puVar8 = &UNK_1103c2370;
            func_0x000107c613fc(&UNK_1103c2370,0x18,7);
            func_0x000107c61614(puVar8 + 0x10);
            uVar11 = 0x112da1190;
            func_0x000100250814(0x112da1190,0x112da1178,&UNK_10d9442b0,
                                PTR___s7Combine10PublishersO9ReceiveOnVy_xq_GAA9PublisherAAMc_11034adb8
                               );
            lVar12 = lStack_a0;
            uVar9 = 0x10038e958;
            func_0x000107c5f21c(0x10038e958,puVar8,lStack_a0,uVar11);
            func_0x000107c61574(puVar8);
            (**(code **)(lStack_a8 + 8))(lVar10,lVar12);
            func_0x000100266a08();
            lStack_80 = lVar10;
            func_0x000107c5f1d8(&lStack_80);
            func_0x000107c61574(uVar9);
            lVar12 = lStack_80;
            goto LAB_10035ed70;
          }
        }
      }
    }
    else {
      lStack_80 = 0;
      uStack_78 = 0xe000000000000000;
      func_0x000107c602fc(0x4e);
      uVar11 = 0x800000010ef835b0;
      func_0x000107c5fb78(0xd00000000000004b,0x800000010ef835b0);
      uVar3 = uVar13;
      func_0x000107c4b86c(uVar13);
      func_0x000107c61180();
      uVar7 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      func_0x000107c5fb78(uVar7,uVar11);
      func_0x000107c6142c(uVar11);
      func_0x000107c5fb78(0x29,0xe100000000000000);
      func_0x000107c6142c(uStack_78);
      lVar15 = _DAT_112da10f0;
      func_0x000107c61428(unaff_x20 + _DAT_112da10f0,&lStack_80,0,0);
      if (*(char *)(unaff_x20 + lVar15) == '\x01') {
        func_0x000107c3f114(uVar13);
        FUN_10038e9bc();
      }
      if ((*(byte *)(unaff_x20 + _DAT_112da1118) & 1) == 0) {
        *(undefined1 *)(unaff_x20 + _DAT_112da1118) = 1;
        lVar15 = 0x112da1178;
        FUN_1000285a8(0x112da1178,&UNK_10d9442b0);
        lStack_a8 = *(long *)(lVar15 + -8);
        lStack_a0 = lVar15;
        puStack_98 = (undefined1 *)&lStack_b0;
        (*(code *)PTR____chkstk_darwin_11034bd40)
                  (*(long *)(lStack_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
        lVar10 = (long)&lStack_b0 - extraout_x8;
        lVar15 = 0x112da1180;
        FUN_1000285a8(0x112da1180,&UNK_10d9442b8);
        lVar14 = *(long *)(lVar15 + -8);
        lStack_b0 = lVar10;
        (*(code *)PTR____chkstk_darwin_11034bd40)
                  (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
        lVar16 = lVar10 - extraout_x8_00;
        puVar8 = &UNK_10d9442e0;
        func_0x000107c614e0(&UNK_10d9442e0);
        func_0x000107c5ed58(lVar16);
        func_0x000107c61574(puVar8);
        func_0x000107c4f7c0();
        func_0x000107c61180();
        if (lVar12 == 0) goto LAB_10035f278;
        lVar4 = 0x112d6f510;
        lStack_88 = lVar12;
        FUN_1000285a8(0x112d6f510,&UNK_10d930f80);
        (*(code *)PTR____chkstk_darwin_11034bd40)
                  (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
        lVar17 = lVar16 - extraout_x8_01;
        lVar4 = 0;
        func_0x000107c5ffd4();
        (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar17,1,1,lVar4);
        uVar5 = 0;
        FUN_1002507d4(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
        uVar11 = 0x112da1188;
        func_0x000100250814(0x112da1188,0x112da1180,&UNK_10d9442b8,
                            PTR___sSo8NSObjectC10FoundationE26KeyValueObservingPublisherVy_xq_G7Combine0F0ACMc_110351210
                           );
        uVar9 = uVar11;
        FUN_100250858();
        func_0x000107c5f218(lVar10,&lStack_88,lVar17,lVar15,uVar5,uVar11,uVar9);
        FUN_10025089c(lVar17,0x112d6f510,&UNK_10d930f80);
        func_0x000107c61170(lVar12);
        (**(code **)(lVar14 + 8))(lVar16,lVar15);
        puVar8 = &UNK_1103c2370;
        func_0x000107c613fc(&UNK_1103c2370,0x18,7);
        func_0x000107c61614(puVar8 + 0x10);
        uVar11 = 0x112da1190;
        func_0x000100250814(0x112da1190,0x112da1178,&UNK_10d9442b0,
                            PTR___s7Combine10PublishersO9ReceiveOnVy_xq_GAA9PublisherAAMc_11034adb8)
        ;
        lVar12 = lStack_a0;
        puVar6 = &UNK_1014739f4;
        func_0x000107c5f21c(&UNK_1014739f4,puVar8,lStack_a0,uVar11);
        func_0x000107c61574(puVar8);
        (**(code **)(lStack_a8 + 8))(lVar10,lVar12);
        func_0x000100266a08();
        lStack_88 = lVar10;
        func_0x000107c5f1d8(&lStack_88);
        func_0x000107c61574(puVar6);
        lVar12 = lStack_88;
LAB_10035ed70:
        uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112da10b0);
        *(long *)(unaff_x20 + _DAT_112da10b0) = lVar12;
        func_0x000107c6142c(uVar11);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
LAB_10035f278:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10035f27c);
  (*pcVar1)();
}



/* Entry: 10035f360; end: 10035f37f;  */

void FUN_10035f360(void)

{
  func_0x000107c61168(&PTR_PTR_112f1f748);
  return;
}



/* Entry: 10035f380; end: 10035f39b;  */

void FUN_10035f380(undefined8 param_1)

{
  FUN_1000285a8(0x112f1f6d8,&UNK_10db58208);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006fb8c0,param_1);
  return;
}



/* Entry: 10035f39c; end: 10035f3eb;  */

void FUN_10035f39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10035f3ec; end: 10035f3ff;  */

void FUN_10035f3ec(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103c22a0;
  if (lRam0000000112da0fd8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112da0fd8 = param_1;
  }
  return;
}



/* Entry: 10035f400; end: 10035f48f;  */

void FUN_10035f400(long param_1,long *param_2,long param_3)

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



/* Entry: 10035f490; end: 10035f4af;  */

void FUN_10035f490(void)

{
  func_0x000107c61168(&PTR_PTR_1128a99f0);
  return;
}



/* Entry: 10035f4b0; end: 10035fb8b;  */

void FUN_10035f4b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
                  undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
                  undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
                  undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
                  undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
                  undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
                  undefined8 param_69,undefined8 param_70)

{
  undefined *puVar1;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  
  FUN_1000285a8(0x112f22640,&UNK_10db5c710);
  puVar1 = &UNK_1105de0c0;
  func_0x000107c613fc(&UNK_1105de0c0,0x2b8,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  *(undefined8 *)(puVar1 + 0xf0) = param_29;
  *(undefined8 *)(puVar1 + 0xf8) = param_30;
  *(undefined8 *)(puVar1 + 0x100) = param_31;
  *(undefined8 *)(puVar1 + 0x108) = param_32;
  *(undefined8 *)(puVar1 + 0x110) = param_33;
  *(undefined8 *)(puVar1 + 0x118) = param_34;
  *(undefined8 *)(puVar1 + 0x120) = param_35;
  *(undefined8 *)(puVar1 + 0x128) = param_36;
  *(undefined8 *)(puVar1 + 0x130) = param_37;
  *(undefined8 *)(puVar1 + 0x138) = param_38;
  *(undefined8 *)(puVar1 + 0x140) = param_39;
  *(undefined8 *)(puVar1 + 0x148) = param_40;
  *(undefined8 *)(puVar1 + 0x150) = param_41;
  *(undefined8 *)(puVar1 + 0x158) = param_42;
  *(undefined8 *)(puVar1 + 0x160) = param_43;
  *(undefined8 *)(puVar1 + 0x168) = param_44;
  *(undefined8 *)(puVar1 + 0x170) = param_45;
  *(undefined8 *)(puVar1 + 0x178) = param_46;
  *(undefined8 *)(puVar1 + 0x180) = param_47;
  *(undefined8 *)(puVar1 + 0x188) = param_48;
  *(undefined8 *)(puVar1 + 400) = param_49;
  *(undefined8 *)(puVar1 + 0x198) = param_50;
  *(undefined8 *)(puVar1 + 0x1a0) = param_51;
  *(undefined8 *)(puVar1 + 0x1a8) = param_52;
  *(undefined8 *)(puVar1 + 0x1b0) = param_53;
  *(undefined8 *)(puVar1 + 0x1b8) = param_54;
  *(undefined8 *)(puVar1 + 0x1c0) = param_55;
  *(undefined8 *)(puVar1 + 0x1c8) = param_56;
  *(undefined8 *)(puVar1 + 0x1d0) = param_57;
  *(undefined8 *)(puVar1 + 0x1d8) = param_58;
  *(undefined8 *)(puVar1 + 0x1e0) = param_59;
  *(undefined8 *)(puVar1 + 0x1e8) = param_60;
  *(undefined8 *)(puVar1 + 0x1f0) = param_61;
  *(undefined8 *)(puVar1 + 0x1f8) = param_62;
  *(undefined8 *)(puVar1 + 0x200) = param_63;
  *(undefined8 *)(puVar1 + 0x208) = param_64;
  *(undefined8 *)(puVar1 + 0x210) = param_65;
  *(undefined8 *)(puVar1 + 0x218) = param_66;
  *(undefined8 *)(puVar1 + 0x220) = param_67;
  *(undefined8 *)(puVar1 + 0x228) = param_68;
  *(undefined8 *)(puVar1 + 0x230) = param_69;
  *(undefined8 *)(puVar1 + 0x238) = param_70;
  *(undefined8 *)(puVar1 + 0x240) = in_stack_000001f0;
  *(undefined8 *)(puVar1 + 0x248) = in_stack_000001f8;
  *(undefined8 *)(puVar1 + 0x250) = in_stack_00000200;
  *(undefined8 *)(puVar1 + 600) = in_stack_00000208;
  *(undefined8 *)(puVar1 + 0x260) = in_stack_00000210;
  *(undefined8 *)(puVar1 + 0x268) = in_stack_00000218;
  *(undefined8 *)(puVar1 + 0x270) = in_stack_00000220;
  *(undefined8 *)(puVar1 + 0x278) = in_stack_00000228;
  *(undefined8 *)(puVar1 + 0x280) = in_stack_00000230;
  *(undefined8 *)(puVar1 + 0x288) = in_stack_00000238;
  *(undefined8 *)(puVar1 + 0x290) = in_stack_00000240;
  *(undefined8 *)(puVar1 + 0x298) = in_stack_00000248;
  *(undefined8 *)(puVar1 + 0x2a0) = in_stack_00000250;
  *(undefined8 *)(puVar1 + 0x2a8) = in_stack_00000258;
  *(undefined8 *)(puVar1 + 0x2b0) = in_stack_00000260;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_37);
  func_0x000107c6157c(param_38);
  func_0x000107c6157c(param_39);
  func_0x000107c6157c(param_40);
  func_0x000107c6157c(param_41);
  func_0x000107c6157c(param_42);
  func_0x000107c6157c(param_43);
  func_0x000107c6157c(param_44);
  func_0x000107c6157c(param_45);
  func_0x000107c6157c(param_46);
  func_0x000107c6157c(param_47);
  func_0x000107c6157c(param_48);
  func_0x000107c6157c(param_49);
  func_0x000107c6157c(param_50);
  func_0x000107c6157c(param_51);
  func_0x000107c6157c(param_52);
  func_0x000107c6157c(param_53);
  func_0x000107c6157c(param_54);
  func_0x000107c6157c(param_55);
  func_0x000107c6157c(param_56);
  func_0x000107c6157c(param_57);
  func_0x000107c6157c(param_58);
  func_0x000107c6157c(param_59);
  func_0x000107c6157c(param_60);
  func_0x000107c6157c(param_61);
  func_0x000107c6157c(param_62);
  func_0x000107c6157c(param_63);
  func_0x000107c6157c(param_64);
  func_0x000107c6157c(param_65);
  func_0x000107c6157c(param_66);
  func_0x000107c6157c(param_67);
  func_0x000107c6157c(param_68);
  func_0x000107c6157c(param_69);
  func_0x000107c6157c(param_70);
  func_0x000107c6157c(in_stack_000001f0);
  func_0x000107c6157c(in_stack_000001f8);
  func_0x000107c6157c(in_stack_00000200);
  func_0x000107c6157c(in_stack_00000208);
  func_0x000107c6157c(in_stack_00000210);
  func_0x000107c6157c(in_stack_00000218);
  func_0x000107c6157c(in_stack_00000220);
  func_0x000107c6157c(in_stack_00000228);
  func_0x000107c6157c(in_stack_00000230);
  func_0x000107c6157c(in_stack_00000238);
  func_0x000107c6157c(in_stack_00000240);
  func_0x000107c6157c(in_stack_00000248);
  func_0x000107c6157c(in_stack_00000250);
  func_0x000107c6157c(in_stack_00000258);
  func_0x000107c6157c(in_stack_00000260);
  FUN_1000823a8(&UNK_102e6acf4,puVar1);
  return;
}



/* Entry: 10035fb8c; end: 10035fe6f;  */

void FUN_10035fb8c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xf8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x100));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x108));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x110));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x118));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x120));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x128));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x130));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x138));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x140));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x148));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x150));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x158));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x160));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x168));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x170));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x180));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x188));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 400));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x198));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1b8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1c8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1d8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1e8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x1f8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x200));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x208));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x210));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x218));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x220));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x228));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x230));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x238));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x240));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x248));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x250));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 600));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x260));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x268));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x270));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x278));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x280));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x288));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x290));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x298));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a0));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2a8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x2b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10035fe70; end: 10035fe8b;  */

void FUN_10035fe70(undefined8 param_1)

{
  FUN_1000285a8(0x112f22650,&UNK_10db5c720);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102e6dde4,param_1);
  return;
}



/* Entry: 10035fe8c; end: 10035fedb;  */

void FUN_10035fe8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10035fedc; end: 10035fef7;  */

void FUN_10035fedc(undefined8 param_1)

{
  FUN_1000285a8(0x112f2ec30,&UNK_10db73610);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102fc1fc0,param_1);
  return;
}



/* Entry: 10035fef8; end: 10035ff47;  */

void FUN_10035fef8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10035ff48; end: 10035ff67;  */

void FUN_10035ff48(void)

{
  func_0x000107c61168(&PTR_PTR_112928b78);
  return;
}



/* Entry: 10035ff68; end: 10035ffb3;  */

void FUN_10035ff68(undefined8 param_1)

{
  FUN_1000285a8(0x112f89278,&UNK_10dbfdd80);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_1036f143c,param_1);
  return;
}



/* Entry: 10035ffb4; end: 10035ffd3;  */

void FUN_10035ffb4(void)

{
  func_0x000107c61168(&PTR_PTR_1128e4388);
  return;
}



/* Entry: 10035ffd4; end: 100360223;  */

void FUN_10035ffd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f2d3c8,&UNK_10db71960);
  puVar1 = &UNK_1105f5b18;
  func_0x000107c613fc(&UNK_1105f5b18,0xf0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_16;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  *(undefined8 *)(puVar1 + 0xa0) = param_19;
  *(undefined8 *)(puVar1 + 0xa8) = param_20;
  *(undefined8 *)(puVar1 + 0xb0) = param_21;
  *(undefined8 *)(puVar1 + 0xb8) = param_22;
  *(undefined8 *)(puVar1 + 0xc0) = param_23;
  *(undefined8 *)(puVar1 + 200) = param_24;
  *(undefined8 *)(puVar1 + 0xd0) = param_25;
  *(undefined8 *)(puVar1 + 0xd8) = param_26;
  *(undefined8 *)(puVar1 + 0xe0) = param_27;
  *(undefined8 *)(puVar1 + 0xe8) = param_28;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_28);
  FUN_1000823a8(FUN_10092eb40,puVar1);
  return;
}



/* Entry: 100360224; end: 100360243;  */

void FUN_100360224(void)

{
  func_0x000107c61168(&PTR_PTR_112f2d440);
  return;
}



/* Entry: 100360244; end: 1003602c3;  */

void FUN_100360244(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f233a8,&UNK_10db5db90);
  puVar1 = &UNK_1105de700;
  func_0x000107c613fc(&UNK_1105de700,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(&UNK_102e772c4,puVar1);
  return;
}



/* Entry: 1003602c4; end: 10036030f;  */

void FUN_1003602c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100360310; end: 10036032b;  */

void FUN_100360310(undefined8 param_1)

{
  FUN_1000285a8(0x112f233b0,&UNK_10db5db98);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102e77504,param_1);
  return;
}



/* Entry: 10036032c; end: 10036037b;  */

void FUN_10036032c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10036037c; end: 1003604c3;  */

void FUN_10036037c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ece030,&UNK_10daf3a80);
  puVar1 = &UNK_11056f300;
  func_0x000107c613fc(&UNK_11056f300,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_13;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = param_14;
  *(undefined8 *)(puVar1 + 0x48) = param_6;
  *(undefined8 *)(puVar1 + 0x50) = param_7;
  *(undefined8 *)(puVar1 + 0x58) = param_8;
  *(undefined8 *)(puVar1 + 0x60) = param_9;
  *(undefined8 *)(puVar1 + 0x68) = param_10;
  *(undefined8 *)(puVar1 + 0x70) = param_11;
  *(undefined8 *)(puVar1 + 0x78) = param_12;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  FUN_1000823a8(&UNK_102938b3c,puVar1);
  return;
}



/* Entry: 1003604c4; end: 1003604c7;  */

void FUN_1003604c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003604c8; end: 1003604e7;  */

void FUN_1003604c8(void)

{
  func_0x000107c61168(&PTR_PTR_1129319b8);
  return;
}



/* Entry: 1003604e8; end: 100360683;  */

void FUN_1003604e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112efdc30,&UNK_10db30090);
  puVar1 = &UNK_1105ae650;
  func_0x000107c613fc(&UNK_1105ae650,0xa0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  *(undefined8 *)(puVar1 + 0x40) = param_14;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_15;
  *(undefined8 *)(puVar1 + 0x58) = param_16;
  *(undefined8 *)(puVar1 + 0x60) = param_8;
  *(undefined8 *)(puVar1 + 0x68) = param_9;
  *(undefined8 *)(puVar1 + 0x70) = param_10;
  *(undefined8 *)(puVar1 + 0x78) = param_11;
  *(undefined8 *)(puVar1 + 0x80) = param_12;
  *(undefined8 *)(puVar1 + 0x88) = param_13;
  *(undefined8 *)(puVar1 + 0x90) = param_17;
  *(undefined8 *)(puVar1 + 0x98) = param_18;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  FUN_1000823a8(FUN_1007166ec,puVar1);
  return;
}



/* Entry: 100360684; end: 1003606a3;  */

void FUN_100360684(void)

{
  func_0x000107c61168(&PTR_PTR_11292fbd0);
  return;
}



/* Entry: 1003606a4; end: 100360843;  */

void FUN_1003606a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112efdd40,&UNK_10db30200);
  puVar1 = &UNK_1105aead0;
  func_0x000107c613fc(&UNK_1105aead0,0xa0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_11;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_13;
  *(undefined8 *)(puVar1 + 0x38) = param_9;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_4;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_8;
  *(undefined8 *)(puVar1 + 0x70) = param_17;
  *(undefined8 *)(puVar1 + 0x78) = param_18;
  *(undefined8 *)(puVar1 + 0x80) = param_14;
  *(undefined8 *)(puVar1 + 0x88) = param_1;
  *(undefined8 *)(puVar1 + 0x90) = param_15;
  *(undefined8 *)(puVar1 + 0x98) = param_16;
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  FUN_1000823a8(FUN_100712af0,puVar1);
  return;
}



/* Entry: 100360844; end: 100360863;  */

void FUN_100360844(void)

{
  func_0x000107c61168(&PTR_PTR_11292fd70);
  return;
}



/* Entry: 100360864; end: 100360b73;  */

void FUN_100360864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112e956e0,&UNK_10daa0a70);
  puVar1 = &UNK_110501900;
  func_0x000107c613fc(&UNK_110501900,0x130,7);
  *(undefined8 *)(puVar1 + 0x10) = param_24;
  *(undefined8 *)(puVar1 + 0x18) = param_21;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_32;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_10;
  *(undefined8 *)(puVar1 + 0x40) = param_9;
  *(undefined8 *)(puVar1 + 0x48) = param_36;
  *(undefined8 *)(puVar1 + 0x50) = param_13;
  *(undefined8 *)(puVar1 + 0x58) = param_23;
  *(undefined8 *)(puVar1 + 0x60) = param_3;
  *(undefined8 *)(puVar1 + 0x68) = param_31;
  *(undefined8 *)(puVar1 + 0x70) = param_30;
  *(undefined8 *)(puVar1 + 0x78) = param_16;
  *(undefined8 *)(puVar1 + 0x80) = param_15;
  *(undefined8 *)(puVar1 + 0x88) = param_25;
  *(undefined8 *)(puVar1 + 0x90) = param_5;
  *(undefined8 *)(puVar1 + 0x98) = param_6;
  *(undefined8 *)(puVar1 + 0xa0) = param_8;
  *(undefined8 *)(puVar1 + 0xa8) = param_33;
  *(undefined8 *)(puVar1 + 0xb0) = param_27;
  *(undefined8 *)(puVar1 + 0xb8) = param_17;
  *(undefined8 *)(puVar1 + 0xc0) = param_29;
  *(undefined8 *)(puVar1 + 200) = param_35;
  *(undefined8 *)(puVar1 + 0xd0) = param_19;
  *(undefined8 *)(puVar1 + 0xd8) = param_2;
  *(undefined8 *)(puVar1 + 0xe0) = param_12;
  *(undefined8 *)(puVar1 + 0xe8) = param_34;
  *(undefined8 *)(puVar1 + 0xf0) = param_1;
  *(undefined8 *)(puVar1 + 0xf8) = param_22;
  *(undefined8 *)(puVar1 + 0x100) = param_11;
  *(undefined8 *)(puVar1 + 0x108) = param_18;
  *(undefined8 *)(puVar1 + 0x110) = param_14;
  *(undefined8 *)(puVar1 + 0x118) = param_28;
  *(undefined8 *)(puVar1 + 0x120) = param_20;
  *(undefined8 *)(puVar1 + 0x128) = param_26;
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_32);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_36);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_31);
  func_0x000107c6157c(param_30);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_33);
  func_0x000107c6157c(param_27);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_29);
  func_0x000107c6157c(param_35);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_34);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_26);
  FUN_1000823a8(FUN_10050dcd4,puVar1);
  return;
}



/* Entry: 100360b74; end: 100360b93;  */

void FUN_100360b74(void)

{
  func_0x000107c61168(&PTR_PTR_112969fb0);
  return;
}



/* Entry: 100360b94; end: 100360c2b;  */

void FUN_100360b94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f88ff8,&UNK_10dbfd820);
  puVar1 = &UNK_1106841c8;
  func_0x000107c613fc(&UNK_1106841c8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(&UNK_1036eecb8,puVar1);
  return;
}



/* Entry: 100360c2c; end: 100360c2f;  */

void FUN_100360c2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100360c30; end: 100360c4f;  */

void FUN_100360c30(void)

{
  func_0x000107c61168(&PTR_PTR_1129b7dc8);
  return;
}



/* Entry: 100360c50; end: 100360c9b;  */

void FUN_100360c50(undefined8 param_1)

{
  FUN_1000285a8(0x112f4aa50,&UNK_10db997d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100930b90,param_1);
  return;
}



/* Entry: 100360c9c; end: 100360cbb;  */

void FUN_100360c9c(void)

{
  func_0x000107c61168(&PTR_PTR_1129b82b0);
  return;
}



/* Entry: 100360cbc; end: 100360ccb;  */

undefined1  [16] FUN_100360cbc(void)

{
  return ZEXT816(0x110602158);
}



/* Entry: 100360ccc; end: 100360cdb;  */

void FUN_100360ccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e81ea20);
  return;
}



/* Entry: 100360cdc; end: 100360d2b;  */

void FUN_100360cdc(long param_1)

{
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_28 = PTR___sBbWV_11034d660 + 0x40;
  puStack_18 = &UNK_10dd38690;
  puStack_20 = puStack_28;
  func_0x000107c61524(param_1,0,3,&puStack_28,param_1 + 0x60);
  return;
}



/* Entry: 100360d2c; end: 100360dab;  */

void FUN_100360d2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f18300,&UNK_10db4eb90);
  puVar1 = &UNK_1105d13d0;
  func_0x000107c613fc(&UNK_1105d13d0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  FUN_1000823a8(FUN_100934a80,puVar1);
  return;
}



/* Entry: 100360dac; end: 100360dcb;  */

void FUN_100360dac(void)

{
  func_0x000107c61168(&PTR_PTR_112f18370);
  return;
}



/* Entry: 100360dcc; end: 100360e17;  */

void FUN_100360dcc(undefined8 param_1)

{
  FUN_1000285a8(0x112f958a0,&UNK_10dc0e4c8);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1008f36b4,param_1);
  return;
}



/* Entry: 100360e18; end: 100360e37;  */

void FUN_100360e18(void)

{
  func_0x000107c61168(&PTR_PTR_1128ecaf0);
  return;
}



/* Entry: 100360e38; end: 100360e83;  */

void FUN_100360e38(undefined8 param_1)

{
  FUN_1000285a8(0x112fef618,&UNK_10dc594d0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_103b68160,param_1);
  return;
}



/* Entry: 100360e84; end: 100360ea3;  */

void FUN_100360e84(void)

{
  func_0x000107c61168(&PTR_PTR_112931ae8);
  return;
}



/* Entry: 100360ea4; end: 100360f47;  */

void FUN_100360ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f364b0,&UNK_10db7eb10);
  puVar1 = &UNK_110601d10;
  func_0x000107c613fc(&UNK_110601d10,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(0x1008f0324,puVar1);
  return;
}



/* Entry: 100360f48; end: 100360f67;  */

void FUN_100360f48(void)

{
  func_0x000107c61168(&PTR_PTR_112f364f8);
  return;
}



/* Entry: 100360f68; end: 10036100b;  */

void FUN_100360f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f1ec60,&UNK_10db57120);
  puVar1 = &UNK_1105daf90;
  func_0x000107c613fc(&UNK_1105daf90,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_102e3b798,puVar1);
  return;
}



/* Entry: 10036100c; end: 100361067;  */

void FUN_10036100c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100361068; end: 10036108f;  */

undefined * FUN_100361068(void)

{
  return PTR_s_cameraLensSmudgeDetectionStatus_1125a8060;
}



/* Entry: 100361090; end: 1003610df;  */

void FUN_100361090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1003610e0; end: 100361183;  */

void FUN_1003610e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f0bd90,&UNK_10db3f410);
  puVar1 = &UNK_1105bfda0;
  func_0x000107c613fc(&UNK_1105bfda0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_102cdc374,puVar1);
  return;
}



/* Entry: 100361184; end: 1003611df;  */

void FUN_100361184(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003611e0; end: 1003611fb;  */

void FUN_1003611e0(undefined8 param_1)

{
  FUN_1000285a8(0x112f0bd98,&UNK_10db3f418);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_102cdc6dc,param_1);
  return;
}



/* Entry: 1003611fc; end: 10036124b;  */

void FUN_1003611fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 10036124c; end: 10036126b;  */

void FUN_10036124c(void)

{
  func_0x000107c61168(&PTR_PTR_11292df58);
  return;
}



/* Entry: 10036126c; end: 100361303;  */

void FUN_10036126c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f1ee68,&UNK_10db57460);
  puVar1 = &UNK_1105db120;
  func_0x000107c613fc(&UNK_1105db120,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1000823a8(FUN_1006fb820,puVar1);
  return;
}



/* Entry: 100361304; end: 100361323;  */

void FUN_100361304(void)

{
  func_0x000107c61168(&PTR_PTR_112f1eee0);
  return;
}



/* Entry: 100361324; end: 10036133f;  */

void FUN_100361324(undefined8 param_1)

{
  FUN_1000285a8(0x112f1ee70,&UNK_10db57468);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_1006fb7c4,param_1);
  return;
}



/* Entry: 100361340; end: 10036138f;  */

void FUN_100361340(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 100361390; end: 1003613af;  */

void FUN_100361390(void)

{
  func_0x000107c61168(&PTR_PTR_1128fb230);
  return;
}



/* Entry: 1003613b0; end: 1003613fb;  */

void FUN_1003613b0(undefined8 param_1)

{
  FUN_1000285a8(0x112fee730,&UNK_10dc58740);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100716684,param_1);
  return;
}



/* Entry: 1003613fc; end: 10036141b;  */

void FUN_1003613fc(void)

{
  func_0x000107c61168(&PTR_PTR_11292fcb0);
  return;
}



/* Entry: 10036141c; end: 100361467;  */

void FUN_10036141c(undefined8 param_1)

{
  FUN_1000285a8(0x112fee7e0,&UNK_10dc588e0);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100712a7c,param_1);
  return;
}



/* Entry: 100361468; end: 100361487;  */

void FUN_100361468(void)

{
  func_0x000107c61168(&PTR_PTR_11292fe78);
  return;
}



/* Entry: 100361488; end: 100361567;  */

void FUN_100361488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112f1f8d0,&UNK_10db58560);
  puVar1 = &UNK_1105db8d0;
  func_0x000107c613fc(&UNK_1105db8d0,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  FUN_1000823a8(FUN_1006f8c24,puVar1);
  return;
}



/* Entry: 100361568; end: 100361587;  */

void FUN_100361568(void)

{
  func_0x000107c61168(&PTR_PTR_112f1f948);
  return;
}



/* Entry: 100361588; end: 1003615d3;  */

void FUN_100361588(undefined8 param_1)

{
  FUN_1000285a8(0x113034c60,&UNK_10dcaeb10);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_10050d94c,param_1);
  return;
}



/* Entry: 1003615d4; end: 1003615f3;  */

void FUN_1003615d4(void)

{
  func_0x000107c61168(&PTR_PTR_11296a5d8);
  return;
}



/* Entry: 1003615f4; end: 10036163f;  */

void FUN_1003615f4(undefined8 param_1)

{
  FUN_1000285a8(0x11307b1c0,&UNK_10dd01f20);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(&UNK_104459b0c,param_1);
  return;
}



/* Entry: 100361640; end: 10036165f;  */

void FUN_100361640(void)

{
  func_0x000107c61168(&PTR_PTR_1129b7ed0);
  return;
}



/* Entry: 100361660; end: 10036167b;  */

void FUN_100361660(undefined8 param_1)

{
  FUN_1000285a8(0x112f2d3d0,&UNK_10db71970);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100b450bc,param_1);
  return;
}



/* Entry: 10036167c; end: 1003616cb;  */

void FUN_10036167c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(param_4,param_1);
  return;
}



/* Entry: 1003616cc; end: 100361717;  */

void FUN_1003616cc(undefined8 param_1)

{
  FUN_1000285a8(0x11307b318,&UNK_10dd02180);
  func_0x000107c6157c(param_1);
  FUN_1000823a8(FUN_100930b28,param_1);
  return;
}



/* Entry: 100361718; end: 100361737;  */

void FUN_100361718(void)

{
  func_0x000107c61168(&PTR_PTR_1129b8360);
  return;
}



/* Entry: 100361738; end: 1003617f3;  */

void FUN_100361738(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  FUN_1000285a8(0x112ea3c50,&UNK_10dab6750);
  puVar1 = &UNK_11051cbe8;
  func_0x000107c613fc(&UNK_11051cbe8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  FUN_1000823a8(&UNK_102523cac,puVar1);
  return;
}



/* Entry: 1003617f4; end: 1003617f7;  */

void FUN_1003617f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1003617f8; end: 100361817;  */

void FUN_1003617f8(void)

{
  func_0x000107c61168(&PTR_PTR_1128f9ef8);
  return;
}



/* Entry: 100361818; end: 10036189f;  */

undefined8 FUN_100361818(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000107c61178();
  func_0x000107c3eea8();
  uVar2 = param_1;
  func_0x000107c4adac();
  lStack_38 = (long)(int)uVar2;
  uStack_40 = uVar1;
  FUN_100063660(param_2,&uStack_40);
  func_0x000107c61170(param_1);
  return param_2;
}



/* Entry: 1003618a0; end: 10036194f;  */

void FUN_1003618a0(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  
  if (0 < *(int *)(param_1 + 0x18)) {
    func_0x00010598fd84(param_1 + 0x10);
  }
  if ((*(ulong *)(param_1 + 0x28) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  if ((*(ulong *)(param_1 + 0x30) & 3) != 0) {
    puVar1 = (undefined8 *)(*(ulong *)(param_1 + 0x30) & 0xfffffffffffffffc);
    if (*(char *)((long)puVar1 + 0x17) < '\0') {
      *(undefined1 *)*puVar1 = 0;
      puVar1[1] = 0;
    }
    else {
      *(undefined1 *)puVar1 = 0;
      *(undefined1 *)((long)puVar1 + 0x17) = 0;
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    func_0x00010b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 100361950; end: 100361aa7;  */

undefined ** FUN_100361950(void)

{
  return &PTR_DAT_110c9b640;
}



/* Entry: 100361aa8; end: 100361b3f;  */

undefined8 * FUN_100361aa8(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  *param_1 = &PTR_DAT_110c9b600;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = &DAT_11383d918;
  param_1[6] = &DAT_11383d918;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1 != param_2) {
    uVar1 = param_2[1];
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(uVar1 & 0xfffffffffffffffe);
    }
    if (uVar1 == 0) {
      FUN_100361b40(param_1,param_2);
    }
    else {
      FUN_1003618a0(param_1);
      func_0x000107c2bc1c(param_1,param_2);
    }
  }
  return param_1;
}



/* Entry: 100361b40; end: 100361bc3;  */

void FUN_100361b40(long param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar3;
  do {
    uVar1 = *(undefined1 *)(param_1 + 0x10 + lVar2);
    *(undefined1 *)(param_1 + 0x10 + lVar2) = *(undefined1 *)(param_2 + 0x10 + lVar2);
    *(undefined1 *)(param_2 + 0x10 + lVar2) = uVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x10);
  lVar2 = 0;
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar3;
  do {
    uVar1 = *(undefined1 *)(param_1 + 0x38 + lVar2);
    *(undefined1 *)(param_1 + 0x38 + lVar2) = *(undefined1 *)(param_2 + 0x38 + lVar2);
    *(undefined1 *)(param_2 + 0x38 + lVar2) = uVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x18);
  return;
}



/* Entry: 100361bc4; end: 100361c07;  */

long FUN_100361bc4(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    func_0x0001053936ac();
  }
  FUN_100067de0(param_1 + 0x28);
  FUN_100067de0(param_1 + 0x30);
  FUN_1000682a4(param_1 + 0x10);
  return param_1;
}



/* Entry: 100361c08; end: 100361ce3;  */

undefined8 * FUN_100361c08(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  param_1[1] = param_2;
  *param_1 = &PTR_DAT_110c9b600;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x000107c30374(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  if (*(int *)(param_3 + 0x18) != 0) {
    FUN_100361cfc(param_1 + 2,param_3 + 0x10);
  }
  puVar2 = (ulong *)(param_3 + 0x28);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x0001002a0e78(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[5] = puVar1;
  puVar2 = (ulong *)(param_3 + 0x30);
  puVar1 = (ulong *)*puVar2;
  if ((*puVar2 & 3) != 0) {
    func_0x0001002a0e78(puVar2,param_2);
    puVar1 = puVar2;
  }
  param_1[6] = puVar1;
  *(undefined4 *)(param_1 + 10) = 0;
  uVar4 = *(undefined8 *)(param_3 + 0x40);
  uVar3 = *(undefined8 *)(param_3 + 0x38);
  param_1[9] = *(undefined8 *)(param_3 + 0x48);
  param_1[8] = uVar4;
  param_1[7] = uVar3;
  return param_1;
}



/* Entry: 100361ce4; end: 100361cfb;  */

undefined1  [16] FUN_100361ce4(ulong *param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  uint uVar6;
  uint **ppuVar7;
  uint *puVar8;
  uint **ppuVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint *apuStack_58 [2];
  undefined8 uStack_48;
  
  iVar3 = *(int *)(param_2 + 8) + (int)param_1[1];
  iVar2 = *(int *)((long)param_1 + 0xc) + 1;
  uVar6 = iVar3 - iVar2;
  puVar10 = (uint *)(ulong)uVar6;
  if (uVar6 == 0 || iVar3 < iVar2) {
    puVar5 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar5 = (ulong *)(*param_1 + 7);
    }
    auVar17._8_4_ = uVar6;
    auVar17._0_8_ = puVar5 + (int)param_1[1];
    auVar17._12_4_ = 0;
    return auVar17;
  }
  uVar1 = *(int *)((long)param_1 + 0xc) + 1;
  uVar6 = uVar1 + uVar6;
  puVar11 = (uint *)param_1[2];
  uVar14 = 1;
  if (0 < (int)uVar6) {
    if ((int)uVar6 < (int)(uVar1 * 2 | 1)) {
      uVar6 = uVar1 * 2 + 1;
    }
    uVar4 = 0x7fffffff;
    if (*(int *)((long)param_1 + 0xc) < 0x3ffffffb) {
      uVar4 = uVar6;
    }
    uVar14 = (ulong)uVar4;
  }
  puVar8 = (uint *)(uVar14 * 8 + 8);
  if (puVar11 == (uint *)0x0) {
    FUN_100064708();
    uVar14 = (ulong)(puVar10 + 0x1fffffffe) >> 3;
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    ppuVar7 = apuStack_58;
    apuStack_58[0] = puVar8;
    func_0x0001053abb00(ppuVar7,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (ppuVar7 != (uint **)0x0) {
      puVar10 = (uint *)(long)*(char *)((long)ppuVar7 + 0x17);
      ppuVar9 = ppuVar7;
      if ((long)puVar10 < 0) {
        ppuVar9 = (uint **)*ppuVar7;
        puVar10 = ppuVar7[1];
      }
      func_0x000107c2b940(apuStack_58,
                          "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                          ,0x10a,ppuVar9,puVar10);
      func_0x0001053abb1c(apuStack_58,"Requested size is too large to fit into size_t.");
      ppuVar7 = apuStack_58;
      func_0x000107c2b948(ppuVar7);
      ppuVar9 = ppuVar7;
      func_0x000107c60e20();
      auVar16._8_8_ = ppuVar7;
      auVar16._0_8_ = ppuVar9;
      return auVar16;
    }
    puVar13 = puVar11;
    func_0x0001053abb54(puVar11,puVar8,1);
    puVar10 = puVar8;
    puVar8 = puVar13;
  }
  uVar12 = *param_1;
  if ((uVar12 & 1) == 0) {
    *puVar8 = (uint)(uVar12 != 0);
    *(ulong *)(puVar8 + 2) = uVar12;
  }
  else {
    puVar13 = (uint *)(uVar12 - 1);
    puVar10 = puVar13;
    func_0x000107c610b4(puVar8,puVar13,(long)(int)*puVar13 * 8 + 8);
    if (puVar11 == (uint *)0x0) {
      func_0x000107c60e14(puVar13);
    }
    else {
      func_0x0001053abbbc(puVar11,puVar13,
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3) + 8);
      puVar10 = puVar13;
    }
  }
  *param_1 = (long)puVar8 + 1;
  *(int *)((long)param_1 + 0xc) = (int)uVar14 + -1;
  auVar15._8_8_ = puVar10;
  auVar15._0_8_ = puVar8 + (long)(int)param_1[1] * 2 + 2;
  return auVar15;
}



/* Entry: 100361cfc; end: 100361e13;  */

void FUN_100361cfc(long *param_1,ulong *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *unaff_x19;
  int unaff_w20;
  long lVar6;
  ulong *puVar7;
  long lVar8;
  long lStack_58;
  
  FUN_100361ce4();
  puVar1 = param_2;
  if ((*param_2 & 1) != 0) {
    puVar1 = (ulong *)(*param_2 + 7);
  }
  uVar2 = param_2[1];
  plVar4 = param_1;
  func_0x000100361e44();
  iVar3 = (int)param_2[1];
  if ((int)plVar4 <= (int)param_2[1]) {
    iVar3 = (int)plVar4;
  }
  for (puVar7 = puVar1; puVar7 < puVar1 + iVar3; puVar7 = puVar7 + 1) {
    plVar4 = (long *)*param_1;
    func_0x000107c60ca4(plVar4,*puVar7);
    param_1 = param_1 + 1;
  }
  lVar6 = unaff_x19[2];
  if (lVar6 == 0) {
    lVar6 = 0;
    while( true ) {
      iVar3 = (int)plVar4;
      if (puVar1 + (int)uVar2 <= (ulong *)((long)puVar7 + lVar6)) break;
      plVar5 = (long *)0x18;
      func_0x000107c60e20();
      plVar4 = plVar5;
      func_0x000107c60c94();
      *(long **)((long)param_1 + lVar6) = plVar5;
      lVar6 = lVar6 + 8;
    }
  }
  else {
    lVar8 = 0;
    while( true ) {
      iVar3 = (int)plVar4;
      if (puVar1 + (int)uVar2 <= (ulong *)((long)puVar7 + lVar8)) break;
      plVar4 = &lStack_58;
      lStack_58 = lVar6;
      func_0x000107c303c8(plVar4,*(ulong *)((long)puVar7 + lVar8));
      *(long **)((long)param_1 + lVar8) = plVar4;
      lVar8 = lVar8 + 8;
    }
  }
  FUN_100361e74();
  if (iVar3 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 100361e14; end: 100361e4b;  */

undefined1  [16] FUN_100361e14(ulong *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  uint uVar5;
  uint **ppuVar6;
  uint *puVar7;
  uint **ppuVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint *apuStack_58 [2];
  undefined8 uStack_48;
  
  iVar2 = *(int *)((long)param_1 + 0xc) + 1;
  uVar5 = param_2 - iVar2;
  puVar9 = (uint *)(ulong)uVar5;
  if (uVar5 == 0 || param_2 < iVar2) {
    puVar4 = param_1;
    if ((*param_1 & 1) != 0) {
      puVar4 = (ulong *)(*param_1 + 7);
    }
    auVar16._8_4_ = uVar5;
    auVar16._0_8_ = puVar4 + (int)param_1[1];
    auVar16._12_4_ = 0;
    return auVar16;
  }
  uVar1 = *(int *)((long)param_1 + 0xc) + 1;
  uVar5 = uVar1 + uVar5;
  puVar10 = (uint *)param_1[2];
  uVar13 = 1;
  if (0 < (int)uVar5) {
    if ((int)uVar5 < (int)(uVar1 * 2 | 1)) {
      uVar5 = uVar1 * 2 + 1;
    }
    uVar3 = 0x7fffffff;
    if (*(int *)((long)param_1 + 0xc) < 0x3ffffffb) {
      uVar3 = uVar5;
    }
    uVar13 = (ulong)uVar3;
  }
  puVar7 = (uint *)(uVar13 * 8 + 8);
  if (puVar10 == (uint *)0x0) {
    FUN_100064708();
    uVar13 = (ulong)(puVar9 + 0x1fffffffe) >> 3;
  }
  else {
    uStack_48 = 0xffffffffffffffff;
    ppuVar6 = apuStack_58;
    apuStack_58[0] = puVar7;
    func_0x0001053abb00(ppuVar6,&uStack_48,
                        "num_elements <= std::numeric_limits<size_t>::max() / sizeof(T)");
    if (ppuVar6 != (uint **)0x0) {
      puVar9 = (uint *)(long)*(char *)((long)ppuVar6 + 0x17);
      ppuVar8 = ppuVar6;
      if ((long)puVar9 < 0) {
        ppuVar8 = (uint **)*ppuVar6;
        puVar9 = ppuVar6[1];
      }
      func_0x000107c2b940(apuStack_58,
                          "bazel-out/ios_arm64-opt-ios-arm64-min15.0-ST-d6543be58b10/bin/external/protobuf+/src/google/protobuf/_virtual_includes/protobuf_lite/google/protobuf/arena.h"
                          ,0x10a,ppuVar8,puVar9);
      func_0x0001053abb1c(apuStack_58,"Requested size is too large to fit into size_t.");
      ppuVar6 = apuStack_58;
      func_0x000107c2b948(ppuVar6);
      ppuVar8 = ppuVar6;
      func_0x000107c60e20();
      auVar15._8_8_ = ppuVar6;
      auVar15._0_8_ = ppuVar8;
      return auVar15;
    }
    puVar12 = puVar10;
    func_0x0001053abb54(puVar10,puVar7,1);
    puVar9 = puVar7;
    puVar7 = puVar12;
  }
  uVar11 = *param_1;
  if ((uVar11 & 1) == 0) {
    *puVar7 = (uint)(uVar11 != 0);
    *(ulong *)(puVar7 + 2) = uVar11;
  }
  else {
    puVar12 = (uint *)(uVar11 - 1);
    puVar9 = puVar12;
    func_0x000107c610b4(puVar7,puVar12,(long)(int)*puVar12 * 8 + 8);
    if (puVar10 == (uint *)0x0) {
      func_0x000107c60e14(puVar12);
    }
    else {
      func_0x0001053abbbc(puVar10,puVar12,
                          (-(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3) + 8);
      puVar9 = puVar12;
    }
  }
  *param_1 = (long)puVar7 + 1;
  *(int *)((long)param_1 + 0xc) = (int)uVar13 + -1;
  auVar14._8_8_ = puVar9;
  auVar14._0_8_ = puVar7 + (long)(int)param_1[1] * 2 + 2;
  return auVar14;
}


