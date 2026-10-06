/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10272451c; end: 10272455b;  */

void FUN_10272451c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10272455c; end: 1027245db;  */

void FUN_10272455c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100183acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1027245dc; end: 102724877;  */

void FUN_1027245dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebaca0,&UNK_10dad3450);
  puVar1 = &UNK_110540f90;
  func_0x000107c613fc(&UNK_110540f90,0x48,7);
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
  func_0x0001000823a8(FUN_102724878,puVar1);
  return;
}



/* Entry: 102724878; end: 10272488b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102724878(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [48];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000100083b20(&uStack_68,lVar2,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(auStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  FUN_10272ac8c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112ebaca8;
  uVar4 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar3 + lVar1) = uVar4;
  lVar1 = _DAT_112ebacb0;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10272aa44();
  *(undefined **)(lVar3 + lVar1) = puVar5;
  lVar1 = _DAT_112ebacb8;
  func_0x00010272ab44();
  *(undefined **)(lVar3 + lVar1) = puVar6;
  *(undefined8 *)(lVar3 + _DAT_112ebacc0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ebacc8) = uStack_68;
  *(undefined8 *)(lVar3 + _DAT_112ebacd0) = uStack_70;
  *(undefined8 *)(lVar3 + _DAT_112ebacd8) = uStack_78;
  FUN_10272ac40(auStack_a8,lVar3 + _DAT_112ebace0);
  *(undefined8 *)(lVar3 + _DAT_112ebace8) = uStack_b0;
  *(undefined8 *)(lVar3 + _DAT_112ebacf0) = uStack_b8;
  *(undefined8 *)(lVar3 + _DAT_112ebacf8) = uVar8;
  puVar6 = PTR_s_init_1125d9248;
  lStack_c8 = lVar3;
  lStack_c0 = lVar2;
  func_0x000107c6157c(uVar8);
  plVar7 = &lStack_c8;
  func_0x000107c61154(plVar7,puVar6);
  FUN_102686c5c(auStack_a8);
  *param_1 = (long)plVar7;
  return;
}



/* Entry: 10272488c; end: 1027249df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10272488c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112ebaca8;
  uVar2 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112ebacb0;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_10272aa44();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112ebacb8;
  func_0x00010272ab44();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112ebacc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ebacc8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebacd0) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebacd8) = param_3;
  FUN_10272ac40(param_4,unaff_x20 + _DAT_112ebace0);
  *(undefined8 *)(unaff_x20 + _DAT_112ebace8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ebacf0) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ebacf8) = param_7;
  puVar5 = auStack_70;
  func_0x000107c61154(puVar5,PTR_s_init_1125d9248);
  FUN_102686c5c(param_4);
  return puVar5;
}



/* Entry: 1027249e0; end: 102724a13; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider visitRemovedObservable] */

void FUN_1027249e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102724a14();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102724a14; end: 102724aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102724a14(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  lVar1 = _DAT_112ebacc0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ebacc0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000100083b20(&uStack_38);
    FUN_10272edbc();
    func_0x000107c61574(uStack_38);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174(lVar2);
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 102724aac; end: 102724adf; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider setVisitRemovedObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102724aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebacc0);
  *(undefined8 *)(param_1 + _DAT_112ebacc0) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102724ae0; end: 102724aff;  */

void FUN_102724ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102724b00,0,0);
  return;
}



/* Entry: 102724b00; end: 102724c83;  */

void FUN_102724b00(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x10,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x50) = lVar8;
  if (lVar8 != 0) {
    plVar4 = (long *)0xd0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_102724c84;
    lVar1 = *(long *)(unaff_x22 + 0x30);
    plVar4[0x14] = *(long *)(unaff_x22 + 0x38);
    plVar4[0x15] = lVar8;
    plVar4[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102724f88,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  func_0x000107c602fc(0x2c);
  func_0x000107c6142c(0xe000000000000000);
  uVar7 = 0;
  func_0x000107c60714(uVar6,0);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar7);
  func_0x000107c5fb78(0xd000000000000027,0x800000010f0b8c70);
  func_0x000107c5fb78(uVar5,uVar3);
  uVar5 = 0x5b;
  FUN_102724e0c(0x5b,0xe100000000000000);
  func_0x000107c6142c(0xe100000000000000);
  func_0x000107c61174(uVar5);
  uVar6 = uVar5;
  func_0x000107c5ed2c();
  func_0x000107c61170(uVar5);
  func_0x000107c43b70(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000102724c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102724c84; end: 102724cd3;  */

void FUN_102724c84(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x60) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102724cd4,0,0);
  return;
}



/* Entry: 102724cd4; end: 102724e0b;  */

void FUN_102724cd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x60);
  if (lVar6 == 0) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x50));
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000107c602fc(0x2c);
    func_0x000107c6142c(0xe000000000000000);
    uVar5 = 0;
    func_0x000107c60714(uVar3,0);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar5);
    func_0x000107c5fb78(0xd000000000000027,0x800000010f0b8c70);
    func_0x000107c5fb78(uVar2,uVar4);
    lVar7 = 0x5b;
    FUN_102724e0c(0x5b,0xe100000000000000);
    func_0x000107c6142c(0xe100000000000000);
    func_0x000107c61174(lVar7);
    lVar6 = lVar7;
    func_0x000107c5ed2c();
    func_0x000107c61170(lVar7);
    func_0x000107c43b70(uVar1);
  }
  else {
    func_0x000107c43b74(*(undefined8 *)(unaff_x22 + 0x40),param_2,lVar6);
    lVar7 = *(long *)(unaff_x22 + 0x50);
  }
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar7);
                    /* WARNING: Could not recover jumptable at 0x000102724e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102724e0c; end: 102724f6b;  */

undefined * FUN_102724e0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 unaff_x20;
  undefined1 auStack_a0 [80];
  
  puVar7 = auStack_a0;
  uVar6 = 0;
  func_0x000107c60714();
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  func_0x000107c5faec();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  puVar1 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined1 **)(lVar2 + 0x28) = puVar7;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  *(undefined8 *)(lVar2 + 0x38) = param_2;
  func_0x000107c61434(param_2);
  lVar4 = lVar2;
  func_0x000100214a84(lVar2);
  func_0x000107c61588(lVar2);
  FUN_10272b374((undefined8 *)(lVar2 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
  puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
  func_0x000107c5fadc(unaff_x20,uVar6);
  func_0x000107c6142c(uVar6);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,puVar1,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar4);
  func_0x000107c466bc(puVar5);
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(lVar2);
  return puVar5;
}



/* Entry: 102724f6c; end: 102724f87;  */

void FUN_102724f6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102724f88,0,0);
  return;
}



/* Entry: 102724f88; end: 102725133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102724f88(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  long lVar5;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0xa8) + _DAT_112ebacd0);
  func_0x000107c4e7e4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xb0) = lVar2;
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(unaff_x22 + 0xa8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x22 + 0xa0));
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
    FUN_10272ac40(lVar1 + _DAT_112ebace0,unaff_x22 + 0x50);
    lVar1 = unaff_x22 + 0x70;
    func_0x000107c61618();
    lVar5 = *(long *)(unaff_x22 + 0x78);
    FUN_102686c5c(unaff_x22 + 0x50);
    lVar4 = lVar1;
    if (lVar1 != 0) {
      func_0x000107c614f0();
      (**(code **)(lVar5 + 8))();
      func_0x000107c615e8(lVar1);
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      else {
        func_0x000107c5fadc(lVar4,lVar5);
        func_0x000107c6142c(lVar5);
      }
    }
    *(long *)(unaff_x22 + 0xc0) = lVar4;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102725134;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    uVar3 = 0x112ebad90;
    func_0x0001000285a8(0x112ebad90,&UNK_10dad3660);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(long *)(unaff_x22 + 0x70) = lVar1;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1027285cc;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1105413b0;
    func_0x000107c43228(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010272508c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102725134; end: 10272518b;  */

void FUN_102725134(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 200) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10272518c;
  }
  else {
    pcVar1 = FUN_1027251e0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10272518c; end: 1027251df;  */

void FUN_10272518c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001027251dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 1027251e0; end: 10272524b;  */

void FUN_1027251e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61654();
  func_0x000107c614ac(uVar3);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102725248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10272524c; end: 102725387; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider getPlaceProfileDataWithPlaceId:] */

void FUN_10272524c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar4 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puVar2 = &UNK_110540fb8;
  func_0x000107c613fc(&UNK_110540fb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_110541140;
  func_0x000107c613fc(&UNK_110541140,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  *(undefined8 *)(puVar3 + 0x30) = uVar4;
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar1);
  uVar4 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3570,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102725388; end: 1027253a3;  */

void FUN_102725388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027253a4,0,0);
  return;
}



/* Entry: 1027253a4; end: 10272548f;  */

void FUN_1027253a4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x48) = lVar6;
  if (lVar6 != 0) {
    plVar4 = (long *)0x110;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_102725490;
    lVar1 = *(long *)(unaff_x22 + 0x30);
    plVar4[0x1c] = *(long *)(unaff_x22 + 0x38);
    plVar4[0x1d] = lVar6;
    plVar4[0x1b] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102725608,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar5 = PTR_PTR_1126b2020;
  func_0x000107c610f8(PTR_PTR_1126b2020);
  func_0x000107c5fadc(uVar7,uVar2);
  func_0x000107c47ec4(puVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c43b74(uVar3);
  func_0x000107c61170(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010272548c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102725490; end: 1027254df;  */

void FUN_102725490(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x58) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027254e0,0,0);
  return;
}



/* Entry: 1027254e0; end: 1027255eb;  */

void FUN_1027254e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar3 = *(long *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  if (lVar3 == 0) {
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
    puVar2 = PTR_PTR_1126b2020;
    func_0x000107c610f8(PTR_PTR_1126b2020);
    func_0x000107c5fadc(uVar5,uVar4);
    func_0x000107c47ec4(puVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c43b74(uVar1);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
    puVar2 = PTR_PTR_1126b2020;
    func_0x000107c610f8(PTR_PTR_1126b2020);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c47ec4(puVar2);
    func_0x000107c61170(uVar6);
    func_0x000107c54f08(puVar2);
    func_0x000107c43b74(uVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001027255e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027255ec; end: 102725607;  */

void FUN_1027255ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xe8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102725608,0,0);
  return;
}



/* Entry: 102725608; end: 10272566f;  */

void FUN_102725608(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_102725670;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_10272868c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 102725670; end: 1027256af;  */

void FUN_102725670(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027256b0,0,0);
  return;
}



/* Entry: 1027256b0; end: 1027257df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027256b0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0xf0) = *(long *)(unaff_x22 + 0x90);
  if (*(long *)(unaff_x22 + 0x90) == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(unaff_x22 + 0xe8) + _DAT_112ebacd0);
    func_0x000107c4e7e4();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xf8) = lVar2;
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
      func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x22 + 0xe0));
      *(undefined8 *)(unaff_x22 + 0x100) = uVar3;
      *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0xd0;
      *(long *)(unaff_x22 + 0x50) = unaff_x22;
      *(code **)(unaff_x22 + 0x58) = FUN_1027257e0;
      lVar1 = unaff_x22 + 0x50;
      func_0x000107c61448(lVar1,1);
      uVar3 = 0x112ebad88;
      func_0x0001000285a8(0x112ebad88,&UNK_10dad3650);
      *(undefined8 *)(unaff_x22 + 200) = uVar3;
      *(long *)(unaff_x22 + 0xb0) = lVar1;
      *(undefined **)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
      *(code **)(unaff_x22 + 0xa0) = FUN_102728678;
      *(undefined **)(unaff_x22 + 0xa8) = &UNK_110541338;
      func_0x000107c43220(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  }
                    /* WARNING: Could not recover jumptable at 0x0001027257dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 1027257e0; end: 102725837;  */

void FUN_1027257e0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x70);
  *(long *)(*unaff_x22 + 0x108) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_102725838;
  }
  else {
    pcVar1 = FUN_1027258c8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102725838; end: 1027258c7;  */

void FUN_102725838(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xf8));
  func_0x000107c61170(uVar2);
  uVar1 = 0;
  FUN_10272b3bc(0,0x112ea3ef8,&PTR_PTR_1126cd848);
  uVar2 = uVar4;
  func_0x000107c5fc48(uVar4,uVar1);
  func_0x000107c6142c(uVar4);
  func_0x000107c57388(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001027258c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xf0));
  return;
}



/* Entry: 1027258c8; end: 10272592b;  */

void FUN_1027258c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
  func_0x000107c61654();
  func_0x000107c614ac(uVar2);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102725928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0xf0));
  return;
}



/* Entry: 10272592c; end: 10272595b; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider getGooglePlaceDataWithPlaceId:] */

void FUN_10272592c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = &UNK_110541118;
  func_0x000107c5faec();
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puVar2 = &UNK_110540fb8;
  func_0x000107c613fc(&UNK_110540fb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_110541118,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar1);
  uVar4 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3568,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10272595c; end: 102725acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272595c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  long *plVar7;
  
  lVar5 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar5 + 0x10,unaff_x22 + 0x10,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x60) = lVar5;
  lVar6 = _DAT_112ebacb0;
  if (lVar5 == 0) {
LAB_102725a20:
                    /* WARNING: Could not recover jumptable at 0x000102725a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c61428(lVar5 + _DAT_112ebacb0,unaff_x22 + 0x28,0x20,0);
  lVar6 = *(long *)(lVar5 + lVar6);
  if (*(long *)(lVar6 + 0x10) != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x48);
    uVar4 = *(ulong *)(unaff_x22 + 0x50);
    func_0x000107c61434(lVar6);
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + lVar2 * 8);
      func_0x000107c61174(uVar3);
      func_0x000107c614a8(unaff_x22 + 0x28);
      func_0x000107c6142c(lVar6);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
      func_0x000107c43b74(*(undefined8 *)(unaff_x22 + 0x58));
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar3);
      goto LAB_102725a20;
    }
    func_0x000107c6142c(lVar6);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c614a8(unaff_x22 + 0x28);
  lVar6 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0x68) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  *(undefined8 *)(lVar6 + 0x20) = uVar1;
  *(undefined8 *)(lVar6 + 0x28) = uVar3;
  plVar7 = (long *)0xc0;
  func_0x000107c61434(uVar3);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102725acc;
  plVar7[0x13] = lVar6;
  plVar7[0x14] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102725c00,0,0);
  return;
}



/* Entry: 102725acc; end: 102725b23;  */

void FUN_102725acc(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x68);
  *(undefined8 *)(lVar2 + 0x78) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102725b24,0,0);
  return;
}



/* Entry: 102725b24; end: 102725be7;  */

void FUN_102725b24(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x78);
  if (*(long *)(lVar5 + 0x10) != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x48);
    uVar4 = *(ulong *)(unaff_x22 + 0x50);
    func_0x000107c61434(lVar5);
    func_0x000100029284();
    lVar5 = *(long *)(unaff_x22 + 0x78);
    if ((uVar4 & 1) != 0) {
      puVar3 = *(undefined **)(*(long *)(lVar5 + 0x38) + lVar2 * 8);
      func_0x000107c61174(puVar3);
      func_0x000107c61430(lVar5,2);
      goto LAB_102725bb4;
    }
    func_0x000107c6142c(lVar5);
    lVar5 = *(long *)(unaff_x22 + 0x78);
  }
  func_0x000107c6142c(lVar5);
  puVar3 = PTR_PTR_1126aadf8;
  func_0x000107c610f8(PTR_PTR_1126aadf8);
  func_0x000107c47b3c(0);
LAB_102725bb4:
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c43b74(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000102725be4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102725be8; end: 102725bff;  */

void FUN_102725be8(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102725c00,0,0);
  return;
}



/* Entry: 102725c00; end: 102725d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102725c00(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0xa0) + _DAT_112ebacd8);
  func_0x000107c4f0f8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa8) = lVar2;
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c5fc48(uVar3,PTR___sSSN_11034da80);
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102725d30;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    uVar3 = 0x112ebad60;
    func_0x0001000285a8(0x112ebad60,&UNK_10dad3600);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1027287c4;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1105411d0;
    *(long *)(unaff_x22 + 0x70) = lVar1;
    func_0x000107c43240(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_10272aa44(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x000102725d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102725d30; end: 102725d87;  */

void FUN_102725d30(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xb8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_102725d88;
  }
  else {
    pcVar1 = FUN_102725de8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102725d88; end: 102725de7;  */

void FUN_102725d88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb0));
  uVar2 = uVar3;
  FUN_1027287d8(uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102725de4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 102725de8; end: 102725e53;  */

void FUN_102725de8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61654();
  func_0x000107c615e8(uVar3);
  func_0x000107c614ac(uVar2);
  func_0x000107c61170(uVar1);
  FUN_10272aa44(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x000102725e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102725e54; end: 102725e87; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider getPlaceStoryThumbnailWithPlaceId:] */

void FUN_102725e54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = &UNK_1105410f0;
  func_0x000107c5faec();
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puVar2 = &UNK_110540fb8;
  func_0x000107c613fc(&UNK_110540fb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_1105410f0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar1);
  uVar4 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3560,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102725e88; end: 102725f73;  */

void FUN_102725e88(void)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x60) = lVar6;
  if (lVar6 != 0) {
    plVar2 = (long *)0xc0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102725f74;
    uVar1 = *(undefined4 *)(unaff_x22 + 0x70);
    lVar7 = *(long *)(unaff_x22 + 0x40);
    lVar8 = *(long *)(unaff_x22 + 0x48);
    plVar2[0x13] = lVar6;
    *(undefined4 *)(plVar2 + 0x17) = uVar1;
    plVar2[0x11] = lVar7;
    plVar2[0x12] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1027260ac,0,0);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_10272ac8c();
  uVar3 = 0xd000000000000018;
  FUN_102724e0c(0xd000000000000018,0x800000010f0b8c50);
  uVar4 = uVar3;
  func_0x000107c5ed2c();
  func_0x000107c43b70(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102725f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102725f74; end: 102725fcf;  */

void FUN_102725f74(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined1 *)(lVar2 + 0x38) = param_2;
  *(long **)(lVar2 + 0x28) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined1 *)(lVar2 + 0x74) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102725fd0,0,0);
  return;
}



/* Entry: 102725fd0; end: 10272608b;  */

void FUN_102725fd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  if (*(char *)(unaff_x22 + 0x74) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    FUN_10272ac8c();
    puVar1 = (undefined *)0xd000000000000018;
    FUN_102724e0c(0xd000000000000018,0x800000010f0b8c50);
    puVar2 = puVar1;
    func_0x000107c5ed2c();
    func_0x000107c43b70(uVar3);
    func_0x000107c61170(puVar1);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(uVar4);
    func_0x000107c43b74(uVar3);
  }
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000102726088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272608c; end: 1027260ab;  */

void FUN_10272608c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined4 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027260ac,0,0);
  return;
}



/* Entry: 1027260ac; end: 10272629b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027260ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x22;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = *(long *)(*(long *)(*(long *)(unaff_x22 + 0x98) + _DAT_112ebacc8) + _DAT_112fa96f0);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  if (lVar1 != 0) {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x98) + _DAT_112ebacf0);
    func_0x000107c4b8d8();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = lVar3;
      func_0x000107c4b88c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      if (lVar2 != 0) {
        uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
        func_0x000107c4077c(lVar2);
        func_0x000107c61170(lVar2);
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_10272629c;
        lVar3 = unaff_x22 + 0x10;
        func_0x000107c61448(lVar3,1);
        puVar4 = &UNK_1105412f8;
        func_0x000107c613fc(&UNK_1105412f8,0x18,7);
        puVar5 = (undefined8 *)(unaff_x22 + 0x50);
        *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
        *(long *)(puVar4 + 0x10) = lVar3;
        *(code **)(unaff_x22 + 0x70) = FUN_10272b3b4;
        *(undefined **)(unaff_x22 + 0x78) = puVar4;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x60) = &UNK_10111ef28;
        *(undefined **)(unaff_x22 + 0x68) = &UNK_110541310;
        func_0x000107c60bc4(puVar5);
        func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
        func_0x000107c44270(param_1,param_2,uVar7,uVar6,lVar1);
        func_0x000107c60bd0(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
        return;
      }
    }
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102726298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,1);
  return;
}



/* Entry: 10272629c; end: 102726307;  */

void FUN_10272629c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa8) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xb0) = *(undefined8 *)(lVar2 + 0x80);
    pcVar1 = FUN_102726308;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_102726464;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102726308; end: 102726463;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102726308(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  if (lVar5 == 0) {
    func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa0));
    uVar3 = 1;
    uVar6 = 0;
  }
  else {
    uVar4 = *(ulong *)(lVar5 + _DAT_112fa97b8);
    if (uVar4 >> 0x3e == 0) {
      uVar2 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar2 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar2 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar2 == 0) {
      func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa0));
      func_0x000107c61170(lVar5);
      uVar3 = 0;
      uVar6 = 0xbff0000000000000;
    }
    else {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102726464);
          (*pcVar1)();
        }
        lVar7 = *(long *)(uVar4 + 0x20);
        func_0x000107c61434(uVar4);
        func_0x000107c61174();
      }
      else {
        func_0x000107c61434(uVar4);
        lVar7 = 0;
        func_0x00010111c37c(0,uVar4);
      }
      func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa0));
      func_0x000107c61170(lVar5);
      func_0x000107c6142c(uVar4);
      lVar5 = *(long *)(lVar7 + _DAT_112fa9758);
      func_0x000107c61174();
      func_0x000107c61170(lVar7);
      lVar7 = *(long *)(lVar5 + _DAT_112fa98a8);
      func_0x000107c61174();
      func_0x000107c61170(lVar5);
      uVar6 = *(undefined8 *)(lVar7 + _DAT_112fa98e8);
      func_0x000107c61170(lVar7);
      uVar3 = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000102726444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar6,uVar3);
  return;
}



/* Entry: 102726464; end: 1027264a3;  */

void FUN_102726464(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001027264a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,1);
  return;
}



/* Entry: 1027264a4; end: 1027265c3; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider getETATimeWithPlaceLat:placeLng:routeMode:] */

void FUN_1027264a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174(param_3);
  func_0x000107c453e4();
  puVar2 = &UNK_110540fb8;
  func_0x000107c613fc(&UNK_110540fb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_3);
  puVar3 = &UNK_1105410c8;
  func_0x000107c613fc(&UNK_1105410c8,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  *(undefined4 *)(puVar3 + 0x28) = param_5;
  *(undefined **)(puVar3 + 0x30) = puVar1;
  func_0x000107c61174(puVar1);
  uVar4 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3558,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1027265c4; end: 1027265df;  */

void FUN_1027265c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027265e0,0,0);
  return;
}



/* Entry: 1027265e0; end: 1027267d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027265e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  long *plVar10;
  
  lVar8 = *(long *)(unaff_x22 + 0x40);
  func_0x000107c61428(lVar8 + 0x10,unaff_x22 + 0x10,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x60) = lVar8;
  lVar9 = _DAT_112ebacb8;
  if (lVar8 == 0) {
LAB_102726720:
                    /* WARNING: Could not recover jumptable at 0x000102726738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000107c61428(lVar8 + _DAT_112ebacb8,unaff_x22 + 0x28,0x20,0);
  lVar9 = *(long *)(lVar8 + lVar9);
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar3 = *(long *)(unaff_x22 + 0x48);
    uVar6 = *(ulong *)(unaff_x22 + 0x50);
    func_0x000107c61434(lVar9);
    func_0x000100029284();
    if ((uVar6 & 1) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + lVar3 * 8);
      func_0x000107c61434(uVar7);
      func_0x000107c614a8(unaff_x22 + 0x28);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
      func_0x000107c6142c(lVar9);
      uVar4 = uVar7;
      FUN_102726960(uVar7,0x10271f880,0x112ebac08,&PTR_PTR_1126b1ee0);
      func_0x000107c6142c(uVar7);
      puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
      uVar7 = uVar4;
      func_0x000107c5fc48(uVar4,PTR___sypN_11034f1a8 + 8);
      func_0x000107c6142c(uVar4);
      func_0x000107c45788(puVar5);
      func_0x000107c61170(uVar7);
      func_0x000107c43b74(uVar1);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(puVar5);
      goto LAB_102726720;
    }
    func_0x000107c6142c(lVar9);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c614a8(unaff_x22 + 0x28);
  lVar9 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(long *)(unaff_x22 + 0x68) = lVar9;
  *(undefined8 *)(lVar9 + 0x18) = 2;
  *(undefined8 *)(lVar9 + 0x10) = 1;
  *(undefined8 *)(lVar9 + 0x20) = uVar1;
  *(undefined8 *)(lVar9 + 0x28) = uVar2;
  plVar10 = (long *)0xc0;
  func_0x000107c61434(uVar2);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1027267d4;
  plVar10[0x13] = lVar9;
  plVar10[0x14] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102726b60,0,0);
  return;
}



/* Entry: 1027267d4; end: 10272682b;  */

void FUN_1027267d4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x68);
  *(undefined8 *)(lVar2 + 0x78) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272682c,0,0);
  return;
}



/* Entry: 10272682c; end: 10272695f;  */

void FUN_10272682c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puVar8;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x78);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(long *)(lVar3 + 0x10) != 0) {
    lVar3 = *(long *)(unaff_x22 + 0x48);
    uVar6 = *(ulong *)(unaff_x22 + 0x50);
    func_0x000107c61434();
    func_0x000100029284();
    lVar7 = *(long *)(unaff_x22 + 0x78);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if ((uVar6 & 1) != 0) {
      puVar8 = *(undefined **)(*(long *)(lVar7 + 0x38) + lVar3 * 8);
      func_0x000107c61434(puVar8);
    }
    func_0x000107c6142c(lVar7);
    lVar3 = *(long *)(unaff_x22 + 0x78);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x000107c6142c(lVar3);
  puVar4 = puVar8;
  FUN_102726960(puVar8,0x10271f880,0x112ebac08,&PTR_PTR_1126b1ee0);
  func_0x000107c6142c(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar5 = puVar4;
  func_0x000107c5fc48(puVar4,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar4);
  func_0x000107c45788(puVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c43b74(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010272695c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102726960; end: 102726b47;  */

undefined * FUN_102726960(ulong param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102726b48);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_10272b3bc(0,param_3,param_4);
      puVar1 = PTR___sypN_11034f1a8;
      puVar7 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar7;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar8 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar8 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar8 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar8 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        (*param_2)(uVar8,param_1);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_10272b3bc(0,param_3,param_4);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar8);
    }
  }
  return puVar6;
}



/* Entry: 102726b48; end: 102726b5f;  */

void FUN_102726b48(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102726b60,0,0);
  return;
}



/* Entry: 102726b60; end: 102726c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102726b60(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0xa0) + _DAT_112ebacd0);
  func_0x000107c4e7b4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa8) = lVar2;
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c5fc48(uVar3,PTR___sSSN_11034da80);
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102726c88;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    uVar3 = 0x112ebad50;
    func_0x0001000285a8(0x112ebad50,&UNK_10dad35e0);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_102728ba4;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1105411a8;
    *(long *)(unaff_x22 + 0x70) = lVar1;
    func_0x000107c43224(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x00010272ab44(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x000102726c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102726c88; end: 102726cdf;  */

void FUN_102726c88(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xb8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_102726ce0;
  }
  else {
    pcVar1 = FUN_102726d20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102726ce0; end: 102726d1f;  */

void FUN_102726ce0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xa8));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102726d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Entry: 102726d20; end: 102726d8b;  */

void FUN_102726d20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61654();
  func_0x000107c615e8(uVar3);
  func_0x000107c614ac(uVar2);
  func_0x000107c61170(uVar1);
  func_0x00010272ab44(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x000102726d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102726d8c; end: 102726dbb; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider getPlacePivotsDataWithPlaceId:] */

void FUN_102726d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = &UNK_1105410a0;
  func_0x000107c5faec();
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puVar2 = &UNK_110540fb8;
  func_0x000107c613fc(&UNK_110540fb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_1105410a0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar1);
  uVar4 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3550,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102726dbc; end: 102726ea3;  */

void FUN_102726dbc(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x48) = lVar6;
  if (lVar6 != 0) {
    plVar2 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102726ea4;
    lVar1 = *(long *)(unaff_x22 + 0x30);
    plVar2[0xc] = *(long *)(unaff_x22 + 0x38);
    plVar2[0xd] = lVar6;
    plVar2[0xb] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102726fb0,0,0);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_10272ac8c();
  uVar3 = 0xd00000000000001d;
  FUN_102724e0c(0xd00000000000001d,0x800000010f0b8c30);
  uVar4 = uVar3;
  func_0x000107c5ed2c();
  func_0x000107c43b70(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102726ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102726ea4; end: 102726efb;  */

void FUN_102726ea4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar2 + 0x58) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102726efc,0,0);
  return;
}



/* Entry: 102726efc; end: 102726f93;  */

void FUN_102726efc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  if (lVar3 == 0) {
    FUN_10272ac8c();
    lVar1 = -0x2fffffffffffffe3;
    FUN_102724e0c(0xd00000000000001d,0x800000010f0b8c30);
    lVar3 = lVar1;
    func_0x000107c5ed2c();
    func_0x000107c43b70(uVar2);
    func_0x000107c61170(lVar1);
  }
  else {
    func_0x000107c43b74(uVar2,param_2,lVar3);
  }
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x000102726f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102726f94; end: 102726faf;  */

void FUN_102726f94(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102726fb0,0,0);
  return;
}



/* Entry: 102726fb0; end: 1027270ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102726fb0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x68);
  uVar1 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  uVar3 = *(undefined8 *)(lVar4 + _DAT_112ebaca8);
  *(undefined8 *)(lVar4 + _DAT_112ebaca8) = uVar1;
  func_0x000107c61574(uVar3);
  lVar2 = *(long *)(lVar4 + _DAT_112ebace8);
  func_0x000107c4f3e4();
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x70) = lVar4;
  func_0x000107c61170(lVar2);
  if (lVar4 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1027270ac;
    func_0x000107c61448(unaff_x22 + 0x10,0);
    FUN_102728e40();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001027270a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1027270ac; end: 10272711f;  */

void FUN_1027270ac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1027270ec,0,0);
  return;
}



/* Entry: 102727120; end: 10272714f; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider getBusinessProfileDataWithBusinessId:] */

void FUN_102727120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = &UNK_110541078;
  func_0x000107c5faec();
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puVar2 = &UNK_110540fb8;
  func_0x000107c613fc(&UNK_110540fb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_110541078,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar1);
  uVar4 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3548,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102727150; end: 10272729f;  */

void FUN_102727150(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x48) = lVar4;
  if (lVar4 != 0) {
    plVar2 = (long *)0xd0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x102727208;
    lVar1 = *(long *)(unaff_x22 + 0x30);
    plVar2[0x14] = *(long *)(unaff_x22 + 0x38);
    plVar2[0x15] = lVar4;
    plVar2[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1027272bc,0,0);
    return;
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
  func_0x000107c43b74(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000102727204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027272a0; end: 1027272bb;  */

void FUN_1027272a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027272bc,0,0);
  return;
}



/* Entry: 1027272bc; end: 102727447;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027272bc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0xa8) + _DAT_112ebacd8);
  func_0x000107c4f0f8();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
    lVar2 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 2;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined8 *)(lVar2 + 0x20) = uVar5;
    *(undefined8 *)(lVar2 + 0x28) = uVar1;
    func_0x000107c61434(uVar1);
    lVar4 = lVar2;
    func_0x000107c5fc48(lVar2,PTR___sSSN_11034da80);
    *(long *)(unaff_x22 + 0xb8) = lVar4;
    func_0x000107c61574(lVar2);
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102727448;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,1);
    uVar5 = 0x112ebad78;
    func_0x0001000285a8(0x112ebad78,&UNK_10dad3630);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_102728c70;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110541220;
    *(long *)(unaff_x22 + 0x70) = lVar2;
    func_0x000107c43204(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
                    /* WARNING: Could not recover jumptable at 0x000102727444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102727448; end: 10272749f;  */

void FUN_102727448(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xc0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1027274a0;
  }
  else {
    pcVar1 = FUN_102727564;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1027274a0; end: 102727563;  */

void FUN_1027274a0(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
  if (*(long *)(lVar4 + 0x10) == 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x98);
    uVar2 = *(ulong *)(unaff_x22 + 0xa0);
    func_0x000107c61434(lVar4);
    func_0x000100029284();
    uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
    if ((uVar2 & 1) != 0) {
      func_0x000107c61174(*(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar1 * 8));
      func_0x000107c61430(lVar4,2);
      func_0x000107c615e8(uVar3);
      goto LAB_10272754c;
    }
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c6142c(lVar4);
  func_0x000107c615e8(uVar3);
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
LAB_10272754c:
                    /* WARNING: Could not recover jumptable at 0x000102727560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102727564; end: 1027275d7;  */

void FUN_102727564(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61654();
  func_0x000107c615e8(uVar3);
  func_0x000107c614ac(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ed0();
                    /* WARNING: Could not recover jumptable at 0x0001027275d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027275d8; end: 102727607; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider getNumRankedStorySnapsWithPlaceId:] */

void FUN_1027275d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = &UNK_110541050;
  func_0x000107c5faec();
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puVar2 = &UNK_110540fb8;
  func_0x000107c613fc(&UNK_110540fb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_110541050,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar1);
  uVar4 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3540,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102727608; end: 1027276ef;  */

void FUN_102727608(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x48) = lVar6;
  if (lVar6 != 0) {
    plVar2 = (long *)0xd0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1027276f0;
    lVar1 = *(long *)(unaff_x22 + 0x30);
    plVar2[0x14] = *(long *)(unaff_x22 + 0x38);
    plVar2[0x15] = lVar6;
    plVar2[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102727870,0,0);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_10272ac8c();
  uVar3 = 0xd000000000000024;
  FUN_102724e0c(0xd000000000000024,0x800000010f0b8c00);
  uVar4 = uVar3;
  func_0x000107c5ed2c();
  func_0x000107c43b70(uVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001027276ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027276f0; end: 102727747;  */

void FUN_1027276f0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar2 + 0x58) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102727748,0,0);
  return;
}



/* Entry: 102727748; end: 102727853;  */

void FUN_102727748(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x58);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  if (lVar5 == 0) {
    FUN_10272ac8c();
    puVar2 = (undefined *)0xd000000000000024;
    FUN_102724e0c(0xd000000000000024,0x800000010f0b8c00);
    puVar3 = puVar2;
    func_0x000107c5ed2c();
    func_0x000107c43b70(uVar4);
    func_0x000107c61170(puVar2);
  }
  else {
    lVar1 = lVar5;
    FUN_102726960(lVar5,0x10271fa64,0x112ebabf8,&PTR_PTR_1126b1ef8);
    func_0x000107c6142c(lVar5);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    lVar5 = lVar1;
    func_0x000107c5fc48(lVar1,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(lVar1);
    func_0x000107c45788(puVar3);
    func_0x000107c61170(lVar5);
    func_0x000107c43b74(uVar4);
  }
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x000102727850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102727854; end: 10272786f;  */

void FUN_102727854(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102727870,0,0);
  return;
}



/* Entry: 102727870; end: 102727997;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102727870(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0xa8) + _DAT_112ebacd8);
  func_0x000107c4f0f8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xb0) = lVar2;
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x22 + 0xa0));
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102727998;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    uVar3 = 0x112ebad70;
    func_0x0001000285a8(0x112ebad70,&UNK_10dad3620);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_102728d60;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1105411f8;
    *(long *)(unaff_x22 + 0x70) = lVar1;
    func_0x000107c43248(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000102727994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102727998; end: 1027279ef;  */

void FUN_102727998(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xc0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1027279f0;
  }
  else {
    pcVar1 = FUN_102727cac;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1027279f0; end: 102727cab;  */

void FUN_1027279f0(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x22;
  ulong uVar14;
  
  uVar12 = *(ulong *)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
  uVar14 = uVar12 & 0xffffffffffffff8;
  if (uVar12 >> 0x3e == 0) {
    uVar10 = *(ulong *)(uVar14 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar10 = uVar14;
    if (0x7fffffffffffffff < uVar12) {
      uVar10 = uVar12;
    }
    func_0x000107c60480();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
  if (uVar10 != 0) {
    uVar6 = 0;
LAB_102727a70:
    do {
      if ((uVar12 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar14 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102727c54);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(uVar12 + uVar6 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar6;
        FUN_10271fa50(uVar6,uVar12);
      }
      if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102727c50);
        (*pcVar1)();
      }
      uVar13 = uVar6 + 1;
      func_0x000107c61174();
      uVar3 = uVar2;
      func_0x000107c5d7e8();
      func_0x000107c61180();
      uVar4 = uVar2;
      if (uVar3 != 0) {
        func_0x000107c3ee34();
        func_0x000107c61180();
        if (uVar4 != 0) {
          func_0x000107c4a6d0(uVar2);
          puVar5 = PTR_PTR_1126b1ef8;
          func_0x000107c610f8();
          func_0x000107c48ce8();
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar3);
          uVar6 = uVar2;
          func_0x000107c40cb8(uVar2);
          func_0x000107c61180();
          func_0x000107c53b18(puVar5);
          func_0x000107c61170(uVar6);
          func_0x000107c49ee0(uVar2);
          puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
          func_0x000107c45a48();
          func_0x000107c556b8(puVar5);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uVar2);
          puVar8 = puVar9;
          func_0x000107c61550();
          if (((((ulong)puVar8 & 1) == 0) || ((long)puVar9 < 0)) ||
             (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar9 >> 0x3e == 0) {
              puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar9) {
                puVar7 = puVar9;
              }
              func_0x000107c60480(puVar7);
            }
            puVar8 = (undefined *)0x0;
            FUN_10272a804(0,puVar7 + 1,1,puVar9);
          }
          uVar2 = (ulong)puVar8 & 0xffffffffffffff8;
          uVar6 = *(ulong *)(uVar2 + 0x10);
          puVar9 = puVar8;
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar6) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar2 + 0x18));
            FUN_10272a804(puVar9,uVar6 + 1,1,puVar8);
            uVar2 = (ulong)puVar9 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar2 + 0x10) = uVar6 + 1;
          *(undefined **)(uVar2 + uVar6 * 8 + 0x20) = puVar5;
          uVar6 = uVar13;
          if (uVar13 == uVar10) break;
          goto LAB_102727a70;
        }
        func_0x000107c61170(uVar2);
        uVar4 = uVar3;
      }
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar2);
      uVar6 = uVar6 + 1;
    } while (uVar13 != uVar10);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c6142c(uVar12);
  func_0x000107c615e8(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000102727ca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar9);
  return;
}



/* Entry: 102727cac; end: 102727d0f;  */

void FUN_102727cac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61654();
  func_0x000107c615e8(uVar3);
  func_0x000107c614ac(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102727d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 102727d10; end: 102727d3f; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider getRankedStoryThumbnailsWithPlaceId:] */

void FUN_102727d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = &UNK_110541028;
  func_0x000107c5faec();
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puVar2 = &UNK_110540fb8;
  func_0x000107c613fc(&UNK_110540fb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_110541028,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar1);
  uVar4 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3538,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102727d40; end: 102727e6b;  */

void FUN_102727d40(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x48) = lVar6;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar6 != 0) {
    plVar2 = (long *)0xd0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x50) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_102727e6c;
    lVar1 = *(long *)(unaff_x22 + 0x30);
    plVar2[0x14] = *(long *)(unaff_x22 + 0x38);
    plVar2[0x15] = lVar6;
    plVar2[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102727fa0,0,0);
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102726960(PTR___swiftEmptyArrayStorage_11034f1c8,0x10271fa78,0x112ebabf0,&PTR_PTR_1126b20f0);
  func_0x000107c6142c(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  puVar5 = puVar3;
  func_0x000107c5fc48(puVar3,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar3);
  func_0x000107c45788(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c43b74(uVar7);
  func_0x000107c61170(puVar4);
                    /* WARNING: Could not recover jumptable at 0x000102727e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102727e6c; end: 102727ec3;  */

void FUN_102727e6c(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x48);
  *(undefined8 *)(lVar2 + 0x58) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102727ec4,0,0);
  return;
}



/* Entry: 102727ec4; end: 102727f83;  */

void FUN_102727ec4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = uVar4;
  FUN_102726960(uVar4,0x10271fa78,0x112ebabf0,&PTR_PTR_1126b20f0);
  func_0x000107c6142c(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  uVar4 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar1);
  func_0x000107c45788(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c43b74(uVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x000102727f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102727f84; end: 102727f9f;  */

void FUN_102727f84(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102727fa0,0,0);
  return;
}



/* Entry: 102727fa0; end: 102728157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102727fa0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  long lVar5;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0xa8) + _DAT_112ebacd0);
  func_0x000107c4e7e4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xb0) = lVar2;
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = *(long *)(unaff_x22 + 0xa8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c5fadc(uVar3,*(undefined8 *)(unaff_x22 + 0xa0));
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
    FUN_10272ac40(lVar1 + _DAT_112ebace0,unaff_x22 + 0x50);
    lVar1 = unaff_x22 + 0x70;
    func_0x000107c61618();
    lVar5 = *(long *)(unaff_x22 + 0x78);
    FUN_102686c5c(unaff_x22 + 0x50);
    lVar4 = lVar1;
    if (lVar1 != 0) {
      func_0x000107c614f0();
      (**(code **)(lVar5 + 8))();
      func_0x000107c615e8(lVar1);
      if (lVar5 == 0) {
        lVar4 = 0;
      }
      else {
        func_0x000107c5fadc(lVar4,lVar5);
        func_0x000107c6142c(lVar5);
      }
    }
    *(long *)(unaff_x22 + 0xc0) = lVar4;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102728158;
    lVar1 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar1,1);
    uVar3 = 0x112ebad28;
    func_0x0001000285a8(0x112ebad28,&UNK_10dad3580);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(long *)(unaff_x22 + 0x70) = lVar1;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_10272943c;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110541158;
    func_0x000107c43030(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001027280a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 102728158; end: 1027281af;  */

void FUN_102728158(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 200) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1027281b0;
  }
  else {
    pcVar1 = FUN_10272820c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1027281b0; end: 10272820b;  */

void FUN_1027281b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  FUN_102729450(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000102728208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3);
  return;
}



/* Entry: 10272820c; end: 10272827b;  */

void FUN_10272820c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  func_0x000107c61654();
  func_0x000107c614ac(uVar3);
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000102728278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
  return;
}



/* Entry: 10272827c; end: 10272828f; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider getPlaceComponentsDataWithPlaceId:] */

void FUN_10272827c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar3 = &UNK_110541000;
  func_0x000107c5faec();
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puVar2 = &UNK_110540fb8;
  func_0x000107c613fc(&UNK_110540fb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(&UNK_110541000,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar1);
  uVar4 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3530,puVar3,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 102728290; end: 1027283bb;  */

void FUN_102728290(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec();
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c453e4();
  puVar2 = &UNK_110540fb8;
  func_0x000107c613fc(&UNK_110540fb8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  func_0x000107c613fc(param_4,0x30,7);
  *(undefined **)(param_4 + 0x10) = puVar2;
  *(undefined8 *)(param_4 + 0x18) = param_3;
  *(undefined8 *)(param_4 + 0x20) = param_2;
  *(undefined **)(param_4 + 0x28) = puVar1;
  func_0x000107c61434(param_2);
  func_0x000107c61174(puVar1);
  uVar3 = 99;
  func_0x0001001ca524(99,0,0x3c,4,0,0,param_5,param_4,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c61574(param_4);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1027283bc; end: 10272849b; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider getAdsBannerComponentWithPlaceId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027283bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_70 [32];
  undefined1 auStack_50 [8];
  long lStack_48;
  
  func_0x000107c5faec(param_3);
  FUN_10272ac40(param_1 + _DAT_112ebace0,auStack_70);
  puVar1 = auStack_50;
  func_0x000107c61618();
  func_0x000107c61174(param_1);
  FUN_102686c5c(auStack_70);
  if (puVar1 == (undefined1 *)0x0) {
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    param_3 = 0;
  }
  else {
    puVar2 = puVar1;
    func_0x000107c614f0(puVar1);
    (**(code **)(lStack_48 + 0x20))(param_3,param_2,puVar2,lStack_48);
    func_0x000107c615e8(puVar1);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10272849c; end: 1027284a3; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_10272849c(void)

{
  return 0;
}



/* Entry: 1027284a4; end: 102728503; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider init] */

void FUN_1027284a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("VenueProfileImplementation.PlaceProfileDataProvider",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1027284d0);
  (*pcVar1)();
}



/* Entry: 102728504; end: 1027285cb; -[_TtC26VenueProfileImplementation24PlaceProfileDataProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102728504(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebacf8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebacd0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebacd8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebacf0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebacc8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebace8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ebaca8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ebacb0));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ebacb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ebacc0));
  param_1 = param_1 + _DAT_112ebace0;
  (*(code *)&DAT_1038c1d80)();
  return param_1;
}



/* Entry: 1027285cc; end: 102728677;  */

void FUN_1027285cc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar2,*(undefined8 *)(param_1 + 0x38));
  lVar4 = *plVar2;
  if (param_3 != 0) {
    uVar3 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar4,uVar3);
    return;
  }
  if (param_2 != 0) {
    **(long **)(*(long *)(lVar4 + 0x40) + 0x28) = param_2;
    func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102728678);
  (*pcVar1)();
}



/* Entry: 102728678; end: 10272868b;  */

void FUN_102728678(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  uVar2 = 0;
  FUN_10272b3bc(0,0x112ea3ef8,&PTR_PTR_1126cd848);
  func_0x000107c5fc54(param_2,uVar2);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 10272868c; end: 1027287c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272868c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = *(long *)(param_2 + _DAT_112ebacd0);
  func_0x000107c4e7e4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    puVar3 = &UNK_110541370;
    func_0x000107c613fc(&UNK_110541370,0x18,7);
    *(long *)(puVar3 + 0x10) = param_1;
    uStack_50 = 0x10272b3fc;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    uStack_60 = 0x10272b458;
    puStack_58 = &UNK_110541388;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c4322c(lVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_3);
    return;
  }
  **(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(param_1);
  return;
}


