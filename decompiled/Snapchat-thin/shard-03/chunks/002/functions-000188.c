/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026be1a8; end: 1026be29b;  */

void FUN_1026be1a8(long param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = *param_2;
    uVar5 = param_2[1];
    func_0x000107c61434();
    func_0x000100029284(lVar2);
    if ((uVar5 & 1) == 0) {
      func_0x000107c6142c(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,auStack_60);
      func_0x000107c6142c(param_1);
      uVar3 = 0;
      FUN_1026be78c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar4 = &uStack_68;
      func_0x000107c6147c(puVar4,auStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
      if (((ulong)puVar4 & 1) != 0) {
        pcVar1 = (code *)param_2[4];
        uVar3 = uStack_68;
        func_0x000107c3ebcc();
        (*pcVar1)();
        func_0x000100087f6c(auStack_60);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uStack_68);
      }
    }
  }
  return;
}



/* Entry: 1026be29c; end: 1026be2bf;  */

void FUN_1026be29c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026be2c0; end: 1026be2df;  */

void FUN_1026be2c0(void)

{
  FUN_1026bdcac();
  return;
}



/* Entry: 1026be2e0; end: 1026be2f3;  */

void FUN_1026be2e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110537d78;
  return;
}



/* Entry: 1026be2f4; end: 1026be32b;  */

void FUN_1026be2f4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1026be3ac();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1026be32c; end: 1026be36f;  */

void FUN_1026be32c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_e0 [16];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x000107c5f804();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61534();
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x28) = uStack_68;
  *(undefined8 *)(lVar2 + 0x20) = uStack_70;
  func_0x000100402194(&uStack_70,&puStack_d0);
  lVar3 = lVar2;
  func_0x000100111634(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100bcb1dc(lVar2 + 0x20);
  lVar2 = lVar3;
  func_0x000107c5fe08(lVar3,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar3);
  FUN_1026be78c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar11 + 0x68))
            (puVar9,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1
            );
  puVar4 = puVar9;
  func_0x000107c5fff0(puVar9);
  (**(code **)(lVar11 + 8))(puVar9,lVar1);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar5 = &UNK_110537de0;
  func_0x000107c613fc(&UNK_110537de0,0x48,7);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar5 + 0x10) = uVar12;
  *(undefined8 *)(puVar5 + 0x28) = uVar14;
  *(undefined8 *)(puVar5 + 0x20) = uVar13;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(puVar5 + 0x38) = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(puVar5 + 0x30) = uVar12;
  *(undefined8 *)(puVar5 + 0x40) = param_1;
  pcStack_b0 = FUN_1026be754;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0x42000000;
  puStack_c0 = &UNK_1019e993c;
  puStack_b8 = &UNK_110537df8;
  ppuVar6 = &puStack_d0;
  puStack_a8 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar5 = puStack_a8;
  func_0x000100402194(&uStack_70,auStack_e0);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar5);
  func_0x000107c4da68();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar4);
  puVar5 = &UNK_110537e30;
  func_0x000107c613fc(&UNK_110537e30,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar7;
  uVar7 = 0;
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0x1026be77c,puVar5,uVar7);
  return;
}



/* Entry: 1026be370; end: 1026be3ab;  */

void FUN_1026be370(void)

{
  func_0x000107c61168(&PTR_PTR_112eb5608);
  return;
}



/* Entry: 1026be3ac; end: 1026be753;  */

undefined * FUN_1026be3ac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026be4f0);
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
    puVar3 = (undefined *)0x112eb5270;
    func_0x0001000285a8(0x112eb5270,&UNK_10dacbfa0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112eb4ec8;
    func_0x0001000285a8(0x112eb4ec8,&UNK_10dacbc80);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1026be754; end: 1026be78b;  */

void FUN_1026be754(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined8 uStack_68;
  undefined1 auStack_60 [32];
  
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x10);
    uVar5 = *(ulong *)(unaff_x20 + 0x18);
    func_0x000107c61434(param_1,(long *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x40));
    func_0x000100029284(lVar2);
    if ((uVar5 & 1) == 0) {
      func_0x000107c6142c(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar2 * 0x20,auStack_60);
      func_0x000107c6142c(param_1);
      uVar3 = 0;
      FUN_1026be78c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar4 = &uStack_68;
      func_0x000107c6147c(puVar4,auStack_60,PTR___sypN_11034f1a8 + 8,uVar3,6);
      if (((ulong)puVar4 & 1) != 0) {
        pcVar1 = *(code **)(unaff_x20 + 0x30);
        uVar3 = uStack_68;
        func_0x000107c3ebcc();
        (*pcVar1)();
        func_0x000100087f6c(auStack_60);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uStack_68);
      }
    }
  }
  return;
}



/* Entry: 1026be78c; end: 1026be817;  */

void FUN_1026be78c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026be818; end: 1026be87b;  */

void FUN_1026be818(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026beb0c();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110537e70;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026be87c; end: 1026be883;  */

void FUN_1026be87c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026beb0c();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_110537e70;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026be884; end: 1026be8b3;  */

void FUN_1026be884(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1026be8b4; end: 1026bea7b;  */

void FUN_1026be8b4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c43a80();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    lVar1 = lVar2;
    func_0x000107c43aa8(lVar2);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    uVar4 = 0;
    FUN_1026beb2c(0,0x112eb5278,&PTR_PTR_1126b1de8);
    func_0x0001000d5158(0x1026be9a4,0,uVar4);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 1026bea7c; end: 1026bea9f;  */

void FUN_1026bea7c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026beaa0; end: 1026beabf;  */

void FUN_1026beaa0(void)

{
  FUN_1026be8b4();
  return;
}



/* Entry: 1026beac0; end: 1026beb0b;  */

undefined ** FUN_1026beac0(void)

{
  return &PTR_DAT_112eb9bc0;
}



/* Entry: 1026beb0c; end: 1026beb2b;  */

void FUN_1026beb0c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb56e8);
  return;
}



/* Entry: 1026beb2c; end: 1026beb6b;  */

void FUN_1026beb2c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026beb6c; end: 1026befa3;  */

long FUN_1026beb6c(double param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  double dVar13;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  uVar3 = param_2;
  func_0x000107c3d15c();
  func_0x000107c61180();
  if (uVar3 == 0) {
    func_0x000107c61170(param_2);
LAB_1026beee4:
    lVar10 = 0;
  }
  else {
    lVar10 = unaff_x20;
    func_0x000107c614e8();
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    uVar4 = param_2;
    func_0x000107c42f24();
    func_0x000107c61180();
    if (uVar4 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_3);
    }
    func_0x000107c5a344(lVar10);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(lVar10);
    lStack_78 = 0;
    uVar4 = param_2;
    func_0x000107c5bfa4();
    func_0x000107c61180();
    if (uVar4 == 0) {
      puVar11 = (undefined *)0x0;
      pcVar1 = (code *)0x0;
    }
    else {
      puVar11 = &UNK_110537ef0;
      func_0x000107c613fc(&UNK_110537ef0,0x20,7);
      *(long **)(puVar11 + 0x10) = &lStack_78;
      *(long *)(puVar11 + 0x18) = unaff_x20;
      puVar5 = &UNK_110537f18;
      func_0x000107c613fc(&UNK_110537f18,0x20,7);
      pcVar1 = FUN_1026bf10c;
      *(code **)(puVar5 + 0x10) = FUN_1026bf10c;
      *(undefined **)(puVar5 + 0x18) = puVar11;
      pcStack_88 = FUN_1026bf114;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      param_1 = 5.47077039858234e-315;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_1026bf0d4;
      puStack_90 = &UNK_110537f30;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_80);
      func_0x000107c4c73c(uVar4);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(uVar4);
      lVar7 = lStack_78;
      if (lStack_78 != 0) {
        FUN_1026befb4(0);
        func_0x000107c61174(lVar7);
        func_0x000107c61174();
        lVar8 = lVar7;
        FUN_1026bf3bc();
        func_0x000107c599ac(lVar10);
        func_0x000107c61170(lVar7);
        func_0x000107c61170(lVar8);
        pcVar1 = FUN_1026bf10c;
      }
    }
    uVar4 = param_2;
    func_0x000100bf377c();
    lVar7 = lStack_78;
    if ((uVar4 & 1) == 0) {
      func_0x000107c61170(param_2);
      func_0x000107c61170(uVar3);
      lVar2 = lStack_78;
      if (lVar7 == 0) {
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar2);
        FUN_1026befa4(pcVar1,puVar11);
        goto LAB_1026beee4;
      }
    }
    else {
      puVar5 = PTR_PTR_1126c6100;
      func_0x000107c610f8(PTR_PTR_1126c6100);
      func_0x000107c453e4();
      func_0x000107c56658(lVar10);
      func_0x000107c61170(puVar5);
      lVar7 = lVar10;
      func_0x000107c4cde8();
      func_0x000107c61180();
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026befa4);
        (*pcVar1)();
      }
      uVar4 = uVar3;
      func_0x000107c42168(uVar3);
      func_0x000107c61180();
      func_0x000107c5ee94(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      func_0x000107c61170(uVar4);
      func_0x000107c5ee8c();
      (**(code **)(lVar12 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
      dVar13 = (double)(long)(param_1 * 1000.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar13)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bef98);
        (*pcVar1)();
      }
      if (dVar13 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bef9c);
        (*pcVar1)();
      }
      if (1.8446744073709552e+19 <= dVar13) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1026befa0);
        (*pcVar1)();
      }
      func_0x000107c5a494(lVar7);
      func_0x000107c61170(lVar7);
      uVar4 = uVar3;
      func_0x000107c4cda8();
      func_0x000107c61180();
      if (uVar4 != 0) {
        func_0x000107c61174();
        uVar9 = uVar4;
        func_0x000107cfdba8();
        if ((int)uVar9 == 0) {
          uVar9 = uVar4;
          func_0x000107cfce24();
          if ((uVar9 & 1) == 0) {
            func_0x000107cfcf34();
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar4);
          }
          else {
            func_0x000107c61170(uVar4);
            func_0x000107c61170(uVar4);
          }
        }
        else {
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar4);
        }
      }
      func_0x000107c56650(lVar10);
      func_0x000107c61170(param_2);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(lStack_78);
    FUN_1026befa4(pcVar1,puVar11);
  }
  return lVar10;
}



/* Entry: 1026befa4; end: 1026befb3;  */

void FUN_1026befa4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 1026befb4; end: 1026beff7;  */

void FUN_1026befb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb5750 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c6110;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112eb5750 = puVar1;
  return;
}



/* Entry: 1026beff8; end: 1026bf0d3;  */

void FUN_1026beff8(double param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  dVar4 = param_1;
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  func_0x000107c4d128(param_2);
  uVar2 = param_2;
  func_0x000107c44c00();
  if (((int)uVar2 != 0) && (param_1 - dVar4 < 7200.0)) {
    uVar2 = *param_3;
    *param_3 = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1026bf0d4; end: 1026bf10b;  */

void FUN_1026bf0d4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1026bf10c; end: 1026bf113;  */

void FUN_1026bf10c(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long extraout_x8;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  double dVar5;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  lVar2 = 0;
  func_0x000107c5eea4(0,puVar1,*(undefined8 *)(unaff_x20 + 0x18));
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5ee8c();
  dVar5 = param_1;
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  func_0x000107c4d128(param_2);
  uVar3 = param_2;
  func_0x000107c44c00();
  if (((int)uVar3 != 0) && (param_1 - dVar5 < 7200.0)) {
    uVar3 = *puVar1;
    *puVar1 = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1026bf114; end: 1026bf133;  */

void FUN_1026bf114(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1026bf134; end: 1026bf14f;  */

void FUN_1026bf134(long param_1,long param_2)

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



/* Entry: 1026bf150; end: 1026bf377;  */

undefined8 FUN_1026bf150(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar11 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)(uVar11 + 0x10);
  }
  else {
    uVar9 = uVar11;
    if (0x7fffffffffffffff < param_1) {
      uVar9 = param_1;
    }
    func_0x000107c60480();
  }
  func_0x000107c61174();
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar10 = 0;
  while( true ) {
    if (uVar9 == uVar10) {
      func_0x000107c6142c(param_1);
      puVar5 = puVar7;
      func_0x0001026bb7a0(puVar7);
      func_0x000107c6142c(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
      puVar6 = puVar5;
      func_0x000107c5fc48(puVar5,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(puVar5);
      func_0x000107c45788(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c54bf4(unaff_x20);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(unaff_x20);
      return unaff_x20;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1026bf358);
        (*pcVar2)();
      }
      uVar3 = *(ulong *)(param_1 + uVar10 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar3 = uVar10;
      func_0x00010117ea28(uVar10,param_1);
    }
    uVar1 = uVar10 + 1;
    if (SCARRY8(uVar10,1)) break;
    uVar4 = 0;
    FUN_1026bf378(0);
    FUN_1026beb6c(uVar3,uVar4);
    uVar10 = uVar10 + 1;
    if (uVar3 != 0) {
      puVar5 = puVar7;
      func_0x000107c61550();
      if ((((int)puVar5 == 0) || ((long)puVar7 < 0)) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar7 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar7) {
            puVar5 = puVar7;
          }
          func_0x000107c60480(puVar5);
        }
        puVar6 = (undefined *)0x0;
        FUN_1026bbca0(0,puVar5 + 1,1,puVar7);
        puVar7 = puVar6;
      }
      uVar8 = (ulong)puVar7 & 0xffffffffffffff8;
      uVar10 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar10) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_1026bbca0(puVar5,uVar10 + 1,1,puVar7);
        uVar8 = (ulong)puVar5 & 0xffffffffffffff8;
        puVar7 = puVar5;
      }
      *(ulong *)(uVar8 + 0x10) = uVar10 + 1;
      *(ulong *)(uVar8 + uVar10 * 8 + 0x20) = uVar3;
      uVar10 = uVar1;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1026bf354);
  (*pcVar2)();
}



/* Entry: 1026bf378; end: 1026bf3bb;  */

void FUN_1026bf378(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb5260 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126c60f8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112eb5260 = puVar1;
  return;
}



/* Entry: 1026bf3bc; end: 1026bf76b;  */

undefined8 FUN_1026bf3bc(double param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  lVar2 = param_2;
  func_0x000107c5bfec();
  func_0x000107c61180();
  uVar6 = param_3;
  if (lVar2 == 0) {
    func_0x000107c5faec();
    uVar6 = param_3;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  func_0x000107c59950(unaff_x20);
  func_0x000107c61170(lVar2);
  func_0x000107c4d8c0(param_2);
  func_0x000107c56b68(unaff_x20);
  func_0x000107c44c00(param_2);
  func_0x000107c5505c(unaff_x20);
  func_0x000107c4d124(param_2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bf74c);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bf750);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bf754);
    (*pcVar1)();
  }
  func_0x000107c567c8(unaff_x20);
  func_0x000107c4d128(param_2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bf758);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bf75c);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bf760);
    (*pcVar1)();
  }
  func_0x000107c567cc(unaff_x20);
  func_0x000107c4d130(param_2);
  if ((ulong)ABS(param_1) < 0x7ff0000000000000) {
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bf768);
      (*pcVar1)();
    }
    if (param_1 < 9.223372036854776e+18) {
      func_0x000107c567d4(unaff_x20);
      func_0x000107c61170(unaff_x20);
      lVar2 = param_2;
      func_0x000107c5c910();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c40488();
        func_0x000107c61180();
        if (lVar3 != 0) {
          lVar4 = lVar3;
          func_0x000107c5ee30();
          func_0x000107c61170(lVar3);
          puVar5 = PTR_PTR_1126c6118;
          func_0x000107c610f8(PTR_PTR_1126c6118);
          func_0x000107c453e4();
          lVar3 = lVar4;
          func_0x000107c5ee20(lVar4,uVar6);
          func_0x000107c53844(puVar5);
          func_0x000107c61170(lVar3);
          lVar3 = lVar2;
          func_0x000107c4048c(lVar2);
          func_0x000107c61180();
          func_0x000107c55938(puVar5);
          func_0x000107c61170(lVar3);
          lVar3 = lVar2;
          func_0x000107c40490(lVar2);
          func_0x000107c61180();
          func_0x000107c559a4(puVar5);
          func_0x000107c61170(lVar3);
          func_0x000107c61174(puVar5);
          func_0x000107c59cf8(unaff_x20);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(param_2);
          func_0x000107c61170(lVar2);
          func_0x00010006c090(lVar4,uVar6);
          return unaff_x20;
        }
        lVar3 = lVar2;
        func_0x000107c5d7e8();
        func_0x000107c61180();
        if (lVar3 != 0) {
          puVar5 = PTR_PTR_1126c60b0;
          func_0x000107c610f8(PTR_PTR_1126c60b0);
          func_0x000107c453e4();
          func_0x000107c5a120();
          func_0x000107c61170(lVar3);
          lVar3 = lVar2;
          func_0x000107c4a804(lVar2);
          func_0x000107c61180();
          func_0x000107c55938(puVar5);
          func_0x000107c61170(lVar3);
          lVar3 = lVar2;
          func_0x000107c4a8c4(lVar2);
          func_0x000107c61180();
          func_0x000107c559a4(puVar5);
          func_0x000107c61170(lVar3);
          func_0x000107c61174(puVar5);
          func_0x000107c59d0c(unaff_x20);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar5);
        }
        func_0x000107c61170(param_2);
        param_2 = lVar2;
      }
      func_0x000107c61170(param_2);
      return unaff_x20;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bf76c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026bf764);
  (*pcVar1)();
}



/* Entry: 1026bf76c; end: 1026bf863;  */

void FUN_1026bf76c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
  puVar1 = &UNK_110537f68;
  func_0x000107c613fc(&UNK_110537f68,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1026bf864,puVar1);
  return;
}



/* Entry: 1026bf864; end: 1026bf86b;  */

void FUN_1026bf864(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  FUN_1026bff28();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uStack_38;
  *(undefined8 *)(lVar2 + 0x18) = uStack_40;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110538000;
  *param_1 = lVar2;
  return;
}



/* Entry: 1026bf86c; end: 1026bf8a7;  */

void FUN_1026bf86c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1026bf8a8; end: 1026bfc2f;  */

void FUN_1026bf8a8(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  ulong uStack_58;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c4c3ac();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (uVar2 != 0) {
    lVar3 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c5dc04();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x0001000285a8(0x112ea3480,&UNK_10dac6130);
      uVar1 = uVar2;
      func_0x000107c4b93c(uVar2);
      func_0x000107c61180();
      uVar5 = uVar1;
      func_0x0001000b637c();
      func_0x000107c61170(uVar1);
      puVar6 = &UNK_110537f90;
      func_0x000107c613fc(&UNK_110537f90,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,uVar2);
      puVar12 = &UNK_110537fb8;
      puVar7 = puVar12;
      func_0x000107c613fc(&UNK_110537fb8,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,lVar4);
      puVar8 = &UNK_110537fe0;
      func_0x000107c613fc(&UNK_110537fe0,0x20,7);
      *(undefined **)(puVar8 + 0x10) = puVar6;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      uVar9 = 0;
      FUN_1026bfeb0(0,0x112eb5278,&PTR_PTR_1126b1de8);
      func_0x000107c615f0(lVar4);
      pcVar10 = FUN_1026bfe40;
      func_0x0001000d5158(FUN_1026bfe40,puVar8,uVar9);
      func_0x000107c61574(uVar5);
      func_0x000107c61574(puVar8);
      func_0x0001000285a8(0x112eb5758,&UNK_10dacc058);
      lVar3 = lVar4;
      func_0x000107c439b0(lVar4);
      func_0x000107c61180();
      lVar11 = lVar3;
      func_0x0001000b637c();
      func_0x000107c61170(lVar3);
      func_0x000107c613fc(&UNK_110537fb8,0x18,7);
      func_0x000107c61614(puVar12 + 0x10,lVar4);
      func_0x000107c615e8(lVar4);
      uVar13 = 0x1026bfe48;
      func_0x0001000d5158(0x1026bfe48,puVar12,uVar9);
      func_0x000107c61574(lVar11);
      func_0x000107c61574(puVar12);
      lVar3 = 0x112eb4f88;
      func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
      func_0x0001026bd1c4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 5;
      *(undefined8 *)(lVar3 + 0x10) = 2;
      *(code **)(lVar3 + 0x20) = pcVar10;
      *(undefined8 *)(lVar3 + 0x28) = uVar13;
      func_0x000107c6157c(pcVar10);
      func_0x000107c6157c(uVar13);
      lVar11 = lVar3;
      func_0x0001000c19f0(lVar3);
      func_0x000107c61574(lVar3);
      uVar1 = uVar2;
      func_0x000107c448d0();
      if ((uVar1 & 1) != 0) {
        uVar1 = uVar2;
        func_0x000107c3db88();
        func_0x000107c61180();
        uVar14 = 0;
        FUN_1026bfeb0(0,0x112d5ec90,&PTR_PTR_1126bf100);
        uVar9 = uVar14;
        func_0x000101146b3c();
        uVar5 = uVar1;
        func_0x000107c5fe10(uVar1,uVar14,uVar9);
        func_0x000107c61170(uVar1);
        FUN_1026c1608();
        uStack_58 = uVar5;
        func_0x0001006c71a4(&uStack_58);
        func_0x000107c61170(uVar5);
        func_0x000107c615e8(uVar2);
        func_0x000107c615e8(lVar4);
        func_0x000107c61574(lVar11);
        func_0x000107c61574(uVar13);
        func_0x000107c61574(pcVar10);
        return;
      }
      func_0x000107c615e8(uVar2);
      func_0x000107c615e8(lVar4);
      func_0x000107c61574(pcVar10);
      func_0x000107c61574(uVar13);
      return;
    }
    func_0x000107c615e8(uVar2);
  }
  func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
  func_0x000104886440();
  return;
}



/* Entry: 1026bfc30; end: 1026bfd67;  */

void FUN_1026bfc30(ulong *param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  uVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (uVar1 != 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_70,0,0);
    uVar2 = param_4 + 0x10;
    func_0x000107c61618();
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c5c114();
      if ((uVar3 & 1) == 0) {
        FUN_1026bfeb0(0,0x112eb5278,&PTR_PTR_1126b1de8);
        uVar3 = uVar1;
        func_0x000107c3db88();
        func_0x000107c61180();
        uVar4 = 0;
        FUN_1026bfeb0(0,0x112d5ec90,&PTR_PTR_1126bf100);
        uVar5 = uVar4;
        func_0x000101146b3c();
        uVar6 = uVar3;
        func_0x000107c5fe10(uVar3,uVar4,uVar5);
        func_0x000107c61170(uVar3);
        FUN_1026c1608();
        func_0x000107c615e8(uVar2);
        func_0x000107c615e8(uVar1);
        goto LAB_1026bfcc0;
      }
      func_0x000107c615e8(uVar1);
      uVar1 = uVar2;
    }
    func_0x000107c615e8(uVar1);
  }
  uVar6 = 0;
LAB_1026bfcc0:
  *param_1 = uVar6;
  return;
}



/* Entry: 1026bfd68; end: 1026bfe13;  */

void FUN_1026bfd68(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_2;
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x000107c5c114();
    if ((int)lVar1 != 0) {
      FUN_1026bfeb0(0,0x112eb5278,&PTR_PTR_1126b1de8);
      func_0x000107c61174();
      FUN_1026c1764();
      func_0x000107c615e8(param_3);
      goto LAB_1026bfdfc;
    }
    func_0x000107c615e8(param_3);
  }
  uVar2 = 0;
LAB_1026bfdfc:
  *param_1 = uVar2;
  return;
}



/* Entry: 1026bfe14; end: 1026bfe3f;  */

void FUN_1026bfe14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026bfe40; end: 1026bfe4f;  */

void FUN_1026bfe40(ulong *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  uVar3 = lVar1 + 0x10;
  func_0x000107c61618();
  if (uVar3 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_70,0,0);
    uVar4 = lVar2 + 0x10;
    func_0x000107c61618();
    if (uVar4 != 0) {
      uVar5 = uVar4;
      func_0x000107c5c114();
      if ((uVar5 & 1) == 0) {
        FUN_1026bfeb0(0,0x112eb5278,&PTR_PTR_1126b1de8);
        uVar5 = uVar3;
        func_0x000107c3db88();
        func_0x000107c61180();
        uVar6 = 0;
        FUN_1026bfeb0(0,0x112d5ec90,&PTR_PTR_1126bf100);
        uVar7 = uVar6;
        func_0x000101146b3c();
        uVar8 = uVar5;
        func_0x000107c5fe10(uVar5,uVar6,uVar7);
        func_0x000107c61170(uVar5);
        FUN_1026c1608();
        func_0x000107c615e8(uVar4);
        func_0x000107c615e8(uVar3);
        goto LAB_1026bfcc0;
      }
      func_0x000107c615e8(uVar3);
      uVar3 = uVar4;
    }
    func_0x000107c615e8(uVar3);
  }
  uVar8 = 0;
LAB_1026bfcc0:
  *param_1 = uVar8;
  return;
}



/* Entry: 1026bfe50; end: 1026bfe7b;  */

void FUN_1026bfe50(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026bfe7c; end: 1026bfe9b;  */

void FUN_1026bfe7c(void)

{
  FUN_1026bf8a8();
  return;
}



/* Entry: 1026bfe9c; end: 1026bfeaf;  */

void FUN_1026bfe9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110537ff8;
  return;
}



/* Entry: 1026bfeb0; end: 1026bfeef;  */

void FUN_1026bfeb0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026bfef0; end: 1026bff27;  */

undefined ** FUN_1026bfef0(void)

{
  return &PTR_DAT_112eb9bc0;
}



/* Entry: 1026bff28; end: 1026bff47;  */

void FUN_1026bff28(void)

{
  func_0x000107c61168(&PTR_PTR_112eb57e0);
  return;
}



/* Entry: 1026bff48; end: 1026c05b7;  */

long FUN_1026bff48(double param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  undefined1 *puVar13;
  ulong uVar14;
  double dVar15;
  undefined8 uVar16;
  undefined1 auStack_b0 [8];
  code *pcStack_a8;
  long lStack_a0;
  ulong auStack_98 [3];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  lVar1 = 0x112d373d8;
  puVar7 = &UNK_10d9014c0;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar13 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar13 - extraout_x12;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  uVar11 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (uVar11 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
  }
  func_0x000107c5a344(unaff_x20);
  func_0x000107c61170(uVar11);
  uVar11 = param_2;
  func_0x000107c41324(param_2);
  func_0x000107c61180();
  func_0x000107c5ee94(lVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c5ee8c();
  pcVar12 = *(code **)(lVar10 + 8);
  (*pcVar12)(lVar8,lVar1);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1026c04e0);
    (*pcVar12)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1026c04e4);
    (*pcVar12)();
  }
  uVar16 = 0x43e0000000000000;
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1026c04e8);
    (*pcVar12)();
  }
  func_0x000107c59dc0(unaff_x20);
  func_0x000107c61170(unaff_x20);
  FUN_1026c05b8(0,0x112eb5848,&PTR_PTR_1126c60c8);
  uVar11 = param_2;
  func_0x000107c40534();
  func_0x0001026c0c70();
  if (uVar11 != 0) {
    lVar8 = unaff_x20;
    func_0x000107c4b89c();
    func_0x000107c61180();
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1026c05b8);
      (*pcVar12)();
    }
    func_0x000107c3d798();
    func_0x000107c61170(uVar11);
    func_0x000107c61170(lVar8);
  }
  uVar11 = param_2;
  func_0x000107c5bd58();
  func_0x000107c61180();
  if (uVar11 != 0) {
    uVar2 = param_2;
    func_0x000107c5dcc0();
    func_0x000107c61180();
    pcStack_a8 = pcVar12;
    lStack_a0 = lVar1;
    if (uVar2 != 0) {
      func_0x000107c5faec();
      func_0x000107c61170(uVar2);
    }
    FUN_1026c05b8(0,0x112eb5370,&PTR_PTR_1126c60d0);
    func_0x000107c61174(uVar11);
    uVar2 = uVar11;
    FUN_1026c1118();
    func_0x000107c61170(uVar11);
    func_0x000107c59884(unaff_x20);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar2);
    lVar1 = lStack_a0;
    pcVar12 = pcStack_a8;
  }
  func_0x000107c44f00(param_2);
  dVar15 = (double)(ulong)(uint)(float)param_1;
  func_0x000107c551b4(unaff_x20);
  uVar11 = param_2;
  func_0x000107c4a984();
  func_0x000107c61180();
  if (uVar11 != 0) {
    func_0x000107c5ee94(puVar13);
    func_0x000107c61170(uVar11);
  }
  (**(code **)(lVar10 + 0x38))(puVar13,uVar11 == 0,1,lVar1);
  func_0x0001003a4c00(puVar13,lVar9);
  lVar8 = lVar9;
  (**(code **)(lVar10 + 0x30))(lVar9,1,lVar1);
  if ((int)lVar8 == 1) {
    func_0x0001000d1dcc(lVar9);
  }
  else {
    func_0x000107c5ee8c();
    (*pcVar12)(lVar9,lVar1);
    if (0x7fefffffffffffff < (ulong)ABS(dVar15)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1026c05b4);
      (*pcVar12)();
    }
    if (dVar15 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1026c04ec);
      (*pcVar12)();
    }
    if (9.223372036854776e+18 <= dVar15) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1026c04f0);
      (*pcVar12)();
    }
  }
  func_0x000107c559fc(unaff_x20);
  func_0x000107c3e70c(param_2);
  func_0x000107c52c1c(unaff_x20);
  func_0x000107c4a3ec(param_2);
  func_0x000107c55568(unaff_x20);
  pcVar12 = (code *)PTR_PTR_1126bf1b8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c4077c(param_2);
  func_0x000107c55ab8(pcVar12);
  func_0x000107c4077c(param_2);
  func_0x000107c55fc4(uVar16,pcVar12);
  func_0x000107c55abc(unaff_x20);
  uVar11 = param_2;
  func_0x000107c3cf1c();
  func_0x000107c61180();
  uVar16 = 0;
  FUN_1026c05b8(0,0x112d5ecd0,&PTR_PTR_1126bf310);
  uVar2 = uVar11;
  func_0x000107c5fc54(uVar11,uVar16);
  func_0x000107c61170(uVar11);
  if (uVar2 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar11 = uVar2;
    }
    func_0x000107c60480();
  }
  if (uVar11 == 0) {
    func_0x000107c6142c(uVar2);
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar11 & ((long)uVar11 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar7 = puStack_78;
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1026c05b0);
      (*pcVar12)();
    }
    uVar16 = 0;
    pcStack_a8 = pcVar12;
    lStack_a0 = unaff_x20;
    FUN_1026c05b8(0,0x112eb5850,&PTR_PTR_1126c60b8);
    uVar14 = 0;
    do {
      if ((uVar2 & 0xc000000000000001) == 0) {
        uVar3 = *(ulong *)(uVar2 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar3 = uVar14;
        func_0x00010111c518(uVar14,uVar2);
      }
      func_0x000107c61174();
      uVar4 = uVar3;
      FUN_1026c0d9c();
      uStack_80 = uVar16;
      func_0x000107c61170(uVar3);
      uVar3 = *(ulong *)(puVar7 + 0x10);
      auStack_98[0] = uVar4;
      puStack_78 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
        func_0x000100c077e4(1 < *(ulong *)(puVar7 + 0x18),uVar3 + 1,1);
      }
      puVar7 = puStack_78;
      uVar14 = uVar14 + 1;
      *(ulong *)(puStack_78 + 0x10) = uVar3 + 1;
      func_0x000100102924(auStack_98,puStack_78 + uVar3 * 0x20 + 0x20);
    } while (uVar11 != uVar14);
    func_0x000107c6142c(uVar2);
    unaff_x20 = lStack_a0;
    pcVar12 = pcStack_a8;
  }
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar6 = puVar7;
  func_0x000107c5fc48(puVar7,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar7);
  func_0x000107c45788(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c52114(unaff_x20);
  func_0x000107c61170(pcVar12);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(param_2);
  return unaff_x20;
}



/* Entry: 1026c05b8; end: 1026c05f7;  */

void FUN_1026c05b8(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026c05f8; end: 1026c0c2f;  */

undefined8 FUN_1026c05f8(undefined8 param_1,double param_2,ulong param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long extraout_x8;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar11;
  undefined8 unaff_x20;
  ulong uVar12;
  code *pcVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar19 = (undefined4)((ulong)param_1 >> 0x20);
  uVar18 = (undefined4)param_1;
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar14 = lVar4 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = uVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = lVar16 - extraout_x12_01;
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  uVar15 = param_3;
  func_0x000107c3fc6c(param_3);
  func_0x000107c61180();
  func_0x000107c55218(unaff_x20);
  func_0x000107c61170(uVar15);
  uStack_68 = unaff_x20;
  func_0x000107c61170(unaff_x20);
  uStack_70 = param_3;
  func_0x000107c4f4e8();
  func_0x000107c61180();
  bVar2 = param_3 == 0;
  if (bVar2) {
    func_0x000107c5ede0();
  }
  else {
    func_0x000107c5edb4(lVar16);
    func_0x000107c61170(param_3);
    param_3 = 0;
    func_0x000107c5ede0();
  }
  lVar17 = *(long *)(param_3 - 8);
  pcVar11 = *(code **)(lVar17 + 0x38);
  (*pcVar11)(lVar16,bVar2,1,param_3);
  func_0x0001001021cc(lVar16,uVar12);
  func_0x000107c5ede0(0);
  pcVar13 = *(code **)(lVar17 + 0x30);
  uVar9 = 1;
  uVar15 = uVar12;
  (*pcVar13)(uVar12,1,param_3);
  if ((int)uVar15 == 1) {
    func_0x0001000293e4(uVar12);
  }
  else {
    func_0x000107c5ed70();
    (**(code **)(lVar17 + 8))(uVar12,param_3);
    uVar12 = uVar15 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar12 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar12 == 0) {
      func_0x000107c6142c(uVar9);
    }
    else {
      puVar8 = PTR_PTR_1126c60b0;
      func_0x000107c610f8(PTR_PTR_1126c60b0);
      func_0x000107c453e4();
      func_0x000107c5fadc(uVar15,uVar9);
      func_0x000107c6142c(uVar9);
      func_0x000107c5a120(puVar8);
      func_0x000107c61170(uVar15);
      func_0x000107c57994(uStack_68);
      func_0x000107c61170(puVar8);
    }
  }
  uVar15 = uStack_70;
  uVar12 = uStack_70;
  func_0x000107c436f8();
  func_0x000107c61180();
  if (uVar12 != 0) {
    func_0x000107c5edb4(lVar4);
    func_0x000107c61170(uVar12);
  }
  (*pcVar11)(lVar4,uVar12 == 0,1,param_3);
  func_0x0001001021cc(lVar4,uVar14);
  uVar9 = 1;
  uVar12 = uVar14;
  (*pcVar13)(uVar14,1,param_3);
  if ((int)uVar12 == 1) {
    func_0x0001000293e4(uVar14);
    uVar5 = uStack_68;
  }
  else {
    func_0x000107c5ed70();
    (**(code **)(lVar17 + 8))(uVar14,param_3);
    uVar5 = uStack_68;
    uVar14 = uVar12 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar14 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar14 == 0) {
      func_0x000107c6142c(uVar9);
    }
    else {
      puVar8 = PTR_PTR_1126c60b0;
      func_0x000107c610f8(PTR_PTR_1126c60b0);
      func_0x000107c453e4();
      func_0x000107c5fadc(uVar12,uVar9);
      func_0x000107c6142c(uVar9);
      func_0x000107c5a120(puVar8);
      func_0x000107c61170(uVar12);
      func_0x000107c54a88(uVar5);
      func_0x000107c61170(puVar8);
    }
  }
  func_0x000107c4077c(uVar15);
  func_0x000107c532c8((float)(double)CONCAT44(uVar19,uVar18),uVar5);
  func_0x000107c4077c(uVar15);
  func_0x000107c532cc((float)param_2,uVar5);
  func_0x000107c4a5f0(uVar15);
  func_0x000107c59e94(uVar5);
  uVar12 = uVar15;
  func_0x000107c4c310();
  func_0x000107c61180();
  if (uVar12 != 0) {
    FUN_1026c0c30(0,0x112eb5858,&PTR_PTR_1126d0950);
    func_0x000107c61174(uVar12);
    uVar14 = uVar12;
    FUN_1026c1a50();
    func_0x000107c5a7d8(uVar5);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar14);
  }
  func_0x000107c4e684();
  func_0x000107c61180();
  uVar5 = 0;
  FUN_1026c0c30(0,0x112d5ecd8,&PTR_PTR_1126bf130);
  uVar12 = uVar15;
  func_0x000107c5fc54(uVar15,uVar5);
  func_0x000107c61170(uVar15);
  if (uVar12 >> 0x3e == 0) {
    uVar15 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar15 = uVar12 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar12) {
      uVar15 = uVar12;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (uVar15 != 0) {
    uVar14 = 0;
    do {
      if ((uVar12 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x1026c0b68);
          (*pcVar11)();
        }
        uVar9 = *(ulong *)(uVar12 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar9 = uVar14;
        func_0x00010111c1ac(uVar14,uVar12);
      }
      uVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1026c0b64);
        (*pcVar11)();
      }
      uVar5 = 0;
      FUN_1026c0c30(0,0x112eb5258,&PTR_PTR_1126c60c0);
      FUN_1026bff48(uVar9,uVar5);
      puVar7 = puVar8;
      func_0x000107c61550();
      if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
         (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar8 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar8) {
            puVar6 = puVar8;
          }
          func_0x000107c60480(puVar6);
        }
        puVar7 = (undefined *)0x0;
        func_0x0001026bbcbc(0,puVar6 + 1,1,puVar8);
      }
      uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
      uVar3 = *(ulong *)(uVar10 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar3) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
        func_0x0001026bbcbc(puVar8,uVar3 + 1,1,puVar7);
        uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar10 + 0x10) = uVar3 + 1;
      *(ulong *)(uVar10 + uVar3 * 8 + 0x20) = uVar9;
      uVar14 = uVar14 + 1;
    } while (uVar1 != uVar15);
  }
  func_0x000107c6142c(uVar12);
  puVar7 = puVar8;
  func_0x0001026bb9c0(puVar8);
  func_0x000107c6142c(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar6 = puVar7;
  func_0x000107c5fc48(puVar7,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar7);
  func_0x000107c45788(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c534dc(uStack_68);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(uStack_70);
  return uStack_68;
}



/* Entry: 1026c0c30; end: 1026c0d9b;  */

void FUN_1026c0c30(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026c0d9c; end: 1026c1067;  */

undefined8 FUN_1026c0d9c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar7 = &puStack_90;
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c44fdc();
  func_0x000107c61180();
  if (uVar2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c55218(unaff_x20);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(unaff_x20);
  func_0x000107c5d0f0();
  func_0x000107c61174();
  func_0x000107c5a0f8();
  uVar2 = param_1;
  func_0x000107c40414(param_1);
  func_0x000107c61180();
  puVar3 = &UNK_110538080;
  func_0x000107c613fc(&UNK_110538080,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_1105380a8;
  func_0x000107c613fc(&UNK_1105380a8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1026c1068;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x1026c1114;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100de6bdc;
  puStack_78 = &UNK_1105380c0;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_1105380f8;
  func_0x000107c613fc(&UNK_1105380f8,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
  puVar6 = &UNK_110538120;
  uVar9 = 0x20;
  func_0x000107c613fc(&UNK_110538120,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1026c10b8;
  *(undefined **)(puVar6 + 0x18) = puVar4;
  uStack_70 = 0x1026c10ec;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101380a90;
  puStack_78 = &UNK_110538138;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c4c794(uVar2);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61170(uVar2);
  uVar2 = param_1;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (uVar2 == 0) {
    func_0x000107c61574(puVar4);
    func_0x000107c61574(puVar3);
  }
  else {
    uVar8 = uVar2;
    func_0x000107c5faec();
    func_0x000107c6142c(uVar9);
    uVar8 = uVar8 & 0xffffffffffff;
    if ((uVar9 & 0x2000000000000000) != 0) {
      uVar8 = uVar9 >> 0x38 & 0xf;
    }
    if (uVar8 == 0) {
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(param_1);
      param_1 = uVar2;
    }
    else {
      func_0x000107c56954(unaff_x20);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(uVar2);
    }
  }
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 1026c1068; end: 1026c109b;  */

void FUN_1026c1068(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  func_0x000107c53890(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026c109c; end: 1026c10b7;  */

void FUN_1026c109c(long param_1,long param_2)

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



/* Entry: 1026c10b8; end: 1026c110b;  */

void FUN_1026c10b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5ee20();
  func_0x000107c53844(uVar1,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1026c110c; end: 1026c1117;  */

void FUN_1026c110c(long param_1,long param_2)

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



/* Entry: 1026c1118; end: 1026c12af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1026c1118(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(param_1 + _DAT_113072870);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113072870))[1];
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c56abc(unaff_x20);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_113072878);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113072878))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c534e4(unaff_x20);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_113072880);
  uVar1 = ((undefined8 *)(param_1 + _DAT_113072880))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c534e8(unaff_x20);
  func_0x000107c61170(uVar2);
  func_0x000107c59028(unaff_x20);
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c6142c(param_3);
  }
  func_0x000107c5a618(unaff_x20);
  func_0x000107c61170(param_2);
  func_0x000107c55734(unaff_x20);
  func_0x000107c61170(unaff_x20);
  return unaff_x20;
}



/* Entry: 1026c12b0; end: 1026c1607;  */

undefined * FUN_1026c12b0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  char cVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong auStack_98 [3];
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  char cStack_68;
  
  uVar1 = param_1 & 0xc000000000000001;
  if (uVar1 == 0) {
    uVar15 = *(ulong *)(param_1 + 0x10);
  }
  else {
    uVar15 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar15 = param_1;
    }
    func_0x000107c6029c();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar9 = uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100c077e4(0,uVar9,0);
    if (uVar1 == 0) {
      uVar6 = param_1 + 0x38;
      func_0x000107c60268(uVar6,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
      cStack_68 = '\0';
      uVar9 = (ulong)*(uint *)(param_1 + 0x24);
    }
    else {
      uVar6 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar6 = param_1;
      }
      func_0x000107c60284();
      cStack_68 = '\x01';
    }
    uStack_78 = uVar6;
    uStack_70 = uVar9;
    if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1026c1600);
      (*pcVar5)();
    }
    uVar7 = 0;
    FUN_1026c1724(0,0x112eb5860,&PTR_PTR_1126c60a8);
    uVar9 = 0;
    uVar6 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar6 = param_1;
    }
    do {
      cVar4 = cStack_68;
      uVar2 = uStack_70;
      uVar13 = uStack_78;
      if (uVar9 == uVar15) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1026c15f0);
        (*pcVar5)();
      }
      uVar14 = uStack_78;
      func_0x00010114691c(uStack_78,uStack_70,cStack_68,param_1);
      func_0x000107c61180();
      uVar10 = uVar14;
      FUN_1026c05f8();
      uStack_80 = uVar7;
      func_0x000107c61170(uVar14);
      uVar14 = *(ulong *)(puVar3 + 0x10);
      auStack_98[0] = uVar10;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar14) {
        func_0x000100c077e4(1 < *(ulong *)(puVar3 + 0x18),uVar14 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar14 + 1;
      func_0x000100102924(auStack_98,puVar3 + uVar14 * 0x20 + 0x20);
      if (uVar1 == 0) {
        if (cVar4 == '\x01') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1026c1608);
          (*pcVar5)();
        }
        uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
        if (uVar14 <= uVar13) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1026c15f4);
          (*pcVar5)();
        }
        uVar11 = uVar13 >> 6;
        uVar10 = *(ulong *)(param_1 + 0x38 + uVar11 * 8);
        if ((uVar10 >> (uVar13 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1026c15f8);
          (*pcVar5)();
        }
        if (*(int *)(param_1 + 0x24) != (int)uVar2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1026c15fc);
          (*pcVar5)();
        }
        uVar10 = uVar10 & -2L << (uVar13 & 0x3f);
        if (uVar10 == 0) {
          lVar16 = uVar11 << 6;
          puVar12 = (ulong *)(param_1 + 0x40 + uVar11 * 8);
          do {
            uVar11 = uVar11 + 1;
            if (uVar14 + 0x3f >> 6 <= uVar11) {
              func_0x000101146570(uVar13,uVar2,cVar4);
              goto LAB_1026c1580;
            }
            uVar10 = *puVar12;
            lVar16 = lVar16 + 0x40;
            puVar12 = puVar12 + 1;
          } while (uVar10 == 0);
          func_0x000101146570(uVar13,uVar2,cVar4);
          uVar13 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar14 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + lVar16;
        }
        else {
          uVar2 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
          uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
          uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
          uVar14 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | uVar13 & 0x7fffffffffffffc0;
        }
LAB_1026c1580:
        uStack_70 = (ulong)*(uint *)(param_1 + 0x24);
        cStack_68 = '\0';
        uStack_78 = uVar14;
      }
      else {
        if (cVar4 != '\x01') {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1026c1604);
          (*pcVar5)();
        }
        func_0x000107c6028c(uVar13,uVar2);
        if (uVar13 == 0) {
          uVar13 = 1;
        }
        else {
          func_0x000107c61558();
        }
        uVar8 = 0x112eb5868;
        func_0x0001000285a8(0x112eb5868,&UNK_10dacc118);
        pcVar5 = (code *)auStack_98;
        func_0x000107c5fe1c(pcVar5,uVar8);
        func_0x000107c602b8(uVar8,uVar13,uVar6);
        (*pcVar5)(auStack_98,0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar15);
    func_0x000101146570(uStack_78,uStack_70,cStack_68);
  }
  return puVar3;
}



/* Entry: 1026c1608; end: 1026c1723;  */

undefined8 FUN_1026c1608(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR_PTR_1126c60d8;
  func_0x000107c610f8(PTR_PTR_1126c60d8);
  func_0x000107c61174(unaff_x20);
  func_0x000107c453e4(puVar1);
  func_0x000107c61180();
  uVar2 = param_1;
  FUN_1026c12b0(param_1);
  func_0x000107c6142c(param_1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar4 = uVar2;
  func_0x000107c5fc48(uVar2,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar2);
  func_0x000107c45788(puVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c54be0(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c556d4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c54c60(unaff_x20);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(unaff_x20);
  return unaff_x20;
}



/* Entry: 1026c1724; end: 1026c1763;  */

void FUN_1026c1724(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026c1764; end: 1026c1a0f;  */

undefined8 FUN_1026c1764(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 unaff_x20;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong auStack_88 [3];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126c60d8;
  func_0x000107c610f8(PTR_PTR_1126c60d8);
  func_0x000107c61174();
  func_0x000107c453e4(puVar2);
  uVar9 = param_1;
  func_0x000107c3fc74();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_1026c1a10(0,0x112d5ec90,&PTR_PTR_1126bf100);
  uVar4 = uVar9;
  func_0x000107c5fc54(uVar9,uVar3);
  func_0x000107c61170(uVar9);
  if (uVar4 >> 0x3e == 0) {
    uVar9 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar9 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar9 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar9 == 0) {
    func_0x000107c6142c(uVar4);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar10 = puStack_68;
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026c1a10);
      (*pcVar1)();
    }
    uVar3 = 0;
    FUN_1026c1a10(0,0x112eb5860,&PTR_PTR_1126c60a8);
    uVar11 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        uVar5 = *(ulong *)(uVar4 + uVar11 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar11;
        func_0x00010111c580(uVar11,uVar4);
      }
      func_0x000107c61174();
      uVar6 = uVar5;
      FUN_1026c05f8();
      uStack_70 = uVar3;
      func_0x000107c61170(uVar5);
      uVar5 = *(ulong *)(puVar10 + 0x10);
      auStack_88[0] = uVar6;
      puStack_68 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar5) {
        func_0x000100c077e4(1 < *(ulong *)(puVar10 + 0x18),uVar5 + 1,1);
      }
      puVar10 = puStack_68;
      uVar11 = uVar11 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar5 + 1;
      func_0x000100102924(auStack_88,puStack_68 + uVar5 * 0x20 + 0x20);
    } while (uVar9 != uVar11);
    func_0x000107c6142c(uVar4);
  }
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar8 = puVar10;
  func_0x000107c5fc48(puVar10,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar10);
  func_0x000107c45788(puVar7);
  func_0x000107c61170(puVar8);
  func_0x000107c54be0(puVar2);
  func_0x000107c61170(puVar7);
  func_0x000107c49f24(param_1);
  func_0x000107c556d4(puVar2);
  func_0x000107c61174(puVar2);
  func_0x000107c54c60(unaff_x20);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(unaff_x20);
  return unaff_x20;
}



/* Entry: 1026c1a10; end: 1026c1a4f;  */

void FUN_1026c1a10(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026c1a50; end: 1026c1dcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1026c1a50(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined8 unaff_x20;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  lVar5 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = auStack_90 + -extraout_x8;
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar9 = *(undefined **)(param_1 + _DAT_113072818);
  puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar9 != (undefined *)0x0) {
    puStack_70 = puVar9;
  }
  if ((ulong)puStack_70 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)puStack_70 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)puStack_70 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_70) {
      puVar13 = puStack_70;
    }
    func_0x000107c60480();
  }
  if (puVar13 == (undefined *)0x0) {
    func_0x000107c61174(unaff_x20);
    func_0x000107c61434(puVar9);
    func_0x000107c6142c(puStack_70);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_68 = puVar6;
    func_0x000107c61174(unaff_x20);
    func_0x000107c61434(puVar9);
    func_0x0001026be390(0,(ulong)puVar13 & ((long)puVar13 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1026c1dcc);
      (*pcVar2)();
    }
    puVar9 = (undefined *)0x0;
    uVar12 = (ulong)puStack_70 & 0xc000000000000001;
    puVar10 = puStack_70;
    uStack_88 = unaff_x20;
    lStack_80 = param_1;
    puStack_78 = puVar13;
    do {
      puVar6 = puStack_68;
      if (uVar12 == 0) {
        puVar3 = *(undefined **)(puVar10 + (long)puVar9 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar3 = puVar9;
        FUN_1026c60c4(puVar9,puVar10);
      }
      puVar4 = PTR_PTR_1126d0948;
      func_0x000107c610f8();
      func_0x000107c453e4();
      func_0x000107c566d4(*(undefined8 *)(puVar3 + _DAT_1130727d0));
      func_0x000107c56380(*(undefined8 *)(puVar3 + _DAT_1130727d8),puVar4);
      func_0x000107c57530(puVar4);
      func_0x000107c56f84(puVar4);
      func_0x000100029394(puVar3 + _DAT_113813440,puVar11);
      lVar5 = 0;
      func_0x000107c5ede0();
      lVar14 = *(long *)(lVar5 + -8);
      uVar7 = 1;
      puVar8 = puVar11;
      (**(code **)(lVar14 + 0x30))(puVar11,1,lVar5);
      if ((int)puVar8 == 1) {
        func_0x0001000293e4(puVar11);
        puVar8 = (undefined1 *)0x0;
      }
      else {
        func_0x000107c5ed70();
        (**(code **)(lVar14 + 8))(puVar11,lVar5);
        puVar13 = puStack_78;
        func_0x000107c5fadc(puVar8,uVar7);
        puVar10 = puStack_70;
        func_0x000107c6142c(uVar7);
      }
      func_0x000107c5441c(puVar4);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar8);
      uVar1 = *(ulong *)(puVar6 + 0x10);
      puStack_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        func_0x0001026be390(1 < *(ulong *)(puVar6 + 0x18),uVar1 + 1,1);
        puVar13 = puStack_78;
      }
      puVar6 = puStack_68;
      puVar9 = puVar9 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined **)(puStack_68 + uVar1 * 8 + 0x20) = puVar4;
    } while (puVar13 != puVar9);
    func_0x000107c6142c(puVar10);
    param_1 = lStack_80;
    unaff_x20 = uStack_88;
  }
  puVar9 = puVar6;
  FUN_1026bb9a4(puVar6);
  func_0x000107c6142c(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar13 = puVar9;
  func_0x000107c5fc48(puVar9,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar9);
  func_0x000107c45788(puVar6);
  func_0x000107c61170(puVar13);
  func_0x000107c5a4bc(unaff_x20);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(param_1);
  func_0x000107c61170(unaff_x20);
  return unaff_x20;
}



/* Entry: 1026c1dcc; end: 1026c1e17;  */

void FUN_1026c1dcc(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026c1e7c,param_1);
  return;
}



/* Entry: 1026c1e18; end: 1026c1e7b;  */

void FUN_1026c1e18(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c2308();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110538190;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c1e7c; end: 1026c1e83;  */

void FUN_1026c1e7c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c2308();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_110538190;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c1e84; end: 1026c1eb3;  */

void FUN_1026c1e84(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1026c1eb4; end: 1026c2027;  */

void FUN_1026c1eb4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4b8d8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112eb07a0,&UNK_10dac4d00);
    lVar1 = lVar2;
    func_0x000107c4b930(lVar2);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    pcVar4 = FUN_1026c2028;
    func_0x0001000c0ebc(FUN_1026c2028,0);
    func_0x000107c61574(lVar3);
    puVar5 = &UNK_110538170;
    func_0x000107c613fc(&UNK_110538170,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar2);
    uVar6 = 0;
    FUN_1026c2328(0,0x112eb5870,&PTR__OBJC_CLASS___CLHeading_1126aad78);
    pcVar7 = FUN_1026c2270;
    func_0x0001000d5158(FUN_1026c2270,puVar5,uVar6);
    func_0x000107c61574(pcVar4);
    func_0x000107c61574(puVar5);
    uVar6 = 0;
    FUN_1026c2328(0,0x112eb5278,&PTR_PTR_1126b1de8);
    func_0x0001000bfde0(0x1026c21e4,0,uVar6);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(pcVar7);
  }
  return;
}



/* Entry: 1026c2028; end: 1026c215b;  */

undefined1 FUN_1026c2028(undefined8 *param_1)

{
  undefined *puVar1;
  undefined1 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 uStack_41;
  
  uVar7 = *param_1;
  uStack_41 = 0;
  puVar4 = &UNK_1105381f0;
  func_0x000107c613fc(&UNK_1105381f0,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = &uStack_41;
  puVar5 = &UNK_110538218;
  func_0x000107c613fc(&UNK_110538218,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1026c2368;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_58 = 0x1026c2378;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_10006eb60;
  puStack_60 = &UNK_110538230;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar1 = puStack_50;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c604(uVar7);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_41;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x71,0x1d,0x47,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1026c215c);
  (*pcVar3)();
}



/* Entry: 1026c215c; end: 1026c226f;  */

void FUN_1026c215c(ulong *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  uVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c44d88();
    func_0x000107c61180();
    func_0x000107c615e8();
    if ((uVar2 == 0) || (func_0x000103b3e1c8(), (uVar1 & 1) != 0)) goto LAB_1026c21cc;
    func_0x000107c61170(uVar2);
  }
  uVar2 = 0;
LAB_1026c21cc:
  *param_1 = uVar2;
  return;
}



/* Entry: 1026c2270; end: 1026c2277;  */

void FUN_1026c2270(ulong *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  uVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c44d88();
    func_0x000107c61180();
    func_0x000107c615e8();
    if ((uVar2 == 0) || (func_0x000103b3e1c8(), (uVar1 & 1) != 0)) goto LAB_1026c21cc;
    func_0x000107c61170(uVar2);
  }
  uVar2 = 0;
LAB_1026c21cc:
  *param_1 = uVar2;
  return;
}



/* Entry: 1026c2278; end: 1026c229b;  */

void FUN_1026c2278(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026c229c; end: 1026c22bb;  */

void FUN_1026c229c(void)

{
  FUN_1026c1eb4();
  return;
}



/* Entry: 1026c22bc; end: 1026c2307;  */

undefined ** FUN_1026c22bc(void)

{
  return &PTR_DAT_112eb9bc0;
}



/* Entry: 1026c2308; end: 1026c2327;  */

void FUN_1026c2308(void)

{
  func_0x000107c61168(&PTR_PTR_112eb58f8);
  return;
}



/* Entry: 1026c2328; end: 1026c2367;  */

void FUN_1026c2328(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026c2368; end: 1026c239b;  */

void FUN_1026c2368(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 1026c239c; end: 1026c243b;  */

undefined8 FUN_1026c239c(double param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5d06c(param_2);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026c2434);
    (*pcVar1)();
  }
  if (-2147483649.0 < param_1) {
    if (param_1 < 2147483648.0) {
      func_0x000107c550a4(unaff_x20,param_3,(int)param_1);
      func_0x000107c61170(unaff_x20);
      return unaff_x20;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1026c243c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1026c2438);
  (*pcVar1)();
}



/* Entry: 1026c243c; end: 1026c26db;  */

undefined * FUN_1026c243c(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined *puVar5;
  code *pcVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined *apuStack_80 [3];
  undefined8 uStack_68;
  
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 != 0) {
    func_0x000100c077e4(0,lVar12,0);
    uVar1 = param_1 + 0x40;
    uVar7 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar15 = 0;
    do {
      if (uVar7 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1026c26cc);
        (*pcVar6)();
      }
      uVar14 = uVar7 >> 6;
      uVar17 = 1L << (uVar7 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar14 * 8) & uVar17) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1026c26d0);
        (*pcVar6)();
      }
      iVar4 = *(int *)(param_1 + 0x24);
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar7 * 0x10);
      uVar9 = *puVar2;
      uVar3 = puVar2[1];
      puVar8 = PTR_PTR_1126c6128;
      func_0x000107c610f8();
      func_0x000107c61434(uVar3);
      func_0x000107c453e4();
      func_0x000107c5fadc(uVar9,uVar3);
      func_0x000107c5a344(puVar8);
      func_0x000107c61170(uVar9);
      func_0x000107c53158(puVar8);
      uVar9 = 0;
      FUN_1026c2ac4(0,0x112eb5a48,&PTR_PTR_1126c6128);
      uStack_68 = uVar9;
      func_0x000107c6142c(uVar3);
      uVar13 = *(ulong *)(puVar5 + 0x10);
      apuStack_80[0] = puVar8;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar13) {
        func_0x000100c077e4(1 < *(ulong *)(puVar5 + 0x18),uVar13 + 1,1);
      }
      *(ulong *)(puVar5 + 0x10) = uVar13 + 1;
      func_0x000100102924(apuStack_80,puVar5 + uVar13 * 0x20 + 0x20);
      uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar13 <= uVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1026c26d4);
        (*pcVar6)();
      }
      uVar10 = *(ulong *)(uVar1 + uVar14 * 8);
      if ((uVar10 & uVar17) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1026c26d8);
        (*pcVar6)();
      }
      if (iVar4 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1026c26dc);
        (*pcVar6)();
      }
      uVar10 = uVar10 & -2L << (uVar7 & 0x3f);
      if (uVar10 == 0) {
        lVar16 = uVar14 << 6;
        puVar11 = (ulong *)(param_1 + 0x48 + uVar14 * 8);
        do {
          uVar14 = uVar14 + 1;
          if (uVar13 + 0x3f >> 6 <= uVar14) {
            FUN_1026c2b04(uVar7,iVar4,0);
            goto LAB_1026c24d4;
          }
          uVar17 = *puVar11;
          lVar16 = lVar16 + 0x40;
          puVar11 = puVar11 + 1;
        } while (uVar17 == 0);
        FUN_1026c2b04(uVar7,iVar4,0);
        uVar7 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) + lVar16;
      }
      else {
        uVar14 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
        uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
        uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | uVar7 & 0x7fffffffffffffc0;
      }
LAB_1026c24d4:
      lVar15 = lVar15 + 1;
      uVar7 = uVar13;
    } while (lVar15 != lVar12);
  }
  return puVar5;
}



/* Entry: 1026c26dc; end: 1026c27d3;  */

void FUN_1026c26dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
  puVar1 = &UNK_110538288;
  func_0x000107c613fc(&UNK_110538288,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1026c27d4,puVar1);
  return;
}



/* Entry: 1026c27d4; end: 1026c27db;  */

void FUN_1026c27d4(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_38,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100083b20(&uStack_40);
  FUN_1026c2aa4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uStack_40;
  *(undefined8 *)(lVar2 + 0x18) = uStack_38;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1105382a8;
  *param_1 = lVar2;
  return;
}



/* Entry: 1026c27dc; end: 1026c293f;  */

void FUN_1026c27dc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 1026c2940; end: 1026c2a0b;  */

void FUN_1026c2940(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (*(long *)(lVar4 + 0x10) == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b1de8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    FUN_1026c243c(lVar4);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    lVar2 = lVar4;
    func_0x000107c5fc48(lVar4,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(lVar4);
    func_0x000107c45788(puVar1);
    func_0x000107c61170(lVar2);
    func_0x000107c55fb8(puVar3);
    func_0x000107c61170(puVar1);
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 1026c2a0c; end: 1026c2a37;  */

void FUN_1026c2a0c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026c2a38; end: 1026c2a57;  */

void FUN_1026c2a38(void)

{
  func_0x0001026c2818();
  return;
}



/* Entry: 1026c2a58; end: 1026c2aa3;  */

undefined ** FUN_1026c2a58(void)

{
  return &PTR_DAT_112eb9bd8;
}



/* Entry: 1026c2aa4; end: 1026c2ac3;  */

void FUN_1026c2aa4(void)

{
  func_0x000107c61168(&PTR_PTR_112eb59e0);
  return;
}



/* Entry: 1026c2ac4; end: 1026c2b03;  */

void FUN_1026c2ac4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026c2b04; end: 1026c2b17;  */

void FUN_1026c2b04(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 1026c2b18; end: 1026c2b63;  */

void FUN_1026c2b18(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026c2bc8,param_1);
  return;
}



/* Entry: 1026c2b64; end: 1026c2bc7;  */

void FUN_1026c2b64(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c2f8c();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110538320;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c2bc8; end: 1026c2bcf;  */

void FUN_1026c2bc8(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c2f8c();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_110538320;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c2bd0; end: 1026c2bff;  */

void FUN_1026c2bd0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1026c2c00; end: 1026c2d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026c2c00(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fcd348);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112eb17c0,&UNK_10dac6140);
    lVar2 = lVar1;
    func_0x000107c4d30c(lVar1);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    uVar5 = 0x112d5d480;
    func_0x0001000285a8(0x112d5d480,&UNK_10d923b90);
    pcVar4 = FUN_1026c2d10;
    func_0x0001000d5158(FUN_1026c2d10,0,uVar5);
    func_0x000107c61574(lVar3);
    uVar5 = 0;
    FUN_1026c2eb8(0);
    func_0x0001000bfde0(FUN_1026c2d5c,0,uVar5);
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(pcVar4);
  }
  return;
}



/* Entry: 1026c2d10; end: 1026c2d5b;  */

void FUN_1026c2d10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uStack_28;
  
  uStack_28 = 0;
  func_0x000107c5fe0c(*param_2,&uStack_28,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *param_1 = uStack_28;
  return;
}



/* Entry: 1026c2d5c; end: 1026c2eb7;  */

void FUN_1026c2d5c(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = *param_2;
  puVar2 = PTR_PTR_1126c6130;
  func_0x000107c610f8(PTR_PTR_1126c6130);
  func_0x000107c61434(lVar6);
  func_0x000107c453e4(puVar2);
  puVar7 = *(undefined8 **)(lVar6 + 0x10);
  func_0x000107c61174();
  if (puVar7 == (undefined8 *)0x0) {
    func_0x000107c6142c(lVar6);
    puVar3 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar3 = puVar7;
    func_0x00010109b448(puVar7,0);
    puVar4 = &uStack_68;
    func_0x00010109b930(puVar4,puVar3 + 4,puVar7,lVar6);
    func_0x00010109bac0(uStack_68,uStack_60,uStack_58,uStack_50,uStack_48);
    if (puVar4 != puVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026c2df0);
      (*pcVar1)();
    }
  }
  puVar7 = puVar3;
  func_0x00010102c3b8(puVar3);
  func_0x000107c61574(puVar3);
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar3 = puVar7;
  func_0x000107c5fc48(puVar7,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar7);
  func_0x000107c45788(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c568c0(puVar2);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  puVar5 = PTR_PTR_1126b1de8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c568c4();
  func_0x000107c61170(puVar2);
  *param_1 = puVar5;
  return;
}



/* Entry: 1026c2eb8; end: 1026c2f1f;  */

void FUN_1026c2eb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112eb5278 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b1de8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112eb5278 = puVar1;
  return;
}



/* Entry: 1026c2f20; end: 1026c2f3f;  */

void FUN_1026c2f20(void)

{
  FUN_1026c2c00();
  return;
}



/* Entry: 1026c2f40; end: 1026c2f8b;  */

undefined ** FUN_1026c2f40(void)

{
  return &PTR_DAT_112eb9bc0;
}



/* Entry: 1026c2f8c; end: 1026c2fab;  */

void FUN_1026c2f8c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb5ad0);
  return;
}



/* Entry: 1026c2fac; end: 1026c2fdb;  */

undefined * FUN_1026c2fac(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1026bd280();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1026c2fdc; end: 1026c305b;  */

undefined * FUN_1026c2fdc(undefined *param_1,undefined *param_2,code *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    (*param_3)();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1026c305c; end: 1026c31e3;  */

void FUN_1026c305c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
  puVar1 = &UNK_1105383a0;
  func_0x000107c613fc(&UNK_1105383a0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1026c31e4,puVar1);
  return;
}


