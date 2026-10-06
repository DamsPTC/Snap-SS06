/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036a7eec; end: 1036a7f57;  */

void FUN_1036a7eec(void)

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
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1036a843c;
  plVar3[0x15] = lVar2;
  plVar3[0x16] = lVar4;
  plVar3[0x14] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036a6fdc,0,0);
  return;
}



/* Entry: 1036a7f58; end: 1036a7f5b;  */

void FUN_1036a7f58(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  **(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28) = puVar1;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return;
}



/* Entry: 1036a7f5c; end: 1036a827b;  */

undefined * FUN_1036a7f5c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = param_1;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (uVar6 == 0) {
    return (undefined *)0x0;
  }
  puVar1 = PTR_PTR_1126dc208;
  func_0x000107c610f8(PTR_PTR_1126dc208);
  func_0x000107c453e4();
  func_0x000107c545d4();
  func_0x000107c545d0(puVar1);
  uVar7 = param_1;
  func_0x000107c42120();
  func_0x000107c61180();
  if (uVar7 == 0) {
    uVar8 = 0;
    param_2 = 0xe000000000000000;
  }
  else {
    uVar8 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
  }
  func_0x000107c5fadc(uVar8,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(uVar8);
  uVar7 = param_1;
  func_0x000107c5db08(param_1);
  func_0x000107c61180();
  func_0x000107c59a8c(puVar1);
  func_0x000107c61170(uVar7);
  uVar7 = param_1;
  func_0x000100bf119c();
  if ((uVar7 & 1) == 0) {
    uVar7 = param_1;
    func_0x000107c40cdc();
    func_0x000107c61180();
    if (uVar7 == 0) {
LAB_1036a8084:
      uVar8 = 0;
    }
    else {
      uVar8 = uVar7;
      func_0x000107c4f3b8();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      if (uVar8 == 0) goto LAB_1036a8084;
    }
    func_0x000107c57a28(puVar1);
    func_0x000107c61170(uVar8);
  }
  uVar7 = param_1;
  func_0x000107c40cdc();
  func_0x000107c61180();
  if (uVar7 != 0) {
    uVar8 = uVar7;
    func_0x000107c3e64c();
    func_0x000107c61170(uVar7);
    if ((int)uVar8 == 1) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c45a48();
      func_0x000107c555e0(puVar1);
      func_0x000107c61170(puVar2);
    }
  }
  puVar2 = PTR_PTR_1126dc210;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a344();
  func_0x000107c61170(uVar6);
  uVar6 = param_1;
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (uVar6 == 0) {
LAB_1036a8150:
    uVar7 = 0;
  }
  else {
    uVar7 = uVar6;
    func_0x000107c3e978();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    if (uVar7 == 0) goto LAB_1036a8150;
  }
  func_0x000107c52ae0(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c3e9e8();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar6 = param_1;
    func_0x000107c3ea1c();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (uVar6 != 0) goto LAB_1036a81a0;
  }
  uVar6 = 0;
LAB_1036a81a0:
  func_0x000107c58e54(puVar2);
  func_0x000107c61170(uVar6);
  lVar3 = 0x112d55e90;
  FUN_1036a7a3c(0x112d55e90,&PTR_PTR_1126dc210,0x112d55e98,&UNK_10da9eca0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 3;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  *(undefined **)(lVar3 + 0x20) = puVar2;
  uVar4 = 0;
  FUN_1036a827c(0,0x112d55e90,&PTR_PTR_1126dc210);
  func_0x000107c61174(puVar2);
  lVar5 = lVar3;
  func_0x000107c5fc48(lVar3,uVar4);
  func_0x000107c61574(lVar3);
  func_0x000107c52afc(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar5);
  return puVar1;
}



/* Entry: 1036a827c; end: 1036a82bb;  */

void FUN_1036a827c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1036a82bc; end: 1036a833b;  */

void FUN_1036a82bc(void)

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
  plVar5[1] = 0x1036a8440;
  plVar5[0x11] = lVar4;
  plVar5[0x12] = lVar6;
  plVar5[0xf] = lVar3;
  plVar5[0x10] = lVar2;
  plVar5[0xe] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036a6918,0,0);
  return;
}



/* Entry: 1036a833c; end: 1036a837b;  */

void FUN_1036a833c(undefined *param_1)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  **(undefined8 **)(*(long *)(lVar2 + 0x40) + 0x28) = puVar1;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar2);
  return;
}



/* Entry: 1036a837c; end: 1036a83a7;  */

void FUN_1036a837c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036a83a8; end: 1036a840b;  */

void FUN_1036a83a8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x1036a8444;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036a73e4,0,0);
  return;
}



/* Entry: 1036a840c; end: 1036a8447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a840c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_68 [24];
  
  puVar6 = auStack_68;
  func_0x000107c61428(unaff_x20 + 0x10,puVar6,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar10 = param_1;
    func_0x000107c3fe08();
    func_0x000107c61180();
    lVar2 = lVar10;
    func_0x000107c5faec();
    puVar7 = puVar6;
    func_0x000107c61170(lVar10);
    lVar10 = param_1;
    func_0x000107c3e540(param_1);
    func_0x000107c61180();
    lVar3 = lVar10;
    func_0x000107c5faec();
    puVar9 = puVar7;
    func_0x000107c61170(lVar10);
    func_0x000107c43978();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar10 = 0;
      puVar9 = (undefined1 *)0x0;
    }
    else {
      lVar10 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    uVar4 = 0;
    func_0x000103ee3360(0);
    puVar8 = puVar6;
    func_0x000103ee041c(lVar2,puVar6,lVar3,puVar7,lVar10,puVar9,0,uVar4);
    func_0x000107c6142c(puVar6);
    func_0x000107c6142c(puVar7);
    func_0x000107c6142c(puVar9);
    lVar10 = lVar2;
    func_0x000107c41214();
    func_0x000107c61180();
    if (lVar10 != 0) {
      lVar3 = lVar10;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar10);
      uVar4 = *(undefined8 *)(lVar1 + _DAT_112f86078);
      puVar5 = PTR_PTR_1126b3800;
      func_0x000107c610f8(PTR_PTR_1126b3800);
      func_0x000107c61174(uVar4);
      func_0x00010006c00c(lVar3,puVar8);
      lVar10 = lVar3;
      func_0x000107c5ee20(lVar3,puVar8);
      func_0x000107c45ae0(puVar5);
      func_0x000107c61170(lVar10);
      func_0x00010006c090(lVar3,puVar8);
      func_0x000107c4d664(uVar4);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar5);
      func_0x00010006c090(lVar3,puVar8);
    }
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1036a8448; end: 1036a85cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a8448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f86108) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f86110) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f86118) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f86120) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f86128) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f86130) = param_6;
  *(undefined1 *)(unaff_x20 + _DAT_112f86138) = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036a85d0; end: 1036a8a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a85d0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long extraout_x8;
  long unaff_x20;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long alStack_e0 [2];
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar3 = 0;
  uStack_a8 = param_1;
  func_0x000107c5f804();
  lVar13 = *(long *)(lVar3 + -8);
  lStack_c8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f86128);
  func_0x000107c3ecc4(uVar4);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f86130);
  func_0x000107c43ae0();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f86110);
  func_0x000107c3f548();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112f86118);
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f86120);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f86108);
  uStack_c0 = uVar4;
  func_0x000107c3de28();
  func_0x000107c61180();
  cVar1 = *(char *)(unaff_x20 + _DAT_112f86138);
  lVar7 = 0;
  uStack_b8 = uVar6;
  func_0x0001036a77cc();
  lVar8 = lVar7;
  func_0x000107c610f8();
  lVar2 = _DAT_112f86078;
  puVar9 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + lVar2) = puVar9;
  lVar2 = _DAT_112f86080;
  puVar9 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + lVar2) = puVar9;
  lVar2 = _DAT_112f86088;
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + lVar2) = puVar9;
  *(undefined8 *)(lVar8 + _DAT_112f86090) = uVar5;
  puVar9 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  uStack_b0 = uVar5;
  func_0x000107c615f0(uVar5);
  func_0x000107c453e4();
  *(undefined **)(lVar8 + _DAT_112f86098) = puVar9;
  *(char *)(lVar8 + _DAT_112f860a0) = cVar1;
  puVar9 = PTR_PTR_1126bae70;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar2 = lStack_c8;
  *(undefined **)(lVar8 + _DAT_112f860a8) = puVar9;
  *(undefined8 *)(lVar8 + _DAT_112f860b0) = uVar15;
  *(undefined8 *)(lVar8 + _DAT_112f860b8) = uVar14;
  (**(code **)(lVar13 + 0x68))
            (auStack_d0 + lVar3,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
             lStack_c8);
  puVar9 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  func_0x000107c61174(uVar15);
  func_0x000107c61174(uVar14);
  uVar5 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f158af0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar5);
  (**(code **)(lVar13 + 8))(auStack_d0 + lVar3,lVar2);
  *(undefined **)(lVar8 + _DAT_112f860c0) = puVar9;
  plVar10 = &lStack_70;
  lStack_70 = lVar8;
  lStack_68 = lVar7;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  if (cVar1 == '\x01') {
    uVar5 = *(undefined8 *)((long)plVar10 + _DAT_112f86080);
    puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c61174(plVar10);
    func_0x000107c61174(uVar5);
    func_0x000107c453e4(puVar9);
    func_0x000107c4d664(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(puVar9);
  }
  else {
    func_0x000107c61174(plVar10);
  }
  uVar4 = uStack_b8;
  FUN_1036a5b9c(uStack_b8);
  puVar9 = &UNK_11067c9f8;
  func_0x000107c613fc(&UNK_11067c9f8,0x20,7);
  uVar5 = uStack_c0;
  *(undefined8 *)(puVar9 + 0x10) = uStack_c0;
  *(long **)(puVar9 + 0x18) = plVar10;
  func_0x000107c61174();
  func_0x000107c61174(uVar5);
  *(undefined **)((long)alStack_e0 + lVar3) = PTR___sytN_11034f1b0 + 8;
  uVar6 = 1;
  func_0x0001001ca524(1,2,0x2c,3,0,0,&UNK_10dbf9d10,puVar9);
  func_0x000107c61170(plVar10);
  func_0x000107c615e8(uStack_b0);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(uVar6);
  puVar9 = &UNK_11067ca20;
  func_0x000107c613fc(&UNK_11067ca20,0x18,7);
  *(long **)(puVar9 + 0x10) = plVar10;
  puVar11 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_80 = FUN_1036a8b14;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_101016bdc;
  puStack_88 = &UNK_11067ca38;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c61174(plVar10);
  func_0x000107c46b38(puVar11);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61574(puStack_78);
  func_0x000107c5319c(uStack_a8);
  func_0x000107c61170(plVar10);
  func_0x000107c61170(puVar11);
  return;
}



/* Entry: 1036a8a74; end: 1036a8ad7;  */

void FUN_1036a8a74(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1036a8ad8;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1036a5cc4,0,0);
  return;
}



/* Entry: 1036a8ad8; end: 1036a8b13;  */

void FUN_1036a8ad8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001036a8b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1036a8b14; end: 1036a8b33;  */

void FUN_1036a8b14(void)

{
  FUN_1036a6004();
  return;
}



/* Entry: 1036a8b34; end: 1036a8b83; -[_TtC33SnapEditorCaptionPluginEntryPoint23SnapEditorCaptionPlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036a8b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a8b70) */

void FUN_1036a8b34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1036a85d0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036a8b84; end: 1036a8be3; -[_TtC33SnapEditorCaptionPluginEntryPoint23SnapEditorCaptionPlugin init] */

void FUN_1036a8b84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorCaptionPluginEntryPoint.SnapEditorCaptionPlugin",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036a8bb0);
  (*pcVar1)();
}



/* Entry: 1036a8be4; end: 1036a8c5b; -[_TtC33SnapEditorCaptionPluginEntryPoint23SnapEditorCaptionPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036a8c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a8c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a8c40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a8c24) */
/* WARNING: Removing unreachable block (ram,0x0001036a8c04) */
/* WARNING: Removing unreachable block (ram,0x0001036a8c44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a8be4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f86108));
  return;
}



/* Entry: 1036a8c5c; end: 1036a8c77;  */

void FUN_1036a8c5c(long param_1,long param_2)

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



/* Entry: 1036a8c78; end: 1036a8c97;  */

void FUN_1036a8c78(void)

{
  func_0x000107c61168(&PTR_PTR_1128dfba8);
  return;
}



/* Entry: 1036a8c98; end: 1036a8cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a8c98(long *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_30);
  func_0x000100321ed4();
  lVar2 = param_2;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar2 + _DAT_112f86170);
  puVar1[1] = uStack_28;
  *puVar1 = uStack_30;
  plVar3 = &lStack_40;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 1036a8d00; end: 1036a8d5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a8d00(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f86170);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036a8d5c; end: 1036a8dcf; -[_TtC21AIFontsGatingServices21AIFontsGatingServices isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036a8d5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f86170);
  lVar1 = ((undefined8 *)(param_1 + _DAT_112f86170))[1];
  func_0x000107c614f0(uVar2);
  pcVar3 = *(code **)(lVar1 + 8);
  func_0x000107c61174(param_1);
  (*pcVar3)(uVar2,lVar1);
  func_0x000107c61170(param_1);
  return (uint)uVar2 & 1;
}



/* Entry: 1036a8dd0; end: 1036a8e03;  */

void FUN_1036a8dd0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036a8e04; end: 1036a8e23; -[_TtC21AIFontsGatingServices21AIFontsGatingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a8e04(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f86170));
  return;
}



/* Entry: 1036a8e24; end: 1036a91df;  */

void FUN_1036a8e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  puVar1 = &UNK_11067cbe8;
  func_0x000107c613fc(&UNK_11067cbe8,0x68,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_9;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_3;
  *(undefined8 *)(puVar1 + 0x38) = param_4;
  *(undefined8 *)(puVar1 + 0x40) = param_5;
  *(undefined8 *)(puVar1 + 0x48) = param_7;
  *(undefined8 *)(puVar1 + 0x50) = param_8;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x0001000823a8(0x1036a8f44,puVar1);
  return;
}



/* Entry: 1036a91e0; end: 1036a91ef;  */

undefined1  [16] FUN_1036a91e0(void)

{
  return ZEXT816(0x11067cc10);
}



/* Entry: 1036a91f0; end: 1036a947b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a91f0(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  char *pcVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  uVar8 = *unaff_x20;
  uVar7 = *(undefined8 *)(unaff_x20[2] + _DAT_113036458);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(&puStack_a0);
  func_0x000107c61574(uVar7);
  puVar1 = puStack_a0;
  func_0x000107c49f9c();
  func_0x000107c615e8(puStack_a0);
  if ((int)puVar1 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = unaff_x20[8];
    puStack_90 = (undefined *)param_1;
    puStack_88 = (undefined *)param_2;
    func_0x000107c6157c(uVar7);
    puVar1 = PTR___sytN_11034f1b0;
    func_0x000100075034(FUN_1036a9ca8,&puStack_a0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar7);
    uVar7 = unaff_x20[9];
    func_0x000107c6157c(uVar7);
    func_0x000100075034(FUN_1036a947c,0,puVar1 + 8);
    func_0x000107c61574(uVar7);
    lVar2 = unaff_x20[3];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c41574();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar2 = lVar3;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar2 != 0) {
        uVar7 = param_1;
        func_0x000107c5fadc(param_1,param_2);
        lVar3 = lVar2;
        func_0x000107c4b288(lVar2);
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        puVar1 = &UNK_11067cd20;
        func_0x000107c613fc(&UNK_11067cd20,0x18,7);
        func_0x000107c61644(puVar1 + 0x10);
        puVar4 = &UNK_11067cd48;
        func_0x000107c613fc(&UNK_11067cd48,0x40,7);
        *(undefined **)(puVar4 + 0x10) = puVar1;
        *(undefined8 *)(puVar4 + 0x18) = param_1;
        *(undefined8 *)(puVar4 + 0x20) = param_2;
        *(code **)(puVar4 + 0x28) = param_3;
        *(undefined8 *)(puVar4 + 0x30) = param_4;
        *(undefined8 *)(puVar4 + 0x38) = uVar8;
        pcStack_80 = FUN_1036a9cec;
        puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_98 = 0x42000000;
        puStack_90 = &UNK_1016c1d3c;
        puStack_88 = &UNK_11067cd60;
        puStack_78 = puVar4;
        func_0x000107c60bc4(&puStack_a0);
        puVar1 = puStack_78;
        func_0x000107c61434(param_2);
        func_0x000107c6157c(param_4);
        func_0x000107c61574(puVar1);
        pcVar6 = "resolveEligibility(for:completion:)";
        func_0x0001000c10c0("resolveEligibility(for:completion:)");
        func_0x000107c61180();
        func_0x000107c5dc64(lVar3);
        func_0x000107c615e8(pcVar6);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar3);
        return;
      }
    }
    uVar7 = 3;
  }
  (*param_3)(uVar7);
  return;
}



/* Entry: 1036a947c; end: 1036a94ab;  */

void FUN_1036a947c(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  *param_1 = 0;
  return;
}



/* Entry: 1036a94ac; end: 1036a96e3;  */

void FUN_1036a94ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_88,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (param_1 == 0) {
      (*param_6)(3);
      func_0x000107c61574(param_3);
    }
    else {
      puVar1 = &UNK_11067cd98;
      func_0x000107c613fc(&UNK_11067cd98,0x40,7);
      *(long *)(puVar1 + 0x10) = param_3;
      *(undefined8 *)(puVar1 + 0x18) = param_4;
      *(undefined8 *)(puVar1 + 0x20) = param_5;
      *(code **)(puVar1 + 0x28) = param_6;
      *(undefined8 *)(puVar1 + 0x30) = param_7;
      *(undefined8 *)(puVar1 + 0x38) = param_8;
      puVar2 = &UNK_11067cdc0;
      func_0x000107c613fc(&UNK_11067cdc0,0x20,7);
      *(code **)(puVar2 + 0x10) = FUN_1036a9d48;
      *(undefined **)(puVar2 + 0x18) = puVar1;
      pcStack_98 = FUN_1036a9d68;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_100fe2610;
      puStack_a0 = &UNK_11067cdd8;
      ppuVar3 = &puStack_b8;
      puStack_90 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      puVar2 = puStack_90;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(param_3);
      func_0x000107c61434(param_5);
      func_0x000107c6157c(param_7);
      func_0x000107c61574(puVar2);
      puVar2 = &UNK_11067ce10;
      func_0x000107c613fc(&UNK_11067ce10,0x38,7);
      *(undefined8 *)(puVar2 + 0x10) = param_4;
      *(undefined8 *)(puVar2 + 0x18) = param_5;
      *(code **)(puVar2 + 0x20) = param_6;
      *(undefined8 *)(puVar2 + 0x28) = param_7;
      *(undefined8 *)(puVar2 + 0x30) = param_8;
      puVar4 = &UNK_11067ce38;
      func_0x000107c613fc(&UNK_11067ce38,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = 0x1036a9d88;
      *(undefined **)(puVar4 + 0x18) = puVar2;
      pcStack_98 = (code *)0x1036a9dac;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_100fe2654;
      puStack_a0 = &UNK_11067ce50;
      ppuVar5 = &puStack_b8;
      puStack_90 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar4 = puStack_90;
      func_0x000107c61434(param_5);
      func_0x000107c6157c(param_7);
      func_0x000107c61574(puVar4);
      func_0x000107c4c744(param_1);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c61574(puVar2);
      func_0x000107c61574(puVar1);
      func_0x000107c61574(param_3);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1036a96e4; end: 1036a9833;  */

void FUN_1036a96e4(ulong param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  code *param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  uVar3 = *(undefined8 *)(param_3 + 0x40);
  func_0x000107c6157c(uVar3);
  func_0x0001000c74f0(&uStack_80);
  func_0x000107c61574(uVar3);
  uVar1 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  if (lStack_78 == 0) {
    func_0x000107c6142c(param_2);
  }
  else {
    if ((uStack_80 == uVar2) && (lStack_78 == param_2)) {
      func_0x000107c6142c(lStack_78);
      func_0x000107c6142c(param_2);
    }
    else {
      uVar1 = uStack_80;
      func_0x000107c605b8(uStack_80,lStack_78,uVar2,param_2,0);
      func_0x000107c6142c(lStack_78);
      func_0x000107c6142c(param_2);
      if ((uVar1 & 1) == 0) goto LAB_1036a980c;
    }
    uVar3 = *(undefined8 *)(param_3 + 0x48);
    uStack_70 = param_1;
    func_0x000107c6157c(uVar3);
    func_0x000100075034(FUN_1036a9dcc,&uStack_80,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar3);
    FUN_1036a9834(param_1);
  }
LAB_1036a980c:
  (*param_6)();
  return;
}



/* Entry: 1036a9834; end: 1036a98df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_1036a9834(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined4 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  ulong *puStack_28;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113036468);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(&puStack_28);
  func_0x000107c61574(uVar4);
  puVar1 = puStack_28;
  func_0x000107c44098(puStack_28,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c615e8();
  puVar2 = puStack_28;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x70))();
  func_0x000107c61170(puVar1);
  uVar3 = 2;
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 1036a98e0; end: 1036a9bab;  */

/* WARNING: Possible PIC construction at 0x0001036a99f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a9b4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a9b5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036a9b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a9b50) */
/* WARNING: Removing unreachable block (ram,0x0001036a99f4) */
/* WARNING: Removing unreachable block (ram,0x0001036a9b60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036a98e0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  long lStack_68;
  
  if (((*(byte *)(unaff_x20 + 0x38) & 1) == 0) && (lVar2 = *(long *)(unaff_x20 + 0x30), lVar2 != 0))
  {
    lVar4 = *(long *)(unaff_x20 + 0x20);
    func_0x000107c615f0(lVar2);
    lVar1 = lVar4;
    func_0x000107c49cd8();
    if ((int)lVar1 != 0) {
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar4 == 0) {
        uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
        func_0x000107c6157c(uVar3);
        func_0x0001000c74f0(&lStack_68);
        func_0x000107c61574(uVar3);
        lVar1 = lStack_68;
        if (lStack_68 != 0) {
          func_0x000107c4d06c(lVar2,param_2,1);
          func_0x000107c61180();
          uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113036468);
          func_0x000107c6157c(uVar3);
          func_0x0001000d224c(&lStack_68);
          func_0x000107c61574(uVar3);
          func_0x000107c44098(lStack_68,param_2,lVar1);
          func_0x000107c61180();
          lVar2 = lStack_68;
        }
      }
      else {
        func_0x000107c61170();
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
    return;
  }
  return;
}



/* Entry: 1036a9bac; end: 1036a9c37;  */

void FUN_1036a9bac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1036a9c38; end: 1036a9ca7; -[_TtC39SnapEditorPerfectSelfiePluginEntryPoint32PerfectSelfieEligibilityProvider plusSubscribeDidDismiss] */

/* WARNING: Possible PIC construction at 0x0001036a9c84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036a9c88) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_1036a9c38(long param_1)

{
  long lVar1;
  
  *(undefined1 *)(param_1 + 0x38) = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x000107c6157c();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(*(undefined8 *)(param_1 + 0x20));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1036a9ca8; end: 1036a9ceb;  */

void FUN_1036a9ca8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6142c(param_1[1]);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  func_0x000107c61434(uVar2);
  return;
}



/* Entry: 1036a9cec; end: 1036a9d13;  */

void FUN_1036a9cec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  pcVar4 = *(code **)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar6 + 0x10,auStack_88,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 != 0) {
    if (param_1 == 0) {
      (*pcVar4)(3);
      func_0x000107c61574(lVar6);
    }
    else {
      puVar7 = &UNK_11067cd98;
      func_0x000107c613fc(&UNK_11067cd98,0x40,7);
      *(long *)(puVar7 + 0x10) = lVar6;
      *(undefined8 *)(puVar7 + 0x18) = uVar3;
      *(undefined8 *)(puVar7 + 0x20) = uVar1;
      *(code **)(puVar7 + 0x28) = pcVar4;
      *(undefined8 *)(puVar7 + 0x30) = uVar2;
      *(undefined8 *)(puVar7 + 0x38) = uVar5;
      puVar8 = &UNK_11067cdc0;
      func_0x000107c613fc(&UNK_11067cdc0,0x20,7);
      *(code **)(puVar8 + 0x10) = FUN_1036a9d48;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      pcStack_98 = FUN_1036a9d68;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_100fe2610;
      puStack_a0 = &UNK_11067cdd8;
      ppuVar9 = &puStack_b8;
      puStack_90 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar8 = puStack_90;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(lVar6);
      func_0x000107c61434(uVar1);
      func_0x000107c6157c(uVar2);
      func_0x000107c61574(puVar8);
      puVar8 = &UNK_11067ce10;
      func_0x000107c613fc(&UNK_11067ce10,0x38,7);
      *(undefined8 *)(puVar8 + 0x10) = uVar3;
      *(undefined8 *)(puVar8 + 0x18) = uVar1;
      *(code **)(puVar8 + 0x20) = pcVar4;
      *(undefined8 *)(puVar8 + 0x28) = uVar2;
      *(undefined8 *)(puVar8 + 0x30) = uVar5;
      puVar10 = &UNK_11067ce38;
      func_0x000107c613fc(&UNK_11067ce38,0x20,7);
      *(undefined8 *)(puVar10 + 0x10) = 0x1036a9d88;
      *(undefined **)(puVar10 + 0x18) = puVar8;
      pcStack_98 = (code *)0x1036a9dac;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_100fe2654;
      puStack_a0 = &UNK_11067ce50;
      ppuVar11 = &puStack_b8;
      puStack_90 = puVar10;
      func_0x000107c60bc4(ppuVar11);
      puVar10 = puStack_90;
      func_0x000107c61434(uVar1);
      func_0x000107c6157c(uVar2);
      func_0x000107c61574(puVar10);
      func_0x000107c4c744(param_1);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(lVar6);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 1036a9d14; end: 1036a9d47;  */

void FUN_1036a9d14(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036a9d48; end: 1036a9d67;  */

void FUN_1036a9d48(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(lVar1 + 0x40);
  func_0x000107c6157c(uVar5,param_2,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),pcVar2,*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  func_0x0001000c74f0(&uStack_80);
  func_0x000107c61574(uVar5);
  uVar3 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  if (lStack_78 == 0) {
    func_0x000107c6142c(param_2);
  }
  else {
    if ((uStack_80 == uVar4) && (lStack_78 == param_2)) {
      func_0x000107c6142c(lStack_78);
      func_0x000107c6142c(param_2);
    }
    else {
      uVar3 = uStack_80;
      func_0x000107c605b8(uStack_80,lStack_78,uVar4,param_2,0);
      func_0x000107c6142c(lStack_78);
      func_0x000107c6142c(param_2);
      if ((uVar3 & 1) == 0) goto LAB_1036a980c;
    }
    uVar5 = *(undefined8 *)(lVar1 + 0x48);
    uStack_70 = param_1;
    func_0x000107c6157c(uVar5);
    func_0x000100075034(FUN_1036a9dcc,&uStack_80,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar5);
    FUN_1036a9834(param_1);
  }
LAB_1036a980c:
  (*pcVar2)();
  return;
}



/* Entry: 1036a9d68; end: 1036a9dcb;  */

void FUN_1036a9d68(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036a9dcc; end: 1036a9e0f;  */

void FUN_1036a9dcc(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 1036a9e10; end: 1036a9e23;  */

void FUN_1036a9e10(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11067ce88;
  if (lRam0000000112f86278 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112f86278 = param_1;
  }
  return;
}



/* Entry: 1036a9e24; end: 1036a9e67;  */

void FUN_1036a9e24(long param_1,long *param_2,long param_3)

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



/* Entry: 1036a9e68; end: 1036a9e77;  */

void FUN_1036a9e68(long param_1,long param_2)

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



/* Entry: 1036a9e78; end: 1036aa1cb;  */

undefined * FUN_1036a9e78(void)

{
  undefined8 ******ppppppuVar1;
  code *pcVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 uVar5;
  undefined8 *****pppppuVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  undefined *puVar9;
  undefined8 ******ppppppuVar10;
  long unaff_x20;
  undefined8 *****pppppuVar11;
  undefined8 ******ppppppuVar12;
  undefined8 *****pppppuVar13;
  undefined8 ******ppppppuVar14;
  undefined8 *****pppppuStack_68;
  
  pppppuVar11 = *(undefined8 ******)(unaff_x20 + 0x10);
  pppppuVar3 = pppppuVar11;
  func_0x000107c5b198();
  func_0x000107c61180();
  pppppuVar4 = pppppuVar3;
  func_0x000107c44a2c();
  if ((int)pppppuVar4 != 0) {
    pppppuVar4 = pppppuVar3;
    func_0x000107c4e8d8();
    func_0x000107c61180();
    if (pppppuVar4 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1036aa1c8);
      (*pcVar2)();
    }
    pppppuVar13 = pppppuVar4;
    func_0x000107c4e928();
    func_0x000107c61180();
    func_0x000107c61170(pppppuVar4);
    if (pppppuVar13 != (undefined8 *****)0x0) {
      pppppuStack_68 = (undefined8 ******)0x0;
      uVar5 = 0;
      func_0x000101de16dc(0);
      ppppppuVar10 = &pppppuStack_68;
      func_0x000107c5fc50(pppppuVar13,ppppppuVar10,uVar5);
      func_0x000107c61170(pppppuVar13);
      pppppuVar4 = pppppuStack_68;
      if ((undefined8 ******)pppppuStack_68 != (undefined8 ******)0x0) {
        ppppppuVar14 = (undefined8 ******)((ulong)pppppuStack_68 & 0xffffffffffffff8);
        if ((ulong)pppppuStack_68 >> 0x3e == 0) {
          ppppppuVar12 = (undefined8 ******)ppppppuVar14[2];
        }
        else {
          ppppppuVar12 = (undefined8 ******)pppppuStack_68;
          if (-1 < (long)pppppuStack_68) {
            ppppppuVar12 = ppppppuVar14;
          }
          func_0x000107c60480();
        }
        if (ppppppuVar12 != (undefined8 ******)0x0) {
          pppppuVar13 = (undefined8 *****)0x0;
          do {
            if (((ulong)pppppuVar4 & 0xc000000000000001) == 0) {
              if (ppppppuVar14[2] <= pppppuVar13) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1036aa174);
                (*pcVar2)();
              }
              pppppuVar6 = (undefined8 *****)pppppuVar4[(long)pppppuVar13 + 4];
              func_0x000107c61174();
            }
            else {
              pppppuVar6 = pppppuVar13;
              ppppppuVar10 = (undefined8 ******)pppppuVar4;
              func_0x00010121c1ac(pppppuVar13,pppppuVar4);
            }
            ppppppuVar1 = (undefined8 ******)((long)pppppuVar13 + 1);
            if (SCARRY8((long)pppppuVar13,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1036aa170);
              (*pcVar2)();
            }
            pppppuVar7 = pppppuVar6;
            func_0x000107c4abb4();
            if ((int)pppppuVar7 == 1) {
              pppppuVar7 = pppppuVar6;
              func_0x000107c4c930();
              func_0x000107c61180();
              if (pppppuVar7 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1036aa1c0);
                (*pcVar2)();
              }
              pppppuVar8 = pppppuVar7;
              func_0x000107c44984();
              func_0x000107c61170(pppppuVar7);
              if (((ulong)pppppuVar8 & 1) != 0) {
                pppppuVar7 = pppppuVar6;
                func_0x000107c4c930();
                func_0x000107c61180();
                if (pppppuVar7 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1036aa1c4);
                  (*pcVar2)();
                }
                pppppuVar8 = pppppuVar7;
                func_0x000107c3e240();
                func_0x000107c61170(pppppuVar7);
                if ((int)pppppuVar8 == 5) {
                  func_0x000107c6142c(pppppuVar4);
                  pppppuVar4 = pppppuVar6;
                  func_0x000107c4c930();
                  func_0x000107c61180();
                  func_0x000107c61170(pppppuVar6);
                  if (pppppuVar4 != (undefined8 *****)0x0) {
                    pppppuVar13 = pppppuVar4;
                    func_0x000107c41214();
                    func_0x000107c61180();
                    if (pppppuVar13 == (undefined8 *****)0x0) {
                      func_0x000107c61170(pppppuVar4);
                    }
                    else {
                      pppppuVar6 = pppppuVar13;
                      func_0x000107c5ee30();
                      ppppppuVar14 = ppppppuVar10;
                      func_0x000107c61170(pppppuVar13);
                      pppppuVar13 = pppppuVar4;
                      func_0x000107c4c99c();
                      func_0x000107c61180();
                      if (pppppuVar13 == (undefined8 *****)0x0) {
                    /* WARNING: Does not return */
                        pcVar2 = (code *)SoftwareBreakpoint(1,0x1036aa1cc);
                        (*pcVar2)();
                      }
                      func_0x000107c4ca08();
                      func_0x000107c61180();
                      func_0x000107c61170(pppppuVar13);
                      if (pppppuVar11 != (undefined8 *****)0x0) {
                        pppppuVar13 = pppppuVar11;
                        func_0x000107c41214();
                        func_0x000107c61180();
                        func_0x000107c61170(pppppuVar11);
                        if (pppppuVar13 != (undefined8 *****)0x0) {
                          pppppuVar11 = pppppuVar13;
                          func_0x000107c5ee30(pppppuVar13);
                          func_0x000107c61170(pppppuVar13);
                          puVar9 = PTR_PTR_1126a61e0;
                          func_0x000107c610f8(PTR_PTR_1126a61e0);
                          pppppuVar13 = pppppuVar11;
                          func_0x000107c5ee20(pppppuVar11,ppppppuVar14);
                          pppppuVar7 = pppppuVar6;
                          func_0x000107c5ee20(pppppuVar6,ppppppuVar10);
                          func_0x000107c47694(puVar9);
                          func_0x000107c61170(pppppuVar13);
                          func_0x000107c61170(pppppuVar7);
                          func_0x00010006c090(pppppuVar6,ppppppuVar10);
                          func_0x00010006c090(pppppuVar11,ppppppuVar14);
                          func_0x000107c61170(pppppuVar4);
                          func_0x000107c61170(pppppuVar3);
                          return puVar9;
                        }
                      }
                      func_0x000107c61170(pppppuVar3);
                      func_0x00010006c090(pppppuVar6,ppppppuVar10);
                      pppppuVar3 = pppppuVar4;
                    }
                  }
                  goto LAB_1036aa194;
                }
              }
            }
            func_0x000107c61170(pppppuVar6);
            pppppuVar13 = (undefined8 *****)((long)pppppuVar13 + 1);
          } while (ppppppuVar1 != ppppppuVar12);
        }
        func_0x000107c6142c(pppppuVar4);
      }
    }
  }
LAB_1036aa194:
  func_0x000107c61170(pppppuVar3);
  return (undefined *)0x0;
}



/* Entry: 1036aa1cc; end: 1036aa20f;  */

void FUN_1036aa1cc(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036aa210; end: 1036aa253;  */

void FUN_1036aa210(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036aa254; end: 1036aa2bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036aa254(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f86438;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f86438);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c610f8();
    func_0x000107c453e4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1036aa2c0; end: 1036aa30f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036aa2c0(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112f86430));
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036aa310; end: 1036aa377; -[_TtC39SnapEditorPerfectSelfiePluginEntryPoint27PerfectSelfiePluginProvider dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036aa310(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f86430);
  func_0x000107c61174();
  func_0x000107c42194(uVar2);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036aa378; end: 1036aa477; -[_TtC39SnapEditorPerfectSelfiePluginEntryPoint27PerfectSelfiePluginProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1036aa378(long param_1)

{
  long lVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f863c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f863c8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f863d0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f863d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f863e0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f863e8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f863f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f863f8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f86400 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f86410 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86430));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86438));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86448));
  param_1 = param_1 + _DAT_112f86450;
  lVar1 = 0x112d55088;
  func_0x0001000285a8(0x112d55088,&UNK_10db19ca0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1036aa478; end: 1036aa98f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036aa478(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  ppuVar9 = &puStack_90;
  ppuVar11 = &puStack_90;
  ppuVar12 = &puStack_90;
  ppuVar13 = &puStack_90;
  puVar2 = PTR_PTR_1126ad388;
  func_0x000107c610f8(PTR_PTR_1126ad388);
  func_0x000107c453e4();
  puVar3 = &UNK_11067cea8;
  func_0x000107c613fc(&UNK_11067cea8,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_11067ced0;
  func_0x000107c613fc(&UNK_11067ced0,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1036abb28;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_1036abce4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_1000f6b44;
  puStack_78 = &UNK_11067cee8;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c521c4(puVar2);
  func_0x000107c60bd0(ppuVar5);
  puVar3 = &UNK_11067cf20;
  func_0x000107c613fc(&UNK_11067cf20,0x18,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_11067cf48;
  func_0x000107c613fc(&UNK_11067cf48,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_1036abd08;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_70 = (code *)0x1036ac0c8;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_1000f6b44;
  puStack_78 = &UNK_11067cf60;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar3 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar3);
  func_0x000107c597c0(puVar2);
  func_0x000107c60bd0(ppuVar6);
  puVar3 = &UNK_11067cf98;
  puVar4 = puVar3;
  func_0x000107c613fc(&UNK_11067cf98,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,unaff_x20);
  pcStack_70 = FUN_1036abd40;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_102827bd8;
  puStack_78 = &UNK_11067cfb0;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c533e4(puVar2);
  func_0x000107c60bd0(ppuVar7);
  puVar4 = &UNK_11067cfe8;
  func_0x000107c613fc(&UNK_11067cfe8,0x18,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  puVar8 = &UNK_11067d010;
  func_0x000107c613fc(&UNK_11067d010,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_1036abd48;
  *(undefined **)(puVar8 + 0x18) = puVar4;
  pcStack_70 = (code *)0x1036ac0cc;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_1000f6b44;
  puStack_78 = &UNK_11067d028;
  puStack_68 = puVar8;
  func_0x000107c60bc4();
  puVar4 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61574(puVar4);
  func_0x000107c57e34(puVar2);
  func_0x000107c60bd0();
  FUN_1036aa254();
  puVar10 = (undefined1 *)ppuVar9;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar9);
  puVar4 = &UNK_11067d060;
  func_0x000107c613fc(&UNK_11067d060,0x18,7);
  *(undefined1 **)(puVar4 + 0x10) = puVar10;
  pcStack_70 = FUN_1036abd68;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1036aae2c;
  puStack_78 = &UNK_11067d078;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar4 = puStack_68;
  func_0x000107c61174(puVar10);
  func_0x000107c61574(puVar4);
  func_0x000107c56bf8(puVar2);
  func_0x000107c60bd0(ppuVar11);
  puVar4 = puVar3;
  func_0x000107c613fc(&UNK_11067cf98,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,unaff_x20);
  pcStack_70 = (code *)0x1036abd70;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1036ab260;
  puStack_78 = &UNK_11067d0a0;
  puStack_68 = puVar4;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_68);
  func_0x000107c56b4c(puVar2);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c613fc(&UNK_11067cf98,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,unaff_x20);
  pcStack_70 = (code *)0x1036abd78;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_1036ab414;
  puStack_78 = &UNK_11067d0c8;
  puStack_68 = puVar3;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_68);
  func_0x000107c57e7c(puVar2);
  func_0x000107c60bd0(ppuVar13);
  puVar4 = PTR_PTR_1126ad390;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f86410);
  func_0x000107c5fadc(uVar14,((undefined8 *)(unaff_x20 + _DAT_112f86410))[1]);
  func_0x000107c55d70(puVar4);
  func_0x000107c61170(uVar14);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c52f20(puVar4);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c57874(puVar4);
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c52e20(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c572fc(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar10);
  return puVar4;
}



/* Entry: 1036aa990; end: 1036aab33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036aa990(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  if ((*(byte *)(unaff_x20 + _DAT_112f86440) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112f86440) = 1;
    FUN_1036a9e78();
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f86448);
    *(undefined8 *)(unaff_x20 + _DAT_112f86448) = param_1;
    func_0x000107c61170(uVar6);
    lVar2 = *(long *)(unaff_x20 + _DAT_112f863c0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c3e280();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1036aab34);
        (*pcVar1)();
      }
      puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
      func_0x000107c61168(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
      func_0x000107c4c188();
      func_0x000107c61180();
      lVar2 = lVar3;
      func_0x000107c4da80(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(puVar4);
      puVar4 = &UNK_11067cf98;
      func_0x000107c613fc(&UNK_11067cf98,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      uStack_40 = 0x1036abe2c;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_10101bff0;
      puStack_48 = &UNK_11067d280;
      puStack_38 = puVar4;
      func_0x000107c60bc4(&puStack_60);
      func_0x000107c61574(puStack_38);
      lVar3 = lVar2;
      func_0x000107c5c320(lVar2);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(lVar2);
      func_0x000107c3e924(lVar3);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 1036aab34; end: 1036aac1f;  */

void FUN_1036aab34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "dependencies()";
  func_0x0001000c10c0("dependencies()");
  func_0x000107c61180();
  puVar2 = &UNK_11067d1f0;
  func_0x000107c613fc(&UNK_11067d1f0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_50 = FUN_1036abde8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11067d208;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1036aac20; end: 1036aad37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036aac20(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f86410);
    uVar2 = ((undefined8 *)(param_1 + _DAT_112f86410))[1];
    puVar3 = &UNK_11067cf98;
    func_0x000107c613fc(&UNK_11067cf98,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_1);
    puVar4 = &UNK_11067d240;
    func_0x000107c613fc(&UNK_11067d240,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    func_0x000107c6157c(puVar3);
    func_0x000107c6157c(param_3);
    FUN_1036a91f0(uVar1,uVar2,FUN_1036abe20,puVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
  }
  return;
}



/* Entry: 1036aad38; end: 1036aae2b;  */

/* WARNING: Possible PIC construction at 0x0001036aadd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036aadd8) */
/* WARNING: Removing unreachable block (ram,0x0001036aae00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036aad38(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112f86430));
  *(undefined1 *)(unaff_x20 + _DAT_112f86440) = 0;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f863e0);
  func_0x000107c4b2b0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4500c();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5fadc(*(undefined8 *)(unaff_x20 + _DAT_112f86410),
                          ((undefined8 *)(unaff_x20 + _DAT_112f86410))[1]);
      func_0x000107c4b2ac(lVar2);
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
      return;
    }
  }
  return;
}



/* Entry: 1036aae2c; end: 1036aae63;  */

void FUN_1036aae2c(long param_1)

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



/* Entry: 1036aae64; end: 1036aaf3b;  */

void FUN_1036aae64(undefined4 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "dependencies()";
  func_0x0001000c10c0("dependencies()");
  func_0x000107c61180();
  puVar2 = &UNK_11067d178;
  func_0x000107c613fc(&UNK_11067d178,0x1c,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined4 *)(puVar2 + 0x18) = param_1;
  uStack_40 = 0x1036abd9c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11067d190;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1036aaf3c; end: 1036aaf97;  */

void FUN_1036aaf3c(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1036aaf98(param_2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1036aaf98; end: 1036ab25f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036aaf98(int param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_80 [48];
  undefined8 uStack_50;
  long lStack_48;
  
  if (param_1 < 3) {
    if (param_1 == 0) {
      func_0x000108ee2670(*(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f863e8) + 0x10),1);
      lVar1 = _DAT_112f86408;
      uVar2 = 2;
      if (*(char *)(unaff_x20 + _DAT_112f86408) == '\0') {
        uVar2 = 0;
      }
      FUN_1036ac0d0(*(undefined8 *)(unaff_x20 + _DAT_112f863f0),uVar2);
      *(undefined1 *)(unaff_x20 + lVar1) = 1;
      func_0x0001000d224c(&uStack_50);
      uVar2 = uStack_50;
      func_0x000107c614f0(uStack_50);
      FUN_1036ab99c(auStack_80);
      pcVar3 = *(code **)(lStack_48 + 0x18);
      uVar4 = uStack_50;
    }
    else {
      if (param_1 == 1) {
        uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f863e8) + 0x10);
        uVar2 = 0x7061745f72657375;
        func_0x000107c5fadc(0x7061745f72657375,0xe800000000000000);
        func_0x000108ee2124(uVar4,uVar2,1);
        func_0x000107c61170(uVar2);
        goto LAB_1036ab160;
      }
      if (param_1 != 2) {
        return;
      }
      FUN_1036ac24c(*(undefined8 *)(unaff_x20 + _DAT_112f863f0),0);
      func_0x0001000d224c(&uStack_50);
      uVar2 = uStack_50;
      func_0x000107c614f0(uStack_50);
      FUN_1036ab99c(auStack_80);
      pcVar3 = *(code **)(lStack_48 + 0x28);
      uVar4 = uStack_50;
    }
  }
  else {
    if (param_1 != 3) {
      if (param_1 == 4) {
        FUN_1036ac0d0(1);
        FUN_1036ac24c(0);
        func_0x0001000d224c(&uStack_50);
        uVar2 = uStack_50;
        func_0x000107c614f0(uStack_50);
        FUN_1036ab99c(auStack_80);
        pcVar3 = *(code **)(lStack_48 + 0x20);
        uVar4 = uStack_50;
      }
      else {
        if (param_1 != 5) {
          return;
        }
        FUN_1036ac0d0(3);
        FUN_1036ac24c(0);
        func_0x0001000d224c(&uStack_50);
        uVar2 = uStack_50;
        func_0x000107c614f0(uStack_50);
        FUN_1036ab99c(auStack_80);
        pcVar3 = *(code **)(lStack_48 + 0x28);
        uVar4 = uStack_50;
      }
      (*pcVar3)(auStack_80,uVar2,lStack_48);
      goto LAB_1036ab23c;
    }
LAB_1036ab160:
    FUN_1036ac24c(*(undefined8 *)(unaff_x20 + _DAT_112f863f0),1);
    func_0x0001000d224c(&uStack_50);
    uVar2 = uStack_50;
    func_0x000107c614f0(uStack_50);
    FUN_1036ab99c(auStack_80);
    pcVar3 = *(code **)(lStack_48 + 0x20);
    uVar4 = uStack_50;
  }
  (*pcVar3)(auStack_80,uVar2,lStack_48);
LAB_1036ab23c:
  func_0x000107c615e8(uVar4);
  func_0x00010101bb90(auStack_80);
  return;
}



/* Entry: 1036ab260; end: 1036ab29b;  */

void FUN_1036ab260(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1036ab29c; end: 1036ab387;  */

void FUN_1036ab29c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "dependencies()";
  func_0x0001000c10c0("dependencies()");
  func_0x000107c61180();
  puVar2 = &UNK_11067d128;
  func_0x000107c613fc(&UNK_11067d128,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  uStack_50 = 0x1036abd90;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11067d140;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1036ab388; end: 1036ab413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ab388(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + _DAT_112f86448);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_3);
  }
  (*param_1)(uVar1);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 1036ab414; end: 1036ab427;  */

/* WARNING: Possible PIC construction at 0x0001036ab488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ab48c) */

void FUN_1036ab414(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = &UNK_11067d100;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  func_0x000107c613fc(&UNK_11067d100,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(0x1036abd80,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1036ab428; end: 1036ab4a3;  */

/* WARNING: Possible PIC construction at 0x0001036ab488: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ab48c) */

void FUN_1036ab428(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  func_0x000107c613fc(param_3,0x18,7);
  *(undefined8 *)(param_3 + 0x10) = param_2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1036ab4a4; end: 1036ab71b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ab4a4(ulong param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_68 [24];
  
  puVar5 = auStack_68;
  func_0x000107c61428(param_2 + 0x10,puVar5,0,0);
  puVar1 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  uVar2 = param_1;
  func_0x000107c50300();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c5faec();
  puVar6 = puVar5;
  func_0x000107c61170(uVar3);
  if (uVar2 == *(ulong *)(puVar1 + _DAT_112f86410) &&
      puVar5 == *(undefined1 **)((long)(puVar1 + _DAT_112f86410) + 8)) {
    func_0x000107c6142c(puVar5);
  }
  else {
    puVar6 = puVar5;
    func_0x000107c605b8();
    func_0x000107c6142c(puVar5);
    if ((uVar2 & 1) == 0) goto LAB_1036ab6f8;
  }
  uVar2 = param_1;
  func_0x000107c50300();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c428b4();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  if ((uVar2 == 0x7061635f74736f70) && (puVar6 == (undefined1 *)0xef69615f65727574)) {
    func_0x000107c6142c(0xef69615f65727574);
  }
  else {
    func_0x000107c605b8(uVar2,puVar6,0x7061635f74736f70,0xef69615f65727574,0);
    func_0x000107c6142c(puVar6);
    if ((uVar2 & 1) == 0) goto LAB_1036ab6f8;
  }
  func_0x000107c5bd00();
  if (param_1 == 3) {
    lVar7 = *(long *)(puVar1 + _DAT_112f863e8);
    uVar8 = *(undefined8 *)(lVar7 + 0x10);
    func_0x000107c6157c(lVar7);
    param_1 = 0x65746f6d6572;
    func_0x000107c5fadc(0x65746f6d6572,0xe600000000000000);
    func_0x000108ee2298(uVar8,param_1,1);
    func_0x000107c61574(lVar7);
    func_0x000107c61170(param_1);
  }
  else if (param_1 == 2) {
    param_1 = *(ulong *)(*(long *)(puVar1 + _DAT_112f863e8) + 0x10);
    func_0x000108ee25f8(param_1,1);
  }
  FUN_1036aa254();
  func_0x000107c5bd00();
  puVar4 = PTR_PTR_1126ad398;
  func_0x000107c610f8(PTR_PTR_1126ad398);
  func_0x000107c4899c();
  func_0x000107c4d664(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  puVar1 = puVar4;
LAB_1036ab6f8:
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1036ab71c; end: 1036ab99b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ab71c(uint param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    (*param_3)();
  }
  else {
    if ((param_1 & 0xff) - 1 < 2) {
      (*param_3)(1);
    }
    else {
      if ((param_1 & 0xff) == 0) {
        lVar2 = *(long *)(param_2 + _DAT_112f863e8);
        uVar3 = *(undefined8 *)(lVar2 + 0x10);
        func_0x000107c6157c(lVar2);
        uVar1 = 0x6c6c6177796170;
        func_0x000107c5fadc(0x6c6c6177796170,0xe700000000000000);
        func_0x000108ee240c(uVar3,uVar1,1);
        func_0x000107c61574(lVar2);
        func_0x000107c61170(uVar1);
        uVar1 = *(undefined8 *)(param_2 + _DAT_112f863d0);
        func_0x000107c615f0(uVar1);
        FUN_1036a98e0();
        func_0x000107c615e8(uVar1);
      }
      else {
        lVar2 = *(long *)(param_2 + _DAT_112f863e8);
        uVar3 = *(undefined8 *)(lVar2 + 0x10);
        func_0x000107c6157c(lVar2);
        uVar1 = 0xd000000000000010;
        func_0x000107c5fadc(0xd000000000000010,0x800000010f158c60);
        func_0x000108ee2298(uVar3,uVar1,1);
        func_0x000107c61574(lVar2);
        func_0x000107c61170(uVar1);
      }
      (*param_3)(0);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1036ab99c; end: 1036abadb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ab99c(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long unaff_x20;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  char cStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [48];
  
  lVar5 = _DAT_112f86450;
  func_0x000107c61428(unaff_x20 + _DAT_112f86450,auStack_98,0,0);
  func_0x00010101bbc4(unaff_x20 + lVar5,&lStack_c8);
  if (cStack_a0 == -1) {
    plVar6 = &lStack_c8;
    func_0x00010101bc14();
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f86410);
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112f86410))[1];
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f86400);
    uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112f86400))[1];
    param_1[3] = (long)&UNK_11067d310;
    FUN_1036abda8();
    param_1[4] = (long)plVar6;
    puVar7 = &UNK_11067d1c8;
    func_0x000107c613fc(&UNK_11067d1c8,0x30,7);
    *param_1 = (long)puVar7;
    *(undefined8 *)(puVar7 + 0x10) = uVar1;
    *(undefined8 *)(puVar7 + 0x18) = uVar3;
    *(undefined8 *)(puVar7 + 0x20) = uVar2;
    *(undefined8 *)(puVar7 + 0x28) = uVar4;
    *(undefined1 *)(param_1 + 5) = 2;
    func_0x00010101bc9c(param_1,auStack_80);
    func_0x000107c61428(unaff_x20 + lVar5,&lStack_c8,0x21,0);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    func_0x00010101bcd8(auStack_80,unaff_x20 + lVar5);
    func_0x000107c614a8(&lStack_c8);
  }
  else {
    param_1[1] = lStack_c0;
    *param_1 = lStack_c8;
    param_1[3] = CONCAT71(uStack_af,uStack_b0);
    param_1[2] = lStack_b8;
    *(ulong *)((long)param_1 + 0x21) = CONCAT17(cStack_a0,uStack_a7);
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_a8,uStack_af);
  }
  return;
}



/* Entry: 1036abadc; end: 1036abb27; -[_TtC39SnapEditorPerfectSelfiePluginEntryPoint27PerfectSelfiePluginProvider init] */

void FUN_1036abadc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorPerfectSelfiePluginEntryPoint.PerfectSelfiePluginProvider",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036abb08);
  (*pcVar1)();
}



/* Entry: 1036abb28; end: 1036abb9f;  */

void FUN_1036abb28(void)

{
  FUN_1036aa990();
  return;
}



/* Entry: 1036abba0; end: 1036abce3;  */

/* WARNING: Possible PIC construction at 0x0001036abbdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036abbe0) */

long FUN_1036abba0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if ((lVar1 == lVar3 && lVar2 == lVar4) &&
     (lVar1 = param_1[2], lVar2 = param_1[3], lVar3 = param_2[2], lVar4 = param_2[3],
     param_1[2] == param_2[2] && param_1[3] == param_2[3])) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar1,lVar2,lVar3,lVar4,0);
  return lVar1;
}



/* Entry: 1036abce4; end: 1036abd07;  */

void FUN_1036abce4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_60;
  pcVar3 = "runOnMain(_:)";
  func_0x0001000c10c0("runOnMain(_:)");
  func_0x000107c61180();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11067d258;
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c4e590(pcVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 1036abd08; end: 1036abd3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036abd08(void)

{
  long unaff_x20;
  
  func_0x000108ee2580(*(undefined8 *)
                       (*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f863e8) + 0x10),1);
  func_0x0001036ab8a0();
  return;
}



/* Entry: 1036abd40; end: 1036abd47;  */

void FUN_1036abd40(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  pcVar1 = "dependencies()";
  func_0x0001000c10c0("dependencies()");
  func_0x000107c61180();
  puVar2 = &UNK_11067d1f0;
  func_0x000107c613fc(&UNK_11067d1f0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_50 = FUN_1036abde8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11067d208;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 1036abd48; end: 1036abd67;  */

void FUN_1036abd48(void)

{
  FUN_1036aad38();
  return;
}



/* Entry: 1036abd68; end: 1036abda7;  */

void FUN_1036abd68(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1036abda8; end: 1036abde7;  */

void FUN_1036abda8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f86480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf9fec;
  func_0x000107c61520(&DAT_10dbf9fec,&UNK_11067d310);
  puRam0000000112f86480 = puVar1;
  return;
}



/* Entry: 1036abde8; end: 1036abdf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036abde8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    (*pcVar3)();
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + _DAT_112f86410);
    uVar2 = ((undefined8 *)(lVar4 + _DAT_112f86410))[1];
    puVar5 = &UNK_11067cf98;
    func_0x000107c613fc(&UNK_11067cf98,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,lVar4);
    puVar6 = &UNK_11067d240;
    func_0x000107c613fc(&UNK_11067d240,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(code **)(puVar6 + 0x18) = pcVar3;
    *(undefined8 *)(puVar6 + 0x20) = uVar7;
    func_0x000107c6157c(puVar5);
    func_0x000107c6157c(uVar7);
    FUN_1036a91f0(uVar1,uVar2,FUN_1036abe20,puVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar6);
  }
  return;
}



/* Entry: 1036abdf4; end: 1036abe1f;  */

void FUN_1036abdf4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036abe20; end: 1036abe33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036abe20(uint param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    (*pcVar1)();
  }
  else {
    if ((param_1 & 0xff) - 1 < 2) {
      (*pcVar1)(1);
    }
    else {
      if ((param_1 & 0xff) == 0) {
        lVar4 = *(long *)(lVar2 + _DAT_112f863e8);
        uVar5 = *(undefined8 *)(lVar4 + 0x10);
        func_0x000107c6157c(lVar4);
        uVar3 = 0x6c6c6177796170;
        func_0x000107c5fadc(0x6c6c6177796170,0xe700000000000000);
        func_0x000108ee240c(uVar5,uVar3,1);
        func_0x000107c61574(lVar4);
        func_0x000107c61170(uVar3);
        uVar3 = *(undefined8 *)(lVar2 + _DAT_112f863d0);
        func_0x000107c615f0(uVar3);
        FUN_1036a98e0();
        func_0x000107c615e8(uVar3);
      }
      else {
        lVar4 = *(long *)(lVar2 + _DAT_112f863e8);
        uVar5 = *(undefined8 *)(lVar4 + 0x10);
        func_0x000107c6157c(lVar4);
        uVar3 = 0xd000000000000010;
        func_0x000107c5fadc(0xd000000000000010,0x800000010f158c60);
        func_0x000108ee2298(uVar5,uVar3,1);
        func_0x000107c61574(lVar4);
        func_0x000107c61170(uVar3);
      }
      (*pcVar1)(0);
    }
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1036abe34; end: 1036abec3;  */

long FUN_1036abe34(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1036abec4; end: 1036abf2f;  */

undefined8 * FUN_1036abec4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1036abf30; end: 1036abf73;  */

undefined8 * FUN_1036abf30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1036abf74; end: 1036ac00b;  */

int FUN_1036abf74(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1036ac00c; end: 1036ac02f;  */

void FUN_1036ac00c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036ac030();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1036ac030; end: 1036ac06f;  */

void FUN_1036ac030(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f86488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf9fc4;
  func_0x000107c61520(&UNK_10dbf9fc4,&UNK_11067d310);
  puRam0000000112f86488 = puVar1;
  return;
}



/* Entry: 1036ac070; end: 1036ac0cf;  */

void FUN_1036ac070(long param_1,long param_2)

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



/* Entry: 1036ac0d0; end: 1036ac24b;  */

void FUN_1036ac0d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar5 = *(long *)(lVar1 + -8);
  lVar3 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  func_0x000107c5eec4(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eeac();
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  *(long *)(unaff_x20 + 0x38) = lVar3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c6142c(uVar4);
  puVar2 = PTR_PTR_1126bac30;
  func_0x000107c610f8(PTR_PTR_1126bac30);
  func_0x000107c453e4();
  func_0x000107c543f8();
  func_0x000107c543f4(puVar2);
  func_0x000107c5fadc(lVar3,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c53ae8(puVar2);
  func_0x000107c61170(lVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c5fadc(uVar4,*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c59478(puVar2);
  func_0x000107c61170(uVar4);
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c5fadc(uVar4);
    func_0x000107c53200(puVar2);
    func_0x000107c61170(uVar4);
  }
  lVar3 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c4bfb0();
    func_0x000107c615e8(lVar3);
  }
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1036ac24c; end: 1036ac377;  */

/* WARNING: Possible PIC construction at 0x0001036ac2cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ac2f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036ac320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036ac2d0) */
/* WARNING: Removing unreachable block (ram,0x0001036ac2fc) */
/* WARNING: Removing unreachable block (ram,0x0001036ac324) */
/* WARNING: Removing unreachable block (ram,0x0001036ac338) */
/* WARNING: Removing unreachable block (ram,0x0001036ac34c) */
/* WARNING: Removing unreachable block (ram,0x0001036ac304) */

void FUN_1036ac24c(void)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x38);
  uVar2 = *(ulong *)(unaff_x20 + 0x40);
  if (uVar2 != 0) {
    uVar1 = uVar4 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      *(ulong *)(unaff_x20 + 0x38) = 0;
      *(undefined8 *)(unaff_x20 + 0x40) = 0;
      puVar3 = PTR_PTR_1126c42e8;
      func_0x000107c610f8(PTR_PTR_1126c42e8);
      func_0x000107c453e4();
      func_0x000107c543f8();
      func_0x000107c5fadc(uVar4,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c53ae8(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar4);
      return;
    }
  }
  return;
}



/* Entry: 1036ac378; end: 1036ac3d3;  */

void FUN_1036ac378(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036ac3d4; end: 1036acc9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036ac3d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined4 param_13)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f86548) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f86550) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f86558) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112f86560) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112f86568) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f86570) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112f86578) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112f86580) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112f86588) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112f86590) = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f86598);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined1 *)(unaff_x20 + _DAT_112f865a0) = (undefined1)param_13;
  *(undefined1 *)(unaff_x20 + _DAT_112f865a8) = param_13._1_1_;
  *(undefined1 *)(unaff_x20 + _DAT_112f865b0) = param_13._2_1_;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036acca0; end: 1036accbf;  */

void FUN_1036acca0(void)

{
  FUN_1036aa478();
  return;
}



/* Entry: 1036accc0; end: 1036acd0f; -[_TtC39SnapEditorPerfectSelfiePluginEntryPoint29SnapEditorPerfectSelfiePlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x0001036accf8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036accfc) */

void FUN_1036accc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001036ac69c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1036acd10; end: 1036acd6f; -[_TtC39SnapEditorPerfectSelfiePluginEntryPoint29SnapEditorPerfectSelfiePlugin init] */

void FUN_1036acd10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorPerfectSelfiePluginEntryPoint.SnapEditorPerfectSelfiePlugin",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036acd3c);
  (*pcVar1)();
}



/* Entry: 1036acd70; end: 1036ace3b; -[_TtC39SnapEditorPerfectSelfiePluginEntryPoint29SnapEditorPerfectSelfiePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036acd70(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86548));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86550));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86558));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86560));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86568));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86570));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86578));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86580));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86588));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f86590));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f86598 + 8))
  ;
  return;
}



/* Entry: 1036ace3c; end: 1036ace57;  */

void FUN_1036ace3c(long param_1,long param_2)

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



/* Entry: 1036ace58; end: 1036ace77;  */

void FUN_1036ace58(void)

{
  func_0x000107c61168(&PTR_PTR_1128dfea8);
  return;
}



/* Entry: 1036ace78; end: 1036acff7;  */

void FUN_1036ace78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f86040,&UNK_10dbf9bb0);
  puVar1 = &UNK_11067d468;
  func_0x000107c613fc(&UNK_11067d468,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x1036acf1c,puVar1);
  return;
}



/* Entry: 1036acff8; end: 1036ad007;  */

undefined1  [16] FUN_1036acff8(void)

{
  return ZEXT816(0x11067d490);
}



/* Entry: 1036ad008; end: 1036ad38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1036ad008(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  long *plVar7;
  code *pcVar8;
  undefined1 auStack_70 [8];
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar1 = _DAT_112f865e0;
  uVar2 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f865e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f865f0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f865f8) = param_3;
  puVar4 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(auStack_70,puVar4);
  uVar2 = *(undefined8 *)(puVar3 + _DAT_112f865e0);
  plVar7 = *(long **)(param_4 + _DAT_1138122d0);
  puVar4 = &UNK_11067d558;
  func_0x000107c613fc(&UNK_11067d558,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,puVar3);
  pcVar8 = *(code **)(*plVar7 + 0x60);
  func_0x000107c61174(puVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(plVar7);
  pcVar5 = FUN_1036ad3f0;
  puVar6 = puVar4;
  (*pcVar8)(FUN_1036ad3f0,puVar4);
  func_0x000107c61574(plVar7);
  func_0x000107c61574(puVar4);
  func_0x000104885df4(pcVar5,puVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(pcVar5);
  return puVar3;
}



/* Entry: 1036ad390; end: 1036ad3ef;  */

void FUN_1036ad390(char *param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  if (*param_1 != '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      FUN_1036ad3f8();
      func_0x000107c61170(param_2);
    }
  }
  return;
}


