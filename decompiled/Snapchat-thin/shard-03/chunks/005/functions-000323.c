/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10291d56c; end: 10291d717;  */

undefined * FUN_10291d56c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  undefined *puVar5;
  long lVar6;
  
  lVar1 = 0;
  func_0x000107c5eec8();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar2 = PTR_PTR_1126ae6c8;
  func_0x000107c610f8(PTR_PTR_1126ae6c8);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c48320(puVar2);
  func_0x000107c61170(param_1);
  puVar3 = PTR_PTR_1126ae6d0;
  func_0x000107c610f8(PTR_PTR_1126ae6d0);
  func_0x000107c4831c();
  puVar5 = puVar3;
  func_0x000107c5eec4(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5eeac();
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar4 = PTR_PTR_1126dde10;
  func_0x000107c610f8();
  func_0x000107c5fadc(puVar5,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c46f58();
  func_0x000107c61170(puVar5);
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126b1bb0;
    func_0x000107c61168(PTR_PTR_1126b1bb0);
    func_0x000107c40d04();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar2);
  }
  return puVar5;
}



/* Entry: 10291d718; end: 10291d727;  */

undefined1  [16] FUN_10291d718(void)

{
  return ZEXT816(0x11056cdc8);
}



/* Entry: 10291d728; end: 10291d747;  */

void FUN_10291d728(void)

{
  func_0x000107c61168(&PTR_PTR_112ecd4e8);
  return;
}



/* Entry: 10291d748; end: 10291d753;  */

void FUN_10291d748(undefined8 param_1)

{
  func_0x0001000285a8(0x112d6aec8,&UNK_10d92e380);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10291d754,param_1);
  return;
}



/* Entry: 10291d754; end: 10291d77b;  */

void FUN_10291d754(void)

{
  func_0x00010291d7e0();
  return;
}



/* Entry: 10291d77c; end: 10291d787;  */

void FUN_10291d77c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d6aec8,&UNK_10d92e380);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10291d86c,param_1);
  return;
}



/* Entry: 10291d788; end: 10291d86b;  */

void FUN_10291d788(undefined8 param_1,undefined8 param_2)

{
  func_0x0001000285a8(0x112d6aec8,&UNK_10d92e380);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_2,param_1);
  return;
}



/* Entry: 10291d86c; end: 10291d893;  */

void FUN_10291d86c(void)

{
  func_0x00010291d7e0();
  return;
}



/* Entry: 10291d894; end: 10291d8b3;  */

undefined1  [16] FUN_10291d894(void)

{
  return ZEXT816(0x11056cde8);
}



/* Entry: 10291d8b4; end: 10291d933;  */

void FUN_10291d8b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e9c1f8,&UNK_10daaa000);
  puVar1 = &UNK_11056ce28;
  func_0x000107c613fc(&UNK_11056ce28,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10291da08,puVar1);
  return;
}



/* Entry: 10291d934; end: 10291da07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10291d934(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar1 = lStack_48;
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c610f8();
  func_0x000107c483f8();
  func_0x000107c569d0();
  func_0x000107c61174();
  func_0x000107c5677c();
  func_0x000100083b20(&lStack_48);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_112fb0580);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(lStack_48);
  func_0x000107c3e2c0(uVar3);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar2);
  *param_1 = puVar2;
  return;
}



/* Entry: 10291da08; end: 10291da0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10291da08(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  lVar1 = lStack_48;
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c610f8();
  func_0x000107c483f8();
  func_0x000107c569d0();
  func_0x000107c61174();
  func_0x000107c5677c();
  func_0x000100083b20(&lStack_48);
  uVar3 = *(undefined8 *)(lStack_48 + _DAT_112fb0580);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(lStack_48);
  func_0x000107c3e2c0(uVar3);
  func_0x000107c615e8(uVar3);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar2);
  *param_1 = puVar2;
  return;
}



/* Entry: 10291da10; end: 10291e20b;  */

void FUN_10291da10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ecd548,&UNK_10daf2be8);
  puVar1 = &UNK_11056ce50;
  func_0x000107c613fc(&UNK_11056ce50,0xe8,7);
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
  func_0x0001000823a8(FUN_10291e20c,puVar1);
  return;
}



/* Entry: 10291e20c; end: 10291e267;  */

void FUN_10291e20c(void)

{
  long unaff_x20;
  
  func_0x00010291dc48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                      *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                      *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                      *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                      *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8),
                      *(undefined8 *)(unaff_x20 + 0xe0));
  return;
}



/* Entry: 10291e268; end: 10291e5f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10291e268(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecd550) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd558) = 0;
  lVar1 = _DAT_112ecd560;
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112ecd568;
  puVar2 = PTR_PTR_1126b7e38;
  func_0x000107c61168();
  func_0x000107c50198();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112ecd570;
  puVar2 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd578) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd580) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd588) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd590) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd598) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd5a0) = 1;
  func_0x000107c61614(unaff_x20 + _DAT_112ecd5a8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112ecd5b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd5b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd5c0) = 1;
  *(undefined1 *)(unaff_x20 + _DAT_112ecd5c8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd5d0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd5d8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd5e0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd5e8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd5f0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd5f8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd600) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd608) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd610) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd618) = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd620) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd628) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd630) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd638) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd640) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd648) = param_16;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd650) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd658) = param_18;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd660) = param_19;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd668) = param_20;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd670) = param_21;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd678) = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd680) = param_23;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd688) = param_24;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd690) = param_25;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd698) = param_26;
  *(undefined8 *)(unaff_x20 + _DAT_112ecd6a0) = param_27;
  func_0x000107c61154(auStack_78,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 10291e5f8; end: 10291e6f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10291e5f8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ecd588;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecd588);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ecd640);
    func_0x000107c451e8();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c451e4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c615f0(lVar3);
    func_0x000107c615e8(uVar4);
    lVar2 = 0;
  }
  func_0x000107c615f0(lVar2);
  return lVar3;
}



/* Entry: 10291e6f8; end: 10291e76f;  */

long FUN_10291e6f8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c30a40();
  func_0x000107c61180();
  func_0x000107c53224();
  func_0x000107c54b74(0x3ff0000000000000,lVar1);
  func_0x000107c5a048(param_1,param_2,lVar1);
  func_0x000107c4d508();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c5a048();
    func_0x000107c61170(param_1);
  }
  return lVar1;
}



/* Entry: 10291e770; end: 10291e7db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10291e770(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ecd5a0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112ecd5a0);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    FUN_10291e7dc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c615f0();
    func_0x000100d10784(uVar4);
  }
  func_0x000100d107f4(lVar3);
  return lVar2;
}



/* Entry: 10291e7dc; end: 10291e8c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10291e7dc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112ecd648);
  func_0x000107c451f8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c45200();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar2 = lVar1;
    func_0x000107c451f4();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c40a3c(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
      func_0x000107c57740(lVar2,param_2,param_1);
      return lVar2;
    }
  }
  return 0;
}



/* Entry: 10291e8c4; end: 10291e967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10291e8c4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112ecd5b0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ecd5b0);
  puVar4 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ecd680);
    func_0x000107c4ac90(uVar3);
    func_0x000107c61180();
    puVar4 = PTR_PTR_1126b0f90;
    func_0x000107c610f8();
    func_0x000107c48274();
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar4;
    func_0x000107c61174(puVar4);
    func_0x000107c615e8(uVar3);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c615f0(puVar2);
  return puVar4;
}



/* Entry: 10291e968; end: 10291e9cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10291e968(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ecd5b8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecd5b8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10291e9cc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10291e9cc; end: 10291ed4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10291e9cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  long extraout_x12;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  lVar15 = *(long *)(lVar1 + -8);
  lVar14 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)&puStack_90 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar13 - extraout_x12;
  lVar1 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  lVar2 = *(long *)(param_1 + _DAT_112ecd698);
  func_0x000107c5db24();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar3 == 0) {
    lVar3 = 0;
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar2 == 0) {
      lVar2 = lVar3;
      lVar3 = 0;
      puVar5 = (undefined *)0x0;
    }
    else {
      puStack_90 = (undefined *)0x0;
      lStack_88 = 0;
      func_0x000107c5fae8(lVar2,&puStack_90);
      func_0x000107c61170();
      lVar3 = lStack_88;
      puVar5 = (undefined *)0x0;
      if (lStack_88 != 0) {
        puVar5 = puStack_90;
      }
    }
  }
  *(undefined **)(lVar1 + 0x38) = PTR___sSSN_11034da80;
  func_0x00010075bbf0();
  *(long *)(lVar1 + 0x40) = lVar2;
  puVar4 = (undefined *)0x0;
  if (lVar3 != 0) {
    puVar4 = puVar5;
  }
  lVar2 = -0x2000000000000000;
  if (lVar3 != 0) {
    lVar2 = lVar3;
  }
  *(undefined **)(lVar1 + 0x20) = puVar4;
  *(long *)(lVar1 + 0x28) = lVar2;
  uVar10 = 0x800000010f0cc700;
  func_0x000107c5fb00(0xd000000000000026,0x800000010f0cc700,lVar1);
  func_0x000107c5edd0(lVar12);
  func_0x000107c6142c(uVar10);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  func_0x0001029257c0(lVar12,lVar13,0x112d36580,&UNK_10d9016d0);
  uVar11 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar16 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  puVar5 = &UNK_11056d520;
  func_0x000107c613fc(&UNK_11056d520,uVar16 + lVar14,uVar11 | 7);
  func_0x0001001021cc(lVar13,puVar5 + uVar16);
  pcStack_70 = FUN_102925648;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_88 = 0x42000000;
  puStack_80 = &UNK_1011f6060;
  puStack_78 = &UNK_11056d538;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_68);
  func_0x000107c3e4fc(puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000103f5b134(0);
  func_0x000107c610f8();
  puVar5 = puVar4;
  func_0x000107c61174(puVar4);
  uVar10 = 0;
  func_0x000103f5aeec(puVar4,0,0,0,0,0);
  puVar7 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  puVar8 = puVar7;
  func_0x00010011df08();
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c5faec();
  func_0x000107c61170(puVar8);
  puVar8 = PTR_PTR_1126b3ee8;
  func_0x000107c610f8(PTR_PTR_1126b3ee8);
  func_0x000107c5fadc(puVar9,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c48670(puVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar9);
  func_0x000102925740(lVar12,0x112d36580,&UNK_10d9016d0);
  return puVar8;
}



/* Entry: 10291ed50; end: 10291ef4b;  */

undefined * FUN_10291ed50(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  lVar8 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = (long)puVar5 - extraout_x12;
  func_0x0001029257c0(param_1,lVar6,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar1 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  uVar4 = 1;
  lVar8 = lVar6;
  (*pcVar10)(lVar6,1,lVar1);
  if ((int)lVar8 == 1) {
    func_0x000102925740(lVar6,0x112d36580,&UNK_10d9016d0);
    lVar8 = 0;
    uVar4 = 0xe000000000000000;
  }
  else {
    func_0x000107c5ed70();
    (**(code **)(lVar9 + 8))(lVar6,lVar1);
  }
  func_0x0001029257c0(param_1,puVar5,0x112d36580,&UNK_10d9016d0);
  func_0x000107c5fadc(lVar8,uVar4);
  func_0x000107c6142c(uVar4);
  puVar7 = puVar5;
  (*pcVar10)(puVar5,1,lVar1);
  if ((int)puVar7 == 1) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c5ed90();
    (**(code **)(lVar9 + 8))(puVar5,lVar1);
  }
  puVar2 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar3 = PTR_PTR_1126b0800;
  func_0x000107c610f8(PTR_PTR_1126b0800);
  func_0x000107c48cbc();
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c451b0(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 10291ef4c; end: 10291f01f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10291ef4c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = _DAT_112ecd5c0;
  lVar4 = *(long *)(unaff_x20 + _DAT_112ecd5c0);
  lVar5 = lVar4;
  if (lVar4 == 1) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112ecd658);
    func_0x000107c42e94();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_10291e968();
      lVar5 = lVar3;
      func_0x000107c40aa8(lVar3,param_2,lVar2);
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(lVar2);
    }
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar5;
    func_0x000107c615f0(lVar5);
    func_0x000100d10784(uVar6);
  }
  func_0x000100d107f4(lVar4);
  return lVar5;
}



/* Entry: 10291f020; end: 10291f19b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10291f020(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  FUN_10291f19c();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecd678);
  func_0x000107c5b4bc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c3d740(lVar3);
      func_0x000107c615e8(lVar3);
    }
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ecd688) + _DAT_113042988);
    func_0x000107c4d310(uVar4);
    func_0x000107c61180();
    puVar5 = &UNK_11056ce78;
    func_0x000107c613fc(&UNK_11056ce78,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    pcStack_50 = FUN_102923f94;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101218f4c;
    puStack_58 = &UNK_11056ce90;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    uVar7 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c3e924(uVar7);
    func_0x000107c61170(uVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10291f19c);
  (*pcVar1)();
}



/* Entry: 10291f19c; end: 10292035b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10291f19c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  char *pcVar19;
  undefined *puVar20;
  long unaff_x20;
  long lVar21;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecd620);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar2 != 0) {
      puVar4 = PTR_PTR_1126ab950;
      func_0x000107c610f8(PTR_PTR_1126ab950);
      func_0x000107c453e4();
      puVar5 = &UNK_11056ce78;
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      puVar17 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = FUN_102925468;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11056d268;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_80);
      func_0x000107c56d08(puVar4);
      func_0x000107c60bd0(ppuVar6);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ecd610);
      func_0x000107c5d9b0(uVar7);
      func_0x000107c61180();
      uVar16 = uVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000107c5a364(puVar4);
      func_0x000107c615e8(uVar16);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ecd618);
      func_0x000107c5da38(uVar7);
      func_0x000107c61180();
      uVar16 = uVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000107c5a3d0(puVar4);
      func_0x000107c615e8(uVar16);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ecd608);
      func_0x000107c4d604(uVar7);
      func_0x000107c61180();
      uVar16 = uVar7;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000107c56a84(puVar4);
      func_0x000107c615e8(uVar16);
      lVar3 = unaff_x20;
      func_0x000106c733fc();
      func_0x000107c61180();
      lVar21 = *(long *)(unaff_x20 + _DAT_112ecd600);
      lVar14 = lVar21;
      func_0x000107c4d814();
      func_0x000107c61180();
      lVar10 = lVar14;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar14);
      if (lVar10 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar10;
        func_0x000107c4c1dc(lVar10);
        func_0x000107c61180();
        func_0x000107c615e8(lVar10);
      }
      func_0x000107c56b20(puVar4);
      func_0x000107c615e8(lVar14);
      lVar14 = lVar21;
      func_0x000107c3dae4();
      func_0x000107c61180();
      lVar10 = lVar14;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar14);
      if (lVar10 == 0) {
        lVar14 = 0;
      }
      else {
        lVar14 = lVar10;
        func_0x000107c4c1e0(lVar10);
        func_0x000107c61180();
        func_0x000107c615e8(lVar10);
      }
      func_0x000107c52604(puVar4);
      func_0x000107c615e8(lVar14);
      func_0x000107c3cfe0();
      func_0x000107c61180();
      lVar14 = lVar21;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar21);
      if (lVar14 == 0) {
        lVar10 = 0;
      }
      else {
        puVar5 = &UNK_11056ce78;
        func_0x000107c613fc(&UNK_11056ce78,0x18,7);
        func_0x000107c61614(puVar5 + 0x10);
        pcStack_88 = FUN_1029255ec;
        puStack_a8 = puVar17;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_100f11714;
        puStack_90 = &UNK_11056d498;
        ppuVar6 = &puStack_a8;
        puStack_80 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_80);
        lVar10 = lVar14;
        func_0x000107c4c1e8(lVar14);
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c615e8(lVar14);
      }
      func_0x000107c52188(puVar4);
      func_0x000107c615e8(lVar10);
      puVar8 = PTR_PTR_1126afe50;
      func_0x000107c610f8();
      func_0x000107c4842c();
      func_0x000107c561c0();
      func_0x000107c569fc(puVar4);
      puVar9 = PTR_PTR_1126ab958;
      func_0x000107c610f8();
      func_0x000107c453e4();
      puVar5 = puVar9;
      FUN_10291e5f8();
      func_0x000107c57900(puVar9);
      func_0x000107c615e8(puVar5);
      puVar5 = &UNK_11056ce78;
      puVar20 = puVar5;
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar20 + 0x10);
      pcVar1 = FUN_102925498;
      puVar15 = puVar20;
      FUN_1029436d0();
      func_0x000107c61574(puVar20);
      puStack_a8 = puVar17;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_10113149c;
      puStack_90 = &UNK_11056d290;
      ppuVar6 = &puStack_a8;
      pcStack_88 = pcVar1;
      puStack_80 = puVar15;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_80);
      func_0x000107c54968(puVar9);
      func_0x000107c60bd0(ppuVar6);
      puVar20 = puVar5;
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar20 + 0x10);
      pcStack_88 = (code *)0x1029254a0;
      puStack_a8 = puVar17;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100c75f50;
      puStack_90 = &UNK_11056d2b8;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar20;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_80);
      func_0x000107c576f8(puVar9);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c56930(puVar4);
      puVar20 = puVar5;
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar20 + 0x10);
      pcStack_88 = FUN_1029254a8;
      puStack_a8 = puVar17;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11056d2e0;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar20;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_80);
      func_0x000107c56eb0(puVar4);
      func_0x000107c60bd0(ppuVar6);
      puVar20 = puVar5;
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar20 + 0x10);
      pcStack_88 = (code *)0x1029254d8;
      puStack_a8 = puVar17;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11056d308;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar20;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_80);
      func_0x000107c56ee0(puVar4);
      func_0x000107c60bd0(ppuVar6);
      puVar20 = puVar5;
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar20 + 0x10);
      pcStack_88 = (code *)0x102925508;
      puStack_a8 = puVar17;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11056d330;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar20;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_80);
      func_0x000107c56ec8(puVar4);
      func_0x000107c60bd0(ppuVar6);
      puVar20 = puVar5;
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar20 + 0x10);
      pcStack_88 = (code *)0x102925538;
      puStack_a8 = puVar17;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_11056d358;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar20;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_80);
      func_0x000107c56ec4(puVar4);
      func_0x000107c60bd0(ppuVar6);
      puVar20 = puVar5;
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar20 + 0x10);
      pcStack_88 = FUN_102925568;
      puStack_a8 = puVar17;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100c75f50;
      puStack_90 = &UNK_11056d380;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar20;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_80);
      func_0x000107c56e8c(puVar4);
      func_0x000107c60bd0(ppuVar6);
      FUN_102920dd8();
      func_0x000107c52e8c(puVar4);
      func_0x000107c61170(ppuVar6);
      uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ecd560);
      pcStack_88 = FUN_1029231e0;
      puStack_80 = (undefined *)0x0;
      puStack_a8 = puVar17;
      uStack_a0 = 0x42000000;
      puStack_98 = (undefined *)0x102925ac8;
      puStack_90 = &UNK_11056d3a8;
      ppuVar6 = &puStack_a8;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_80);
      func_0x000107c4c280();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar6);
      uVar16 = uVar7;
      func_0x000107c5cb24();
      func_0x000107c61180();
      func_0x000107c61170(uVar7);
      func_0x000107c5630c(puVar4);
      func_0x000107c61170();
      FUN_102920f30();
      func_0x000107c56310(puVar4);
      func_0x000107c61170(uVar16);
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_88 = (code *)0x102925570;
      puStack_a8 = puVar17;
      uStack_a0 = 0x42000000;
      puStack_98 = (undefined *)0x102925ac4;
      puStack_90 = &UNK_11056d3d0;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_80);
      func_0x000107c576f4(puVar4);
      func_0x000107c60bd0(ppuVar6);
      puVar5 = PTR_PTR_1126ab960;
      func_0x000107c610f8();
      func_0x000107c453e4();
      lVar10 = *(long *)(*(long *)(unaff_x20 + _DAT_112ecd6a0) + _DAT_113091ad8);
      puVar20 = *(undefined **)(unaff_x20 + _DAT_112ecd5f8);
      func_0x000107c61174();
      func_0x000107c3fa04(puVar20);
      func_0x000107c61180();
      lVar14 = lVar10;
      func_0x00010601a310(lVar10,puVar20);
      func_0x000107c61180();
      func_0x000107c61170(lVar10);
      func_0x000107c615e8(puVar20);
      if (lVar14 != 0) {
        puVar20 = PTR_PTR_1126ab980;
        func_0x000107c610f8(PTR_PTR_1126ab980);
        func_0x000107c453e4();
        lVar10 = lVar14;
        func_0x000107c5c044(lVar14);
        func_0x000107c61180();
        func_0x000107c59994(puVar20);
        func_0x000107c61170(lVar10);
        lVar10 = lVar14;
        func_0x000107c497b0(lVar14);
        func_0x000107c61180();
        func_0x000107c5542c(puVar20);
        func_0x000107c61170(lVar10);
        func_0x000107c58fa4(puVar5);
        func_0x000107c61170(lVar14);
        func_0x000107c61170(puVar20);
      }
      FUN_10291e770();
      func_0x000107c5997c(puVar5);
      func_0x000107c615e8(puVar20);
      FUN_10291e8c4();
      func_0x000107c594a0(puVar5);
      func_0x000107c615e8(puVar20);
      func_0x000107c53800(puVar4);
      puVar20 = &UNK_11056ce78;
      puVar11 = puVar20;
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar11 + 0x10);
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar20 + 0x10);
      puVar12 = PTR_PTR_1126ab968;
      func_0x000107c610f8();
      pcStack_88 = (code *)0x102925578;
      puStack_a8 = puVar17;
      uStack_a0 = 0x42000000;
      puStack_98 = (undefined *)0x102924944;
      puStack_90 = &UNK_11056d3f8;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar11;
      func_0x000107c60bc4(ppuVar6);
      uStack_b8 = 0x102925580;
      puStack_d8 = puVar17;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_1012934f8;
      puStack_c0 = &UNK_11056d420;
      ppuVar13 = &puStack_d8;
      puStack_b0 = puVar20;
      func_0x000107c60bc4(ppuVar13);
      func_0x000107c6157c(puVar11);
      func_0x000107c6157c(puVar20);
      func_0x000107c46520();
      func_0x000107c60bd0(ppuVar13);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61574(puStack_b0);
      puVar15 = puStack_80;
      func_0x000107c61574(puVar11);
      func_0x000107c61574(puVar20);
      func_0x000107c61574(puVar15);
      puVar20 = &UNK_11056ce78;
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar20 + 0x10);
      pcStack_88 = (code *)0x102925588;
      puStack_a8 = puVar17;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1012934f8;
      puStack_90 = &UNK_11056d448;
      ppuVar6 = &puStack_a8;
      puStack_80 = puVar20;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_80);
      func_0x000107c54e88(puVar12);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c59078(puVar4);
      lVar14 = *(long *)(*(long *)(unaff_x20 + _DAT_112ecd668) + _DAT_112fb0590);
      if (lVar14 != 0) {
        lVar10 = *(long *)(lVar14 + _DAT_113073d70);
        func_0x000107c61174();
        func_0x000107c3125c();
        func_0x000107c61180();
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10292033c);
          (*pcVar1)();
        }
        lVar21 = *(long *)(lVar14 + _DAT_113073d78);
        func_0x000100c6f294();
        func_0x000107c61180();
        if (lVar21 == 0) {
          func_0x000107c61170(lVar10);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102920348);
          (*pcVar1)();
        }
        puVar20 = PTR_PTR_1126cc078;
        func_0x000107c610f8(PTR_PTR_1126cc078);
        func_0x000107c488f8();
        func_0x000107c61170(lVar10);
        func_0x000107c61170(lVar21);
        func_0x000107c560e4(puVar4);
        func_0x000107c61170(lVar14);
        func_0x000107c61170(puVar20);
      }
      puVar15 = PTR_PTR_1126ab970;
      func_0x000107c610f8(PTR_PTR_1126ab970);
      func_0x000107c453e4();
      uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ecd568);
      func_0x000107c5cb24(uVar16);
      func_0x000107c61180();
      func_0x000107c52da4(puVar15);
      func_0x000107c61170(uVar16);
      FUN_102923874();
      puVar20 = &UNK_11056ce78;
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar20 + 0x10);
      uVar16 = 1;
      func_0x0001001ca524(1,0x100,0x60,4,0,0,&UNK_10daf2cc8,puVar20,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(puVar20);
      func_0x000107c61574(uVar16);
      puVar20 = PTR_PTR_1126ab978;
      func_0x000107c610f8();
      func_0x000107c49520();
      uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ecd598);
      *(undefined **)(unaff_x20 + _DAT_112ecd598) = puVar20;
      func_0x000107c61174();
      func_0x000107c61170(uVar16);
      if (puVar20 == (undefined *)0x0) {
        pcVar19 = "dismiss()";
        func_0x0001000c10c0("dismiss()");
        func_0x000107c61180();
        puVar20 = &UNK_11056ce78;
        func_0x000107c613fc(&UNK_11056ce78,0x18,7);
        func_0x000107c61614(puVar20 + 0x10);
        pcStack_88 = FUN_1029255e4;
        puStack_a8 = puVar17;
        uStack_a0 = 0x42000000;
        puStack_98 = &UNK_1000f6b44;
        puStack_90 = &UNK_11056d470;
        ppuVar6 = &puStack_a8;
        puStack_80 = puVar20;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_80);
        func_0x000107c4e524(pcVar19);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar15);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar8);
        func_0x000107c615e8(lVar2);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(pcVar19);
      }
      else {
        func_0x000107c61174();
        func_0x000107c5a050();
        lVar14 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10292034c);
          (*pcVar1)();
        }
        func_0x000107c3d89c();
        func_0x000107c61170(lVar14);
        lVar14 = 0x112d360b8;
        FUN_1029249d4(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                      &UNK_10d9011a0);
        func_0x000107c613fc();
        *(undefined8 *)(lVar14 + 0x18) = 9;
        *(undefined8 *)(lVar14 + 0x10) = 4;
        puVar17 = puVar20;
        func_0x000107c4acb0();
        func_0x000107c61180();
        lVar10 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102920350);
          (*pcVar1)();
        }
        lVar21 = lVar10;
        func_0x000107c4acb0();
        func_0x000107c61180();
        func_0x000107c61170(lVar10);
        puVar11 = puVar17;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar17);
        func_0x000107c61170(lVar21);
        *(undefined **)(lVar14 + 0x20) = puVar11;
        puVar17 = puVar20;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        lVar10 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102920354);
          (*pcVar1)();
        }
        lVar21 = lVar10;
        func_0x000107c5ce8c();
        func_0x000107c61180();
        func_0x000107c61170(lVar10);
        puVar11 = puVar17;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar17);
        func_0x000107c61170(lVar21);
        *(undefined **)(lVar14 + 0x28) = puVar11;
        puVar17 = puVar20;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        lVar10 = unaff_x20;
        func_0x000107c5de64();
        func_0x000107c61180();
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102920358);
          (*pcVar1)();
        }
        lVar21 = lVar10;
        func_0x000107c5cbe4();
        func_0x000107c61180();
        func_0x000107c61170(lVar10);
        puVar11 = puVar17;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar17);
        func_0x000107c61170(lVar21);
        *(undefined **)(lVar14 + 0x30) = puVar11;
        puVar17 = puVar20;
        func_0x000107c3ec1c();
        func_0x000107c61180();
        func_0x000107c5de64();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10292035c);
          (*pcVar1)();
        }
        puVar11 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar10 = unaff_x20;
        func_0x000107c3ec1c(unaff_x20);
        func_0x000107c61180();
        func_0x000107c61170(unaff_x20);
        puVar18 = puVar17;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(puVar17);
        func_0x000107c61170(lVar10);
        *(undefined **)(lVar14 + 0x38) = puVar18;
        uVar16 = 0;
        func_0x000102925780(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar10 = lVar14;
        func_0x000107c5fc48(lVar14,uVar16);
        func_0x000107c61574(lVar14);
        func_0x000107c3d048(puVar11);
        func_0x000107c61170(lVar10);
        func_0x00010291e694();
        lVar14 = 0x112d360b0;
        FUN_1029249d4(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
        func_0x000107c613fc();
        *(undefined8 *)(lVar14 + 0x18) = 3;
        *(undefined8 *)(lVar14 + 0x10) = 1;
        *(undefined **)(lVar14 + 0x20) = puVar20;
        uVar16 = 0;
        func_0x000102925780(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
        lVar21 = lVar14;
        func_0x000107c5fc48(lVar14,uVar16);
        func_0x000107c61574(lVar14);
        func_0x000107c497d0(lVar10);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(puVar4);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(puVar15);
        func_0x000107c61170(puVar20);
        func_0x000107c615e8(lVar10);
        func_0x000107c61170(lVar21);
      }
    }
  }
  return;
}



/* Entry: 10292035c; end: 10292041f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10292035c(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c40808();
    *(long *)(param_2 + _DAT_112ecd580) = param_1;
    lVar3 = *(long *)(param_2 + _DAT_112ecd578) + param_1;
    if (SCARRY8(*(long *)(param_2 + _DAT_112ecd578),param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102920420);
      (*pcVar1)();
    }
    uVar2 = *(undefined8 *)(param_2 + _DAT_112ecd568);
    func_0x000107c61174(uVar2);
    func_0x000107c5fe40(lVar3);
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102920420; end: 102920567; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController viewDidLoad] */

void FUN_102920420(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10291f020();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102920568; end: 102920597; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController viewDidAppear:] */

void FUN_102920568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000102920448(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102920598; end: 10292067f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102920598(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecd678);
  func_0x000107c5b4bc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c4ff64(lVar3);
      func_0x000107c615e8(lVar3);
    }
    lVar2 = _DAT_112ecd5e8;
    lVar3 = *(long *)(unaff_x20 + _DAT_112ecd5e8);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c61170();
      uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
      func_0x000107c61174(uVar4);
      uVar5 = uVar4;
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(uVar5);
    }
    func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102920680);
  (*pcVar1)();
}



/* Entry: 102920680; end: 1029206a3; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController dealloc] */

void FUN_102920680(void)

{
  func_0x000107c61174();
  FUN_102920598();
  return;
}



/* Entry: 1029206a4; end: 1029209af; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001029208c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029208f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102920910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029208f4) */
/* WARNING: Removing unreachable block (ram,0x0001029208c4) */
/* WARNING: Removing unreachable block (ram,0x000102920914) */
/* WARNING: Removing unreachable block (ram,0x000100d10784) */
/* WARNING: Removing unreachable block (ram,0x000100d10790) */
/* WARNING: Removing unreachable block (ram,0x000100d1078c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029206a4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd668));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd620));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd690));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd600));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd618));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd610));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd670));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd650));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd5e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd5d8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd550));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd558));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd648));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd5f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd6a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd608));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd680));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd658));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd698));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd5d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd660));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd678));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd630));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd640));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd5e8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd5f0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd688));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd628));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ecd638));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd560));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd568));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecd570));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ecd588));
  return;
}



/* Entry: 1029209b0; end: 102920a1f;  */

void FUN_1029209b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_102920a20(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102920a20; end: 102920b27;  */

/* WARNING: Possible PIC construction at 0x000102920aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102920afc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102920af0) */
/* WARNING: Removing unreachable block (ram,0x000102920b00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102920a20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecd5e8);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000104522c9c();
    func_0x00010452281c(param_1,param_2,lVar2);
    func_0x000104523254(0);
    func_0x000107c610f8();
    uVar1 = 0x21;
    func_0x000104522fdc(0x21,0,1);
    func_0x000107c610f8(PTR_PTR_1126b3530);
    func_0x000107c4807c();
    func_0x000104520f00(param_1,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102920b28; end: 102920d13;  */

void FUN_102920b28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001000c10c0(param_2);
    func_0x000107c61180();
    puVar1 = &UNK_11056ce78;
    func_0x000107c613fc(&UNK_11056ce78,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_1);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x42000000;
    puStack_78 = &UNK_1000f6b44;
    ppuVar2 = &puStack_88;
    uStack_70 = param_4;
    uStack_68 = param_3;
    puStack_60 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_60);
    func_0x000107c4e524(param_2);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(param_2);
  }
  return;
}



/* Entry: 102920d14; end: 102920dd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102920d14(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    lVar1 = *(long *)(param_3 + _DAT_112ecd630);
    func_0x000107c61174();
    func_0x000107c61170(param_3);
    uVar2 = *(undefined8 *)(lVar1 + _DAT_113041e50);
    func_0x000107c615f0(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5d648(uVar2);
    func_0x000107c615e8(uVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102920dd8; end: 102920f2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102920dd8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined8 uStack_48;
  
  ppuVar5 = &puStack_70;
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ecd670);
  uVar1 = uVar8;
  func_0x000107c5da30(uVar8);
  func_0x000107c61180();
  func_0x000107c4f3e4(uVar8);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126ab998;
  func_0x000107c610f8(PTR_PTR_1126ab998);
  func_0x000107c492fc();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar8);
  puVar3 = puVar2;
  func_0x000107c4da3c(puVar2);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5cb2c();
  func_0x000107c61180();
  pcStack_50 = FUN_10292315c;
  uStack_48 = 0;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x102925acc;
  puStack_58 = &UNK_11056d5b0;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(uStack_48);
  puVar6 = puVar4;
  func_0x000107c4c280(puVar4,param_2,ppuVar5);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar5);
  puVar7 = puVar6;
  func_0x000107c5cb24(puVar6);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar6);
  return puVar7;
}



/* Entry: 102920f30; end: 10292105b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102920f30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar4 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112ecd670);
  func_0x000107c4c554();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4da78(lVar2);
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    lVar3 = lVar1;
    func_0x000107c5cb2c(lVar1);
    func_0x000107c61180();
    pcStack_40 = FUN_1029234ec;
    uStack_38 = 0;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = 0x102925ad0;
    puStack_48 = &UNK_11056d588;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(uStack_38);
    lVar5 = lVar3;
    func_0x000107c4c280(lVar3,param_2,ppuVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    lVar2 = lVar5;
    func_0x000107c5cb24(lVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar5);
  }
  return lVar2;
}



/* Entry: 10292105c; end: 1029214a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10292105c(undefined *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined1 auStack_68 [24];
  
  puVar9 = auStack_68;
  func_0x000107c61428(param_2 + 0x10,puVar9,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return;
  }
  puVar1 = PTR_PTR_1133ba9d8;
  func_0x000107c5faec();
  puVar3 = param_1;
  puVar10 = puVar9;
  func_0x000107c5faec();
  if (puVar1 == puVar3 && puVar9 == puVar10) {
    puVar7 = puVar10;
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar10);
LAB_102921254:
    puVar3 = *(undefined **)(*(long *)(param_2 + _DAT_112ecd630) + _DAT_113041e50);
    func_0x000107c5c364();
    func_0x000107c61180();
    puVar1 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
    uVar8 = (ulong)puVar1 & 0xffffffffffff;
    if (((ulong)puVar7 & 0x2000000000000000) != 0) {
      uVar8 = (ulong)puVar7 >> 0x38 & 0xf;
    }
    if (uVar8 == 0) {
LAB_1029213c0:
      func_0x000107c6142c(puVar7);
      goto LAB_1029213c4;
    }
    uVar12 = *(undefined8 *)(param_2 + _DAT_112ecd638);
    func_0x000107c6157c(uVar12);
    FUN_10291d56c(puVar1,puVar7);
    func_0x000107c6142c(puVar7);
    func_0x000107c61574(uVar12);
    if (puVar1 == (undefined *)0x0) goto LAB_1029213c4;
    puVar3 = PTR_PTR_1126b20d8;
    func_0x000107c61168(PTR_PTR_1126b20d8);
    func_0x000107c3eec8();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    uVar2 = *(ulong *)(param_2 + _DAT_112ecd5d8);
    func_0x000107c61174(uVar2);
    uVar8 = uVar2;
    FUN_1029214a4();
    uVar5 = uVar8;
    func_0x0001091f3948();
    func_0x000107c61180();
    uVar6 = uVar2;
    func_0x000107c3ed80(uVar2);
LAB_10292136c:
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar8);
    func_0x000107c615e8(uVar5);
    func_0x000107c42c1c(*(undefined8 *)(param_2 + _DAT_112ecd5e0));
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar4);
  }
  else {
    puVar11 = puVar9;
    func_0x000107c605b8();
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar10);
    puVar7 = puVar11;
    if (((ulong)puVar1 & 1) != 0) goto LAB_102921254;
    puVar1 = PTR_PTR_1133ba9d0;
    func_0x000107c5faec();
    puVar9 = puVar11;
    func_0x000107c5faec();
    if (puVar1 != param_1 || puVar11 != puVar9) {
      puVar7 = puVar11;
      func_0x000107c605b8(puVar1,puVar11,param_1,puVar9,0);
      func_0x000107c6142c(puVar11);
      func_0x000107c6142c(puVar9);
      if (((ulong)puVar1 & 1) != 0) goto LAB_1029213f8;
      puVar3 = PTR_PTR_1126ae6d0;
      func_0x000107c610f8(PTR_PTR_1126ae6d0);
      func_0x000107c4831c();
      puVar1 = PTR_PTR_1126b1bb0;
      func_0x000107c61168(PTR_PTR_1126b1bb0);
      func_0x000107c3e6c4();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      puVar3 = PTR_PTR_1126b20d8;
      func_0x000107c61168(PTR_PTR_1126b20d8);
      func_0x000107c3eec8();
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c3ecc8();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      uVar2 = *(ulong *)(param_2 + _DAT_112ecd5d8);
      func_0x000107c61174(uVar2);
      uVar8 = uVar2;
      FUN_1029214a4();
      uVar5 = uVar8;
      func_0x0001091f3948();
      func_0x000107c61180();
      uVar6 = uVar2;
      func_0x000107c3ed80(uVar2);
      goto LAB_10292136c;
    }
    puVar7 = puVar9;
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c(puVar9);
LAB_1029213f8:
    uVar8 = *(ulong *)(*(long *)(param_2 + _DAT_112ecd630) + _DAT_113041e50);
    func_0x000107c5c364();
    func_0x000107c61180();
    uVar6 = uVar8;
    func_0x000107c5faec();
    func_0x000107c61170(uVar8);
    uVar8 = uVar6 & 0xffffffffffff;
    if (((ulong)puVar7 & 0x2000000000000000) != 0) {
      uVar8 = (ulong)puVar7 >> 0x38 & 0xf;
    }
    if (uVar8 == 0) goto LAB_1029213c0;
    uVar12 = *(undefined8 *)(param_2 + _DAT_112ecd638);
    func_0x000107c6157c(uVar12);
    FUN_10291d254(uVar6,puVar7);
    func_0x000107c6142c(puVar7);
    func_0x000107c61574(uVar12);
    if (uVar6 == 0) goto LAB_1029213c4;
    FUN_102921670(uVar6);
  }
  func_0x000107c61170(uVar6);
LAB_1029213c4:
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1029214a4; end: 10292166f;  */

undefined * FUN_1029214a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar9 = &puStack_c0;
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8();
  func_0x000107c4807c();
  puVar5 = &UNK_11056ce78;
  puVar3 = puVar5;
  func_0x000107c613fc(&UNK_11056ce78,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_11056d188;
  func_0x000107c613fc(&UNK_11056d188,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  func_0x000107c613fc(&UNK_11056ce78,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_11056d1b0;
  func_0x000107c613fc(&UNK_11056d1b0,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined **)(puVar6 + 0x18) = puVar2;
  puVar7 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x102925404;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e1779c;
  puStack_78 = &UNK_11056d1c8;
  ppuVar8 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar8);
  pcStack_a0 = FUN_102925438;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_100e17304;
  puStack_a8 = &UNK_11056d1f0;
  puStack_98 = puVar6;
  func_0x000107c60bc4(&puStack_c0);
  func_0x000107c6157c(puVar3);
  func_0x000107c61174(puVar2);
  func_0x000107c6157c(puVar5);
  func_0x000107c47be0(puVar7);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(puStack_98);
  puVar4 = puStack_68;
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  return puVar7;
}



/* Entry: 102921670; end: 102921807;  */

/* WARNING: Possible PIC construction at 0x000102921704: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102921708) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102921670(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126b47b8;
  func_0x000107c610f8(PTR_PTR_1126b47b8);
  func_0x000107c491a8();
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  puVar2 = PTR_PTR_1126b47c0;
  func_0x000107c610f8(PTR_PTR_1126b47c0);
  func_0x000107c464e8();
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112ecd650),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102921808; end: 10292186f;  */

undefined * FUN_102921808(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    FUN_102921870();
    func_0x000107c61170(puVar1);
  }
  return puVar2;
}



/* Entry: 102921870; end: 102921a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102921870(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  FUN_10291e968();
  lVar3 = param_1;
  func_0x000107c5a96c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar2 = *(undefined8 *)(lVar3 + _DAT_113034af0);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  lVar3 = *(long *)(unaff_x20 + _DAT_112ecd5b8);
  func_0x000107c5a96c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(lVar3 + _DAT_113034af8);
  func_0x000107c61174(uVar4);
  func_0x000107c61170(lVar3);
  lVar3 = *(long *)(unaff_x20 + _DAT_112ecd5f8);
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar5 = uVar2;
    func_0x000108f936d8(uVar2,uVar4,0,lVar3);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(lVar3);
    uVar6 = 0;
    func_0x000102925780(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar2 = uVar6;
    func_0x000100120cb0();
    uVar4 = uVar5;
    func_0x000107c5fe10(uVar5,uVar6,uVar2);
    func_0x000107c61170(uVar5);
    uStack_38 = uVar4;
    func_0x000108f95f00(0x1a);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    FUN_10254a3b8(&uStack_40,puVar7);
    func_0x000107c61170(uStack_40);
    uVar2 = uStack_38;
    uVar4 = uStack_38;
    FUN_102924c70(uStack_38);
    func_0x000107c6142c(uVar2);
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102921a04);
  (*pcVar1)();
}



/* Entry: 102921a04; end: 102921a6b;  */

undefined * FUN_102921a04(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  puVar1 = (undefined *)(param_1 + 0x10);
  func_0x000107c61618();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    puVar2 = puVar1;
    func_0x000102924d1c();
    func_0x000107c61170(puVar1);
  }
  return puVar2;
}



/* Entry: 102921a6c; end: 102921baf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102921a6c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar3 = &puStack_90;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar4 = *(long *)(lVar1 + _DAT_112ecd668);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112fb0580);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar4);
    puVar2 = &UNK_11056ce78;
    func_0x000107c613fc(&UNK_11056ce78,0x18,7);
    func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
    param_1 = param_1 + 0x10;
    func_0x000107c61618(param_1);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    func_0x000107c61170(param_1);
    pcStack_70 = FUN_102925620;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000b0c7c;
    puStack_78 = &UNK_11056d4c0;
    puStack_68 = puVar2;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    func_0x000107c41864(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 102921bb0; end: 102921c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102921bb0(long param_1)

{
  ulong *puVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = *(ulong **)(param_1 + _DAT_112ecd668);
    func_0x000107c61174();
    func_0x000107c61170();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x70))();
    func_0x000107c61170(puVar1);
    if (param_1 != 0) {
      func_0x000107c41b14(param_1);
      func_0x000107c615e8(param_1);
    }
  }
  return;
}



/* Entry: 102921c54; end: 102921cbf;  */

void FUN_102921c54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102921cc0,uVar1,uVar2);
  return;
}



/* Entry: 102921cc0; end: 102921ddb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102921cc0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 *puVar5;
  
  lVar1 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b3530;
    func_0x000107c610f8(PTR_PTR_1126b3530);
    func_0x000107c4807c();
    func_0x0001003336e4(0);
    func_0x000107c610f8();
    uVar3 = 0;
    FUN_102925b50();
    puVar5 = (undefined8 *)(unaff_x22 + 0x30);
    *puVar5 = uVar3;
    func_0x00010008a7c8(unaff_x22 + 0x28,puVar5);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000100083b20(puVar5);
    func_0x000107c61574(uVar4);
    uVar4 = *puVar5;
    func_0x000107c5677c(uVar4);
    func_0x000107c3e2c0(puVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102921dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102921ddc; end: 102921e17;  */

void FUN_102921ddc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102921e14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102921e18; end: 102921e6b;  */

void FUN_102921e18(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102921e6c();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102921e6c; end: 1029228a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102921e6c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  code *pcVar12;
  long unaff_x20;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  code *pcVar19;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long alStack_a0 [3];
  long lStack_88;
  long alStack_80 [4];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ecd620);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar15 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar15 == 0) {
    return;
  }
  lVar1 = lVar15;
  func_0x000107c509b4();
  func_0x000107c61180();
  func_0x000107c615e8();
  if (lVar1 == 0) {
    return;
  }
  func_0x000102922534();
  lVar2 = lVar1;
  FUN_1029228a4();
  lVar3 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  alStack_a0[0] = lVar2;
  lStack_88 = lVar3;
  alStack_80[0] = lVar15;
  alStack_80[3] = lVar3;
  func_0x000107c61434(lVar2);
  func_0x000107c615f0(lVar1);
  uVar4 = 0xd000000000000047;
  func_0x000107c5fadc(0xd000000000000047,0x800000010f0cc740);
  if (lVar3 == 0) {
    puVar14 = (undefined1 *)0x0;
    puVar16 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(alStack_80,lVar3);
    lVar18 = *(long *)(lVar3 + -8);
    lVar15 = *(long *)(lVar18 + 0x40);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    uVar13 = lVar15 + 0xfU & 0xfffffffffffffff0;
    puVar16 = auStack_c0 + -uVar13;
    pcVar12 = *(code **)(lVar18 + 0x10);
    lStack_b8 = lVar1;
    (*pcVar12)(puVar16);
    puVar14 = puVar16;
    func_0x000107c605b0(puVar16,lVar3);
    pcVar19 = *(code **)(lVar18 + 8);
    (*pcVar19)(puVar16,lVar3);
    func_0x000100183ab8(alStack_80);
    func_0x0001006732c8(alStack_a0,lVar3);
    (*(code *)PTR____chkstk_darwin_11034bd40)();
    lVar1 = lStack_b8;
    puVar17 = auStack_c0 + -uVar13;
    (*pcVar12)(puVar17);
    puVar16 = puVar17;
    func_0x000107c605b0(puVar17,lVar3);
    (*pcVar19)(puVar17,lVar3);
    func_0x000100183ab8(alStack_a0);
  }
  puVar5 = PTR_PTR_1126afcc8;
  func_0x000107c610f8();
  func_0x000107c45f04();
  func_0x000107c615e8(lVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c615e8(puVar14);
  func_0x000107c615e8(puVar16);
  puVar6 = PTR_PTR_1126afcd0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x000107c61434(lVar2);
    lVar15 = 0x6f7461676976616e;
    uVar13 = 0;
    func_0x000100029284(0x6f7461676976616e);
    if ((uVar13 & 1) != 0) {
      func_0x0001000bb420(*(long *)(lVar2 + 0x38) + lVar15 * 0x20,alStack_80);
      func_0x000107c6142c(lVar2);
      goto LAB_102922108;
    }
    func_0x000107c6142c(lVar2);
  }
  alStack_80[1] = 0;
  alStack_80[0] = 0;
  alStack_80[3] = 0;
  alStack_80[2] = 0;
LAB_102922108:
  func_0x000107c6142c(lVar2);
  if (alStack_80[3] == 0) {
    func_0x000102925740(alStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    uVar4 = 0;
    func_0x000102925780(0,0x112ecd6f8,&PTR_PTR_1126d91c0);
    plVar7 = alStack_a0;
    func_0x000107c6147c(plVar7,alStack_80,PTR___sypN_11034f1a8 + 8,uVar4,6);
    lVar15 = alStack_a0[0];
    if (((ulong)plVar7 & 1) != 0) {
      func_0x000107c561c0(alStack_a0[0]);
      func_0x000107c61170(lVar15);
    }
  }
  func_0x000107c61174();
  puVar8 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar8 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x102922524);
    (*pcVar12)();
  }
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c3d89c(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c5a050(puVar5);
  func_0x000107c61170(puVar5);
  lVar15 = 0x112d360b8;
  FUN_1029249d4(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar15 + 0x18) = 9;
  *(undefined8 *)(lVar15 + 0x10) = 4;
  puVar8 = puVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar9 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x102922528);
    (*pcVar12)();
  }
  puVar10 = puVar9;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  puVar9 = puVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar10);
  *(undefined **)(lVar15 + 0x20) = puVar9;
  puVar8 = puVar5;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar9 = puVar6;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (puVar9 != (undefined *)0x0) {
    puVar10 = puVar9;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    puVar9 = puVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar10);
    *(undefined **)(lVar15 + 0x28) = puVar9;
    puVar8 = puVar5;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar9 = puVar6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar9 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x102922530);
      (*pcVar12)();
    }
    puVar10 = puVar9;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(puVar9);
    puVar9 = puVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar10);
    *(undefined **)(lVar15 + 0x30) = puVar9;
    puVar8 = puVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    puVar9 = puVar6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (puVar9 != (undefined *)0x0) {
      puVar10 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      puVar11 = puVar9;
      func_0x000107c3ec1c(puVar9);
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      puVar9 = puVar8;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar11);
      *(undefined **)(lVar15 + 0x38) = puVar9;
      uVar4 = 0;
      func_0x000102925780(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar3 = lVar15;
      func_0x000107c5fc48(lVar15,uVar4);
      func_0x000107c61574(lVar15);
      func_0x000107c3d048(puVar10);
      func_0x000107c61170(lVar3);
      puVar8 = puVar6;
      func_0x000107c5677c();
      FUN_10291e770();
      if (puVar8 != (undefined *)0x0) {
        puVar9 = puVar8;
        func_0x000107c61494();
        if (puVar9 != (undefined *)0x0) {
          func_0x000107c57740();
        }
        func_0x000107c615e8(puVar8);
      }
      func_0x000107c61604(unaff_x20 + _DAT_112ecd5a8,puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c4f018(unaff_x20);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x102922534);
    (*pcVar12)();
  }
                    /* WARNING: Does not return */
  pcVar12 = (code *)SoftwareBreakpoint(1,0x10292252c);
  (*pcVar12)();
}



/* Entry: 1029228a4; end: 102922bdf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1029228a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *apuStack_88 [3];
  undefined *puStack_70;
  undefined1 auStack_68 [32];
  undefined *puStack_48;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ecd608);
  puStack_48 = puVar1;
  func_0x000107c4d604();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  if (puVar3 != (undefined *)0x0) {
    puVar2 = puVar3;
    func_0x000107c614f0();
    apuStack_88[0] = puVar3;
    puStack_70 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      func_0x000102925740(apuStack_88,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(auStack_68,0xd000000000000010,0x800000010f0cc790);
      func_0x000102925740(auStack_68,0x112d387f8,&UNK_10d902650);
    }
    else {
      func_0x000100102924(apuStack_88,auStack_68);
      puVar3 = puVar1;
      func_0x000107c61558(puVar1);
      apuStack_88[0] = puVar1;
      func_0x0001001029e8(auStack_68,0xd000000000000010,0x800000010f0cc790,puVar3);
      puStack_48 = apuStack_88[0];
    }
  }
  puVar3 = *(undefined **)(*(long *)(unaff_x20 + _DAT_112ecd6a0) + _DAT_113091ad8);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ecd5f8);
  func_0x000107c61174();
  func_0x000107c3fa04(uVar5);
  func_0x000107c61180();
  puVar1 = puVar3;
  func_0x00010601a310(puVar3,uVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c615e8(uVar5);
  if (puVar1 != (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
    func_0x000102925780(0,0x112ecd700,&PTR_PTR_1126b0fb0);
    apuStack_88[0] = puVar1;
    puStack_70 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      func_0x000102925740(apuStack_88,0x112d387f8,&UNK_10d902650);
      func_0x000100216878(auStack_68,0x4365636976726573,0xed00006769666e6f);
      func_0x000102925740(auStack_68,0x112d387f8,&UNK_10d902650);
    }
    else {
      func_0x000100102924(apuStack_88,auStack_68);
      puVar1 = puStack_48;
      puVar3 = puStack_48;
      func_0x000107c61558(puStack_48);
      apuStack_88[0] = puVar1;
      func_0x0001001029e8(auStack_68,0x4365636976726573,0xed00006769666e6f,puVar3);
      puStack_48 = apuStack_88[0];
    }
  }
  puVar1 = PTR_PTR_1126d91c0;
  func_0x000107c610f8();
  func_0x000107c4842c();
  lVar4 = 0;
  func_0x000102925780(0,0x112ecd6f8,&PTR_PTR_1126d91c0);
  apuStack_88[0] = puVar1;
  puStack_70 = (undefined *)lVar4;
  if (lVar4 == 0) {
    func_0x000102925740(apuStack_88,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(auStack_68,0x6f7461676976616e,0xe900000000000072);
    func_0x000102925740(auStack_68,0x112d387f8,&UNK_10d902650);
    apuStack_88[0] = puStack_48;
  }
  else {
    func_0x000100102924(apuStack_88,auStack_68);
    puVar1 = puStack_48;
    puVar3 = puStack_48;
    func_0x000107c61558(puStack_48);
    apuStack_88[0] = puVar1;
    func_0x0001001029e8(auStack_68,0x6f7461676976616e,0xe900000000000072,puVar3);
  }
  return apuStack_88[0];
}



/* Entry: 102922be0; end: 102922d43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102922be0(uint param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  lVar3 = unaff_x20;
  func_0x000107c4f078();
  func_0x000107c61180();
  lVar1 = _DAT_112ecd5a8;
  lVar4 = unaff_x20 + _DAT_112ecd5a8;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar5 = 0;
    if (lVar4 != 0) goto LAB_102922cac;
  }
  else {
    if (lVar4 == 0) {
LAB_102922cac:
      func_0x000107c61170();
      goto LAB_102922cb0;
    }
    func_0x000107c61170();
    lVar5 = lVar3;
    func_0x000107c61170();
    if (lVar3 != lVar4) goto LAB_102922cb0;
  }
  FUN_10291e770();
  if (lVar5 != 0) {
    lVar4 = lVar5;
    func_0x000107c61494();
    if (lVar4 != 0) {
      func_0x000107c57740();
    }
    func_0x000107c615e8(lVar5);
  }
  func_0x000107c61604(unaff_x20 + lVar1,0);
LAB_102922cb0:
  ppuVar6 = (undefined **)0x0;
  if (param_2 != 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11056cee0;
    ppuVar6 = &puStack_90;
    lStack_70 = param_2;
    uStack_68 = param_3;
    func_0x000107c60bc4(ppuVar6);
    uVar2 = uStack_68;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(uVar2);
  }
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_dismissViewControllerAnimated_co_1125bec68,
                      param_1 & 1,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  return;
}



/* Entry: 102922d44; end: 102922dd3; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController dismissViewControllerAnimated:completion:] */

void FUN_102922d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_11056cfa8;
    func_0x000107c613fc(&UNK_11056cfa8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    pcVar2 = FUN_102925368;
  }
  func_0x000107c61174(param_1);
  FUN_102922be0(param_3,pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102922dd4; end: 102922e3f;  */

void FUN_102922dd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102922e40,uVar1,uVar2);
  return;
}



/* Entry: 102922e40; end: 102922f83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102922e40(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ecd558;
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + _DAT_112ecd558) == 0) {
      puVar3 = PTR_PTR_1126aead8;
      func_0x000107c610f8();
      func_0x000107c4807c();
      func_0x000100360844(0);
      func_0x000107c610f8();
      func_0x000107c61174();
      lVar4 = lVar2;
      func_0x000107c61174();
      puVar5 = puVar3;
      func_0x000103b4d104(puVar3,lVar2,0,0);
      *(undefined **)(unaff_x22 + 0x30) = puVar5;
      func_0x00010008a7c8(unaff_x22 + 0x28,unaff_x22 + 0x30);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
      func_0x000100083b20(unaff_x22 + 0x30);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar3);
      func_0x000107c61574(uVar6);
      *(undefined8 *)(lVar2 + lVar1) = *(undefined8 *)(unaff_x22 + 0x30);
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61170();
  }
                    /* WARNING: Could not recover jumptable at 0x000102922f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102922f84; end: 10292315b;  */

undefined * FUN_102922f84(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lStack_58;
  undefined1 auStack_50 [32];
  
  func_0x0001000bb420(param_1,auStack_50);
  uVar1 = 0;
  func_0x000102925780(0,0x112ecd6e8,&PTR_PTR_1126ce658);
  plVar2 = &lStack_58;
  puVar5 = auStack_50;
  func_0x000107c6147c(plVar2,puVar5,PTR___sypN_11034f1a8 + 8,uVar1,6);
  puVar3 = PTR_PTR_1126ab9a0;
  if (((ulong)plVar2 & 1) == 0) {
    func_0x000107c610f8(PTR_PTR_1126ab9a0);
    func_0x000107c453e4();
    uVar1 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c578cc(puVar3);
    func_0x000107c61170(uVar1);
    uVar1 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c578f4(puVar3);
    func_0x000107c61170(uVar1);
    lVar4 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c551d4(puVar3);
  }
  else {
    func_0x000107c610f8(PTR_PTR_1126ab9a0);
    func_0x000107c453e4();
    lVar4 = lStack_58;
    func_0x000107c4f38c();
    func_0x000107c61180();
    puVar6 = puVar5;
    if (lVar4 == 0) {
      func_0x000107c5faec();
      puVar6 = puVar5;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar5);
    }
    func_0x000107c578cc(puVar3);
    func_0x000107c61170(lVar4);
    lVar4 = lStack_58;
    func_0x000107c4f3c0();
    func_0x000107c61180();
    puVar5 = puVar6;
    if (lVar4 == 0) {
      func_0x000107c5faec();
      puVar5 = puVar6;
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar6);
    }
    func_0x000107c578f4(puVar3);
    func_0x000107c61170(lVar4);
    lVar4 = lStack_58;
    func_0x000107c44f18();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(puVar5);
    }
    func_0x000107c551d4(puVar3);
    func_0x000107c61170(lStack_58);
  }
  func_0x000107c61170(lVar4);
  return puVar3;
}



/* Entry: 10292315c; end: 1029231df;  */

void FUN_10292315c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 auStack_40 [3];
  undefined8 uStack_28;
  
  puVar2 = auStack_40;
  uVar1 = 0;
  func_0x000102925780(0,0x112ecd6e8,&PTR_PTR_1126ce658);
  auStack_40[0] = param_2;
  uStack_28 = uVar1;
  func_0x000107c61174(param_2);
  FUN_102922f84();
  uVar1 = 0;
  func_0x000102925780(0,0x112ecd6f0,&PTR_PTR_1126ab9a0);
  param_1[3] = uVar1;
  *param_1 = puVar2;
  func_0x000100183ab8(auStack_40);
  return;
}



/* Entry: 1029231e0; end: 102923243;  */

void FUN_1029231e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ab990;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a0f8();
  uVar2 = 0;
  func_0x000102925780(0,0x112ecd6e0,&PTR_PTR_1126ab990);
  param_1[3] = uVar2;
  *param_1 = puVar1;
  return;
}



/* Entry: 102923244; end: 1029234eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102923244(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lStack_78;
  undefined1 auStack_70 [32];
  
  func_0x0001000bb420(param_1,auStack_70);
  uVar1 = 0;
  func_0x000104407094(0);
  plVar2 = &lStack_78;
  func_0x000107c6147c(plVar2,auStack_70,PTR___sypN_11034f1a8 + 8,uVar1,6);
  puVar4 = PTR_PTR_1126ab988;
  if (((ulong)plVar2 & 1) == 0) {
    func_0x000107c610f8(PTR_PTR_1126ab988);
    func_0x000107c453e4();
    uVar1 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c56304(puVar4);
    func_0x000107c61170(uVar1);
    uVar1 = 0;
    func_0x000107c5ee20(0,0xc000000000000000);
    func_0x000107c59350(puVar4);
    func_0x000107c61170(uVar1);
    func_0x000107c558e8(puVar4);
  }
  else {
    func_0x000107c610f8(PTR_PTR_1126ab988);
    func_0x000107c453e4();
    uVar1 = *(undefined8 *)(lStack_78 + _DAT_1130774c0);
    uVar9 = ((undefined8 *)(lStack_78 + _DAT_1130774c0))[1];
    func_0x000107c61434(uVar9);
    func_0x000107c5fadc(uVar1,uVar9);
    func_0x000107c6142c(uVar9);
    func_0x000107c56304(puVar4);
    func_0x000107c61170(uVar1);
    uVar1 = *(undefined8 *)(lStack_78 + _DAT_1130774d0);
    uVar9 = ((undefined8 *)(lStack_78 + _DAT_1130774d0))[1];
    func_0x00010006c00c(uVar1,uVar9);
    uVar3 = uVar1;
    func_0x000107c5ee20(uVar1,uVar9);
    func_0x00010006c090(uVar1,uVar9);
    func_0x000107c59350(puVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c558e8(puVar4);
    uVar8 = ((undefined8 *)(lStack_78 + _DAT_1130774d8))[1];
    if (uVar8 >> 0x3c < 0xf) {
      uVar9 = *(undefined8 *)(lStack_78 + _DAT_1130774d8);
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x00010006c00c(uVar9,uVar8);
      func_0x00010006c00c(uVar9,uVar8);
      uVar1 = uVar9;
      func_0x000107c5ee20(uVar9,uVar8);
      func_0x000107c4635c();
      func_0x000107c61170(uVar1);
      func_0x0001000b44c0(uVar9,uVar8);
      if (puVar5 != (undefined *)0x0) {
        puVar6 = PTR_PTR_1126b27a8;
        func_0x000107c61168();
        func_0x000107c45160();
        func_0x000107c61180();
        if (puVar6 != (undefined *)0x0) {
          puVar7 = puVar6;
          func_0x000107c30e3c();
          func_0x000107c61180();
          func_0x000107c59cf0(puVar4);
          func_0x000107c61170(puVar5);
          func_0x000107c61170(puVar6);
          puVar5 = puVar7;
        }
        func_0x000107c61170(puVar5);
      }
      func_0x000107c61170(lStack_78);
      func_0x0001000b44c0(uVar9,uVar8);
    }
    else {
      func_0x000107c61170(lStack_78);
    }
  }
  return puVar4;
}



/* Entry: 1029234ec; end: 10292355b;  */

void FUN_1029234ec(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 auStack_40 [3];
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  uVar2 = param_2;
  func_0x000107c614f0();
  auStack_40[0] = param_2;
  uStack_28 = uVar2;
  func_0x000107c61174(param_2);
  FUN_102923244();
  uVar2 = 0;
  func_0x000102925780(0,0x112ecd6d8,&PTR_PTR_1126ab988);
  param_1[3] = uVar2;
  *param_1 = puVar1;
  func_0x000100183ab8(auStack_40);
  return;
}



/* Entry: 10292355c; end: 10292366b;  */

void FUN_10292355c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_50 [24];
  undefined8 uStack_38;
  
  puVar3 = auStack_50;
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(auStack_50);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  func_0x0001006732c8(auStack_50,uStack_38);
  func_0x000107c605b0();
  func_0x000100183ab8(auStack_50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10292366c; end: 102923873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10292366c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_c8 [24];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_68,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar6 = *(long *)(lVar1 + _DAT_112ecd5e0);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar6;
    func_0x000107c5194c();
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    if (lVar1 != 0) {
      func_0x000107c61170(lVar1);
      func_0x000107c61428(param_3 + 0x10,auStack_c8,0,0);
      lVar1 = param_3 + 0x10;
      func_0x000107c61618();
      if (lVar1 != 0) {
        uVar7 = *(undefined8 *)(lVar1 + _DAT_112ecd5e0);
        func_0x000107c61174(uVar7);
        func_0x000107c61170(lVar1);
        uVar2 = uVar7;
        func_0x000107c4ffe8(uVar7);
        func_0x000107c61180();
        func_0x000107c61170(uVar7);
        func_0x000107c615e8(uVar2);
      }
    }
  }
  func_0x000107c61428(param_3 + 0x10,auStack_80,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar8 = *(ulong *)(param_3 + _DAT_112ecd550);
    if (uVar8 == 0) {
      func_0x000107c61170();
    }
    else {
      func_0x000107c61174();
      func_0x000107c61170(param_3);
      uVar3 = uVar8;
      func_0x000107c49aa0();
      func_0x000107c61170(uVar8);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
  }
  puVar4 = &UNK_11056d228;
  func_0x000107c613fc(&UNK_11056d228,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  pcStack_90 = FUN_102925440;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000b0c7c;
  puStack_98 = &UNK_11056d240;
  ppuVar5 = &puStack_b0;
  puStack_88 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar4 = puStack_88;
  func_0x000100b64c10(param_1,param_2);
  func_0x000107c61574(puVar4);
  func_0x000107c41864(param_4);
  func_0x000107c60bd0(ppuVar5);
  return;
}



/* Entry: 102923874; end: 102923a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102923874(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  lVar2 = 0;
  func_0x000107c5f804();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)&puStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + _DAT_112ecd678);
  func_0x000107c3eb1c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000102925780(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
      (**(code **)(lVar8 + 0x68))
                (lVar7,*(undefined4 *)
                        PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar2);
      lVar3 = lVar7;
      func_0x000107c5fff0(lVar7);
      (**(code **)(lVar8 + 8))(lVar7,lVar2);
      puVar5 = &UNK_11056ce78;
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      pcStack_50 = FUN_1029253fc;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_100f6151c;
      puStack_58 = &UNK_11056d128;
      ppuVar6 = &puStack_70;
      puStack_48 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_48);
      func_0x000107c3eb28(lVar4);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(lVar3);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102923a0c);
  (*pcVar1)();
}



/* Entry: 102923a0c; end: 102923b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102923a0c(ulong param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_1 == 0) {
      param_1 = 0;
    }
    else if (param_1 >> 0x3e == 0) {
      param_1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      if (-1 < (long)param_1) {
        param_1 = param_1 & 0xffffffffffffff8;
      }
      func_0x000107c60480();
    }
    *(ulong *)(param_3 + _DAT_112ecd578) = param_1;
    lVar2 = param_1 + *(long *)(param_3 + _DAT_112ecd580);
    if (SCARRY8(param_1,*(long *)(param_3 + _DAT_112ecd580))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102923ae8);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(param_3 + _DAT_112ecd568);
    func_0x000107c61174(uVar3);
    func_0x000107c5fe40(lVar2);
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102923b08; end: 102923b73;  */

void FUN_102923b08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar1;
  *(undefined8 *)(unaff_x22 + 200) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102923b74,uVar1,uVar2);
  return;
}



/* Entry: 102923b74; end: 102923c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102923b74(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x90,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xd0) = lVar2;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + _DAT_112ecd688) + _DAT_113042988);
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar3;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xa8;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_102923c8c;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    uVar1 = 0x112ecd6d0;
    func_0x0001000285a8(0x112ecd6d0,&UNK_10daf2cd8);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_102923db0;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11056d4e8;
    *(long *)(unaff_x22 + 0x70) = lVar2;
    func_0x000107c615f0(uVar3);
    func_0x000107c44158();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x000102923c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102923c8c; end: 102923cc7;  */

void FUN_102923c8c(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_102923cc8,*(undefined8 *)(*unaff_x22 + 0xc0),*(undefined8 *)(*unaff_x22 + 200));
  return;
}



/* Entry: 102923cc8; end: 102923daf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102923cc8(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb8));
  uVar5 = *(ulong *)(unaff_x22 + 0xa8);
  func_0x000107c615e8(uVar3);
  if (uVar5 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar4 = uVar5;
    }
    func_0x000107c60480();
  }
  lVar6 = *(long *)(unaff_x22 + 0xd0);
  func_0x000107c6142c(uVar5);
  *(ulong *)(lVar6 + _DAT_112ecd580) = uVar4;
  lVar2 = *(long *)(lVar6 + _DAT_112ecd578);
  lVar6 = lVar2 + uVar4;
  if (!SCARRY8(lVar2,uVar4)) {
    lVar2 = *(long *)(unaff_x22 + 0xd0);
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112ecd568);
    func_0x000107c61174(uVar3);
    func_0x000107c5fe40(lVar6);
    func_0x000107c4d664(uVar3,param_2,lVar6);
    func_0x000107c61170(lVar6);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x000102923d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102923db0);
  (*pcVar1)();
}



/* Entry: 102923db0; end: 102923dff;  */

void FUN_102923db0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  uVar2 = 0;
  func_0x0001007165a4(0);
  func_0x000107c5fc54(param_2,uVar2);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 102923e00; end: 102923e6b;  */

void FUN_102923e00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102923e6c,uVar1,uVar2);
  return;
}



/* Entry: 102923e6c; end: 102923f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102923e6c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  long *plVar5;
  
  lVar1 = *(long *)(unaff_x22 + 0x38);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x00010035c24c(0);
    func_0x000107c610f8();
    lVar2 = lVar1;
    func_0x000107c61174();
    func_0x000103927840(lVar1,1);
    plVar5 = (long *)(unaff_x22 + 0x30);
    *plVar5 = lVar1;
    func_0x00010008a7c8(unaff_x22 + 0x28,plVar5);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
    func_0x000100083b20(plVar5);
    func_0x000107c61574(uVar3);
    lVar4 = *plVar5;
    func_0x000107c4f018(lVar2);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x000102923f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102923f6c; end: 102923f93; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController initWithCoder:] */

void FUN_102923f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000102924e94();
  return;
}



/* Entry: 102923f94; end: 102923fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102923f94(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c40808();
    *(long *)(lVar2 + _DAT_112ecd580) = param_1;
    lVar4 = *(long *)(lVar2 + _DAT_112ecd578) + param_1;
    if (SCARRY8(*(long *)(lVar2 + _DAT_112ecd578),param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102920420);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112ecd568);
    func_0x000107c61174(uVar3);
    func_0x000107c5fe40(lVar4);
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 102923fb8; end: 102923fff;  */

void FUN_102923fb8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102925ae4;
  plVar3[7] = unaff_x20;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102923e6c,lVar1,lVar2);
  return;
}



/* Entry: 102924000; end: 10292406f;  */

void FUN_102924000(undefined8 param_1)

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
  plVar3[1] = 0x102925adc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 102924070; end: 10292409b; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController initWithNibName:bundle:] */

void FUN_102924070(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorMyFanPassManagementImplementation.CreatorMyFanPassManagementViewController"
                      ,0x51,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10292409c);
  (*pcVar1)();
}



/* Entry: 10292409c; end: 102924153; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController memoriesQuickPostDidFinishWithDidSend:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10292409c(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ecd560);
    func_0x000102925780(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61174(param_1);
    pcVar1 = "fan_pass_story_sent";
    func_0x000107c60124("fan_pass_story_sent",0x13,2);
    func_0x000107c4d664(uVar2);
    func_0x000107c61170(pcVar1);
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ecd650);
  func_0x000107c4ffe8(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 102924154; end: 1029244a7;  */

/* WARNING: Possible PIC construction at 0x000102924268: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029242c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029242d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029242ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102924350: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001029242f0) */
/* WARNING: Removing unreachable block (ram,0x0001029242d8) */
/* WARNING: Removing unreachable block (ram,0x0001029242c4) */
/* WARNING: Removing unreachable block (ram,0x00010292426c) */
/* WARNING: Removing unreachable block (ram,0x000102924354) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102924154(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  
  uVar1 = *(ulong *)(*(long *)(unaff_x20 + _DAT_112ecd630) + _DAT_113041e50);
  func_0x000107c5c364();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    func_0x000107c6142c(param_2);
  }
  else {
    FUN_10291d254(uVar2,param_2);
    func_0x000107c6142c(param_2);
    if (uVar2 != 0) {
      puVar3 = &UNK_11056ce78;
      func_0x000107c613fc(&UNK_11056ce78,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar4 = &UNK_11056cf18;
      func_0x000107c613fc(&UNK_11056cf18,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(ulong *)(puVar4 + 0x18) = uVar2;
      lVar5 = *(long *)(unaff_x20 + _DAT_112ecd650);
      func_0x000107c6157c(puVar3);
      func_0x000107c61174(uVar2);
      func_0x000107c4ffe8();
      func_0x000107c61180();
      if (lVar5 == 0) {
        func_0x000102924378(puVar3,uVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar3);
      return;
    }
  }
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112ecd650));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1029244a8; end: 1029244af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029244a8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_58,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126b20d8;
    func_0x000107c61168(PTR_PTR_1126b20d8);
    func_0x000107c3eec8();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112ecd5d8);
    func_0x000107c61174(uVar4);
    uVar5 = uVar4;
    FUN_1029214a4();
    uVar6 = uVar5;
    func_0x0001091f3948();
    func_0x000107c61180();
    uVar7 = uVar4;
    func_0x000107c3ed80(uVar4);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar5);
    func_0x000107c615e8(uVar6);
    func_0x000107c42c1c(*(undefined8 *)(lVar1 + _DAT_112ecd5e0));
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar7);
  }
  return;
}



/* Entry: 1029244b0; end: 1029244d7; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController startCameraWorkflow] */

void FUN_1029244b0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102924154();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1029244d8; end: 10292455f; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController didSendSnap] */

/* WARNING: Possible PIC construction at 0x000102924548: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010292454c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029244d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecd560);
  func_0x000102925780(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
  func_0x000107c61174(param_1);
  func_0x000107c60124("mass_snap_sent",0xe,2);
  func_0x000107c4d664(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102924560; end: 102924563; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController didSaveSnap] */

void FUN_102924560(void)

{
  return;
}



/* Entry: 102924564; end: 102924597; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController cardTransitionWillBeginWithView:] */

void FUN_102924564(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102922be0(1,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102924598; end: 10292468f; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102924598(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_3 + _DAT_112ecd598);
  if (lVar3 != 0) {
    func_0x000102925780(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    func_0x000107c61174(lVar3);
    uVar1 = param_5;
    func_0x000107c60118(param_5,lVar3);
    if ((uVar1 & 1) != 0) {
      lVar2 = lVar3;
      func_0x000107c3f42c(param_1,param_2,lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_3);
      return (uint)lVar2 ^ 1;
    }
    func_0x000107c61170(lVar3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_3);
  }
  return 1;
}



/* Entry: 102924690; end: 102924693; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController cardToExpandTransition] */

void FUN_102924690(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102924694; end: 10292476b; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController cardTransitionEndedWithView:transitionType:] */

void FUN_102924694(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 1) {
    func_0x000107c61174();
    FUN_102925264("cleanupScope()",0x102925afc,&UNK_11056d150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10292476c; end: 102924773; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController pageViewName] */

undefined8 FUN_10292476c(void)

{
  return 0x46;
}



/* Entry: 102924774; end: 1029247b7;  */

void FUN_102924774(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fef8();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1029247b8; end: 1029247bb;  */

void FUN_1029247b8(void)

{
  return;
}



/* Entry: 1029247bc; end: 1029247d3; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController payoutsScopeWillDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029247bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecd558);
  *(undefined8 *)(param_1 + _DAT_112ecd558) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1029247d4; end: 1029247df; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController didStartSnapchattersUpdateDataRequest:] */

void FUN_1029247d4(void)

{
  return;
}



/* Entry: 1029247e0; end: 10292484f; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

/* WARNING: Possible PIC construction at 0x000102924830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102924834) */

void FUN_1029247e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_5);
  FUN_102924ffc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102924850; end: 102924853; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController didDismissCreatorSubscriptionOnboardingScope] */

void FUN_102924850(void)

{
  return;
}



/* Entry: 102924854; end: 1029248df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102924854(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ecd5e8);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(param_1);
    uVar1 = uVar2;
    func_0x000107c4ffe8(uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uVar1);
  }
  return;
}



/* Entry: 1029248e0; end: 1029249cb; -[_TtC40CreatorMyFanPassManagementImplementation40CreatorMyFanPassManagementViewController chatScopeDidDismiss:] */

/* WARNING: Possible PIC construction at 0x00010292492c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102924930) */

void FUN_1029248e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102925264("chatScopeDidDismiss(_:)",0x102925374,&UNK_11056cfc0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1029249cc; end: 1029249d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1029249cc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(lVar1 + _DAT_112ecd668)) +
                0x70))();
    if (lVar2 != 0) {
      func_0x000107c41b14();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1029249d4; end: 102924a4b;  */

void FUN_1029249d4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102925780(0,param_1,param_2);
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



/* Entry: 102924a4c; end: 102924c6f;  */

long FUN_102924a4c(long *****param_1,undefined8 *param_2,long param_3,long *****param_4)

{
  long ****pppplVar1;
  long *****ppppplVar2;
  long ****pppplVar3;
  long ****pppplVar4;
  code *pcVar5;
  long *****ppppplVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long *****ppppplVar11;
  long lVar12;
  long lVar13;
  long ****pppplVar14;
  long ****pppplVar15;
  ulong uVar16;
  long ****pppplStack_98;
  long ****pppplStack_90;
  long ****pppplStack_88;
  long ****pppplStack_80;
  long ***ppplStack_78;
  long ***ppplStack_70;
  long ***ppplStack_68;
  
  if (((ulong)param_4 & 0xc000000000000001) == 0) {
    uVar9 = -1L << ((ulong)*(byte *)(param_4 + 4) & 0x3f);
    uVar10 = -uVar9;
    uVar16 = 0xffffffffffffffff;
    if (uVar10 < 0x40) {
      uVar16 = ~(-1L << (uVar10 & 0x3f));
    }
    pppplVar14 = (long ****)0x0;
    ppppplVar2 = param_4 + 7;
    pppplVar3 = (long ****)~uVar9;
    pppplVar15 = (long ****)(uVar16 & (ulong)param_4[7]);
    ppppplVar6 = param_1;
  }
  else {
    ppppplVar6 = (long *****)((ulong)param_4 & 0xffffffffffffff8);
    if ((long *****)0x7fffffffffffffff < param_4) {
      ppppplVar6 = param_4;
    }
    func_0x000107c60288();
    uVar7 = 0;
    func_0x000102925780(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar8 = uVar7;
    func_0x000100120cb0();
    func_0x000107c5fe30(&pppplStack_88,ppppplVar6,uVar7,uVar8);
    pppplVar14 = (long ****)ppplStack_70;
    ppppplVar2 = (long *****)pppplStack_80;
    pppplVar3 = (long ****)ppplStack_78;
    pppplVar15 = (long ****)ppplStack_68;
    param_4 = (long *****)pppplStack_88;
  }
  if (param_2 == (undefined8 *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_3;
    if (param_3 != 0) {
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x102924c70);
        (*pcVar5)();
      }
      lVar12 = 0;
      uVar16 = (ulong)(pppplVar3 + 8) >> 6;
      do {
        pppplVar4 = pppplVar14;
        lVar13 = lVar12;
        if ((long)param_4 < 0) {
          func_0x000107c602ac();
          if (ppppplVar6 == (long *****)0x0) break;
          uVar8 = 0;
          pppplStack_98 = (long ****)ppppplVar6;
          func_0x000102925780(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
          ppppplVar6 = &pppplStack_90;
          func_0x000107c6147c(ppppplVar6,&pppplStack_98,PTR___syXlN_11034f1a0 + 8,uVar8,7);
          ppppplVar11 = (long *****)pppplStack_90;
        }
        else {
          while (pppplVar15 == (long ****)0x0) {
            pppplVar1 = (long ****)((long)pppplVar4 + 1);
            if (SCARRY8((long)pppplVar4,1)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x102924c6c);
              (*pcVar5)();
            }
            if ((long)uVar16 <= (long)pppplVar1) {
              pppplVar15 = (long ****)0x0;
              if ((long)uVar16 <= (long)pppplVar14 + 1) {
                uVar16 = (long)pppplVar14 + 1;
              }
              pppplVar14 = (long ****)(uVar16 - 1);
              goto LAB_102924c24;
            }
            pppplVar4 = pppplVar1;
            pppplVar15 = ppppplVar2[(long)pppplVar1];
          }
          uVar9 = ((ulong)pppplVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                  ((ulong)pppplVar15 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          pppplVar15 = (long ****)((long)pppplVar15 - 1U & (ulong)pppplVar15);
          ppppplVar11 = (long *****)
                        param_4[6][LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) + (long)pppplVar4 * 0x40];
          ppppplVar6 = ppppplVar11;
          func_0x000107c61174();
          pppplVar14 = pppplVar4;
        }
        if (ppppplVar11 == (long *****)0x0) break;
        lVar12 = lVar12 + 1;
        *param_2 = ppppplVar11;
        param_2 = param_2 + 1;
        lVar13 = param_3;
      } while (lVar12 != param_3);
    }
  }
LAB_102924c24:
  *param_1 = (long ****)param_4;
  param_1[1] = (long ****)ppppplVar2;
  param_1[2] = pppplVar3;
  param_1[3] = pppplVar14;
  param_1[4] = pppplVar15;
  return lVar13;
}



/* Entry: 102924c70; end: 102924ffb;  */

undefined8 * FUN_102924c70(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    puVar4 = (undefined8 *)param_1[2];
    puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar4 = (undefined8 *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined8 *)0x7fffffffffffffff < param_1) {
      puVar4 = param_1;
    }
    func_0x000107c6029c();
    puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = (undefined *)puVar2;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = puVar4;
    func_0x000101d18154(puVar4,0);
    func_0x000107c61434(param_1);
    puVar3 = &uStack_58;
    FUN_102924a4c(puVar3,puVar2 + 4,puVar4,param_1);
    func_0x000102925640(uStack_58,uStack_50,uStack_48,uStack_40,uStack_38);
    if (puVar3 != puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102924cf4);
      (*pcVar1)();
    }
  }
  return puVar2;
}


