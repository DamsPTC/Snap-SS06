/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103ae205c; end: 103ae2347;  */

void FUN_103ae205c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
  lVar2 = *(long *)(unaff_x22 + 0x178);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x168);
  FUN_103adfa2c(*(undefined8 *)(unaff_x22 + 0x110),*(undefined8 *)(unaff_x22 + 0x128),
                *(undefined8 *)(unaff_x22 + 0x130));
  func_0x000107c602fc(0x1e);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(uVar6,uVar4);
  uVar4 = 0xd00000000000001c;
  puVar1 = PTR_PTR_1126b08b8;
  func_0x000107c610f8();
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f19d090);
  func_0x000107c6142c(0x800000010f19d090);
  func_0x000107c4766c();
  *(undefined **)(unaff_x22 + 400) = puVar1;
  func_0x000107c61170(uVar4);
  lVar2 = *(long *)(lVar2 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x198) = lVar2;
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x178) + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x1a0) = lVar2;
    if (lVar2 == 0) {
      uVar4 = *(undefined8 *)(unaff_x22 + 0x178);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 400));
      func_0x000107c61574(uVar4);
      FUN_103ae4ab0(unaff_x22 + 0x110);
                    /* WARNING: Could not recover jumptable at 0x000103ae2344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 400);
    lVar3 = 0x112d5dfd0;
    FUN_103ae3b9c(0x112d5dfd0,&PTR_PTR_1126b08b8,0x112d5dfd8,&UNK_10d9bd2b0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 3;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x20) = uVar6;
    uVar4 = 0;
    func_0x000103ae5450(0,0x112d5dfd0,&PTR_PTR_1126b08b8);
    func_0x000107c61174(uVar6);
    lVar5 = lVar3;
    func_0x000107c5fc48(lVar3,uVar4);
    *(long *)(unaff_x22 + 0x1a8) = lVar5;
    func_0x000107c61574(lVar3);
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_103ae2530;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,0);
    uVar4 = 0x112d4e498;
    func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
    *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 200) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
    *(undefined **)(unaff_x22 + 0xa0) = &UNK_100f5a198;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_1106cdd58;
    *(long *)(unaff_x22 + 0xb0) = lVar3;
    func_0x000107c4fec8(lVar2);
    lVar2 = unaff_x22 + 0x10;
  }
  else {
    *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x1b0;
    *(long *)(unaff_x22 + 0x50) = unaff_x22;
    *(code **)(unaff_x22 + 0x58) = FUN_103ae2348;
    lVar3 = unaff_x22 + 0x50;
    func_0x000107c61448(lVar3,0);
    uVar4 = 0x112df01c0;
    func_0x0001000285a8(0x112df01c0,&UNK_10daf7f40);
    *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x108) = uVar4;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
    *(undefined **)(unaff_x22 + 0xe0) = &UNK_101a67e30;
    *(undefined **)(unaff_x22 + 0xe8) = &UNK_1106cdd80;
    *(long *)(unaff_x22 + 0xf0) = lVar3;
    func_0x000107c4fd5c(lVar2);
    lVar2 = unaff_x22 + 0x50;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(lVar2);
  return;
}



/* Entry: 103ae2348; end: 103ae2387;  */

void FUN_103ae2348(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae2388,0,0);
  return;
}



/* Entry: 103ae2388; end: 103ae252f;  */

void FUN_103ae2388(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x198));
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x178) + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x1a0) = lVar1;
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 400);
    lVar2 = 0x112d5dfd0;
    FUN_103ae3b9c(0x112d5dfd0,&PTR_PTR_1126b08b8,0x112d5dfd8,&UNK_10d9bd2b0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 3;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = uVar5;
    uVar3 = 0;
    func_0x000103ae5450(0,0x112d5dfd0,&PTR_PTR_1126b08b8);
    func_0x000107c61174(uVar5);
    lVar4 = lVar2;
    func_0x000107c5fc48(lVar2,uVar3);
    *(long *)(unaff_x22 + 0x1a8) = lVar4;
    func_0x000107c61574(lVar2);
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_103ae2530;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    uVar3 = 0x112d4e498;
    func_0x0001000285a8(0x112d4e498,&UNK_10d914830);
    *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 200) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
    *(undefined **)(unaff_x22 + 0xa0) = &UNK_100f5a198;
    *(undefined **)(unaff_x22 + 0xa8) = &UNK_1106cdd58;
    *(long *)(unaff_x22 + 0xb0) = lVar2;
    func_0x000107c4fec8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 400));
  func_0x000107c61574(uVar3);
  FUN_103ae4ab0(unaff_x22 + 0x110);
                    /* WARNING: Could not recover jumptable at 0x000103ae252c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae2530; end: 103ae256f;  */

void FUN_103ae2530(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae2570,0,0);
  return;
}



/* Entry: 103ae2570; end: 103ae25d3;  */

void FUN_103ae2570(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 400));
  func_0x000107c61574(uVar3);
  FUN_103ae4ab0(unaff_x22 + 0x110);
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000103ae25d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae25d4; end: 103ae2607;  */

void FUN_103ae25d4(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x178));
                    /* WARNING: Could not recover jumptable at 0x000103ae2604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae2608; end: 103ae26f7; -[_TtC18SCSnapUploaderImpl27SnapUploaderCoordinatorImpl removeTranscodeWithMediaId:] */

/* WARNING: Possible PIC construction at 0x000103ae26c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ae26cc) */

void FUN_103ae2608(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c5faec();
  puVar1 = &UNK_1106cdcf0;
  func_0x000107c613fc(&UNK_1106cdcf0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10,param_1);
  puVar2 = &UNK_1106cde58;
  func_0x000107c613fc(&UNK_1106cde58,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c61434(param_2);
  func_0x00010488e6a4(0,4,0x40,0,0,0,&UNK_10dc50740,puVar2,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 103ae26f8; end: 103ae2717;  */

void FUN_103ae26f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x158) = param_5;
  *(undefined8 *)(unaff_x22 + 0x160) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x148) = param_3;
  *(undefined8 *)(unaff_x22 + 0x150) = param_4;
  *(undefined8 *)(unaff_x22 + 0x138) = param_1;
  *(undefined8 *)(unaff_x22 + 0x140) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae2718,0,0);
  return;
}



/* Entry: 103ae2718; end: 103ae2cf7;  */

/* WARNING: Removing unreachable block (ram,0x000103ae2834) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ae2718(void)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long unaff_x22;
  undefined8 uVar14;
  
  uVar9 = *(ulong *)(unaff_x22 + 0x140);
  if (uVar9 >> 0x3c < 0xf) {
    uVar1 = (uint)(uVar9 >> 0x20);
    uVar8 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar8 == 0) {
        if ((uVar9 & 0xff000000000000) != 0) goto LAB_103ae27b4;
        goto LAB_103ae2784;
      }
      lVar2 = *(long *)(unaff_x22 + 0x138);
      if ((long)(int)lVar2 != lVar2 >> 0x20) goto LAB_103ae27a8;
    }
    else if (uVar8 == 2) {
      lVar2 = *(long *)(unaff_x22 + 0x138);
      if (*(long *)(lVar2 + 0x10) != *(long *)(lVar2 + 0x18)) {
LAB_103ae27a8:
        func_0x000100de78a0(lVar2,uVar9);
        uVar9 = *(ulong *)(unaff_x22 + 0x140);
LAB_103ae27b4:
        lVar2 = *(long *)(unaff_x22 + 0x158);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar14 = *(undefined8 *)(*(long *)(unaff_x22 + 0x160) + 0x30);
        *(undefined8 *)(unaff_x22 + 0x168) = uVar14;
        uVar7 = 0;
        func_0x000107c5eb24();
        func_0x000107c613fc();
        func_0x000107c5eb20();
        uVar3 = 0;
        func_0x00010440a304(0);
        uVar6 = 0x112fe8b50;
        FUN_103ae4bec(0x112fe8b50,&SUB_10440a304,&UNK_10dcf98b0);
        func_0x000107c5eb1c(unaff_x22 + 0x128,uVar3,uVar12,uVar9,uVar3,uVar6);
        lVar11 = *(long *)(unaff_x22 + 0x160);
        func_0x000107c61574(uVar7);
        lVar10 = *(long *)(unaff_x22 + 0x128);
        *(long *)(unaff_x22 + 0x170) = lVar10;
        puVar4 = *(undefined8 **)(*(long *)(lVar11 + 0x48) + _DAT_112fe9238);
        func_0x000107c5c734();
        func_0x000107c61180();
        *(undefined8 **)(unaff_x22 + 0x178) = puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          puVar13 = puVar4;
          func_0x0001000298f0();
          *(undefined8 **)(unaff_x22 + 0x180) = puVar13;
          func_0x000107c61428();
          uVar7 = *puVar13;
          func_0x000107c61174(uVar7);
          uVar6 = 0xd00000000000001b;
          func_0x000100029b28(0xd00000000000001b,0x800000010f19d010);
          *(undefined8 *)(unaff_x22 + 0x188) = uVar6;
          func_0x000107c61170(uVar7);
          func_0x000107c61428(puVar13,unaff_x22 + 0x98,0,0);
          uVar7 = *puVar13;
          func_0x000107c61174(uVar7);
          uVar6 = 0xd000000000000028;
          func_0x000100029b28(0xd000000000000028,0x800000010f19d030);
          *(undefined8 *)(unaff_x22 + 400) = uVar6;
          func_0x000107c61170(uVar7);
          uVar6 = *(undefined8 *)(lVar10 + _DAT_113077600);
          func_0x000107c5fadc(uVar6,((undefined8 *)(lVar10 + _DAT_113077600))[1]);
          uVar7 = *(undefined8 *)(lVar10 + _DAT_113077608);
          func_0x000107c5fadc(uVar7,((undefined8 *)(lVar10 + _DAT_113077608))[1]);
          if (((undefined8 *)(lVar10 + _DAT_113077610))[1] == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined8 *)(lVar10 + _DAT_113077610);
            func_0x000107c5fadc();
          }
          if (((undefined8 *)(lVar10 + _DAT_113077618))[1] == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(undefined8 *)(lVar10 + _DAT_113077618);
            func_0x000107c5fadc();
          }
          uVar14 = *(undefined8 *)(lVar10 + _DAT_113077628);
          func_0x000107c5fadc(uVar14,((undefined8 *)(lVar10 + _DAT_113077628))[1]);
          func_0x000107c3ed08();
          func_0x000107c61180();
          *(undefined8 **)(unaff_x22 + 0x198) = puVar4;
          func_0x000107c61170(uVar14);
          func_0x000107c61170(uVar12);
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar7);
          func_0x000107c61170(uVar6);
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x130;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_103ae2cf8;
          lVar2 = unaff_x22 + 0x10;
          func_0x000107c61448(lVar2,1);
          puVar5 = &UNK_1106cdb10;
          func_0x000107c613fc(&UNK_1106cdb10,0x18,7);
          puVar13 = (undefined8 *)(unaff_x22 + 0x50);
          *puVar13 = PTR___NSConcreteStackBlock_11034bd00;
          *(long *)(puVar5 + 0x10) = lVar2;
          *(code **)(unaff_x22 + 0x70) = FUN_103ae3b78;
          *(undefined **)(unaff_x22 + 0x78) = puVar5;
          *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
          *(undefined **)(unaff_x22 + 0x60) = &UNK_10130cf24;
          *(undefined **)(unaff_x22 + 0x68) = &UNK_1106cdb28;
          func_0x000107c60bc4(puVar13);
          func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
          func_0x000107c5dc64(puVar4);
          func_0x000107c60bd0(puVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
          return;
        }
        uVar6 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
        uVar3 = 0x6c696166;
        func_0x000107c5fadc(0x6c696166,0xe400000000000000);
        uVar12 = 0x7265646c697562;
        func_0x000107c5fadc(0x7265646c697562,0xe700000000000000);
        func_0x000106f484a0(uVar14,uVar3,uVar12,1);
        func_0x000107c61170(uVar12);
        func_0x000107c61170(uVar3);
        uVar3 = 0xd000000000000013;
        func_0x000107c5fadc(0xd000000000000013,0x800000010f19cc80);
        func_0x000106f486d0(uVar14,lVar2 == 0,uVar3,1);
        func_0x0001000b44c0(uVar6,uVar7);
        func_0x000107c61170(uVar3);
        uVar6 = *(undefined8 *)(lVar10 + _DAT_113077640);
        uVar7 = ((undefined8 *)(lVar10 + _DAT_113077640))[1];
        func_0x000107c61434(uVar7);
        func_0x000107c61170(lVar10);
        goto LAB_103ae28f4;
      }
    }
    else {
LAB_103ae2784:
      func_0x0001000b44c0(*(undefined8 *)(unaff_x22 + 0x138),uVar9);
    }
  }
  uVar6 = 0;
  uVar7 = 0;
LAB_103ae28f4:
                    /* WARNING: Could not recover jumptable at 0x000103ae2918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,uVar6,uVar7);
  return;
}



/* Entry: 103ae2cf8; end: 103ae2d63;  */

void FUN_103ae2cf8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1a0) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x1a8) = *(undefined8 *)(lVar2 + 0x130);
    pcVar1 = FUN_103ae2d64;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_103ae3260;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ae2d64; end: 103ae2e53;  */

void FUN_103ae2d64(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 400);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x180);
  lVar6 = *(long *)(unaff_x22 + 0x160);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x198));
  func_0x000107c61428(puVar4,unaff_x22 + 0xe0,0,0);
  uVar5 = *puVar4;
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar5);
  func_0x000100069b5c(uVar1);
  func_0x000107c61170(uVar5);
  uVar1 = *(undefined8 *)(lVar6 + 0x18);
  uVar5 = *(undefined8 *)(lVar6 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar5;
  plVar2 = (long *)0x410;
  func_0x000107c61174(uVar5);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1b8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_103ae2e54;
                    /* WARNING: Could not recover jumptable at 0x000103ae2e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_103ae6614(*(undefined8 *)(unaff_x22 + 0x1a8),1,0,1,uVar1,7,uVar5,0,0);
  return;
}



/* Entry: 103ae2e54; end: 103ae2eef;  */

void FUN_103ae2e54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x1b0);
  uVar3 = *(undefined8 *)(lVar4 + 0x1a8);
  *(long *)(lVar4 + 0x1c0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar4 + 0x1b8));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x1c8) = param_3;
    *(undefined8 *)(lVar4 + 0x1d0) = param_2;
    *(undefined8 *)(lVar4 + 0x1d8) = param_1;
    pcVar2 = FUN_103ae2ef0;
  }
  else {
    pcVar2 = FUN_103ae30d4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 103ae2ef0; end: 103ae30d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ae2ef0(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1a8);
  puVar1 = *(undefined8 **)(unaff_x22 + 0x180);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar2 = *(long *)(unaff_x22 + 0x170);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar17 = 0x73736563637573;
  uVar10 = uVar17;
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000107c5fadc(0x73736563637573,0xe700000000000000);
  func_0x000106f484a0(uVar16,uVar10,uVar17,1);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar10);
  uVar10 = *(undefined8 *)(lVar2 + _DAT_113077640);
  uVar7 = ((undefined8 *)(lVar2 + _DAT_113077640))[1];
  uVar17 = *(undefined8 *)(lVar2 + _DAT_113077630);
  uVar8 = ((undefined8 *)(lVar2 + _DAT_113077630))[1];
  uVar16 = *(undefined8 *)(lVar2 + _DAT_113077638);
  uVar9 = ((undefined8 *)(lVar2 + _DAT_113077638))[1];
  FUN_103fae2a8(0);
  func_0x000107c610f8();
  uVar11 = uVar13;
  func_0x000107c61174(uVar13);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar7);
  func_0x000107c61174(uVar12);
  func_0x000103fadff8(uVar10,uVar7,uVar12,uVar13,uVar14,uVar17,uVar8,uVar16,uVar9);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61428(puVar1,unaff_x22 + 0x110,0,0);
  uVar13 = *puVar1;
  func_0x000107c61174(uVar13);
  func_0x000100069b5c(uVar4);
  func_0x000107c61170(uVar13);
  func_0x000107c615e8(uVar5);
  func_0x000107c61170(lVar2);
  func_0x0001000b44c0(uVar3,uVar6);
                    /* WARNING: Could not recover jumptable at 0x000103ae30d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar10,0,0);
  return;
}



/* Entry: 103ae30d4; end: 103ae325f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ae30d4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x180);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar3 = *(long *)(unaff_x22 + 0x170);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x168);
  lVar11 = *(long *)(unaff_x22 + 0x158);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar8 = 0x6c696166;
  func_0x000107c5fadc(0x6c696166,0xe400000000000000);
  uVar9 = 0x646f63736e617274;
  func_0x000107c5fadc(0x646f63736e617274,0xe900000000000065);
  uVar10 = uVar8;
  func_0x000106f484a0(uVar14,uVar8,uVar9,1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  uVar8 = uVar12;
  FUN_103ae4920(uVar12);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar10);
  func_0x000106f486d0(uVar14,lVar11 == 0,uVar8,1);
  func_0x000107c61170(uVar13);
  func_0x000107c614ac(uVar12);
  func_0x000107c61170(uVar8);
  puVar1 = (undefined8 *)(lVar3 + _DAT_113077640);
  uVar8 = *puVar1;
  uVar10 = puVar1[1];
  func_0x000107c61428(puVar2,unaff_x22 + 0xf8,0,0);
  uVar9 = *puVar2;
  func_0x000107c61434(uVar10);
  func_0x000107c61174(uVar9);
  func_0x000100069b5c(uVar5);
  func_0x000107c61170(uVar9);
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(lVar3);
  func_0x0001000b44c0(uVar4,uVar7);
                    /* WARNING: Could not recover jumptable at 0x000103ae325c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,uVar8,uVar10);
  return;
}



/* Entry: 103ae3260; end: 103ae3403;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103ae3260(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar11 = *(undefined8 *)(unaff_x22 + 400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x180);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  lVar8 = *(long *)(unaff_x22 + 0x170);
  lVar13 = *(long *)(unaff_x22 + 0x158);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x140);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x198));
  func_0x000107c61428(puVar7,unaff_x22 + 0xb0,0,0);
  uVar10 = *puVar7;
  func_0x000107c61174(uVar10);
  func_0x000100069b5c(uVar11);
  func_0x000107c61170(uVar10);
  uVar11 = 0x6c696166;
  func_0x000107c5fadc(0x6c696166,0xe400000000000000);
  uVar12 = 0x646c697562;
  func_0x000107c5fadc(0x646c697562,0xe500000000000000);
  uVar10 = uVar11;
  func_0x000106f484a0(uVar4,uVar11,uVar12,1);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  uVar11 = uVar6;
  FUN_103ae47a8(uVar6);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar10);
  func_0x000106f486d0(uVar4,lVar13 == 0,uVar11,1);
  func_0x000107c614ac(uVar6);
  func_0x000107c61170(uVar11);
  puVar1 = (undefined8 *)(lVar8 + _DAT_113077640);
  uVar4 = *puVar1;
  uVar6 = puVar1[1];
  func_0x000107c61428(puVar7,unaff_x22 + 200,0,0);
  uVar11 = *puVar7;
  func_0x000107c61434(uVar6);
  func_0x000107c61174(uVar11);
  func_0x000100069b5c(uVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(lVar8);
  func_0x0001000b44c0(uVar5,uVar9);
                    /* WARNING: Could not recover jumptable at 0x000103ae3400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,uVar4,uVar6);
  return;
}



/* Entry: 103ae3404; end: 103ae34fb;  */

void FUN_103ae3404(undefined8 *param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  if (param_2 == 0) {
    if (param_1 != (undefined8 *)0x0) {
      **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = param_1;
      func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
      return;
    }
    FUN_103ae4a70();
    puVar1 = &UNK_1106ce120;
    func_0x000107c613f8(&UNK_1106ce120,param_1,0,0);
    *param_1 = 5;
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar4 = puVar1;
  }
  else {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar3 = param_2;
    func_0x000107c614b0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar2);
  return;
}



/* Entry: 103ae34fc; end: 103ae358f;  */

void FUN_103ae34fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x60));
  FUN_103ae542c(unaff_x20 + 0x68);
  return;
}



/* Entry: 103ae3590; end: 103ae375f;  */

void FUN_103ae3590(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  lVar2 = *(long *)(param_2 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puStack_70 = (undefined *)0x0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x1e);
    func_0x000107c6142c(uStack_68);
    puStack_70 = (undefined *)0xd00000000000001c;
    uStack_68 = 0x800000010f19d090;
    func_0x000107c5fb78(param_3,param_4);
    uVar1 = uStack_68;
    puVar4 = puStack_70;
    puVar3 = PTR_PTR_1126b08b8;
    func_0x000107c610f8(PTR_PTR_1126b08b8);
    func_0x000107c5fadc(puVar4,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c4766c(puVar3);
    func_0x000107c61170(puVar4);
    puVar5 = PTR_PTR_1126b1060;
    func_0x000107c610f8(PTR_PTR_1126b1060);
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
    func_0x000107c47d08(puVar5);
    func_0x000107c61170(puVar4);
    puVar4 = &UNK_1106cdca0;
    func_0x000107c613fc(&UNK_1106cdca0,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = param_1;
    pcStack_50 = FUN_103ae4c6c;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101699d18;
    puStack_58 = &UNK_1106cdcb8;
    puStack_48 = puVar4;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    lVar7 = lVar2;
    func_0x000107c50778(lVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar7);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar5);
  }
  return;
}



/* Entry: 103ae3760; end: 103ae3813;  */

void FUN_103ae3760(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if ((param_4 & 1) != 0) {
    func_0x00010006c00c();
    puVar3 = *(undefined8 **)(*(long *)(param_5 + 0x40) + 0x28);
    *puVar3 = param_1;
    puVar3[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_5);
    return;
  }
  FUN_103ae4a70();
  puVar1 = &UNK_1106ce120;
  func_0x000107c613f8(&UNK_1106ce120,param_1,0,0);
  *param_1 = 1;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar3 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar3 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_5,uVar2);
  return;
}



/* Entry: 103ae3814; end: 103ae382f;  */

void FUN_103ae3814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae3830,0,0);
  return;
}



/* Entry: 103ae3830; end: 103ae3977;  */

void FUN_103ae3830(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xb0) = lVar1;
  if (lVar1 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xb8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_103ae3978;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    uVar3 = 0x112df01c0;
    func_0x0001000285a8(0x112df01c0,&UNK_10daf7f40);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_101a67e30;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1106cddd0;
    *(long *)(unaff_x22 + 0x70) = lVar2;
    func_0x000107c4feb8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  uVar5 = *(undefined8 *)(*(long *)(unaff_x22 + 0x98) + 0x30);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f19d0b0);
  uVar4 = 0x6c696166;
  func_0x000107c5fadc(0x6c696166,0xe400000000000000);
  func_0x000106f48040(uVar5,uVar3,uVar4,1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000103ae3974. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae3978; end: 103ae39b7;  */

void FUN_103ae3978(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae39b8,0,0);
  return;
}



/* Entry: 103ae39b8; end: 103ae3a5b;  */

void FUN_103ae39b8(void)

{
  undefined8 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x22 + 0x98) + 0x30);
  bVar2 = *(char *)(unaff_x22 + 0xb8) == '\0';
  uVar3 = 0x73736563637573;
  if (bVar2) {
    uVar3 = 0x6c696166;
  }
  uVar1 = 0xe700000000000000;
  if (bVar2) {
    uVar1 = 0xe400000000000000;
  }
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000106f48040(uVar4,0,uVar3,1);
  func_0x000107c61170(uVar3);
  func_0x000107c615e8(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000103ae3a58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 103ae3a5c; end: 103ae3a5f;  */

void FUN_103ae3a5c(void)

{
  return;
}



/* Entry: 103ae3a60; end: 103ae3b77;  */

void FUN_103ae3a60(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined **ppuVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  func_0x000103ae5c20(param_2 + 0x10,&puStack_98,0x112d387f8,&UNK_10d902650);
  if (puStack_80 == (undefined *)0x0) {
    FUN_103ae5398(&puStack_98,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&puStack_98,auStack_68);
    puVar1 = auStack_68;
    func_0x000103ae5b2c(puVar1,uStack_50);
    func_0x000107c605b0();
    pcStack_78 = FUN_103ae3a5c;
    uStack_70 = 0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000b0c7c;
    puStack_80 = &UNK_1106cdc68;
    ppuVar2 = &puStack_98;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c42060(param_3);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(puVar1);
    FUN_103ae5b90(auStack_68);
  }
  return;
}



/* Entry: 103ae3b78; end: 103ae3b9b;  */

void FUN_103ae3b78(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    if (param_1 != (undefined8 *)0x0) {
      **(undefined8 **)(*(long *)(lVar5 + 0x40) + 0x28) = param_1;
      func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar5);
      return;
    }
    FUN_103ae4a70();
    puVar1 = &UNK_1106ce120;
    func_0x000107c613f8(&UNK_1106ce120,param_1,0,0);
    *param_1 = 5;
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *puVar4 = puVar1;
  }
  else {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar3 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar3 = param_2;
    func_0x000107c614b0(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar5,uVar2);
  return;
}



/* Entry: 103ae3b9c; end: 103ae3c13;  */

void FUN_103ae3b9c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000103ae5450(0,param_1,param_2);
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



/* Entry: 103ae3c14; end: 103ae3c77;  */

ulong FUN_103ae3c14(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Entry: 103ae3c78; end: 103ae3f93;  */

/* WARNING: Removing unreachable block (ram,0x000103ae3e8c) */
/* WARNING: Removing unreachable block (ram,0x000103ae3db4) */
/* WARNING: Removing unreachable block (ram,0x000103ae3f14) */
/* WARNING: Removing unreachable block (ram,0x000103ae3eb0) */
/* WARNING: Removing unreachable block (ram,0x000103ae3d64) */

void FUN_103ae3c78(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x21;
  long lVar9;
  undefined1 *puStack_a0;
  long lStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined1 uStack_51;
  
  lVar2 = 0x112fe8e50;
  func_0x0001000285a8(0x112fe8e50,&UNK_10dc50840);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = param_2;
  func_0x000103ae5b2c(param_2,uVar1);
  FUN_103ae5b50();
  puVar4 = &UNK_1106ce1b0;
  func_0x000107c606e0((long)&puStack_a0 - extraout_x8,&UNK_1106ce1b0,&UNK_1106ce1b0,lVar3,uVar1,
                      uVar8);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    func_0x0001006e2f9c();
    func_0x000107c60508(&uStack_70,PTR___s10Foundation4DataVN_110350ae0,&uStack_51,lVar2,
                        PTR___s10Foundation4DataVN_110350ae0,puVar4);
    uVar8 = uStack_68;
    uVar1 = CONCAT71(uStack_6f,uStack_70);
    puStack_78 = param_1;
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    func_0x00010006c00c(uVar1,uVar8);
    uVar5 = uVar1;
    func_0x0001010282b0(uVar1,uVar8);
    uStack_80 = uVar5;
    func_0x00010006c090(uVar1,uVar8);
    uStack_70 = 2;
    puVar6 = &uStack_70;
    func_0x000107c60504(puVar6,lVar2);
    uStack_70 = 1;
    puVar7 = &uStack_70;
    puStack_88 = puVar6;
    func_0x000107c60500(puVar7,lVar2);
    uStack_70 = 3;
    puVar6 = &uStack_70;
    lVar3 = lVar2;
    puStack_90 = puVar7;
    func_0x000107c604f4();
    uStack_51 = 4;
    puStack_a0 = puVar6;
    lStack_98 = lVar3;
    func_0x000107c604e8(&uStack_70,PTR___s10Foundation4DataVN_110350ae0,&uStack_51,lVar2,
                        PTR___s10Foundation4DataVN_110350ae0,puVar4);
    (**(code **)(lVar9 + 8))((long)&puStack_a0 - extraout_x8,lVar2);
    func_0x00010006c090(uVar1,uVar8);
    uVar1 = CONCAT71(uStack_6f,uStack_70);
    uVar8 = uStack_80;
    func_0x000107c61174();
    lVar2 = lStack_98;
    func_0x000107c61434(lStack_98);
    func_0x000100de78a0(uVar1,uStack_68);
    FUN_103ae5b90(param_2);
    func_0x000107c6142c(lVar2);
    func_0x000107c61170(uVar8);
    func_0x0001000b44c0(uVar1,uStack_68);
    *puStack_78 = uVar8;
    puStack_78[1] = puStack_90;
    puStack_78[2] = puStack_88;
    puStack_78[3] = puStack_a0;
    puStack_78[4] = lVar2;
    puStack_78[5] = uVar1;
    puStack_78[6] = uStack_68;
  }
  else {
    FUN_103ae5b90(param_2);
  }
  return;
}



/* Entry: 103ae3f94; end: 103ae47a7;  */

/* WARNING: Removing unreachable block (ram,0x000103ae42fc) */
/* WARNING: Removing unreachable block (ram,0x000103ae4370) */

void FUN_103ae3f94(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x12;
  int iVar15;
  code *pcVar16;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined **ppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined5 uStack_78;
  undefined3 uStack_73;
  undefined5 uStack_70;
  
  lVar3 = 0;
  uStack_160 = param_4;
  uStack_158 = param_5;
  ppuStack_138 = (undefined **)param_2;
  lStack_130 = param_3;
  uStack_128 = param_7;
  func_0x000107c5eea4();
  lStack_148 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_148 + 0x40));
  lVar10 = (long)&puStack_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_150 = lVar10 - extraout_x12;
  puVar4 = &UNK_1106cdf20;
  func_0x000107c613fc(&UNK_1106cdf20,0x18,7);
  *(long *)(puVar4 + 0x10) = param_9;
  FUN_103aeb250(0);
  func_0x000107c60bc4(param_9);
  FUN_103ae9d4c(&puStack_f8,param_1);
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_73 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (lStack_f0 == 0) {
    uVar5 = 0x112deb530;
    puVar8 = &UNK_10d9b82d0;
  }
  else {
    uVar5 = 0x112f27960;
    puVar8 = &UNK_10db63110;
  }
  FUN_103ae5398(&puStack_f8,uVar5,puVar8);
  iVar15 = (int)*(undefined8 *)(param_8 + 0x40);
  uVar5 = 0xd000000000000029;
  uVar14 = 0x800000010f19d0d0;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f19d0d0);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar5);
  if ((lStack_f0 == 0) || (iVar15 != 0)) {
    puStack_f8 = (undefined *)0x0;
    lStack_f0 = 0xe000000000000000;
    lStack_188 = lVar10;
    lStack_180 = lVar3;
    puStack_168 = puVar4;
    func_0x000107c602fc(0x17);
    lVar3 = lStack_f0;
    func_0x000107c6142c(lStack_f0);
    puStack_f8 = (undefined *)0xd000000000000015;
    lStack_f0 = 0x800000010f19d100;
    func_0x00010011df08();
    func_0x000107c61180();
    uVar5 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    func_0x000107c5fb78(uVar5,uVar14);
    func_0x000107c6142c(uVar14);
    lVar3 = lStack_f0;
    puVar4 = puStack_f8;
    func_0x000107c5ecec();
    func_0x000107c613fc();
    func_0x000107c61434(lVar3);
    func_0x000107c61174();
    uVar5 = uStack_128;
    uVar14 = param_6;
    func_0x000100de78a0(param_6,uStack_128);
    func_0x000107c5ece8();
    func_0x000107c5ece0(200);
    uStack_170 = *(undefined8 *)(param_8 + 0x30);
    puVar8 = param_1;
    FUN_103adf728(param_1,puVar4,lVar3);
    puStack_178 = puVar4;
    lStack_f0 = (long)ppuStack_138;
    puStack_e8 = (undefined *)lStack_130;
    puStack_e0 = puVar4;
    pcStack_d8 = (code *)lVar3;
    uStack_c8 = uVar5;
    uStack_140 = param_6;
    puStack_f8 = param_1;
    puStack_d0 = (undefined *)param_6;
    FUN_103ae53d8();
    puVar4 = &UNK_1106ce078;
    ppuVar9 = &puStack_f8;
    func_0x000107c5ece4(ppuVar9,&UNK_1106ce078,puVar8);
    lVar10 = *(long *)(param_8 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar5 = uStack_140;
    lStack_130 = lVar10;
    if (lVar10 == 0) {
      func_0x00010006c090(ppuVar9,puVar4);
      func_0x000107c6142c(lVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61574(uVar14);
      func_0x0001000b44c0(uVar5,uStack_128);
      func_0x000107c61574(puStack_168);
      func_0x000107c6142c(lVar3);
    }
    else {
      ppuVar11 = ppuVar9;
      func_0x000107c5ee20(ppuVar9,puVar4);
      puStack_f8 = (undefined *)0x0;
      lStack_f0 = 0xe000000000000000;
      puStack_190 = puVar4;
      ppuStack_138 = ppuVar11;
      func_0x000107c602fc(0x1e);
      func_0x000107c6142c(lStack_f0);
      puStack_f8 = (undefined *)0xd00000000000001c;
      lStack_f0 = 0x800000010f19d090;
      func_0x000107c5fb78(uStack_160,uStack_158);
      lVar10 = lStack_f0;
      puVar4 = puStack_f8;
      puVar12 = PTR_PTR_1126b08b8;
      func_0x000107c610f8(PTR_PTR_1126b08b8);
      func_0x000107c5fadc(puVar4,lVar10);
      func_0x000107c6142c(lVar10);
      func_0x000107c4766c(puVar12);
      func_0x000107c61170(puVar4);
      lVar10 = lStack_188;
      func_0x000107c5eea0(lStack_188);
      lVar2 = lStack_150;
      func_0x000107c5ee6c(lStack_150,0x412a5e0000000000);
      lVar1 = lStack_180;
      pcVar16 = *(code **)(lStack_148 + 8);
      (*pcVar16)(lVar10,lStack_180);
      func_0x000107c5ee70();
      (*pcVar16)(lVar2,lVar1);
      puVar4 = &UNK_1106cdcf0;
      func_0x000107c613fc(&UNK_1106cdcf0,0x18,7);
      func_0x000107c61644(puVar4 + 0x10,param_8);
      puVar8 = &UNK_1106cdf48;
      func_0x000107c613fc(&UNK_1106cdf48,0x48,7);
      puVar7 = puStack_168;
      uVar5 = uStack_170;
      *(undefined8 *)(puVar8 + 0x10) = 0x103ae5390;
      *(undefined **)(puVar8 + 0x18) = puStack_168;
      *(undefined **)(puVar8 + 0x20) = puVar4;
      *(undefined **)(puVar8 + 0x28) = param_1;
      *(undefined **)(puVar8 + 0x30) = puStack_178;
      *(long *)(puVar8 + 0x38) = lVar3;
      *(undefined8 *)(puVar8 + 0x40) = uStack_170;
      pcStack_d8 = FUN_103ae5418;
      puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
      lStack_f0 = 0x42000000;
      puStack_e8 = &UNK_100ab47f8;
      puStack_e0 = &UNK_1106cdf60;
      ppuVar13 = &puStack_f8;
      puStack_d0 = puVar8;
      func_0x000107c60bc4(ppuVar13);
      puVar4 = puStack_d0;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(puVar7);
      func_0x000107c61174(uVar5);
      func_0x000107c61574(puVar4);
      lVar1 = lStack_130;
      ppuVar11 = ppuStack_138;
      func_0x000107c5168c(lStack_130);
      func_0x00010006c090(ppuVar9,puStack_190);
      func_0x000107c6142c(lVar3);
      func_0x000107c61170(param_1);
      func_0x000107c61574(uVar14);
      func_0x0001000b44c0(uStack_140,uStack_128);
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c61574(puVar7);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(ppuVar11);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(lVar10);
    }
  }
  else {
    uVar14 = *(undefined8 *)(param_8 + 0x30);
    uVar5 = 0x6f63755f736168;
    func_0x000107c5fadc(0x6f63755f736168,0xe700000000000000);
    puVar6 = (undefined8 *)0x70696b73;
    func_0x000107c5fadc(0x70696b73,0xe400000000000000);
    func_0x000106f479b0(uVar14,uVar5,puVar6,1);
    func_0x000107c61170(uVar5);
    func_0x000107c61170();
    FUN_103ae4a70();
    puVar8 = &UNK_1106ce120;
    func_0x000107c613f8(&UNK_1106ce120,puVar6,0,0);
    *puVar6 = 2;
    puVar7 = puVar8;
    func_0x000107c5ed2c();
    (**(code **)(param_9 + 0x10))(param_9,0,puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c614ac(puVar8);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 103ae47a8; end: 103ae491f;  */

undefined1  [16] FUN_103ae47a8(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  long lStack_50;
  ulong uStack_48;
  
  iVar1 = (int)&lStack_50;
  uStack_48 = param_1;
  func_0x000107c614b0();
  uVar5 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar4 = &uStack_48;
  func_0x000107c6147c(&lStack_50,puVar4,uVar5,&UNK_1106ce120,6);
  if (iVar1 != 0) {
    if (lStack_50 == 5) {
      uVar5 = 0xeb000000006c696e;
      uVar6 = 0x5f636f6470616e73;
      goto LAB_103ae4900;
    }
    FUN_103ae4a60();
  }
  uVar5 = 0xea00000000006564;
  func_0x000107c5ed2c();
  uVar2 = param_1;
  func_0x000107c42210();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  uVar6 = 0x6f6365645f676d69;
  if ((uVar3 == 0xd000000000000027) && (puVar4 == (ulong *)0x800000010f19ccf0)) {
    func_0x000107c6142c(0x800000010f19ccf0);
  }
  else {
    func_0x000107c605b8(uVar3,puVar4,0xd000000000000027,0x800000010f19ccf0,0);
    func_0x000107c6142c(puVar4);
    if ((uVar3 & 1) == 0) {
      uVar5 = 0xe900000000000061;
      uVar6 = 0x6964656d5f646461;
    }
  }
LAB_103ae4900:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar6;
  return auVar7;
}



/* Entry: 103ae4920; end: 103ae4a5f;  */

undefined1  [16] FUN_103ae4920(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long lStack_38;
  char cStack_30;
  undefined8 uStack_28;
  
  uVar3 = 0xeb000000006c6961;
  uVar4 = 0x665f7265646e6572;
  uStack_28 = param_1;
  func_0x000107c614b0();
  uVar1 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  plVar2 = &lStack_38;
  func_0x000107c6147c(plVar2,&uStack_28,uVar1,&UNK_1106cd970,0);
  if ((int)plVar2 == 0) goto LAB_103ae4a00;
  if (cStack_30 == '\x02') {
    if (lStack_38 < 4) {
      if (lStack_38 == 1) {
        uVar3 = 0xea00000000006c69;
        uVar4 = 0x6e5f7265646e6572;
        goto LAB_103ae4a00;
      }
      if (lStack_38 == 3) {
        uVar3 = 0x800000010f19cf90;
        uVar4 = 0xd000000000000011;
        goto LAB_103ae4a00;
      }
    }
    else {
      if (lStack_38 == 4) {
        uVar3 = 0xed0000726579616c;
        uVar4 = 0x5f64696c61766e69;
        goto LAB_103ae4a00;
      }
      if (lStack_38 == 5) {
        uVar3 = 0xeb00000000797470;
        uVar4 = 0x6d655f616964656d;
        goto LAB_103ae4a00;
      }
    }
  }
  func_0x000103addd68();
LAB_103ae4a00:
  func_0x000107c614ac(uStack_28);
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 103ae4a60; end: 103ae4a6f;  */

void FUN_103ae4a60(ulong param_1)

{
  if (param_1 < 7) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)();
  return;
}



/* Entry: 103ae4a70; end: 103ae4aaf;  */

void FUN_103ae4a70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8e38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc50800;
  func_0x000107c61520(&UNK_10dc50800,&UNK_1106ce120);
  puRam0000000112fe8e38 = puVar1;
  return;
}



/* Entry: 103ae4ab0; end: 103ae4adb;  */

undefined8 FUN_103ae4ab0(undefined8 param_1)

{
  FUN_103ae5644(param_1,&UNK_1106ce078);
  return param_1;
}



/* Entry: 103ae4adc; end: 103ae4ae7;  */

void FUN_103ae4adc(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  func_0x000103ae5c20(lVar1 + 0x10,&puStack_98,0x112d387f8,&UNK_10d902650);
  if (puStack_80 == (undefined *)0x0) {
    FUN_103ae5398(&puStack_98,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&puStack_98,auStack_68);
    puVar2 = auStack_68;
    func_0x000103ae5b2c(puVar2,uStack_50);
    func_0x000107c605b0();
    pcStack_78 = FUN_103ae3a5c;
    uStack_70 = 0;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_1000b0c7c;
    puStack_80 = &UNK_1106cdc68;
    ppuVar3 = &puStack_98;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c42060(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(puVar2);
    FUN_103ae5b90(auStack_68);
  }
  return;
}



/* Entry: 103ae4ae8; end: 103ae4b1b;  */

void FUN_103ae4ae8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103ae4b1c; end: 103ae4b7b;  */

void FUN_103ae4b1c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x103ae5ef8;
  plVar4[9] = lVar2;
  plVar4[10] = lVar5;
  lVar5 = 0;
  func_0x000107c5fcec(0,uVar3);
  puVar1 = PTR___sScMMa_11034fc70;
  lVar2 = lVar5;
  func_0x000107c5fce8();
  plVar4[0xb] = lVar2;
  uVar3 = 0x112d45220;
  FUN_103ae4bec(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar5,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae1e88,lVar5,uVar3);
  return;
}



/* Entry: 103ae4b7c; end: 103ae4beb;  */

void FUN_103ae4b7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103ae5ef4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103ae4bec; end: 103ae4c2b;  */

void FUN_103ae4bec(long *param_1,code *param_2,long param_3)

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



/* Entry: 103ae4c2c; end: 103ae4c6b;  */

void FUN_103ae4c2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc507d8;
  func_0x000107c61520(&UNK_10dc507d8,&UNK_1106ce078);
  puRam0000000112fe8e40 = puVar1;
  return;
}



/* Entry: 103ae4c6c; end: 103ae4c73;  */

void FUN_103ae4c6c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((param_4 & 1) != 0) {
    func_0x00010006c00c();
    puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
    *puVar4 = param_1;
    puVar4[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
    return;
  }
  FUN_103ae4a70();
  puVar1 = &UNK_1106ce120;
  func_0x000107c613f8(&UNK_1106ce120,param_1,0,0);
  *param_1 = 1;
  uVar2 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar4 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar4 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
  return;
}



/* Entry: 103ae4c74; end: 103ae4d13;  */

void FUN_103ae4c74(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  plVar9 = (long *)0x150;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x103ae5efc;
  plVar9[0x25] = lVar4;
  plVar9[0x26] = lVar8;
  plVar9[0x23] = lVar3;
  plVar9[0x24] = lVar7;
  plVar9[0x21] = lVar2;
  plVar9[0x22] = lVar6;
  plVar9[0x1f] = lVar1;
  plVar9[0x20] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae0680,0,0);
  return;
}



/* Entry: 103ae4d14; end: 103ae4d3f;  */

undefined8 FUN_103ae4d14(undefined8 param_1)

{
  func_0x000103ae5490(param_1,&UNK_1106cdff0);
  return param_1;
}



/* Entry: 103ae4d40; end: 103ae4dab;  */

void FUN_103ae4d40(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x1c0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x103ae5ef0;
  plVar3[0x2d] = lVar2;
  plVar3[0x2e] = lVar4;
  plVar3[0x2c] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae1f70,0,0);
  return;
}



/* Entry: 103ae4dac; end: 103ae4dbb;  */

long FUN_103ae4dac(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 103ae4dbc; end: 103ae4dd3;  */

void FUN_103ae4dbc(long param_1)

{
  FUN_103ae5b90(param_1 + 0x20);
  return;
}



/* Entry: 103ae4dd4; end: 103ae4e4b;  */

void FUN_103ae4dd4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103ae4e4c;
  plVar5[0x14] = lVar2;
  plVar5[0x15] = lVar4;
  plVar5[0x12] = lVar1;
  plVar5[0x13] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae3830,0,0);
  return;
}



/* Entry: 103ae4e4c; end: 103ae4e87;  */

void FUN_103ae4e4c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103ae4e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103ae4e88; end: 103ae4f53;  */

void FUN_103ae4e88(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  long *plVar12;
  long unaff_x20;
  long unaff_x22;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar7 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar8 = *(long *)(unaff_x20 + 0x38);
  lVar13 = *(long *)(unaff_x20 + 0x40);
  lVar15 = *(long *)(unaff_x20 + 0x50);
  lVar14 = *(long *)(unaff_x20 + 0x48);
  lVar4 = *(long *)(unaff_x20 + 0x58);
  lVar9 = *(long *)(unaff_x20 + 0x60);
  uVar11 = *(undefined1 *)(unaff_x20 + 0x68);
  lVar5 = *(long *)(unaff_x20 + 0x70);
  lVar10 = *(long *)(unaff_x20 + 0x78);
  plVar12 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = 0x103ae5f00;
  plVar12[0x1f] = lVar5;
  plVar12[0x20] = lVar10;
  *(undefined1 *)(plVar12 + 0x27) = uVar11;
  plVar12[0x1e] = lVar9;
  plVar12[0x1d] = lVar4;
  plVar12[0x1c] = lVar15;
  plVar12[0x1b] = lVar14;
  plVar12[0x19] = lVar8;
  plVar12[0x1a] = lVar13;
  plVar12[0x17] = lVar7;
  plVar12[0x18] = lVar3;
  plVar12[0x15] = lVar6;
  plVar12[0x16] = lVar2;
  plVar12[0x14] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103adfeb4,0,0);
  return;
}



/* Entry: 103ae4f54; end: 103ae4f5b;  */

void FUN_103ae4f54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5ceec(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103ae4f5c; end: 103ae4f87;  */

void FUN_103ae4f5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103ae4f88; end: 103ae4ff3;  */

void FUN_103ae4f88(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x1c0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_103ae4ff4;
  plVar3[0x2d] = lVar2;
  plVar3[0x2e] = lVar4;
  plVar3[0x2c] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae1f70,0,0);
  return;
}



/* Entry: 103ae4ff4; end: 103ae502f;  */

void FUN_103ae4ff4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103ae502c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103ae5030; end: 103ae52eb;  */

void FUN_103ae5030(long param_1,ulong param_2,long param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar3 = &UNK_1106cde80;
  func_0x000107c613fc(&UNK_1106cde80,0x18,7);
  *(long *)(puVar3 + 0x10) = param_4;
  uVar10 = *(undefined8 *)(param_3 + 0x50);
  func_0x000107c60bc4(param_4);
  func_0x000107c4b940(uVar10);
  func_0x000107c61428(param_3 + 0x58,auStack_78,0,0);
  lVar9 = *(long *)(param_3 + 0x58);
  if (*(long *)(lVar9 + 0x10) == 0) {
    uVar12 = 1;
  }
  else {
    func_0x000107c61434(lVar9);
    uVar7 = param_2;
    func_0x000100029284(param_1);
    func_0x000107c6142c(lVar9);
    uVar12 = (uint)uVar7 ^ 1;
  }
  func_0x000107c61428(param_3 + 0x60,auStack_90,0,0);
  lVar9 = *(long *)(param_3 + 0x60);
  if (*(long *)(lVar9 + 0x10) != 0) {
    func_0x000107c61434(lVar9);
    lVar11 = param_1;
    uVar7 = param_2;
    func_0x000100029284();
    if ((uVar7 & 1) != 0) {
      lVar11 = *(long *)(*(long *)(lVar9 + 0x38) + lVar11 * 8);
      func_0x000107c6142c(lVar9);
      lVar9 = lVar11 + 1;
      if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103ae5130);
        (*pcVar2)();
      }
      goto LAB_103ae513c;
    }
    func_0x000107c6142c(lVar9);
  }
  lVar9 = 0;
LAB_103ae513c:
  func_0x000107c61428(param_3 + 0x60,auStack_a8,0x21,0);
  uVar4 = *(undefined8 *)(param_3 + 0x60);
  func_0x000107c61558(uVar4);
  uVar8 = *(undefined8 *)(param_3 + 0x60);
  *(undefined8 *)(param_3 + 0x60) = 0x8000000000000000;
  func_0x000101687ce0(lVar9,param_1,param_2,uVar4);
  *(undefined8 *)(param_3 + 0x60) = uVar8;
  func_0x000107c614a8(auStack_a8);
  func_0x000107c61428(param_3 + 0x58,auStack_a8,0x21,0);
  lVar9 = param_1;
  func_0x0001027617d4(param_1,param_2);
  func_0x000107c614a8(auStack_a8);
  func_0x000107c5d278(uVar10);
  puVar1 = PTR___sytN_11034f1b0;
  if (lVar9 != 0) {
    func_0x000107c6157c(lVar9);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar9);
  }
  if ((uVar12 & 1) == 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  else {
    puVar6 = &UNK_1106cdcf0;
    func_0x000107c613fc(&UNK_1106cdcf0,0x18,7);
    func_0x000107c61644(puVar6 + 0x10,param_3);
    puVar5 = &UNK_1106cdea8;
    func_0x000107c613fc(&UNK_1106cdea8,0x38,7);
    *(undefined **)(puVar5 + 0x10) = puVar6;
    *(code **)(puVar5 + 0x18) = FUN_103ae52ec;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    *(long *)(puVar5 + 0x28) = param_1;
    *(ulong *)(puVar5 + 0x30) = param_2;
    func_0x000107c6157c(puVar3);
    func_0x000107c61434(param_2);
    puVar6 = (undefined *)0x0;
    func_0x0001009548b0(0,4,0x40,0,0,0,&UNK_10dc50750,puVar5,puVar1 + 8);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar5);
    puVar3 = puVar6;
  }
  func_0x000107c61574(puVar3);
  func_0x000107c61574(lVar9);
  return;
}



/* Entry: 103ae52ec; end: 103ae52ff;  */

void FUN_103ae52ec(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103ae52fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 103ae5300; end: 103ae537f;  */

void FUN_103ae5300(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x103ae5f04;
  plVar5[0xf] = lVar4;
  plVar5[0x10] = lVar6;
  plVar5[0xd] = lVar3;
  plVar5[0xe] = lVar2;
  plVar5[0xc] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae0f28,0,0);
  return;
}



/* Entry: 103ae5380; end: 103ae5397;  */

void FUN_103ae5380(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_5 == 0) {
    param_5 = 0;
  }
  else {
    func_0x000107c5ed2c(param_5);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2,param_3,param_4 & 1,param_5,param_6,param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 103ae5398; end: 103ae53d7;  */

undefined8 FUN_103ae5398(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103ae53d8; end: 103ae5417;  */

void FUN_103ae53d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8e48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc507b0;
  func_0x000107c61520(&UNK_10dc507b0,&UNK_1106ce078);
  puRam0000000112fe8e48 = puVar1;
  return;
}



/* Entry: 103ae5418; end: 103ae542b;  */

void FUN_103ae5418(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  (**(code **)(unaff_x20 + 0x10))(param_1,0,*(undefined8 *)(unaff_x20 + 0x18));
  if ((param_1 & 1) == 0) {
    uVar6 = 0x6c696166;
    func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61648();
    if (lVar3 != 0) {
      FUN_103adfa2c(uVar1,uVar5,uVar2);
      func_0x000107c61574(lVar3);
    }
    uVar5 = 0xe400000000000000;
  }
  else {
    uVar5 = 0xe700000000000000;
    uVar6 = 0x73736563637573;
  }
  func_0x000107c5fadc(uVar6,uVar5);
  func_0x000107c6142c(uVar5);
  func_0x000106f479b0(uVar4,0,uVar6,1);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 103ae542c; end: 103ae54c7;  */

undefined8 FUN_103ae542c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103ae54c8; end: 103ae55cf;  */

undefined8 * FUN_103ae54c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  uVar3 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar3;
  param_1[5] = uVar2;
  uVar2 = param_2[6];
  param_1[6] = uVar2;
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 103ae55d0; end: 103ae5633;  */

undefined8 * FUN_103ae55d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61170(uVar1);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103ae5634; end: 103ae5643;  */

undefined1  [16] FUN_103ae5634(void)

{
  return ZEXT816(0x1106cdff0);
}



/* Entry: 103ae5644; end: 103ae568f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103ae5644(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  
  func_0x000107c61170(*param_1);
  func_0x000107c6142c(param_1[4]);
  uVar2 = param_1[6];
  if (0xe < uVar2 >> 0x3c) {
    return;
  }
  uVar1 = param_1[5];
  uVar3 = (uint)(uVar2 >> 0x3e);
  if (uVar3 == 1) {
    uVar1 = uVar2 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103ae5690; end: 103ae57f7;  */

undefined8 * FUN_103ae5690(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  uVar2 = param_2[6];
  func_0x000107c61174();
  func_0x000107c61434(uVar1);
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[5];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[5] = uVar1;
    param_1[6] = uVar2;
  }
  else {
    uVar1 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar1;
  }
  return param_1;
}



/* Entry: 103ae57f8; end: 103ae5887;  */

undefined8 * FUN_103ae57f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  if ((ulong)param_1[6] >> 0x3c < 0xf) {
    uVar3 = param_2[6];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[5];
      param_1[5] = param_2[5];
      param_1[6] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x0001006e5814(param_1 + 5);
  }
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  return param_1;
}



/* Entry: 103ae5888; end: 103ae5943;  */

int FUN_103ae5888(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[7] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103ae5944; end: 103ae5a33;  */

ulong * FUN_103ae5944(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  if (*param_1 < 0xffffffff) {
    if (0xfffffffe < uVar2) {
      func_0x000107c614b0(uVar2);
    }
    *param_1 = uVar2;
  }
  else if (uVar2 < 0xffffffff) {
    func_0x000107c614ac();
    *param_1 = *param_2;
  }
  else {
    func_0x000107c614b0(uVar2);
    uVar1 = *param_1;
    *param_1 = uVar2;
    func_0x000107c614ac(uVar1);
  }
  return param_1;
}



/* Entry: 103ae5a34; end: 103ae5b4f;  */

int FUN_103ae5a34(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffff8 < param_2) && ((char)param_1[1] != '\0')) {
    return (int)*param_1 + 0x7ffffff9;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (7 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -6;
  }
  return iVar1;
}



/* Entry: 103ae5b50; end: 103ae5b8f;  */

void FUN_103ae5b50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8e58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc50954;
  func_0x000107c61520(&UNK_10dc50954,&UNK_1106ce1b0);
  puRam0000000112fe8e58 = puVar1;
  return;
}



/* Entry: 103ae5b90; end: 103ae5baf;  */

void FUN_103ae5b90(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000103ae5ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 103ae5bb0; end: 103ae5c67;  */

void FUN_103ae5bb0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112fe8e68 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d56fe0;
  func_0x00010002969c(0x112d56fe0,&UNK_10d91dda0);
  uVar2 = uVar1;
  func_0x000101480d6c();
  puVar3 = PTR___sxSgSEsSERzlMc_11034f180;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSEsSERzlMc_11034f180,uVar1,&uStack_28);
  puRam0000000112fe8e68 = puVar3;
  return;
}



/* Entry: 103ae5c68; end: 103ae5dcf;  */

int FUN_103ae5c68(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103ae5ce4;
        goto LAB_103ae5cc8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103ae5cc8:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_103ae5ce4:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103ae5dd0; end: 103ae5e0f;  */

void FUN_103ae5dd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8e70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5092c;
  func_0x000107c61520(&UNK_10dc5092c,&UNK_1106ce1b0);
  puRam0000000112fe8e70 = puVar1;
  return;
}



/* Entry: 103ae5e10; end: 103ae5e13;  */

void FUN_103ae5e10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8e78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5088c;
  func_0x000107c61520(&UNK_10dc5088c,&UNK_1106ce1b0);
  puRam0000000112fe8e78 = puVar1;
  return;
}



/* Entry: 103ae5e14; end: 103ae5e53;  */

void FUN_103ae5e14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8e78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5088c;
  func_0x000107c61520(&UNK_10dc5088c,&UNK_1106ce1b0);
  puRam0000000112fe8e78 = puVar1;
  return;
}



/* Entry: 103ae5e54; end: 103ae5e57;  */

void FUN_103ae5e54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8e80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc50864;
  func_0x000107c61520(&UNK_10dc50864,&UNK_1106ce1b0);
  puRam0000000112fe8e80 = puVar1;
  return;
}



/* Entry: 103ae5e58; end: 103ae5e97;  */

void FUN_103ae5e58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fe8e80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc50864;
  func_0x000107c61520(&UNK_10dc50864,&UNK_1106ce1b0);
  puRam0000000112fe8e80 = puVar1;
  return;
}



/* Entry: 103ae5e98; end: 103ae5f0b;  */

void FUN_103ae5e98(long param_1)

{
  FUN_103ae5b90(param_1 + 0x20);
  return;
}



/* Entry: 103ae5f0c; end: 103ae5f73;  */

void FUN_103ae5f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  return;
}



/* Entry: 103ae5f74; end: 103ae5faf;  */

/* WARNING: Possible PIC construction at 0x000103ae5f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ae5f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103ae5fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103ae5f94) */
/* WARNING: Removing unreachable block (ram,0x000103ae5f84) */
/* WARNING: Removing unreachable block (ram,0x000103ae5fa4) */

void FUN_103ae5f74(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103ae5fb0; end: 103ae603f;  */

void FUN_103ae5fb0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103ae6040; end: 103ae6047;  */

void FUN_103ae6040(void)

{
  if (lRam0000000112fe8f58 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7ab180);
  return;
}



/* Entry: 103ae6048; end: 103ae60b3;  */

void FUN_103ae6048(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  func_0x000107c4b940(uVar2);
  if (((*(byte *)(param_3 + 0x50) & 1) == 0) && (uVar1 = param_2, func_0x000107c4e69c(), uVar1 < 6))
  {
    func_0x000107c4f3ec(param_2);
    *(undefined8 *)(param_3 + 0x48) = param_1;
    (**(code **)(param_3 + 0x20))
              (*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c280b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_unlock_11267dcf8);
  return;
}



/* Entry: 103ae60b4; end: 103ae60cf;  */

void FUN_103ae60b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae60d0,0,0);
  return;
}



/* Entry: 103ae60d0; end: 103ae617b;  */

void FUN_103ae60d0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c506cc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x0001000285a8(0x112d51130,&UNK_10d9b85a0);
    lVar3 = lVar2;
    func_0x000100759c94(lVar2,0);
    *(long *)(unaff_x22 + 0x78) = lVar3;
    func_0x000107c61170(lVar2);
    plVar4 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_103ae617c;
                    /* WARNING: Could not recover jumptable at 0x000103ae6174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)&UNK_100ff4658)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103ae617c);
  (*pcVar1)();
}



/* Entry: 103ae617c; end: 103ae61cf;  */

void FUN_103ae617c(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x88) = param_1;
  *(undefined1 *)(lVar1 + 0x90) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae61d0,0,0);
  return;
}



/* Entry: 103ae61d0; end: 103ae633f;  */

void FUN_103ae61d0(void)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  undefined8 *puVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar4 = *(long *)(unaff_x22 + 0x88);
  if (*(char *)(unaff_x22 + 0x90) == '\x01') {
    *(long *)(unaff_x22 + 0x58) = lVar4;
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    puVar5 = *(undefined8 **)(unaff_x22 + 0x78);
    if (iVar1 != 0) {
      uVar3 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x58,uVar3,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574();
  }
  else {
    puVar2 = *(undefined8 **)(unaff_x22 + 0x78);
    func_0x000107c61574();
    if (lVar4 != 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
      **(undefined8 **)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x88);
      func_0x0001000298f0();
      func_0x000107c61428();
      uVar6 = *puVar2;
      func_0x000107c61174(uVar6);
      func_0x000100069b5c(uVar3);
      func_0x000107c61170(uVar6);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_103ae6328;
    }
    FUN_103addd84();
    puVar5 = (undefined8 *)&UNK_1106cd970;
    func_0x000107c613f8(&UNK_1106cd970,puVar2,0,0);
    *puVar2 = 2;
    *(undefined1 *)(puVar2 + 1) = 2;
    func_0x000107c61654();
  }
  func_0x0001000298f0();
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c61428();
  uVar3 = *puVar5;
  func_0x000107c61174(uVar3);
  func_0x000100069b5c(uVar6);
  func_0x000107c61170(uVar3);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_103ae6328:
                    /* WARNING: Could not recover jumptable at 0x000103ae633c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103ae6340; end: 103ae63c7;  */

void FUN_103ae6340(long param_1)

{
  func_0x000107c4c930();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c3e240();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 103ae63c8; end: 103ae6447;  */

void FUN_103ae63c8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x103ae8974,0,0);
  return;
}



/* Entry: 103ae6448; end: 103ae6457;  */

void FUN_103ae6448(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000103ae6454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 103ae6458; end: 103ae6613;  */

ulong FUN_103ae6458(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ae653c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x103ae6540);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103ae874c(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103ae6614);
  (*pcVar2)();
}



/* Entry: 103ae6614; end: 103ae6653;  */

void FUN_103ae6614(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2f8) = param_9;
  *(undefined1 *)(unaff_x22 + 0x40c) = param_8;
  *(undefined8 *)(unaff_x22 + 0x2f0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x2e8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x2e0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x2d8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x2d0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x2c8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x2c0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae6654,0,0);
  return;
}



/* Entry: 103ae6654; end: 103ae6927;  */

void FUN_103ae6654(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long unaff_x22;
  long lVar11;
  
  lVar11 = *(long *)(unaff_x22 + 0x2e8);
  uVar4 = 0x6867696c746f7073;
  if (lVar11 != 7) {
    uVar4 = 0x736e6172546e7572;
  }
  puVar10 = (undefined8 *)0xef74736f70655274;
  if (lVar11 != 7) {
    puVar10 = (undefined8 *)0xec00000065646f63;
  }
  func_0x000107c5fb78(uVar4,puVar10);
  func_0x000107c6142c();
  uVar4 = 0x6f6c705570616e53;
  puVar3 = (undefined8 *)0xed00002e72656461;
  *(undefined8 *)(unaff_x22 + 0x300) = 0x6f6c705570616e53;
  *(undefined8 *)(unaff_x22 + 0x308) = 0xed00002e72656461;
  func_0x0001000298f0();
  *(undefined8 **)(unaff_x22 + 0x310) = puVar10;
  func_0x000107c61428();
  uVar1 = *puVar10;
  func_0x000107c61174(uVar1);
  func_0x000100029b28(0x6f6c705570616e53,0xed00002e72656461);
  *(undefined8 *)(unaff_x22 + 0x318) = uVar4;
  func_0x000107c61170(uVar1);
  if (lVar11 == -1) {
    plVar9 = *(long **)(unaff_x22 + 0x2e0);
    uVar4 = 0x112e30330;
    func_0x0001000285a8(0x112e30330,&UNK_10db62670);
    func_0x0001000bda74(plVar9,uVar4);
    *(long **)(unaff_x22 + 0x338) = plVar9;
    uVar4 = 0x112f27440;
    func_0x0001000285a8(0x112f27440,&UNK_10db62ae0);
    *(undefined8 *)(unaff_x22 + 0x2a8) = uVar4;
    plVar2 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x340) = plVar2;
    plVar6 = plVar2;
    func_0x000100faa6a0();
    *(long **)(unaff_x22 + 0x348) = plVar6;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_103ae6dc0;
    lVar11 = unaff_x22 + 0x2a0;
    lVar8 = unaff_x22 + 0x2a8;
    lVar7 = unaff_x22 + 0x2b0;
  }
  else {
    plVar9 = *(long **)(unaff_x22 + 0x2f0);
    if (plVar9 == (long *)0x0) {
      func_0x000107c6142c();
      FUN_103addd84();
      func_0x000107c613f8(&UNK_1106cd970,puVar3,0,0);
      *puVar3 = 1;
      *(undefined1 *)(puVar3 + 1) = 2;
      func_0x000107c61654();
      uVar1 = *(undefined8 *)(unaff_x22 + 0x318);
      puVar10 = *(undefined8 **)(unaff_x22 + 0x310);
      func_0x000107c61428(puVar10,unaff_x22 + 0x150,0,0);
      uVar4 = *puVar10;
      func_0x000107c61174(uVar4);
      func_0x000100069b5c(uVar1);
      func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000103ae6924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    func_0x0001000285a8(0x112fe9040,&UNK_10dc50a28);
    func_0x000107c61174();
    func_0x0001000bda74();
    *(long **)(unaff_x22 + 800) = plVar9;
    uVar4 = 0x112fe9048;
    func_0x0001000285a8(0x112fe9048,&UNK_10dc50a30);
    *(undefined8 *)(unaff_x22 + 0x280) = uVar4;
    plVar2 = (long *)0xa0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x328) = plVar2;
    plVar6 = plVar2;
    func_0x000100faa6a0();
    *(long **)(unaff_x22 + 0x330) = plVar6;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_103ae6928;
    lVar11 = unaff_x22 + 0x270;
    lVar8 = unaff_x22 + 0x280;
    lVar7 = unaff_x22 + 0x298;
  }
  plVar2[0xb] = (long)plVar6;
  plVar2[0xc] = lVar7;
  plVar2[9] = lVar8;
  plVar2[10] = (long)&UNK_1107a6f08;
  plVar2[8] = lVar11;
  lVar8 = *plVar9;
  plVar2[0xd] = (long)&PTR_DAT_1107a6e88;
  lVar11 = 0x10;
  _swift_task_alloc();
  plVar2[0xe] = lVar11;
  lVar11 = *(long *)(lVar8 + 0x50);
  plVar2[0xf] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar2[0x10] = lVar11;
  uVar5 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar2[0x11] = uVar5;
  plVar6 = (long *)0x70;
  _swift_task_alloc();
  plVar2[0x12] = (long)plVar6;
  *plVar6 = (long)plVar2;
  plVar6[1] = (long)&UNK_104876614;
  plVar6[5] = uVar5;
  plVar6[6] = (long)plVar9;
  lVar8 = *(long *)(*plVar9 + 0x50);
  plVar6[7] = lVar8;
  lVar11 = 0;
  __sSqMa(0,lVar8);
  plVar6[8] = lVar11;
  lVar11 = *(long *)(lVar11 + -8);
  plVar6[9] = lVar11;
  uVar5 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[10] = uVar5;
  lVar11 = *(long *)(lVar8 + -8);
  plVar6[0xb] = lVar11;
  uVar5 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar6[0xc] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_104875f90,0,0);
  return;
}



/* Entry: 103ae6928; end: 103ae699b;  */

void FUN_103ae6928(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x328));
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(lVar2 + 800));
    pcVar1 = FUN_103ae699c;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x308);
    func_0x000107c61574(*(undefined8 *)(lVar2 + 800));
    func_0x000107c6142c(uVar3);
    pcVar1 = FUN_103ae854c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ae699c; end: 103ae6dbf;  */

void FUN_103ae699c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2f0);
  lVar10 = *(long *)(unaff_x22 + 0x270);
  lVar3 = lVar10;
  func_0x000107c500c8(lVar10,param_2,*(undefined8 *)(unaff_x22 + 0x2c0),0x67);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c615e8(lVar10);
  *(long *)(unaff_x22 + 0x350) = lVar3;
  puVar9 = *(undefined8 **)(unaff_x22 + 0x310);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x300);
  func_0x000107c61428(puVar9,unaff_x22 + 0x108,0,0);
  uVar8 = *puVar9;
  func_0x000107c61174(uVar8);
  func_0x000107c615f0(lVar3);
  func_0x000107c602fc(0x12);
  func_0x000107c61434(uVar11);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f19d1c0);
  func_0x0001048d85b4(uVar12,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c61170(uVar8);
  if (lVar3 == 0) {
    puVar9 = *(undefined8 **)(unaff_x22 + 0x308);
    func_0x000107c6142c();
    FUN_103addd84();
    func_0x000107c613f8(&UNK_1106cd970,puVar9,0,0);
    *puVar9 = 1;
    *(undefined1 *)(puVar9 + 1) = 2;
    func_0x000107c61654();
    uVar11 = *(undefined8 *)(unaff_x22 + 0x318);
    puVar9 = *(undefined8 **)(unaff_x22 + 0x310);
    func_0x000107c61428(puVar9,unaff_x22 + 0x120,0,0);
    uVar8 = *puVar9;
    func_0x000107c61174(uVar8);
    func_0x000100069b5c(uVar11);
    func_0x000107c61170(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000103ae6d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar10 = *(long *)(unaff_x22 + 0x2f8);
  puVar4 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x358) = puVar4;
  if (lVar10 != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x2f8);
    func_0x000107c6157c(uVar8);
    lVar10 = lVar3;
    func_0x000107c5cef0();
    func_0x000107c61180();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ae6dc0);
      (*pcVar1)();
    }
    *(undefined8 *)(unaff_x22 + 0x68) = 0x103ae8744;
    *(undefined8 *)(unaff_x22 + 0x70) = uVar8;
    *(undefined **)(unaff_x22 + 0x48) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x58) = &UNK_101a370fc;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1106ce348;
    lVar5 = unaff_x22 + 0x48;
    func_0x000107c60bc4(lVar5);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c6157c(uVar8);
    func_0x000107c61574(uVar11);
    lVar6 = lVar10;
    func_0x000107c5c320(lVar10);
    func_0x000107c61180();
    func_0x000107c60bd0(lVar5);
    func_0x000107c61170(lVar10);
    func_0x000107c3e924(lVar6);
    func_0x000107c61170(lVar6);
    func_0x000107c61574(uVar8);
  }
  puVar9 = *(undefined8 **)(unaff_x22 + 0x310);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x308);
  lVar10 = *(long *)(unaff_x22 + 0x300);
  func_0x000107c61428(puVar9,unaff_x22 + 0x138,0,0);
  uVar8 = *puVar9;
  func_0x000107c61174(uVar8);
  func_0x000107c602fc(0x14);
  func_0x000107c61434(uVar11);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f19d1e0);
  func_0x000100029b28(lVar10,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c61170(uVar8);
  *(long *)(unaff_x22 + 0x20) = lVar10;
  *(long *)(unaff_x22 + 0x28) = lVar3;
  *(long *)(unaff_x22 + 0x40) = lVar3;
  iVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  *(int *)(unaff_x22 + 0x408) = iVar2;
  if (iVar2 != 0) {
    plVar7 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x360) = plVar7;
    uVar8 = 0x112d51138;
    func_0x0001000285a8(0x112d51138,&UNK_10dc50a50);
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_103ae7264;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(unaff_x22 + 0x290,&UNK_10dc50a40,unaff_x22 + 0x10,FUN_103ae8720,unaff_x22 + 0x30,0,0,uVar8);
    return;
  }
  pcVar1 = FUN_103ae8720;
  func_0x000107c615b4(FUN_103ae8720,unaff_x22 + 0x30);
  *(code **)(unaff_x22 + 0x368) = pcVar1;
  plVar7 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x370) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_103ae72d4;
  plVar7[0xd] = lVar10;
  plVar7[0xe] = lVar3;
  plVar7[0xc] = unaff_x22 + 0x288;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae60d0,0,0);
  return;
}



/* Entry: 103ae6dc0; end: 103ae6e33;  */

void FUN_103ae6dc0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x340));
  if (unaff_x20 == 0) {
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0x338));
    pcVar1 = FUN_103ae6e34;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x308);
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0x338));
    func_0x000107c6142c(uVar3);
    pcVar1 = FUN_103ae85ec;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 103ae6e34; end: 103ae7263;  */

void FUN_103ae6e34(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  lVar9 = *(long *)(unaff_x22 + 0x2a0);
  uVar4 = 0xc;
  if (*(long *)(unaff_x22 + 0x2d0) != 1) {
    uVar4 = 8;
  }
  lVar3 = lVar9;
  func_0x000107c50094(lVar9,param_2,*(undefined8 *)(unaff_x22 + 0x2c0),
                      *(undefined8 *)(unaff_x22 + 0x2c8),*(long *)(unaff_x22 + 0x2d0),uVar4,
                      *(undefined8 *)(unaff_x22 + 0x2d8));
  func_0x000107c61180();
  func_0x000107c615e8(lVar9);
  *(long *)(unaff_x22 + 0x350) = lVar3;
  puVar10 = *(undefined8 **)(unaff_x22 + 0x310);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x308);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x300);
  func_0x000107c61428(puVar10,unaff_x22 + 0x108,0,0);
  uVar4 = *puVar10;
  func_0x000107c61174(uVar4);
  func_0x000107c615f0(lVar3);
  func_0x000107c602fc(0x12);
  func_0x000107c61434(uVar11);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f19d1c0);
  func_0x0001048d85b4(uVar12,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c61170(uVar4);
  if (lVar3 == 0) {
    puVar10 = *(undefined8 **)(unaff_x22 + 0x308);
    func_0x000107c6142c();
    FUN_103addd84();
    func_0x000107c613f8(&UNK_1106cd970,puVar10,0,0);
    *puVar10 = 1;
    *(undefined1 *)(puVar10 + 1) = 2;
    func_0x000107c61654();
    uVar11 = *(undefined8 *)(unaff_x22 + 0x318);
    puVar10 = *(undefined8 **)(unaff_x22 + 0x310);
    func_0x000107c61428(puVar10,unaff_x22 + 0x120,0,0);
    uVar4 = *puVar10;
    func_0x000107c61174(uVar4);
    func_0x000100069b5c(uVar11);
    func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000103ae71fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar9 = *(long *)(unaff_x22 + 0x2f8);
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x22 + 0x358) = puVar5;
  if (lVar9 != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x2f8);
    func_0x000107c6157c(uVar4);
    lVar9 = lVar3;
    func_0x000107c5cef0();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103ae7264);
      (*pcVar1)();
    }
    *(undefined8 *)(unaff_x22 + 0x68) = 0x103ae8744;
    *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
    *(undefined **)(unaff_x22 + 0x48) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x58) = &UNK_101a370fc;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1106ce348;
    lVar6 = unaff_x22 + 0x48;
    func_0x000107c60bc4(lVar6);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(uVar11);
    lVar7 = lVar9;
    func_0x000107c5c320(lVar9);
    func_0x000107c61180();
    func_0x000107c60bd0(lVar6);
    func_0x000107c61170(lVar9);
    func_0x000107c3e924(lVar7);
    func_0x000107c61170(lVar7);
    func_0x000107c61574(uVar4);
  }
  puVar10 = *(undefined8 **)(unaff_x22 + 0x310);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x308);
  lVar9 = *(long *)(unaff_x22 + 0x300);
  func_0x000107c61428(puVar10,unaff_x22 + 0x138,0,0);
  uVar4 = *puVar10;
  func_0x000107c61174(uVar4);
  func_0x000107c602fc(0x14);
  func_0x000107c61434(uVar11);
  func_0x000107c6142c(0xe000000000000000);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f19d1e0);
  func_0x000100029b28(lVar9,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c61170(uVar4);
  *(long *)(unaff_x22 + 0x20) = lVar9;
  *(long *)(unaff_x22 + 0x28) = lVar3;
  *(long *)(unaff_x22 + 0x40) = lVar3;
  iVar2 = 2;
  func_0x000100029b9c(2,0x12,0,0);
  *(int *)(unaff_x22 + 0x408) = iVar2;
  if (iVar2 != 0) {
    plVar8 = (long *)(ulong)*(uint *)(
                                     PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                     + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x360) = plVar8;
    uVar4 = 0x112d51138;
    func_0x0001000285a8(0x112d51138,&UNK_10dc50a50);
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_103ae7264;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
    )(unaff_x22 + 0x290,&UNK_10dc50a40,unaff_x22 + 0x10,FUN_103ae8720,unaff_x22 + 0x30,0,0,uVar4);
    return;
  }
  pcVar1 = FUN_103ae8720;
  func_0x000107c615b4(FUN_103ae8720,unaff_x22 + 0x30);
  *(code **)(unaff_x22 + 0x368) = pcVar1;
  plVar8 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x370) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_103ae72d4;
  plVar8[0xd] = lVar9;
  plVar8[0xe] = lVar3;
  plVar8[0xc] = unaff_x22 + 0x288;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103ae60d0,0,0);
  return;
}


