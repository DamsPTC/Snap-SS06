/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101ec7f70; end: 101ec7faf;  */

void FUN_101ec7f70(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101ec7fb0; end: 101ec7fb3;  */

void FUN_101ec7fb0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 101ec7fb4; end: 101ec7fef; -[_TtC43SCNotificationPayloadDecryptionServicesImpl26NotificationKeychainHelper init] */

void FUN_101ec7fb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000101ec8020();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ec7ff0; end: 101ec807b;  */

void FUN_101ec7ff0(void)

{
  func_0x000101ec8020();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ec807c; end: 101ec80b3;  */

void FUN_101ec807c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101ec80b4; end: 101ec80cb;  */

void FUN_101ec80b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101ec80cc; end: 101ec818f;  */

void FUN_101ec80cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  uStack_40 = 0x101ec8060;
  uStack_38 = 0;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101ec807c;
  puStack_48 = &UNK_110497590;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c3e4fc(puVar1,param_3,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  puVar3 = PTR_PTR_1126a97d8;
  func_0x000107c610f8();
  func_0x000107c47afc();
  func_0x000107c61170(puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101ec8190; end: 101ec8197;  */

void FUN_101ec8190(long param_1,long param_2)

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



/* Entry: 101ec8198; end: 101ec8207; -[_TtC43SCNotificationPayloadDecryptionServicesImpl28NotificationPayloadDecryptor init] */

undefined8 FUN_101ec8198(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  func_0x000101ec8020(0);
  func_0x000107c610f8(uVar1);
  FUN_101ec8208(uVar2);
  uVar1 = param_1;
  func_0x000107c614f0(param_1);
  func_0x000107c61464(param_1,uVar1,0x90,7);
  return uVar2;
}



/* Entry: 101ec8208; end: 101ec837b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ec8208(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e395c0);
  *puVar1 = 0xd00000000000001d;
  puVar1[1] = 0x800000010f018910;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e395c8);
  *puVar1 = 0xd00000000000001a;
  puVar1[1] = 0x800000010f018930;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e395d0);
  *puVar1 = 0xd000000000000023;
  puVar1[1] = 0x800000010f018950;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e395d8);
  *puVar1 = 0xd00000000000001c;
  puVar1[1] = 0x800000010f018980;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e395e0);
  *puVar1 = 0xd000000000000023;
  puVar1[1] = 0x800000010f0189a0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e395e8);
  *puVar1 = 0xd000000000000022;
  puVar1[1] = 0x800000010f0189d0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e395f0);
  *puVar1 = 0xd00000000000001c;
  puVar1[1] = 0x800000010f018a00;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e395f8);
  *puVar1 = 0x4954505952434e45;
  puVar1[1] = 0xed000031565f4e4f;
  *(undefined8 *)(unaff_x20 + _DAT_112e39600) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ec837c; end: 101ec9077;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101ec837c(double param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  ulong *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  uint uVar16;
  int iVar17;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long extraout_x12;
  long lVar21;
  code *pcVar22;
  long unaff_x20;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  undefined1 auStack_120 [8];
  undefined *puStack_118;
  ulong uStack_110;
  undefined1 *puStack_108;
  undefined *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  long lStack_c8;
  undefined8 uStack_c0;
  ulong auStack_a0 [6];
  
  auStack_a0[4] = *(ulong *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5fb10();
  lVar26 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar26 + 0x40));
  puVar7 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar21 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar24 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar25 = lVar24 - extraout_x12;
  func_0x000107c5eea0(lVar25);
  lVar4 = param_2;
  func_0x000107c5fb5c(param_2,param_3);
  if (lVar4 < 1) {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e395c0);
    uVar11 = ((undefined8 *)(unaff_x20 + _DAT_112e395c0))[1];
    func_0x000107c5eea0(lVar24);
LAB_101ec84f0:
    func_0x000107c5ee68(lVar25);
    puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(param_1 * 1000.0);
    pcVar22 = *(code **)(lVar21 + 8);
    (*pcVar22)(lVar24,lVar3);
    puVar6 = PTR_PTR_1126a97e0;
    func_0x000107c610f8(PTR_PTR_1126a97e0);
    func_0x000107c5fadc(uVar10,uVar11);
    func_0x000107c4643c(puVar6);
    func_0x000107c61170(puVar12);
LAB_101ec89c0:
    func_0x000107c61170(uVar10);
  }
  else {
    lStack_e8 = lVar25;
    lStack_c8 = param_2;
    uStack_c0 = param_3;
    func_0x000107c5fb04(puVar7);
    func_0x000100e8b654();
    uVar15 = 0;
    puVar5 = puVar7;
    func_0x000107c60214(puVar7,0,PTR___sSSN_11034da80,lVar4);
    (**(code **)(lVar26 + 8))(puVar7,lVar2);
    if (0xe < uVar15 >> 0x3c) {
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e395c8);
      uVar11 = ((undefined8 *)(unaff_x20 + _DAT_112e395c8))[1];
      func_0x000107c5eea0(lVar24);
      lVar25 = lStack_e8;
      goto LAB_101ec84f0;
    }
    puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    puVar7 = puVar5;
    func_0x000107c5ee20(puVar5,uVar15);
    lStack_c8 = 0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    lVar25 = lStack_c8;
    if (puVar6 == (undefined *)0x0) {
      lVar4 = lStack_c8;
      uStack_f0 = uVar15;
      func_0x000107c61174();
      func_0x000107c5ed30();
      func_0x000107c61170(lVar4);
      func_0x000107c61654();
      uVar10 = 0x112d393f0;
      lStack_c8 = lVar25;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      uVar11 = 0;
      func_0x000100ea57c8(0);
      func_0x000107c6147c(auStack_a0,&lStack_c8,uVar10,uVar11,0);
      uVar23 = auStack_a0[0];
      func_0x000107c614ac(lStack_c8);
LAB_101ec872c:
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e395c8);
      uVar11 = ((undefined8 *)(unaff_x20 + _DAT_112e395c8))[1];
      func_0x000107c5eea0(lVar24);
      lVar25 = lStack_e8;
      func_0x000107c5ee68(lStack_e8);
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(param_1 * 1000.0);
      pcVar22 = *(code **)(lVar21 + 8);
      (*pcVar22)(lVar24,lVar3);
      puVar6 = PTR_PTR_1126a97e0;
      func_0x000107c610f8(PTR_PTR_1126a97e0);
      func_0x000107c5fadc(uVar10,uVar11);
      func_0x000107c4643c(puVar6);
      func_0x000107c61170(uVar23);
      func_0x0001000b44c0(puVar5,uStack_f0);
LAB_101ec89b0:
      func_0x000107c61170(puVar12);
      goto LAB_101ec89c0;
    }
    func_0x000107c61174();
    func_0x000107c60234(&lStack_c8,puVar6);
    func_0x000107c615e8(puVar6);
    uVar10 = 0x112da99a0;
    func_0x0001000285a8(0x112da99a0,&UNK_10d97c130);
    puVar6 = PTR___sypN_11034f1a8;
    puVar8 = auStack_a0;
    func_0x000107c6147c(puVar8,&lStack_c8,PTR___sypN_11034f1a8 + 8,uVar10,6);
    uVar23 = auStack_a0[0];
    if (((ulong)puVar8 & 1) == 0) {
      uVar23 = 0;
      uStack_f0 = uVar15;
      goto LAB_101ec872c;
    }
    uStack_e0 = 0x6574707972636e65;
    puStack_d8 = (undefined *)0xee00617461645f64;
    puVar12 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&lStack_c8,&uStack_e0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(uVar23 + 0x10) == 0) {
LAB_101ec87f0:
      param_1 = 0.0;
      auStack_a0[1] = 0;
      auStack_a0[0] = 0;
      auStack_a0[3] = 0;
      auStack_a0[2] = 0;
    }
    else {
      func_0x000107c61434(uVar23);
      plVar9 = &lStack_c8;
      func_0x000100df95d0(plVar9);
      if (((ulong)puVar12 & 1) == 0) {
        func_0x000107c6142c(uVar23);
        goto LAB_101ec87f0;
      }
      func_0x0001000bb420(*(long *)(uVar23 + 0x38) + (long)plVar9 * 0x20,auStack_a0);
      func_0x000107c6142c(uVar23);
    }
    func_0x0001007bbff0(&lStack_c8);
    if (auStack_a0[3] == 0) {
      uStack_f8 = uVar23;
      func_0x00010006e7f4(auStack_a0);
LAB_101ec88f8:
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e395d0);
      uVar11 = ((undefined8 *)(unaff_x20 + _DAT_112e395d0))[1];
      func_0x000107c5eea0(lVar24);
      lVar25 = lStack_e8;
      func_0x000107c5ee68(lStack_e8);
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(param_1 * 1000.0);
      pcVar22 = *(code **)(lVar21 + 8);
      (*pcVar22)(lVar24,lVar3);
      puVar6 = PTR_PTR_1126a97e0;
      func_0x000107c610f8(PTR_PTR_1126a97e0);
      func_0x000107c5fadc(uVar10,uVar11);
      func_0x000107c4643c(puVar6);
      func_0x0001000b44c0(puVar5,uVar15);
      uVar23 = uStack_f8;
LAB_101ec89ac:
      func_0x000107c6142c(uVar23);
      goto LAB_101ec89b0;
    }
    puVar8 = &uStack_e0;
    func_0x000107c6147c(puVar8,auStack_a0,puVar6 + 8,PTR___sSSN_11034da80,6);
    puVar12 = puStack_d8;
    if (((ulong)puVar8 & 1) == 0) {
      uStack_f8 = uVar23;
      goto LAB_101ec88f8;
    }
    uStack_f8 = uStack_e0;
    uVar18 = uStack_e0;
    func_0x000107c5fb5c(uStack_e0,puStack_d8);
    if ((long)uVar18 < 1) {
      uStack_f8 = uVar23;
      func_0x000107c6142c(puVar12);
      goto LAB_101ec88f8;
    }
    uStack_e0 = 0x6974707972636e65;
    puStack_d8 = (undefined *)0xef657079745f6e6f;
    puVar13 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&lStack_c8,&uStack_e0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(uVar23 + 0x10) == 0) {
LAB_101ec8a18:
      param_1 = 0.0;
      auStack_a0[1] = 0;
      auStack_a0[0] = 0;
      auStack_a0[3] = 0;
      auStack_a0[2] = 0;
    }
    else {
      func_0x000107c61434(uVar23);
      plVar9 = &lStack_c8;
      func_0x000100df95d0(plVar9);
      if (((ulong)puVar13 & 1) == 0) {
        func_0x000107c6142c(uVar23);
        goto LAB_101ec8a18;
      }
      func_0x0001000bb420(*(long *)(uVar23 + 0x38) + (long)plVar9 * 0x20,auStack_a0);
      func_0x000107c6142c(uVar23);
    }
    func_0x0001007bbff0(&lStack_c8);
    if (auStack_a0[3] == 0) {
      uStack_f0 = uVar15;
      func_0x000107c6142c(puVar12);
      func_0x00010006e7f4(auStack_a0);
      lVar25 = _DAT_112e395e0;
LAB_101ec8b38:
      uVar10 = *(undefined8 *)(unaff_x20 + lVar25);
      uVar11 = ((undefined8 *)(unaff_x20 + lVar25))[1];
      func_0x000107c5eea0(lVar24);
      lVar25 = lStack_e8;
      func_0x000107c5ee68(lStack_e8);
      puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(param_1 * 1000.0);
      pcVar22 = *(code **)(lVar21 + 8);
      (*pcVar22)(lVar24,lVar3);
      puVar6 = PTR_PTR_1126a97e0;
      func_0x000107c610f8(PTR_PTR_1126a97e0);
      func_0x000107c5fadc(uVar10,uVar11);
      func_0x000107c4643c(puVar6);
      func_0x0001000b44c0(puVar5,uStack_f0);
      goto LAB_101ec89ac;
    }
    puVar8 = &uStack_e0;
    uStack_f0 = uVar15;
    func_0x000107c6147c(puVar8,auStack_a0,puVar6 + 8,PTR___sSSN_11034da80,6);
    puVar6 = puStack_d8;
    if (((ulong)puVar8 & 1) == 0) {
LAB_101ec8b2c:
      func_0x000107c6142c(puVar12);
      lVar25 = _DAT_112e395e0;
      goto LAB_101ec8b38;
    }
    puStack_100 = puVar12;
    uVar18 = uStack_e0;
    func_0x000107c5fadc(uStack_e0,puStack_d8);
    func_0x000107c6142c(puVar6);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e395f8);
    uVar15 = ((undefined8 *)(unaff_x20 + _DAT_112e395f8))[1];
    func_0x000107c5fadc(uVar10);
    uVar19 = uVar18;
    func_0x000107c49cec();
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar10);
    puVar12 = puStack_100;
    if ((int)uVar19 == 0) goto LAB_101ec8b2c;
    puVar6 = PTR_PTR_1126aef90;
    func_0x000107c61168();
    func_0x000107c41238();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c6142c(puStack_100);
      lVar25 = _DAT_112e395e8;
      goto LAB_101ec8b38;
    }
    puVar12 = puVar6;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar6);
    puVar6 = puStack_100;
    uVar1 = (uint)(uVar15 >> 0x20);
    uVar16 = uVar1 >> 0x1e;
    if (1 < uVar1 >> 0x1e) {
      if (uVar16 == 2) {
        uVar18 = *(long *)(puVar12 + 0x18) - *(long *)(puVar12 + 0x10);
        if (SBORROW8(*(long *)(puVar12 + 0x18),*(long *)(puVar12 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x101ec8c10);
          (*pcVar22)();
        }
        goto LAB_101ec8c20;
      }
LAB_101ec8c74:
      func_0x000107c6142c(puStack_100);
      func_0x00010006c090(puVar12,uVar15);
      lVar25 = _DAT_112e395e8;
      goto LAB_101ec8b38;
    }
    if (uVar16 == 0) {
      uVar18 = uVar15 >> 0x30 & 0xff;
    }
    else {
      iVar17 = (int)((ulong)puVar12 >> 0x20);
      if (SBORROW4(iVar17,(int)puVar12)) goto LAB_101ec906c;
      uVar18 = (ulong)(iVar17 - (int)puVar12);
    }
LAB_101ec8c20:
    if ((long)uVar18 < 1) goto LAB_101ec8c74;
    puVar13 = puStack_100;
    func_0x000107c5ee08(uStack_f8,puStack_100,0);
    func_0x000107c6142c(puVar6);
    uVar18 = uStack_f8;
    uStack_110 = uVar15;
    puStack_108 = puVar5;
    if ((ulong)puVar13 >> 0x3c < 0xf) {
      uVar1 = (uint)((ulong)puVar13 >> 0x20);
      uVar16 = uVar1 >> 0x1e;
      if (1 < uVar1 >> 0x1e) {
        if (uVar16 == 2) {
          uVar19 = *(long *)(uStack_f8 + 0x18) - *(long *)(uStack_f8 + 0x10);
          if (SBORROW8(*(long *)(uStack_f8 + 0x18),*(long *)(uStack_f8 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x101ec8cb4);
            (*pcVar22)();
          }
          goto LAB_101ec8cc8;
        }
LAB_101ec8d60:
        func_0x0001000b44c0(uStack_f8,puVar13);
        goto LAB_101ec8d6c;
      }
      if (uVar16 == 0) {
        uVar19 = (ulong)puVar13 >> 0x30 & 0xff;
      }
      else {
        iVar17 = (int)(uStack_f8 >> 0x20);
        if (SBORROW4(iVar17,(int)uStack_f8)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x101ec9074);
          (*pcVar22)();
        }
        uVar19 = (ulong)(iVar17 - (int)uStack_f8);
      }
LAB_101ec8cc8:
      if ((long)uVar19 < 1) goto LAB_101ec8d60;
      puStack_100 = puVar12;
      func_0x000107c5ee20(puVar12,uVar15);
      puStack_118 = puVar13;
      func_0x000107c5ee20(uVar18,puVar13);
      puVar6 = puVar12;
      uVar19 = uVar18;
      func_0x000107c31270(puVar12,uVar18,0);
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      func_0x000107c61170(uVar18);
      uVar15 = uStack_f0;
      if (puVar6 == (undefined *)0x0) {
LAB_101ec8f8c:
        uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e395f0);
        uVar11 = ((undefined8 *)(unaff_x20 + _DAT_112e395f0))[1];
        func_0x000107c5eea0(lVar24);
        lVar25 = lStack_e8;
        func_0x000107c5ee68(lStack_e8);
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c466c0(param_1 * 1000.0);
        pcVar22 = *(code **)(lVar21 + 8);
        (*pcVar22)(lVar24,lVar3);
        puVar6 = PTR_PTR_1126a97e0;
        func_0x000107c610f8(PTR_PTR_1126a97e0);
        func_0x000107c5fadc(uVar10,uVar11);
        func_0x000107c4643c(puVar6);
        func_0x0001000b44c0(puStack_108,uVar15);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(uVar10);
        func_0x0001000b44c0(uStack_f8,puStack_118);
        puVar12 = puStack_100;
        goto LAB_101ec8e38;
      }
      puVar12 = puVar6;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar6);
      uVar18 = uStack_f0;
      uVar1 = (uint)(uVar19 >> 0x20);
      uVar16 = uVar1 >> 0x1e;
      if (1 < uVar1 >> 0x1e) {
        if (uVar16 == 2) {
          uVar20 = *(long *)(puVar12 + 0x18) - *(long *)(puVar12 + 0x10);
          if (SBORROW8(*(long *)(puVar12 + 0x18),*(long *)(puVar12 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x101ec8e64);
            (*pcVar22)();
          }
          goto LAB_101ec8e74;
        }
LAB_101ec8f80:
        func_0x00010006c090(puVar12,uVar19);
        goto LAB_101ec8f8c;
      }
      if (uVar16 == 0) {
        uVar20 = uVar19 >> 0x30 & 0xff;
      }
      else {
        iVar17 = (int)((ulong)puVar12 >> 0x20);
        if (SBORROW4(iVar17,(int)puVar12)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x101ec9078);
          (*pcVar22)();
        }
        uVar20 = (ulong)(iVar17 - (int)puVar12);
      }
LAB_101ec8e74:
      uVar15 = uStack_f0;
      if ((long)uVar20 < 1) goto LAB_101ec8f80;
      func_0x00010006c00c(puVar12,uVar19);
      func_0x000107c5eea0(lVar24);
      lVar25 = lStack_e8;
      func_0x000107c5ee68(lStack_e8);
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(param_1 * 1000.0);
      pcVar22 = *(code **)(lVar21 + 8);
      (*pcVar22)(lVar24,lVar3);
      puVar6 = PTR_PTR_1126a97e0;
      func_0x000107c610f8(PTR_PTR_1126a97e0);
      puVar14 = puVar12;
      func_0x000107c5ee20(puVar12,uVar19);
      func_0x00010006c090(puVar12,uVar19);
      func_0x000107c4643c(puVar6);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar14);
      func_0x0001000b44c0(puStack_108,uVar18);
      func_0x0001000b44c0(uStack_f8,puStack_118);
      func_0x00010006c090(puStack_100,uStack_110);
      func_0x000107c6142c(uVar23);
      func_0x00010006c090(puVar12,uVar19);
    }
    else {
LAB_101ec8d6c:
      uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e395d8);
      uVar11 = ((undefined8 *)(unaff_x20 + _DAT_112e395d8))[1];
      func_0x000107c5eea0(lVar24);
      lVar25 = lStack_e8;
      func_0x000107c5ee68(lStack_e8);
      puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c466c0(param_1 * 1000.0);
      pcVar22 = *(code **)(lVar21 + 8);
      (*pcVar22)(lVar24,lVar3);
      puVar6 = PTR_PTR_1126a97e0;
      func_0x000107c610f8(PTR_PTR_1126a97e0);
      func_0x000107c5fadc(uVar10,uVar11);
      func_0x000107c4643c(puVar6);
      func_0x0001000b44c0(puStack_108,uStack_f0);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(uVar10);
LAB_101ec8e38:
      func_0x00010006c090(puVar12,uStack_110);
      func_0x000107c6142c(uVar23);
    }
  }
  (*pcVar22)(lVar25,lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == auStack_a0[4]) {
    return puVar6;
  }
  func_0x000107c60e78();
LAB_101ec906c:
                    /* WARNING: Does not return */
  pcVar22 = (code *)SoftwareBreakpoint(1,0x101ec9070);
  (*pcVar22)();
}



/* Entry: 101ec9078; end: 101ec90df; -[_TtC43SCNotificationPayloadDecryptionServicesImpl28NotificationPayloadDecryptor decrypt:] */

void FUN_101ec9078(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_101ec837c(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101ec90e0; end: 101ec9113;  */

void FUN_101ec90e0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ec9114; end: 101ec91cb; -[_TtC43SCNotificationPayloadDecryptionServicesImpl28NotificationPayloadDecryptor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ec9134: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ec915c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ec9184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ec91ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ec9188) */
/* WARNING: Removing unreachable block (ram,0x000101ec9160) */
/* WARNING: Removing unreachable block (ram,0x000101ec9138) */
/* WARNING: Removing unreachable block (ram,0x000101ec91b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ec9114(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112e395c0 + 8))
  ;
  return;
}



/* Entry: 101ec91cc; end: 101ec91eb;  */

void FUN_101ec91cc(void)

{
  func_0x000107c61168(&PTR_PTR_112808628);
  return;
}



/* Entry: 101ec91ec; end: 101ec9233;  */

void FUN_101ec91ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  func_0x000100989754(param_1,param_2,param_3);
  return;
}



/* Entry: 101ec9234; end: 101ec924b;  */

void FUN_101ec9234(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ec924c,0,0);
  return;
}



/* Entry: 101ec924c; end: 101ec939b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ec924c(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 *puVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x60);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x40,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar3 = *(undefined8 *)(lVar4 + _DAT_112e39638);
    func_0x000107c507d0(uVar3);
    func_0x000107c61180();
    puVar1 = &UNK_110497660;
    func_0x000107c613fc(&UNK_110497660,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,lVar4);
    puVar6 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    *(code **)(unaff_x22 + 0x30) = FUN_101ec9668;
    *(undefined **)(unaff_x22 + 0x38) = puVar1;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_1014b8460;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_110497678;
    puVar2 = puVar6;
    func_0x000107c60bc4(puVar6);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    func_0x0001000d224c(puVar6);
    uVar5 = *puVar6;
    func_0x000107c5dc64(uVar3);
    func_0x000107c615e8(uVar5);
    func_0x000107c60bd0(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar4);
  }
  *(bool *)*(undefined8 *)(unaff_x22 + 0x58) = lVar4 == 0;
                    /* WARNING: Could not recover jumptable at 0x000101ec9398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101ec939c; end: 101ec93ef;  */

void FUN_101ec939c(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101ec9908;
  plVar1[0xb] = param_1;
  plVar1[0xc] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ec924c,0,0);
  return;
}



/* Entry: 101ec93f0; end: 101ec942b;  */

void FUN_101ec93f0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101ec9428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101ec942c; end: 101ec94df; -[SCNotificationPermissionSettingsLogger recordNotificationPermissionSettings] */

void FUN_101ec942c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110497660;
  func_0x000107c613fc(&UNK_110497660,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  func_0x000107c61174(param_1);
  uVar2 = 0x112d518a8;
  func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
  uVar3 = 7;
  func_0x0001001ca524(7,0,0x58,0,0,0,&UNK_10da23dd8,puVar1,uVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101ec94e0; end: 101ec9577; +[SCNotificationPermissionSettingsLogger appendToUserNotificationSetting:] */

void FUN_101ec94e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,2,0);
  if (iVar1 != 0) {
    func_0x000107c5f02c();
    func_0x000107c613fc();
    func_0x000107c61174(param_3);
    uVar2 = param_3;
    func_0x000107c5f028();
    func_0x000107c5f024();
    func_0x000107c61574(uVar2);
    func_0x000107c5a774(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 101ec9578; end: 101ec95ab;  */

void FUN_101ec9578(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101ec95ac; end: 101ec95f3; -[SCNotificationPermissionSettingsLogger .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ec95c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ec95cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ec95ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e39630));
  return;
}



/* Entry: 101ec95f4; end: 101ec9613;  */

void FUN_101ec95f4(void)

{
  func_0x000107c61168(&PTR_PTR_112808728);
  return;
}



/* Entry: 101ec9614; end: 101ec9667;  */

void FUN_101ec9614(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101ec990c;
  plVar1[0xb] = param_1;
  plVar1[0xc] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101ec924c,0,0);
  return;
}



/* Entry: 101ec9668; end: 101ec98eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ec9668(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  if ((param_1 != 0) && (param_2 == 0)) {
    puVar3 = PTR_PTR_1126a97e8;
    func_0x000107c610f8(PTR_PTR_1126a97e8);
    func_0x000107c61174();
    func_0x000107c453e4(puVar3);
    lVar4 = param_1;
    func_0x000107c3e488();
    if (lVar4 != 1) {
      func_0x000107c3e488(param_1);
    }
    func_0x000107c59b68(puVar3);
    func_0x000107c3e640(param_1);
    func_0x000107c5a750(puVar3);
    func_0x000107c5b618(param_1);
    func_0x000107c5a7b0(puVar3);
    func_0x000107c3dae8(param_1);
    func_0x000107c5a748(puVar3);
    func_0x000107c42100(param_1);
    func_0x000107c54220(puVar3);
    func_0x000107c4214c(param_1);
    func_0x000107c54238(puVar3);
    lVar4 = param_1;
    func_0x000107c5ca10();
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec98e0);
      (*pcVar1)();
    }
    func_0x000107c59d78(puVar3);
    lVar4 = param_1;
    func_0x000107c41e4c();
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec98e4);
      (*pcVar1)();
    }
    func_0x000107c5410c(puVar3);
    lVar4 = param_1;
    func_0x000107c5191c();
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec98e8);
      (*pcVar1)();
    }
    func_0x000107c58c38(puVar3);
    lVar4 = param_1;
    func_0x000107c3daf0();
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101ec98ec);
      (*pcVar1)();
    }
    func_0x000107c52608(puVar3);
    iVar2 = 2;
    func_0x000100029b9c(2,0x10,2,0);
    if (iVar2 != 0) {
      uVar5 = 0;
      func_0x000107c5f02c();
      func_0x000107c613fc();
      func_0x000107c5f028();
      func_0x000107c5f024();
      func_0x000107c61574(uVar5);
      func_0x000107c5a774(puVar3);
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
    lVar4 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar4 + _DAT_112e39630);
      func_0x000107c6157c(uVar5);
      func_0x000107c61170(lVar4);
      func_0x0001000d224c(&lStack_60);
      func_0x000107c61574(uVar5);
      if (lStack_60 != 0) {
        func_0x000107c61174(puVar3);
        func_0x000107c4bfb0(lStack_60);
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar3);
        func_0x000107c61170(puVar3);
        func_0x000107c615e8(lStack_60);
        return;
      }
    }
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 101ec98ec; end: 101ec990f;  */

void FUN_101ec98ec(long param_1,long param_2)

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



/* Entry: 101ec9910; end: 101ec99a3;  */

void FUN_101ec9910(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100285314();
  func_0x000107c613fc();
  FUN_101ec9a04(uStack_48,uStack_50,uStack_58);
  *param_1 = param_2;
  return;
}



/* Entry: 101ec99a4; end: 101ec99af;  */

void FUN_101ec99a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100285314();
  func_0x000107c613fc();
  FUN_101ec9a04(uStack_48,uStack_50,uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ec99b0; end: 101ec9a03;  */

undefined8 FUN_101ec99b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  FUN_101ec9a04(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101ec9a04; end: 101ec9adf;  */

void FUN_101ec9a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  FUN_101ecb970(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101ecb1f4();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101ecb228();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
  return;
}



/* Entry: 101ec9ae0; end: 101ec9b1b;  */

void FUN_101ec9ae0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ec9b1c; end: 101ec9b6f;  */

void FUN_101ec9b1c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ec9b70; end: 101ec9bbb;  */

void FUN_101ec9b70(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x28);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ec9bbc; end: 101ec9c0f;  */

void FUN_101ec9bbc(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ec9c10; end: 101ec9cf3;  */

void FUN_101ec9c10(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x0001002a87fc();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_101ecd868(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  FUN_101ecd5c8();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_101ecd5d4();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 101ec9cf4; end: 101ec9cfb;  */

void FUN_101ec9cf4(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_50);
  func_0x0001002a87fc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_101ecd868(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  FUN_101ecd5c8();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_101ecd5d4();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 101ec9cfc; end: 101ec9db3;  */

long FUN_101ec9cfc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_101ecd868(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101ecd5c8();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101ecd5d4();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 101ec9db4; end: 101ec9de7;  */

void FUN_101ec9db4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ec9de8; end: 101ec9e3b;  */

void FUN_101ec9de8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ec9e3c; end: 101ec9e87;  */

void FUN_101ec9e3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101ec9e88; end: 101ec9edb;  */

void FUN_101ec9e88(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101ec9edc; end: 101ec9fdb; -[_TtC35SCCommunitiesOrgNetworkServicesImpl40CommunitiesGroupChatNetworkRequesterImpl createCommunityGroupChatRequestWithCommunityId:participantsUserIds:groupChatName:completion:] */

/* WARNING: Possible PIC construction at 0x000101ec9fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ec9fb8) */

void FUN_101ec9edc(undefined8 param_1,undefined *param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4(param_6);
  if (param_3 == 0) {
    param_3 = 0;
    puVar2 = PTR___sSSN_11034da80;
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_3);
    puVar2 = PTR___sSSN_11034da80;
    puVar1 = param_2;
  }
  PTR___sSSN_11034da80 = puVar2;
  if (param_4 != 0) {
    func_0x000107c5fc54(param_4,puVar2);
    param_2 = puVar2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_1);
  func_0x000107c60bc4(param_6);
  FUN_101eca450(param_3,puVar1,param_4,param_5,param_2,param_1,param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c60bd0(param_6);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ec9fdc; end: 101eca16b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ec9fdc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  if (param_2 != 0) {
    puVar1 = PTR_PTR_1126d9080;
    func_0x000107c610f8(PTR_PTR_1126d9080);
    func_0x000107c61434(param_2);
    func_0x000107c453e4(puVar1);
    uVar5 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    uVar2 = uVar5;
    func_0x000100576e9c();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c53604(puVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c5708c(puVar1);
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e39848);
    puVar3 = &UNK_110497940;
    func_0x000107c613fc(&UNK_110497940,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(long *)(puVar3 + 0x18) = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    *(undefined8 *)(puVar3 + 0x28) = param_5;
    uStack_70 = 0x101eca400;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x101eca7e4;
    puStack_78 = &UNK_110497958;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    puVar3 = puStack_68;
    func_0x000107c61174(puVar1);
    func_0x000107c6157c(param_5);
    func_0x000107c61574(puVar3);
    func_0x000107c3ab9c(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 101eca16c; end: 101eca1c7;  */

void FUN_101eca16c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    (*param_5)(0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  (*param_5)();
  return;
}



/* Entry: 101eca1c8; end: 101eca23f;  */

/* WARNING: Possible PIC construction at 0x000101eca224: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eca228) */

void FUN_101eca1c8(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 101eca240; end: 101eca2f3; -[_TtC35SCCommunitiesOrgNetworkServicesImpl40CommunitiesGroupChatNetworkRequesterImpl listCommunityGroupChatsRequestWithCommunityId:order:completion:] */

void FUN_101eca240(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  puVar1 = &UNK_110497990;
  func_0x000107c613fc(&UNK_110497990,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_1);
  FUN_101ec9fdc(param_3,param_2,param_4,FUN_101eca438,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101eca2f4; end: 101eca34b;  */

void FUN_101eca2f4(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101eca34c; end: 101eca3a7; -[_TtC35SCCommunitiesOrgNetworkServicesImpl40CommunitiesGroupChatNetworkRequesterImpl init] */

void FUN_101eca34c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommunitiesOrgNetworkServicesImpl.CommunitiesGroupChatNetworkRequesterImpl"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101eca378);
  (*pcVar1)();
}



/* Entry: 101eca3a8; end: 101eca3df; -[_TtC35SCCommunitiesOrgNetworkServicesImpl40CommunitiesGroupChatNetworkRequesterImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eca3a8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e39848));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e39850));
  return;
}



/* Entry: 101eca3e0; end: 101eca41b;  */

void FUN_101eca3e0(void)

{
  func_0x000107c61168(&PTR_PTR_1128087f8);
  return;
}



/* Entry: 101eca41c; end: 101eca437;  */

void FUN_101eca41c(long param_1,long param_2)

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



/* Entry: 101eca438; end: 101eca44f;  */

void FUN_101eca438(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101eca2f4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101eca450; end: 101eca7a3;  */

/* WARNING: Possible PIC construction at 0x000101eca744: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101eca768: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eca748) */
/* WARNING: Removing unreachable block (ram,0x000101eca76c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101eca450(undefined8 param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar2 = &UNK_1104979b8;
  func_0x000107c613fc(&UNK_1104979b8,0x18,7);
  *(long *)(puVar2 + 0x10) = param_7;
  if (((param_2 == 0) || (param_3 == 0)) || (param_5 == 0)) {
    func_0x000107c60bc4(param_7);
    (**(code **)(param_7 + 0x10))(param_7,0,0);
  }
  else {
    puVar3 = PTR_PTR_1126a97f0;
    func_0x000107c610f8();
    func_0x000107c60bc4(param_7);
    func_0x000107c61434(param_2);
    func_0x000107c453e4();
    uVar4 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    uVar5 = uVar4;
    func_0x000100576e9c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c53604(puVar3);
    func_0x000107c61170(uVar5);
    func_0x000107c5fadc(param_4,param_5);
    func_0x000107c56954(puVar3);
    func_0x000107c61170(param_4);
    lVar11 = *(long *)(param_3 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar11 != 0) {
      puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000101ecabd4(0,lVar11,0);
      puVar10 = (undefined8 *)(param_3 + 0x28);
      do {
        puVar8 = puStack_90;
        uVar4 = puVar10[-1];
        uVar5 = *puVar10;
        func_0x000107c61434(uVar5);
        func_0x000107c5fadc(uVar4,uVar5);
        uVar6 = uVar4;
        func_0x000100576e9c();
        func_0x000107c61180();
        func_0x000107c6142c(uVar5);
        func_0x000107c61170(uVar4);
        uVar1 = *(ulong *)(puVar8 + 0x10);
        puStack_90 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          func_0x000101ecabd4(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
        }
        puVar10 = puVar10 + 2;
        *(ulong *)(puStack_90 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puStack_90 + uVar1 * 8 + 0x20) = uVar6;
        lVar11 = lVar11 + -1;
        puVar8 = puStack_90;
      } while (lVar11 != 0);
    }
    puVar7 = puVar8;
    FUN_101eca7e8(puVar8);
    func_0x000107c6142c(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar9 = puVar7;
    func_0x000107c5fc48(puVar7,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar7);
    func_0x000107c45788(puVar8);
    func_0x000107c61170(puVar9);
    func_0x000107c5723c(puVar3);
    puVar8 = &UNK_1104979e0;
    func_0x000107c613fc(&UNK_1104979e0,0x30,7);
    *(undefined8 *)(puVar8 + 0x10) = param_1;
    *(long *)(puVar8 + 0x18) = param_2;
    *(undefined8 *)(puVar8 + 0x20) = 0x101eca7d8;
    *(undefined **)(puVar8 + 0x28) = puVar2;
    pcStack_70 = FUN_101eca7d0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x101eca7e0;
    puStack_78 = &UNK_1104979f8;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    puVar8 = puStack_68;
    func_0x000107c61174(puVar3);
    func_0x000107c6157c(puVar2);
    puVar2 = puVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101eca7a4; end: 101eca7cf;  */

void FUN_101eca7a4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101eca7d0; end: 101eca7e7;  */

void FUN_101eca7d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101eca16c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Entry: 101eca7e8; end: 101eca8f3;  */

undefined * FUN_101eca7e8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar4 != 0) {
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,lVar4,0);
    puVar2 = PTR___sypN_11034f1a8;
    puVar5 = puStack_58;
    puVar6 = (undefined8 *)(param_1 + 0x20);
    do {
      uStack_80 = *puVar6;
      func_0x000107c61174();
      uVar3 = 0x112e398b8;
      func_0x0001000285a8(0x112e398b8,&UNK_10da241c8);
      func_0x000107c6147c(auStack_78,&uStack_80,uVar3,puVar2 + 8,7);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puStack_58 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        func_0x000100c077e4(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = puStack_58;
      *(ulong *)(puStack_58 + 0x10) = uVar1 + 1;
      func_0x000100102924(auStack_78,puStack_58 + uVar1 * 0x20 + 0x20);
      lVar4 = lVar4 + -1;
      puVar6 = puVar6 + 1;
    } while (lVar4 != 0);
  }
  return puVar5;
}



/* Entry: 101eca8f4; end: 101eca96b;  */

/* WARNING: Possible PIC construction at 0x000101eca950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101eca954) */

void FUN_101eca8f4(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 101eca96c; end: 101ecaac7; -[_TtC35SCCommunitiesOrgNetworkServicesImpl34CommunitiesOrgNetworkRequesterImpl sortCommunityMembersWithUserId:orgId:groupId:membersArray:surface:completion:] */

/* WARNING: Possible PIC construction at 0x000101ecaa90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ecaaa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ecaa94) */
/* WARNING: Removing unreachable block (ram,0x000101ecaaa4) */

void FUN_101eca96c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  lVar3 = param_6;
  func_0x000107c61174();
  func_0x000107c61174();
  if (lVar3 == 0) {
    param_6 = 0;
  }
  else {
    func_0x000107c5fc54(param_6,PTR___sSSN_11034da80);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c60bc4(param_8);
  FUN_101ecad20(param_3,uVar2,param_4,uVar1,param_5,param_2,param_6,param_7,param_1,param_8);
  func_0x000107c60bd0(param_8);
  func_0x000107c60bd0(param_8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_6);
  return;
}



/* Entry: 101ecaac8; end: 101ecab1f;  */

void FUN_101ecaac8(undefined8 param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101ecab20; end: 101ecab7b; -[_TtC35SCCommunitiesOrgNetworkServicesImpl34CommunitiesOrgNetworkRequesterImpl init] */

void FUN_101ecab20(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommunitiesOrgNetworkServicesImpl.CommunitiesOrgNetworkRequesterImpl",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ecab4c);
  (*pcVar1)();
}



/* Entry: 101ecab7c; end: 101ecabb3; -[_TtC35SCCommunitiesOrgNetworkServicesImpl34CommunitiesOrgNetworkRequesterImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ecab7c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e39880));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e39888));
  return;
}



/* Entry: 101ecabb4; end: 101ecabef;  */

void FUN_101ecabb4(void)

{
  func_0x000107c61168(&PTR_PTR_1128088d8);
  return;
}



/* Entry: 101ecabf0; end: 101ecad1f;  */

undefined * FUN_101ecabf0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101ecad20);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e398c0;
    func_0x0001000285a8(0x112e398c0,&UNK_10da241d8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112e398b8;
    func_0x0001000285a8(0x112e398b8,&UNK_10da241c8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101ecad20; end: 101ecb137;  */

/* WARNING: Possible PIC construction at 0x000101ecb0d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101ecb0fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ecb0dc) */
/* WARNING: Removing unreachable block (ram,0x000101ecb100) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ecad20(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long in_stack_00000008;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar2 = &UNK_110497a30;
  func_0x000107c613fc(&UNK_110497a30,0x18,7);
  *(long *)(puVar2 + 0x10) = in_stack_00000008;
  if ((((param_2 == 0) || (param_4 == 0)) || (param_6 == 0)) || (param_7 == 0)) {
    func_0x000107c60bc4(in_stack_00000008);
    (**(code **)(in_stack_00000008 + 0x10))(in_stack_00000008,0,0);
  }
  else {
    puVar3 = PTR_PTR_1126d9078;
    func_0x000107c610f8();
    func_0x000107c60bc4(in_stack_00000008);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    func_0x000107c453e4();
    uVar4 = param_5;
    func_0x000107c5fadc(param_5);
    uVar5 = uVar4;
    func_0x000100576e9c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c54f60(puVar3);
    func_0x000107c61170(uVar5);
    uVar4 = param_3;
    func_0x000107c5fadc(param_3,param_4);
    uVar5 = uVar4;
    func_0x000100576e9c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c570a4(puVar3);
    func_0x000107c61170(uVar5);
    uVar4 = param_1;
    func_0x000107c5fadc(param_1,param_2);
    uVar5 = uVar4;
    func_0x000100576e9c();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c5a344(puVar3);
    func_0x000107c61170(uVar5);
    lVar10 = *(long *)(param_7 + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar10 != 0) {
      puStack_90 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000101ecabd4(0,lVar10,0);
      puVar11 = (undefined8 *)(param_7 + 0x28);
      do {
        puVar8 = puStack_90;
        uVar4 = puVar11[-1];
        uVar5 = *puVar11;
        func_0x000107c61434(uVar5);
        func_0x000107c5fadc(uVar4,uVar5);
        uVar6 = uVar4;
        func_0x000100576e9c();
        func_0x000107c61180();
        func_0x000107c6142c(uVar5);
        func_0x000107c61170(uVar4);
        uVar1 = *(ulong *)(puVar8 + 0x10);
        puStack_90 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          func_0x000101ecabd4(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
        }
        puVar11 = puVar11 + 2;
        *(ulong *)(puStack_90 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puStack_90 + uVar1 * 8 + 0x20) = uVar6;
        lVar10 = lVar10 + -1;
        puVar8 = puStack_90;
      } while (lVar10 != 0);
    }
    puVar7 = puVar8;
    FUN_101eca7e8(puVar8);
    func_0x000107c6142c(puVar8);
    puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar9 = puVar7;
    func_0x000107c5fc48(puVar7,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar7);
    func_0x000107c45788(puVar8);
    func_0x000107c61170(puVar9);
    func_0x000107c564f8(puVar3);
    func_0x000107c59ae0(puVar3);
    puVar8 = &UNK_110497a58;
    func_0x000107c613fc(&UNK_110497a58,0x50,7);
    *(undefined8 *)(puVar8 + 0x10) = param_1;
    *(long *)(puVar8 + 0x18) = param_2;
    *(undefined8 *)(puVar8 + 0x20) = param_5;
    *(long *)(puVar8 + 0x28) = param_6;
    *(undefined8 *)(puVar8 + 0x30) = param_3;
    *(long *)(puVar8 + 0x38) = param_4;
    *(code **)(puVar8 + 0x40) = FUN_101ecb138;
    *(undefined **)(puVar8 + 0x48) = puVar2;
    pcStack_70 = FUN_101ecb140;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_101eca8f4;
    puStack_78 = &UNK_110497a70;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    puVar8 = puStack_68;
    func_0x000107c61174(puVar3);
    func_0x000107c6157c(puVar2);
    puVar2 = puVar8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 101ecb138; end: 101ecb13f;  */

void FUN_101ecb138(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101ecb140; end: 101ecb197;  */

void FUN_101ecb140(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x40);
  if (param_2 != 0) {
    func_0x000107c614b0(param_2);
    (*pcVar1)(0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
  (*pcVar1)();
  return;
}



/* Entry: 101ecb198; end: 101ecb1b3;  */

void FUN_101ecb198(long param_1,long param_2)

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



/* Entry: 101ecb1b4; end: 101ecb227;  */

void FUN_101ecb1b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 101ecb228; end: 101ecb4fb;  */

undefined * FUN_101ecb228(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined *puVar10;
  
  puVar10 = &UNK_110497aa8;
  puVar1 = puVar10;
  func_0x000107c613fc(&UNK_110497aa8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112e398c8,&UNK_10da241e0);
  func_0x000107c613fc();
  pcVar2 = FUN_101ecb56c;
  func_0x0001000bdd8c(FUN_101ecb56c,puVar1);
  puVar1 = puVar10;
  func_0x000107c613fc(&UNK_110497aa8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uVar3 = 0x112e398d0;
  func_0x0001000285a8(0x112e398d0,&UNK_10da241e8);
  func_0x000107c613fc();
  pcVar4 = FUN_101ecb6c8;
  func_0x0001000bdd8c(FUN_101ecb6c8,puVar1,uVar3);
  pcVar5 = pcVar4;
  func_0x0001000bf56c();
  func_0x000107c61574(pcVar4);
  puVar1 = puVar10;
  func_0x000107c613fc(&UNK_110497aa8,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uVar3 = 0x112e398d8;
  func_0x0001000285a8(0x112e398d8,&UNK_10da241f0);
  func_0x000107c613fc();
  uVar6 = 0x101ecb6f0;
  func_0x0001000bdd8c(0x101ecb6f0,puVar1,uVar3);
  uVar7 = uVar6;
  func_0x0001000bf56c();
  func_0x000107c61574(uVar6);
  puVar8 = puVar10;
  func_0x000107c613fc(&UNK_110497aa8,0x18,7);
  func_0x000107c61644(puVar8 + 0x10);
  puVar1 = &UNK_110497ad0;
  func_0x000107c613fc(&UNK_110497ad0,0x20,7);
  *(undefined **)(puVar1 + 0x10) = puVar8;
  *(code **)(puVar1 + 0x18) = pcVar2;
  func_0x0001000285a8(0x112e398e0,&UNK_10da241f8);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar2);
  pcVar4 = FUN_101ecb7e4;
  func_0x0001000bdd8c(FUN_101ecb7e4,puVar1);
  pcVar9 = pcVar4;
  func_0x0001000bf56c();
  func_0x000107c61574(pcVar4);
  func_0x000107c613fc(&UNK_110497aa8,0x18,7);
  func_0x000107c61644(puVar10 + 0x10);
  puVar1 = &UNK_110497af8;
  func_0x000107c613fc(&UNK_110497af8,0x20,7);
  *(undefined **)(puVar1 + 0x10) = puVar10;
  *(code **)(puVar1 + 0x18) = pcVar2;
  func_0x0001000285a8(0x112e398e8,&UNK_10da24200);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar2);
  uVar3 = 0x101ecb8d8;
  func_0x0001000bdd8c(0x101ecb8d8,puVar1);
  uVar6 = uVar3;
  func_0x0001000bf56c();
  func_0x000107c61574(uVar3);
  puVar10 = PTR_PTR_1126a97f8;
  func_0x000107c610f8(PTR_PTR_1126a97f8);
  func_0x000107c45ed0();
  func_0x000107c61574(pcVar2);
  func_0x000107c61170(pcVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(pcVar9);
  func_0x000107c61170(uVar6);
  return puVar10;
}



/* Entry: 101ecb4fc; end: 101ecb56b;  */

void FUN_101ecb4fc(long *param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    FUN_101ecb574();
    func_0x000107c61574(param_2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 101ecb56c; end: 101ecb573;  */

void FUN_101ecb56c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    FUN_101ecb574();
    func_0x000107c61574(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 101ecb574; end: 101ecb6c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ecb574(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c44580();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_113093a98);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      func_0x000107c615e8(lVar2);
    }
    else {
      lVar3 = 0;
      FUN_101ecbd00();
      lVar4 = lVar3;
      func_0x000107c610f8();
      *(long *)(lVar4 + _DAT_112e399c8) = lVar2;
      *(long *)(lVar4 + _DAT_112e399d0) = lVar1;
      lStack_40 = lVar4;
      lStack_38 = lVar3;
      func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
    }
  }
  return;
}



/* Entry: 101ecb6c8; end: 101ecb717;  */

void FUN_101ecb6c8(void)

{
  func_0x000101ecb648();
  return;
}



/* Entry: 101ecb718; end: 101ecb7e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101ecb718(code *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c44580();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_113093a98);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      (*param_1)(0);
      func_0x000107c610f8();
      lVar3 = lVar2;
      (*param_2)(lVar2,lVar1);
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(lVar1);
      return lVar3;
    }
    func_0x000107c615e8(lVar2);
  }
  return 0;
}



/* Entry: 101ecb7e4; end: 101ecb813;  */

void FUN_101ecb7e4(void)

{
  long unaff_x20;
  
  FUN_101ecb814(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),FUN_101ecabb4,
                &DAT_112e39880,&DAT_112e39888);
  return;
}



/* Entry: 101ecb814; end: 101ecb8ab;  */

void FUN_101ecb814(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    param_3 = 0;
  }
  else {
    FUN_101ecba10(param_3,param_4,param_5,param_6);
    func_0x000107c61574(param_2);
  }
  *param_1 = param_3;
  return;
}



/* Entry: 101ecb8ac; end: 101ecb923;  */

void FUN_101ecb8ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101ecb924; end: 101ecb96f;  */

void FUN_101ecb924(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101ecb970; end: 101ecb9eb;  */

void FUN_101ecb970(undefined8 param_1)

{
  if (lRam0000000112e39918 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e698414);
  return;
}



/* Entry: 101ecb9ec; end: 101ecba0f;  */

void FUN_101ecb9ec(undefined8 *param_1,undefined8 param_2)

{
  FUN_101ecb228();
  *param_1 = param_2;
  return;
}



/* Entry: 101ecba10; end: 101ecbc6b;  */

long * FUN_101ecba10(undefined8 param_1,code *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    lVar1 = 0;
    (*param_2)();
    lVar2 = lVar1;
    func_0x000107c610f8();
    lVar3 = lVar2;
    func_0x000101ecbab8();
    *(long *)(lVar2 + *param_3) = lVar3;
    FUN_101ecbd20();
    *(long *)(lVar2 + *param_4) = lVar3;
    plVar4 = &lStack_58;
    lStack_58 = lVar2;
    lStack_50 = lVar1;
    func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
    func_0x000107c61170(lStack_48);
  }
  return plVar4;
}



/* Entry: 101ecbc6c; end: 101ecbcc7; -[_TtC35SCCommunitiesOrgNetworkServicesImpl32CommunitiesOrgServiceStubFactory init] */

void FUN_101ecbc6c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommunitiesOrgNetworkServicesImpl.CommunitiesOrgServiceStubFactory",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ecbc98);
  (*pcVar1)();
}



/* Entry: 101ecbcc8; end: 101ecbcff; -[_TtC35SCCommunitiesOrgNetworkServicesImpl32CommunitiesOrgServiceStubFactory .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101ecbce4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ecbce8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ecbcc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e399c8));
  return;
}



/* Entry: 101ecbd00; end: 101ecbd1f;  */

void FUN_101ecbd00(void)

{
  func_0x000107c61168(&PTR_PTR_1128089b0);
  return;
}



/* Entry: 101ecbd20; end: 101ecbe77;  */

undefined * FUN_101ecbd20(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR_PTR_1126ae748;
  func_0x000107c61168();
  func_0x000107c3edf4();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x0001080608e0();
  func_0x000107c61180();
  if (puVar4 != (undefined *)0x0) {
    puVar5 = puVar4;
    func_0x000107c5faec();
    func_0x000107c61170(puVar4);
    uVar1 = (ulong)puVar5 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      func_0x000107c6142c(param_2);
    }
    else {
      lVar6 = 0x112d38300;
      func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
      func_0x000107c61534();
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      *(undefined8 *)(lVar6 + 0x20) = 0xd000000000000010;
      *(undefined8 *)(lVar6 + 0x28) = 0x800000010ef1c330;
      *(undefined **)(lVar6 + 0x30) = puVar5;
      *(ulong *)(lVar6 + 0x38) = param_2;
      lVar7 = lVar6;
      func_0x0001001830b8();
      func_0x000107c61588(lVar6);
      func_0x000100ab5dc4((undefined8 *)(lVar6 + 0x20));
      lVar6 = lVar7;
      func_0x000107c5f9dc(lVar7,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar7);
      puVar4 = puVar3;
      func_0x000107c3d704(puVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      func_0x000107c61170(puVar4);
    }
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101ecbe78);
  (*pcVar2)();
}



/* Entry: 101ecbe78; end: 101ecc0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ecbe78(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar1 = PTR_PTR_1126a9810;
  func_0x000107c610f8(PTR_PTR_1126a9810);
  func_0x000107c453e4();
  if (param_2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_1;
    func_0x000107c5fadc(param_1,param_2);
  }
  uVar2 = uVar6;
  func_0x000100576e9c(uVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c5a344(puVar1);
  func_0x000107c61170(uVar2);
  if (param_4 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_3;
    func_0x000107c5fadc(param_3,param_4);
  }
  uVar2 = uVar6;
  func_0x000100576e9c(uVar6);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c54f60(puVar1);
  func_0x000107c61170(uVar2);
  if (param_6 == 0) {
    param_5 = 0;
  }
  else {
    func_0x000107c5fadc(param_5,param_6);
  }
  uVar6 = param_5;
  func_0x000100576e9c(param_5);
  func_0x000107c61180();
  func_0x000107c61170(param_5);
  func_0x000107c570a4(puVar1);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112e39a10);
  func_0x000107c61174(puVar1);
  puVar3 = puVar1;
  func_0x000101ecc8f8();
  puVar4 = &UNK_110497b88;
  func_0x000107c613fc(&UNK_110497b88,0x40,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(long *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  *(long *)(puVar4 + 0x28) = param_4;
  *(undefined8 *)(puVar4 + 0x30) = param_7;
  *(undefined8 *)(puVar4 + 0x38) = param_8;
  pcStack_70 = FUN_101eccab8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x101eccb04;
  puStack_78 = &UNK_110497ba0;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_68;
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_2);
  func_0x000101ecca6c(param_7,param_8);
  func_0x000107c61574(puVar4);
  func_0x000107c4d2f8(uVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(puVar3);
  return;
}



/* Entry: 101ecc0b4; end: 101ecc423; -[_TtC35SCCommunitiesOrgNetworkServicesImpl40CommunitiesStoryMuteNetworkRequesterImpl muteCommunityStoryRequestWithUserId:groupId:orgId:completion:] */

/* WARNING: Possible PIC construction at 0x000101ecc1bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ecc1c0) */

void FUN_101ecc0b4(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_1);
  if (param_6 == 0) {
    puVar4 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar4 = &UNK_110497c00;
    func_0x000107c613fc(&UNK_110497c00,0x18,7);
    *(long *)(puVar4 + 0x10) = param_6;
    uVar3 = 0x101eccaf8;
  }
  FUN_101ecbe78(param_3,uVar2,param_4,uVar1,param_5,param_2,uVar3,puVar4);
  FUN_101eccadc(uVar3,puVar4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ecc424; end: 101ecc497;  */

void FUN_101ecc424(undefined8 param_1,long param_2)

{
  code *pcVar1;
  code *in_x6;
  
  if (param_2 == 0) {
    if (in_x6 != (code *)0x0) {
      (*in_x6)(1,0);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101ecc498);
    (*pcVar1)();
  }
  if (in_x6 != (code *)0x0) {
    func_0x000107c614b0(param_2);
    (*in_x6)(0,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ecc494);
  (*pcVar1)();
}



/* Entry: 101ecc498; end: 101ecc50f;  */

/* WARNING: Possible PIC construction at 0x000101ecc4f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ecc4f8) */

void FUN_101ecc498(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 101ecc510; end: 101ecc643; -[_TtC35SCCommunitiesOrgNetworkServicesImpl40CommunitiesStoryMuteNetworkRequesterImpl unmuteCommunityStoryRequestWithUserId:groupId:orgId:completion:] */

/* WARNING: Possible PIC construction at 0x000101ecc618: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101ecc61c) */

void FUN_101ecc510(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar2 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar1 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_1);
  if (param_6 == 0) {
    puVar4 = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    puVar4 = &UNK_110497bd8;
    func_0x000107c613fc(&UNK_110497bd8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_6;
    uVar3 = 0x101eccaec;
  }
  func_0x000101ecc1e8(param_3,uVar2,param_4,uVar1,param_5,param_2,uVar3,puVar4);
  FUN_101eccadc(uVar3,puVar4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101ecc644; end: 101ecc69f; -[_TtC35SCCommunitiesOrgNetworkServicesImpl40CommunitiesStoryMuteNetworkRequesterImpl init] */

void FUN_101ecc644(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCommunitiesOrgNetworkServicesImpl.CommunitiesStoryMuteNetworkRequesterImpl"
                      ,0x4c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101ecc670);
  (*pcVar1)();
}



/* Entry: 101ecc6a0; end: 101ecc6e7; -[_TtC35SCCommunitiesOrgNetworkServicesImpl40CommunitiesStoryMuteNetworkRequesterImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ecc6a0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e39a00));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e39a08));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e39a10));
  return;
}



/* Entry: 101ecc6e8; end: 101ecc707;  */

void FUN_101ecc6e8(void)

{
  func_0x000107c61168(&PTR_PTR_112808a88);
  return;
}



/* Entry: 101ecc708; end: 101ecca4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101ecc708(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e39a00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e39a08) = param_2;
  func_0x000107c615f0();
  func_0x000107c615f0(param_2);
  uVar3 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f018c60);
  func_0x000107c4e60c(param_2);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126ae728;
  func_0x000107c61168();
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar3 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010ef1b1f0);
  puVar2 = puVar1;
  func_0x000107c545b8(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c57f3c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c59d5c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5343c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f018ba0);
  func_0x000107c40a28(param_1);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar1 = PTR_PTR_1126a9800;
  func_0x000107c610f8();
  func_0x000107c49088();
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + _DAT_112e39a10) = puVar1;
  FUN_101ecc6e8();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101ecca50; end: 101ecca7b;  */

void FUN_101ecca50(long param_1,long param_2)

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



/* Entry: 101ecca7c; end: 101eccab7;  */

void FUN_101ecca7c(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101eccab8; end: 101eccabb;  */

void FUN_101eccab8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101ecc424(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 101eccabc; end: 101eccadb;  */

void FUN_101eccabc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101ecc424(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}


