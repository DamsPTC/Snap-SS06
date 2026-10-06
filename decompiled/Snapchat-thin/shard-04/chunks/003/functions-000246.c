/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033b3b50; end: 1033b3b8b;  */

void FUN_1033b3b50(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000104366314(uVar1,param_2[1],0,1);
  *param_1 = ((byte)uVar1 ^ 0xff) & 1;
  return;
}



/* Entry: 1033b3b8c; end: 1033b3beb; -[_TtC18GamesActionBarImpl23MatchmakingStatusPlugin init] */

void FUN_1033b3b8c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesActionBarImpl.MatchmakingStatusPlugin",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033b3bb8);
  (*pcVar1)();
}



/* Entry: 1033b3bec; end: 1033b3c23; -[_TtC18GamesActionBarImpl23MatchmakingStatusPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033b3c08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b3c0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b3bec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f61ae0));
  return;
}



/* Entry: 1033b3c24; end: 1033b3c37;  */

undefined8 FUN_1033b3c24(void)

{
  return 7;
}



/* Entry: 1033b3c38; end: 1033b3d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033b3c38(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x0001000d224c(&uStack_30);
  uVar1 = uStack_30;
  func_0x000107c614f0(uStack_30);
  (**(code **)(lStack_28 + 0x10))();
  func_0x000107c615e8(uStack_30);
  pcVar2 = FUN_1033b3b50;
  func_0x0001000bfde0(FUN_1033b3b50,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar1);
  puVar3 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(pcVar2);
  return puVar3;
}



/* Entry: 1033b3d2c; end: 1033b3d33;  */

void FUN_1033b3d2c(void)

{
  return;
}



/* Entry: 1033b3d34; end: 1033b3ecf;  */

undefined * FUN_1033b3d34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x10);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar1 = puVar2;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c40290(0x404c000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c521e8(puVar3,param_2,1);
    func_0x000107c61170(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined **)(unaff_x20 + 0x10) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61170(uVar4);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 1033b3ed0; end: 1033b3f23;  */

void FUN_1033b3ed0(void)

{
  func_0x000107c61168(&PTR_PTR_1128d5ec0);
  return;
}



/* Entry: 1033b3f24; end: 1033b3f47;  */

undefined * FUN_1033b3f24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x10);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar1 = puVar2;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar3 = puVar1;
    func_0x000107c40290(0x404c000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar1);
    func_0x000107c521e8(puVar3,param_2,1);
    func_0x000107c61170(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined **)(unaff_x20 + 0x10) = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c61170(uVar4);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 1033b3f48; end: 1033b3f73;  */

void FUN_1033b3f48(undefined8 param_1,undefined8 param_2,code *param_3)

{
  func_0x0001033b3de4();
  (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1033b3f74; end: 1033b3f83;  */

undefined1  [16] FUN_1033b3f74(void)

{
  return ZEXT816(0x11064c038);
}



/* Entry: 1033b3f84; end: 1033b4137;  */

long FUN_1033b3f84(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 9;
  *(undefined8 *)(lVar1 + 0x10) = 4;
  lVar2 = param_1;
  func_0x000107c3f75c();
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x000107c3f75c(param_2);
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  *(long *)(lVar1 + 0x20) = lVar4;
  lVar2 = param_1;
  func_0x000107c3f764();
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x000107c3f764(param_2);
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  *(long *)(lVar1 + 0x28) = lVar4;
  lVar2 = param_1;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar3 = param_2;
  func_0x000107c4acb0(param_2);
  func_0x000107c61180();
  lVar4 = lVar2;
  func_0x000107c40294();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  *(long *)(lVar1 + 0x30) = lVar4;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c5ce8c(param_2);
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c402a4();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(long *)(lVar1 + 0x38) = lVar2;
  return lVar1;
}



/* Entry: 1033b4138; end: 1033b4153;  */

void FUN_1033b4138(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*unaff_x20,PTR_s_addSubview__11259c880,param_1);
  return;
}



/* Entry: 1033b4154; end: 1033b4287;  */

undefined1  [16] FUN_1033b4154(ulong param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined1 auVar8 [16];
  
  uVar7 = *(ulong *)(unaff_x20 + 0x20);
  uVar3 = uVar7;
  if (uVar7 == 0) {
    FUN_1033b4288();
    uVar3 = param_1;
    func_0x0001033b4318();
    uVar4 = uVar3;
    FUN_1033b93dc();
    puVar5 = &UNK_11064c0d8;
    func_0x000107c613fc(&UNK_11064c0d8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    uVar6 = 0;
    func_0x00010434d014(0);
    func_0x000107c613fc();
    func_0x00010434cbd0(uVar6,param_1,uVar3,uVar4,param_2,0xd000000000000021,0x800000010f1475f0,
                        0x4040000000000000,0,0x1033b44f4,puVar5);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar1 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c614f0(uVar6);
    uVar2 = (uint)uVar6;
    (**(code **)(lVar1 + 8))();
    func_0x00010434ca44(uVar2 & 1);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
    *(ulong *)(unaff_x20 + 0x20) = param_1;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar6);
    uVar3 = param_1;
  }
  func_0x000107c6157c(uVar7);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar3;
  return auVar8;
}



/* Entry: 1033b4288; end: 1033b445b;  */

undefined * FUN_1033b4288(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x30);
  puVar2 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined **)(unaff_x20 + 0x30) = puVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar3);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar2;
}



/* Entry: 1033b445c; end: 1033b44b7;  */

void FUN_1033b445c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033b44b8; end: 1033b44c7;  */

undefined8 FUN_1033b44b8(void)

{
  return 5;
}



/* Entry: 1033b44c8; end: 1033b44df;  */

void FUN_1033b44c8(void)

{
  FUN_1033b4154();
  return;
}



/* Entry: 1033b44e0; end: 1033b44fb;  */

undefined8 FUN_1033b44e0(void)

{
  return 0;
}



/* Entry: 1033b44fc; end: 1033b4657;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b44fc(void)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  func_0x000107c614f0();
  uVar1 = *(undefined1 *)(unaff_x20 + _DAT_112f61cd8);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f61c78);
  uVar7 = ((undefined8 *)(unaff_x20 + _DAT_112f61c90))[1];
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f61c90);
  func_0x000107c615f0(uVar6);
  func_0x000107c6157c(uVar5);
  pcVar2 = "deinit";
  func_0x0001000c10c0("deinit");
  func_0x000107c61180();
  puVar3 = &UNK_11064c228;
  func_0x000107c613fc(&UNK_11064c228,0x30,7);
  *(undefined8 *)(puVar3 + 0x18) = uVar7;
  *(undefined8 *)(puVar3 + 0x10) = uVar6;
  puVar3[0x20] = uVar1;
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  uStack_60 = 0x1033b6758;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_11064c240;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_58;
  func_0x000107c615f0(uVar6);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c4e590(pcVar2);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(uVar6);
  func_0x000107c61574(uVar5);
  func_0x000107c615e8(pcVar2);
  func_0x000107c61154(&stack0xffffffffffffff70,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033b4658; end: 1033b46cb;  */

void FUN_1033b4658(undefined8 param_1,long param_2,ulong param_3)

{
  long lStack_38;
  
  func_0x000107c614f0();
  (**(code **)(param_2 + 0x10))();
  if ((param_3 & 1) != 0) {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 != 0) {
      func_0x000107c42058(lStack_38);
      func_0x000107c615e8(lStack_38);
    }
  }
  return;
}



/* Entry: 1033b46cc; end: 1033b46ef; -[_TtC18GamesActionBarImpl28GamesActionBarExplorerPlugin dealloc] */

void FUN_1033b46cc(void)

{
  func_0x000107c61174();
  FUN_1033b44fc();
  return;
}



/* Entry: 1033b46f0; end: 1033b47fb; -[_TtC18GamesActionBarImpl28GamesActionBarExplorerPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033b470c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b475c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b4710) */
/* WARNING: Removing unreachable block (ram,0x0001033b4760) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b46f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f61c78));
  return;
}



/* Entry: 1033b47fc; end: 1033b4973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1033b47fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined1 auVar7 [16];
  
  lVar1 = _DAT_112f61ca0;
  puVar5 = *(undefined **)(unaff_x20 + _DAT_112f61ca0);
  puVar2 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    puVar3 = puVar2;
    func_0x0001070bd6bc();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      param_2 = 0xe500000000000000;
      puVar6 = (undefined *)0x73656d6147;
    }
    else {
      puVar6 = puVar3;
      func_0x000107c5faec();
      func_0x000107c61170(puVar3);
    }
    puVar3 = &UNK_11064c188;
    func_0x000107c613fc(&UNK_11064c188,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uVar4 = 0;
    func_0x00010434d014(0);
    func_0x000107c613fc();
    func_0x00010434cbd0(uVar4,puVar2,0,puVar6,param_2,0xd000000000000019,0x800000010f147620,0,1,
                        FUN_1033b6308,puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
  }
  func_0x000107c6157c(puVar5);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = puVar2;
  return auVar7;
}



/* Entry: 1033b4974; end: 1033b49c7;  */

void FUN_1033b4974(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1033b49c8();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1033b49c8; end: 1033b4a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b49c8(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  uVar2 = unaff_x20 + _DAT_112f61ca8;
  uVar1 = uVar2;
  func_0x000107c61618();
  if (uVar1 != 0) {
    lVar3 = *(long *)(uVar2 + 8);
    uVar2 = uVar1;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 8))();
    if ((uVar2 & 1) == 0) {
      FUN_1033b4c88(uVar1,lVar3);
    }
    else {
      FUN_1033b4a94(uVar1,lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  func_0x0001007d6c6c(2,0xd00000000000001b,0x800000010f147640,lVar3,&PTR_DAT_11064c4d0);
  return;
}



/* Entry: 1033b4a94; end: 1033b4bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b4a94(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 uStack_41;
  
  *(undefined8 *)(unaff_x20 + _DAT_112f61cd0) = 0;
  lVar1 = *(long *)(unaff_x20 + _DAT_112f61cb8);
  if (lVar1 != 0) {
    func_0x000107c61174();
    lVar2 = lVar1;
    func_0x000107c5bcc0();
    if ((lVar2 == 1) || (lVar2 = lVar1, func_0x000107c5bcc0(), lVar2 == 2)) {
      func_0x000107c54514(lVar1);
      func_0x000107c54514(lVar1);
    }
    func_0x000107c61170(lVar1);
  }
  lVar2 = _DAT_112f61ce0;
  lVar1 = unaff_x20 + _DAT_112f61ce0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c3e748();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c614f0(param_1);
  (**(code **)(param_2 + 0x38))(0,0,0,1,1,param_1,param_2);
  lVar2 = unaff_x20 + lVar2;
  func_0x000107c61618();
  if (lVar2 != 0) {
    func_0x000107c427e0();
    func_0x000107c61170(lVar2);
  }
  uStack_41 = 0;
  func_0x0001007d6d78(&uStack_41);
  return;
}



/* Entry: 1033b4bbc; end: 1033b4c87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b4bbc(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lStack_38;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f61ce8);
  *(undefined8 *)(unaff_x20 + _DAT_112f61ce8) = 0;
  func_0x000107c61170(uVar4);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f61cf0);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000100d46138(uVar4,uVar2);
  lVar3 = ((undefined8 *)(unaff_x20 + _DAT_112f61c90))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f61c90));
  (**(code **)(lVar3 + 0x10))();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c42058(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f61cd8) = 0;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f61cb0);
  *(undefined8 *)(unaff_x20 + _DAT_112f61cb0) = 0;
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1033b4c88; end: 1033b5467;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b4c88(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 uStack_88;
  undefined7 uStack_87;
  long lStack_80;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001000d224c(&uStack_88);
  lVar5 = CONCAT71(uStack_87,uStack_88);
  if (lVar5 != 0) {
    func_0x0001000d224c(&uStack_88);
    lVar1 = CONCAT71(uStack_87,uStack_88);
    if (lVar1 != 0) {
      func_0x000107c614f0();
      lVar3 = param_2;
      (**(code **)(param_3 + 0x10))();
      if (lVar3 != 0) {
        lVar16 = lVar1;
        func_0x000107c614f0();
        lVar4 = lVar16;
        (**(code **)(lStack_80 + 8))();
        lVar2 = _DAT_112f61cb0;
        puVar14 = *(undefined **)(unaff_x20 + _DAT_112f61cb0);
        puVar6 = puVar14;
        if (puVar14 == (undefined *)0x0) {
          puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
          func_0x000107c610f8();
          func_0x000107c453e4();
        }
        puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
        func_0x000107c61174(puVar14);
        func_0x000107c5af88(puVar7);
        func_0x000107c61180();
        func_0x000107c52b50(puVar6);
        func_0x000107c61170(puVar7);
        uVar15 = *(undefined8 *)(unaff_x20 + lVar2);
        *(undefined **)(unaff_x20 + lVar2) = puVar6;
        puVar14 = puVar6;
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61170(uVar15);
        (**(code **)(param_3 + 0x38))(1,puVar6,0,1,1,param_2,param_3);
        func_0x000107c61170(puVar14);
        (**(code **)(param_3 + 0x30))(param_2,param_3);
        *(undefined8 *)(unaff_x20 + _DAT_112f61cd0) = param_1;
        lVar2 = param_2;
        (**(code **)(param_3 + 0x20))(param_2,param_3);
        FUN_1033b5468();
        func_0x000107c61170(lVar2);
        (**(code **)(param_3 + 0x28))(param_2,param_3);
        lVar2 = _DAT_112f61cc8;
        if (param_2 != 0) {
          lVar8 = unaff_x20 + _DAT_112f61cc8;
          func_0x000107c61618();
          func_0x000107c61174();
          if ((lVar8 == 0) || (func_0x000107c61170(lVar8), lVar8 != param_2)) {
            lVar8 = unaff_x20 + lVar2;
            func_0x000107c61618();
            if (lVar8 != 0) {
              func_0x000107c5002c();
              func_0x000107c61170(lVar8);
            }
            func_0x000107c3d8b8(param_2);
            func_0x000107c61604(unaff_x20 + lVar2,param_2);
          }
          func_0x000107c61170(param_2);
          func_0x000107c61170(param_2);
        }
        lVar2 = _DAT_112f61ce0;
        lVar8 = _DAT_112f61cd8;
        if ((*(byte *)(unaff_x20 + _DAT_112f61cd8) & 1) == 0) {
          lVar9 = 0;
          FUN_1033b5e38();
          func_0x000107c610f8();
          func_0x000107c47da4();
          func_0x000107c61180();
          func_0x000107c5a050();
          func_0x000107c3d89c(puVar14);
          puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
          func_0x000107c61168();
          puVar7 = puVar6;
          func_0x0001008478a8();
          func_0x000107c613fc();
          *(undefined8 *)(puVar7 + 0x18) = 9;
          *(undefined8 *)(puVar7 + 0x10) = 4;
          lVar2 = lVar9;
          func_0x000107c4acb0();
          func_0x000107c61180();
          puVar10 = puVar14;
          func_0x000107c4acb0(puVar14);
          func_0x000107c61180();
          lVar11 = lVar2;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(lVar2);
          func_0x000107c61170(puVar10);
          *(long *)(puVar7 + 0x20) = lVar11;
          lVar2 = lVar9;
          func_0x000107c5ce8c();
          func_0x000107c61180();
          puVar10 = puVar14;
          func_0x000107c5ce8c(puVar14);
          func_0x000107c61180();
          lVar11 = lVar2;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(lVar2);
          func_0x000107c61170(puVar10);
          *(long *)(puVar7 + 0x28) = lVar11;
          lVar2 = lVar9;
          func_0x000107c5cbe4();
          func_0x000107c61180();
          puVar10 = puVar14;
          func_0x000107c5cbe4(puVar14);
          func_0x000107c61180();
          lVar11 = lVar2;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(lVar2);
          func_0x000107c61170(puVar10);
          *(long *)(puVar7 + 0x30) = lVar11;
          lVar2 = lVar9;
          func_0x000107c3ec1c();
          func_0x000107c61180();
          func_0x000107c61170(lVar9);
          puVar10 = puVar14;
          func_0x000107c3ec1c(puVar14);
          func_0x000107c61180();
          lVar11 = lVar2;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(lVar2);
          func_0x000107c61170(puVar10);
          *(long *)(puVar7 + 0x38) = lVar11;
          uVar15 = 0;
          func_0x000100847984(0);
          puVar10 = puVar7;
          func_0x000107c5fc48(puVar7,uVar15);
          func_0x000107c61574(puVar7);
          func_0x000107c3d048(puVar6);
          func_0x000107c61170(puVar10);
          func_0x00010436fe50(0);
          func_0x000107c610f8();
          uVar12 = 1;
          func_0x00010436fbe4(1,0,0,0,1);
          puVar6 = PTR_PTR_1126b1b50;
          func_0x000107c61168(PTR_PTR_1126b1b50);
          func_0x000107c61174(lVar9);
          func_0x000107c41638(puVar6);
          func_0x000107c61180();
          uVar15 = 0x625f6e6f69746361;
          func_0x000107c5fadc(0x625f6e6f69746361,0xef796172745f7261);
          func_0x000107c4ef0c(lVar5);
          func_0x000107c61170(lVar9);
          func_0x000107c61170(puVar6);
          func_0x000107c61170(uVar15);
          (**(code **)(lStack_80 + 0x10))(&uStack_88,lVar16);
          lVar16 = *(long *)(unaff_x20 + _DAT_112f61c90 + 8);
          puVar6 = puVar14;
          func_0x000107c515ac();
          func_0x000107c61180();
          puVar7 = puVar6;
          func_0x000107c5cbe4();
          func_0x000107c61180();
          func_0x000107c61170(puVar6);
          lVar2 = lStack_68;
          uVar15 = uStack_70;
          func_0x0001000a8868(&uStack_88,uStack_70);
          (**(code **)(lVar2 + 8))(uVar15,lVar2);
          func_0x0001000a8868(&uStack_88,uStack_70);
          uVar13 = uStack_70;
          (**(code **)(lStack_68 + 0x10))(uStack_70,lStack_68);
          lVar2 = unaff_x20 + _DAT_112f61c98;
          func_0x000107c61618();
          if (lVar2 == 0) {
            func_0x00010076df58();
            func_0x000107c613fc();
          }
          func_0x000107c614f0();
          (**(code **)(lVar16 + 8))(puVar14,puVar7,uVar15,uVar13,1);
          func_0x000107c61170(puVar7);
          func_0x000107c61574(uVar15);
          func_0x000107c61574(uVar13);
          func_0x000107c615e8(lVar2);
          lVar2 = lVar9 + _DAT_112f61d28;
          func_0x000107c61618(lVar2);
          func_0x000107c61170(lVar9);
          func_0x000107c61170(uVar12);
          func_0x0001000834e4(&uStack_88);
          func_0x000107c61604(unaff_x20 + _DAT_112f61ce0,lVar2);
          func_0x000107c61170(lVar2);
          *(undefined1 *)(unaff_x20 + lVar8) = 1;
        }
        else {
          lVar16 = unaff_x20 + _DAT_112f61ce0;
          func_0x000107c61618();
          if (lVar16 != 0) {
            func_0x000107c3e748();
            func_0x000107c61170(lVar16);
          }
          lVar2 = unaff_x20 + lVar2;
          func_0x000107c61618();
          if (lVar2 != 0) {
            func_0x000107c427e0();
            func_0x000107c61170(lVar2);
          }
        }
        uStack_88 = 1;
        func_0x0001007d6d78(&uStack_88);
        func_0x000107c615e8(lVar1);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(puVar14);
        func_0x000107c615e8(lVar5);
        return;
      }
      func_0x000107c615e8(lVar5);
      lVar5 = lVar1;
    }
    func_0x000107c615e8(lVar5);
  }
  func_0x0001007d6c6c(2,0xd000000000000024,0x800000010f147660,lVar2,&PTR_DAT_11064c4d0);
  return;
}



/* Entry: 1033b5468; end: 1033b5587;  */

/* WARNING: Possible PIC construction at 0x0001033b54ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b551c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b5560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b5520) */
/* WARNING: Removing unreachable block (ram,0x0001033b54b0) */
/* WARNING: Removing unreachable block (ram,0x0001033b54c0) */
/* WARNING: Removing unreachable block (ram,0x0001033b54c8) */
/* WARNING: Removing unreachable block (ram,0x0001033b5564) */
/* WARNING: Removing unreachable block (ram,0x0001033b5570) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b5468(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  
  lVar2 = _DAT_112f61cc0;
  if (param_1 == 0) {
    return;
  }
  lVar4 = unaff_x20 + _DAT_112f61cc0;
  func_0x000107c61618();
  func_0x000107c61174(param_1);
  lVar1 = _DAT_112f61cb8;
  if (lVar4 == 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112f61cb8);
    if (lVar4 != 0) {
      lVar2 = unaff_x20 + lVar2;
      func_0x000107c61618();
      if (lVar2 != 0) {
        func_0x000107c61174(lVar4);
        func_0x000107c4ff3c(lVar2,param_2,lVar4);
        goto code_r0x000107c61170;
      }
    }
    puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    func_0x000107c610f8();
    func_0x000107c48c2c();
    func_0x000107c3d6fc(param_1,param_2,puVar3);
    lVar4 = *(long *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1033b5588; end: 1033b55ff; -[_TtC18GamesActionBarImpl28GamesActionBarExplorerPlugin handleCloseTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b5588(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + _DAT_112f61ca8;
  lVar2 = lVar1;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 8);
    func_0x000107c61174(param_1);
    FUN_1033b4a94(lVar2,uVar3);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1033b5600; end: 1033b5833;  */

/* WARNING: Possible PIC construction at 0x0001033b57bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b5804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b57c0) */
/* WARNING: Removing unreachable block (ram,0x0001033b5808) */
/* WARNING: Removing unreachable block (ram,0x0001033b5814) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b5600(undefined8 param_1,double param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  
  uVar3 = unaff_x20 + _DAT_112f61ca8;
  uVar2 = uVar3;
  func_0x000107c61618();
  if (uVar2 == 0) {
    return;
  }
  lVar9 = *(long *)(uVar3 + 8);
  uVar3 = uVar2;
  func_0x000107c614f0();
  uVar4 = uVar3;
  (**(code **)(lVar9 + 8))();
  lVar1 = _DAT_112f61cd0;
  if ((((uVar4 & 1) != 0) && (lVar8 = *(long *)(unaff_x20 + _DAT_112f61cb0), lVar8 != 0)) &&
     (0.0 < *(double *)(unaff_x20 + _DAT_112f61cd0))) {
    lVar5 = lVar8;
    func_0x000107c61174(lVar8);
    func_0x000107c5cf78(param_3);
    dVar12 = param_2;
    if (param_2 < 0.0) {
      dVar12 = 0.0;
    }
    lVar6 = param_3;
    func_0x000107c5bcc0();
    if (lVar6 - 3U < 3) {
      func_0x000107c5dc98(param_3);
      dVar11 = *(double *)(unaff_x20 + lVar1);
      func_0x000107c5bcc0();
      if ((param_3 == 3) && (1000.0 <= param_2 || 0.0 <= param_2 && dVar11 * 0.25 <= dVar12)) {
        FUN_1033b4a94(uVar2,lVar9);
        goto code_r0x000107c615e8;
      }
      dVar12 = *(double *)(unaff_x20 + lVar1);
      pcVar10 = *(code **)(lVar9 + 0x38);
      func_0x000107c61174(lVar5);
      uVar7 = 1;
    }
    else {
      if (1 < lVar6 - 1U) goto code_r0x000107c615e8;
      dVar12 = *(double *)(unaff_x20 + lVar1) - dVar12;
      if (dVar12 <= 80.0) {
        dVar12 = 80.0;
      }
      pcVar10 = *(code **)(lVar9 + 0x38);
      func_0x000107c61174(lVar5);
      uVar7 = 0;
    }
    (*pcVar10)(1,lVar8,dVar12,0,uVar7,uVar3,lVar9);
  }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar2);
  return;
}



/* Entry: 1033b5834; end: 1033b5883; -[_TtC18GamesActionBarImpl28GamesActionBarExplorerPlugin handleDismissPan:] */

/* WARNING: Possible PIC construction at 0x0001033b586c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b5870) */

void FUN_1033b5834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1033b5600(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1033b5884; end: 1033b58cf; -[_TtC18GamesActionBarImpl28GamesActionBarExplorerPlugin init] */

void FUN_1033b5884(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesActionBarImpl.GamesActionBarExplorerPlugin",0x2f,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033b58b0);
  (*pcVar1)();
}



/* Entry: 1033b58d0; end: 1033b58df;  */

undefined8 FUN_1033b58d0(void)

{
  return 3;
}



/* Entry: 1033b58e0; end: 1033b58f7;  */

void FUN_1033b58e0(void)

{
  FUN_1033b47fc();
  return;
}



/* Entry: 1033b58f8; end: 1033b5963;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b58f8(void)

{
  undefined1 uStack_29;
  long lStack_28;
  
  func_0x0001000d224c(&lStack_28);
  if (lStack_28 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    uStack_29 = 0;
    func_0x000100854cb0(&uStack_29);
  }
  else {
    func_0x000107c615e8();
  }
  return;
}



/* Entry: 1033b5964; end: 1033b5967;  */

void FUN_1033b5964(void)

{
  return;
}



/* Entry: 1033b5968; end: 1033b59db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b5968(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  long lStack_38;
  
  uVar5 = unaff_x20 + _DAT_112f61ca8;
  uVar4 = uVar5;
  func_0x000107c61618();
  if (uVar4 != 0) {
    lVar6 = *(long *)(uVar5 + 8);
    uVar5 = uVar4;
    func_0x000107c614f0();
    (**(code **)(lVar6 + 8))();
    if ((uVar5 & 1) != 0) {
      FUN_1033b4a94(uVar4,lVar6);
    }
    func_0x000107c615e8(uVar4);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f61ce8);
  *(undefined8 *)(unaff_x20 + _DAT_112f61ce8) = 0;
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f61cf0);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000100d46138(uVar3,uVar2);
  lVar6 = ((undefined8 *)(unaff_x20 + _DAT_112f61c90))[1];
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f61c90));
  (**(code **)(lVar6 + 0x10))();
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    func_0x000107c42058(lStack_38);
    func_0x000107c615e8(lStack_38);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f61cd8) = 0;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f61cb0);
  *(undefined8 *)(unaff_x20 + _DAT_112f61cb0) = 0;
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1033b59dc; end: 1033b59fb;  */

void FUN_1033b59dc(void)

{
  return;
}



/* Entry: 1033b59fc; end: 1033b5a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b59fc(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long unaff_x20;
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(unaff_x20 + _DAT_112f61cf0);
  if (pcVar1 == (code *)0x0) {
    param_1 = 1;
  }
  else {
    uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f61cf0))[1];
    func_0x000107c6157c(uVar2);
    (*pcVar1)(param_1,param_2);
    func_0x000100d46138(pcVar1,uVar2);
  }
  (*param_3)(param_1);
  return;
}



/* Entry: 1033b5a90; end: 1033b5af3; -[_TtC18GamesActionBarImplP33_BC2D2A12717FDFCA1C0CE634E78669FA27CapturingSubviewUIContainer attachUI:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b5a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61604(param_1 + _DAT_112f61d28,param_3);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_attachUI__1125a0c08,param_3);
  return;
}



/* Entry: 1033b5af4; end: 1033b5bc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b5af4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined1 *puVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_80;
  func_0x000107c614f0();
  func_0x000107c61604(unaff_x20 + _DAT_112f61d28,param_1);
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000b0c7c;
    puStack_68 = &UNK_11064c1f0;
    lStack_60 = param_2;
    uStack_58 = param_3;
    func_0x000107c60bc4(&puStack_80);
    uVar1 = uStack_58;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(uVar1);
    puVar3 = (undefined1 *)ppuVar2;
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_attachUI_completion__1125a0c10,param_1,puVar3);
  func_0x000107c60bd0(puVar3);
  return;
}



/* Entry: 1033b5bc8; end: 1033b5c73; -[_TtC18GamesActionBarImplP33_BC2D2A12717FDFCA1C0CE634E78669FA27CapturingSubviewUIContainer attachUI:completion:] */

/* WARNING: Possible PIC construction at 0x0001033b5c58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b5c5c) */

void FUN_1033b5bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_11064c1d8;
    func_0x000107c613fc(&UNK_11064c1d8,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    pcVar2 = FUN_1033b6730;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1033b5af4(param_3,pcVar2,puVar1);
  func_0x000100d46138(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1033b5c74; end: 1033b5cd7; -[_TtC18GamesActionBarImplP33_BC2D2A12717FDFCA1C0CE634E78669FA27CapturingSubviewUIContainer initWithParentViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b5c74(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f61d28,0);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_initWithParentViewController__1125ea9d8,param_3);
  return;
}



/* Entry: 1033b5cd8; end: 1033b5d5b; -[_TtC18GamesActionBarImplP33_BC2D2A12717FDFCA1C0CE634E78669FA27CapturingSubviewUIContainer initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b5cd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5;
  func_0x000107c614f0();
  func_0x000107c61614(param_5 + _DAT_112f61d28,0);
  lStack_50 = param_5;
  lStack_48 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1033b5d5c; end: 1033b5df3; -[_TtC18GamesActionBarImplP33_BC2D2A12717FDFCA1C0CE634E78669FA27CapturingSubviewUIContainer initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1033b5d5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar2 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f61d28,0);
  puVar1 = PTR_s_initWithCoder__1125dd730;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (plVar3 != (long *)0x0) {
    func_0x000107c61170(plVar3);
  }
  return (undefined1 *)plVar3;
}



/* Entry: 1033b5df4; end: 1033b5e27;  */

void FUN_1033b5df4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033b5e28; end: 1033b5e37; -[_TtC18GamesActionBarImplP33_BC2D2A12717FDFCA1C0CE634E78669FA27CapturingSubviewUIContainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b5e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f61d28);
  return;
}



/* Entry: 1033b5e38; end: 1033b5e57;  */

void FUN_1033b5e38(void)

{
  func_0x000107c61168(&PTR_PTR_1128d60c8);
  return;
}



/* Entry: 1033b5e58; end: 1033b5eaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b5e58(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20 + _DAT_112f61ca8;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar2 + 8);
    func_0x000107c614f0();
    (**(code **)(lVar2 + 8))();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 1033b5eb0; end: 1033b5ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b5eb0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + _DAT_112f61cf8));
  return;
}



/* Entry: 1033b5ec4; end: 1033b5f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b5ec4(void)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  
  uVar2 = unaff_x20 + _DAT_112f61ca8;
  uVar1 = uVar2;
  func_0x000107c61618();
  if (uVar1 != 0) {
    lVar3 = *(long *)(uVar2 + 8);
    uVar2 = uVar1;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 8))();
    if ((uVar2 & 1) != 0) {
      FUN_1033b4a94(uVar1,lVar3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
    return;
  }
  return;
}



/* Entry: 1033b5f44; end: 1033b5f47; -[_TtC18GamesActionBarImpl28GamesActionBarExplorerPlugin lensExplorerRouterDidPresentLensExplorer:] */

void FUN_1033b5f44(void)

{
  return;
}



/* Entry: 1033b5f48; end: 1033b5f9b; -[_TtC18GamesActionBarImpl28GamesActionBarExplorerPlugin lensExplorerRouterBeginDismissingLensExplorer:] */

/* WARNING: Possible PIC construction at 0x0001033b5f70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b5f74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b5f48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f61ce8);
  *(undefined8 *)(param_1 + _DAT_112f61ce8) = 0;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1033b5f9c; end: 1033b601f; -[_TtC18GamesActionBarImpl28GamesActionBarExplorerPlugin lensExplorerRouterDidDismissLensExplorer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b5f9c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  func_0x000107c61174();
  FUN_1033b4bbc();
  uVar2 = param_1 + _DAT_112f61ca8;
  uVar1 = uVar2;
  func_0x000107c61618();
  if (uVar1 != 0) {
    lVar3 = *(long *)(uVar2 + 8);
    uVar2 = uVar1;
    func_0x000107c614f0();
    (**(code **)(lVar3 + 8))();
    if ((uVar2 & 1) != 0) {
      FUN_1033b4a94(uVar1,lVar3);
    }
    func_0x000107c615e8(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1033b6020; end: 1033b602b; -[_TtC18GamesActionBarImpl28GamesActionBarExplorerPlugin lensExplorerRouterReplyParameters:] */

void FUN_1033b6020(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1033b602c; end: 1033b607f;  */

void FUN_1033b602c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  
  uVar1 = *param_5;
  *param_5 = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_6[1];
  *param_6 = param_2;
  param_6[1] = param_3;
  func_0x000107c61434(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 1033b6080; end: 1033b60e7; -[_TtC18GamesActionBarImpl28GamesActionBarExplorerPlugin lensExplorerRouter:didPickItem:selectionTrigger:] */

/* WARNING: Possible PIC construction at 0x0001033b60d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b60d4) */

void FUN_1033b6080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1033b6354(param_4);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1033b60e8; end: 1033b60eb; -[_TtC18GamesActionBarImpl28GamesActionBarExplorerPlugin lensExplorerRouterDidToggleCamera:] */

void FUN_1033b60e8(void)

{
  return;
}



/* Entry: 1033b60ec; end: 1033b61d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b60ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  
  lVar4 = _DAT_112f61ce8;
  lVar5 = *(long *)(unaff_x20 + _DAT_112f61ce8);
  if (lVar5 != 0 && param_3 != lVar5) {
    lVar6 = unaff_x20;
    func_0x000107c614f0();
    func_0x000107c61174(lVar5);
    func_0x0001007d6c6c(2,0xd00000000000003b,0x800000010f147690,lVar6,&PTR_DAT_11064c4d0);
    func_0x000107c61170(lVar5);
    lVar5 = *(long *)(unaff_x20 + lVar4);
  }
  *(long *)(unaff_x20 + lVar4) = param_3;
  func_0x000107c61170(lVar5);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f61cf0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61174(param_3);
  func_0x000100d46138(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1033b61d8; end: 1033b6267; -[_TtC18GamesActionBarImpl28GamesActionBarExplorerPlugin installRenderedLensSelectionHandler:installation:] */

void FUN_1033b61d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11064c1b0;
  func_0x000107c613fc(&UNK_11064c1b0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1033b60ec(FUN_1033b6310,puVar1,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1033b6268; end: 1033b62b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b6268(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + _DAT_112f61ce8) == 0 || param_1 != *(long *)(unaff_x20 + _DAT_112f61ce8)
     ) {
    return;
  }
  *(undefined8 *)(unaff_x20 + _DAT_112f61ce8) = 0;
  func_0x000107c61170();
  plVar1 = (long *)(unaff_x20 + _DAT_112f61cf0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *plVar1 = 0;
  plVar1[1] = 0;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(lVar3);
    return;
  }
  return;
}



/* Entry: 1033b62b8; end: 1033b6307; -[_TtC18GamesActionBarImpl28GamesActionBarExplorerPlugin removeRenderedLensSelectionHandler:] */

/* WARNING: Possible PIC construction at 0x0001033b62f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b62f4) */

void FUN_1033b62b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1033b6268(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1033b6308; end: 1033b630f;  */

void FUN_1033b6308(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1033b49c8();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1033b6310; end: 1033b6353;  */

long FUN_1033b6310(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fadc();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  func_0x000107c61170(param_1);
  return lVar1;
}



/* Entry: 1033b6354; end: 1033b66af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b6354(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uStack_150;
  ulong uStack_148;
  ulong *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_e8 = 0;
  puStack_140 = &uStack_d8;
  puStack_b8 = &uStack_e8;
  uVar8 = 0;
  puStack_c0 = puStack_140;
  func_0x00010436efc4(0x1033b6028,0,FUN_1033b66b0,&uStack_d0,0x1033b66b8,&uStack_150);
  uVar3 = uStack_d8;
  if (uStack_d8 != 0) {
    uVar5 = uStack_d8;
    func_0x000107c61174();
    uVar6 = uVar5;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar7 = uVar6;
    func_0x000107c5faec();
    uVar9 = uVar8;
    func_0x000107c61170(uVar6);
    func_0x000107c6142c(uVar8);
    uVar6 = uVar7 & 0xffffffffffff;
    if ((uVar8 & 0x2000000000000000) != 0) {
      uVar6 = uVar8 >> 0x38 & 0xf;
    }
    if (uVar6 != 0) {
      lVar10 = *(long *)(unaff_x20 + _DAT_112f61c88);
      if (lVar10 == 0) {
        uStack_d0 = 0;
        uStack_c8 = 0xe000000000000000;
        func_0x000107c602fc(0x2e);
        func_0x000107c6142c(uStack_c8);
        uStack_d0 = 0xd00000000000002c;
        uStack_c8 = 0x800000010f147700;
        uVar8 = uVar5;
        func_0x000107c4b1dc(uVar5);
        func_0x000107c61180();
        uVar6 = uVar8;
        func_0x000107c5faec();
        func_0x000107c61170(uVar8);
        func_0x000107c5fb78(uVar6,uVar9);
        func_0x000107c6142c(uVar9);
        uVar8 = uStack_c8;
        func_0x0001007d6c6c(2,uStack_d0,uStack_c8,lVar4,&PTR_DAT_11064c4d0);
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar8);
      }
      else {
        lVar11 = ((long *)(unaff_x20 + _DAT_112f61c88))[1];
        uStack_d0 = 0;
        uStack_c8 = 0xe000000000000000;
        func_0x000107c615f0(lVar10);
        func_0x000107c602fc(0x27);
        func_0x000107c6142c(uStack_c8);
        uStack_d0 = 0xd000000000000025;
        uStack_c8 = 0x800000010f147730;
        uVar8 = uVar5;
        func_0x000107c4b1dc(uVar5);
        func_0x000107c61180();
        uVar6 = uVar8;
        func_0x000107c5faec();
        func_0x000107c61170(uVar8);
        func_0x000107c5fb78(uVar6,uVar9);
        func_0x000107c6142c(uVar9);
        uVar8 = uStack_c8;
        uVar7 = uStack_d0;
        func_0x0001007d6c6c(1,uStack_d0,uStack_c8,lVar4,&PTR_DAT_11064c4d0);
        func_0x000107c6142c(uVar8);
        lVar4 = lVar10;
        func_0x000107c614f0(lVar10);
        uVar8 = uVar5;
        func_0x000107c4b1dc();
        func_0x000107c61180();
        uVar6 = uVar8;
        func_0x000107c5faec();
        func_0x000107c61170(uVar8);
        uVar2 = uStack_e0;
        uVar1 = uStack_e8;
        func_0x000107c61174(uVar5);
        func_0x000107c61434(uVar2);
        func_0x00010433a648(&puStack_140,uVar5,uVar1,uVar2);
        uStack_a8 = uStack_128;
        uStack_b0 = uStack_130;
        uStack_98 = uStack_118;
        uStack_a0 = uStack_120;
        uStack_88 = uStack_108;
        uStack_90 = uStack_110;
        uStack_78 = uStack_f8;
        uStack_80 = uStack_100;
        puStack_b8 = puStack_138;
        puStack_c0 = puStack_140;
        uStack_70 = 4;
        uStack_150 = uVar6;
        uStack_148 = uVar7;
        uStack_d0 = uVar6;
        uStack_c8 = uVar7;
        (**(code **)(lVar11 + 0x28))(&uStack_d0,lVar4,lVar11);
        func_0x0001033b66e8(&uStack_150);
        func_0x000107c61170(uVar5);
        func_0x000107c615e8(lVar10);
      }
      goto LAB_1033b65d4;
    }
    func_0x000107c61170(uVar5);
  }
  func_0x0001007d6c6c(2,0xd000000000000024,0x800000010f1476d0,lVar4,&PTR_DAT_11064c4d0);
LAB_1033b65d4:
  uVar1 = uStack_e0;
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 1033b66b0; end: 1033b66b7;  */

void FUN_1033b66b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x18);
  uVar2 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar2);
  uVar2 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61434(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1033b66b8; end: 1033b672f;  */

void FUN_1033b66b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1033b6730; end: 1033b676f;  */

void FUN_1033b6730(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001033b6738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1033b6770; end: 1033b68af;  */

undefined1  [16] FUN_1033b6770(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  
  puVar5 = *(undefined **)(unaff_x20 + 0x38);
  puVar1 = puVar5;
  if (puVar5 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    if (puVar1 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    puVar2 = puVar1;
    func_0x0001033b94a8();
    puVar3 = &UNK_11064c2d8;
    func_0x000107c613fc(&UNK_11064c2d8,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    uVar4 = 0;
    func_0x00010434d014(0);
    func_0x000107c613fc();
    func_0x00010434cbd0(uVar4,puVar1,0,puVar2,param_2,0xd000000000000015,0x800000010f147870,0,1,
                        0x1033b8014,puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined **)(unaff_x20 + 0x38) = puVar1;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
  }
  func_0x000107c6157c(puVar5);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = puVar1;
  return auVar6;
}



/* Entry: 1033b68b0; end: 1033b6903;  */

void FUN_1033b68b0(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1033b6904();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1033b6904; end: 1033b6daf;  */

/* WARNING: Possible PIC construction at 0x0001033b6a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b6c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b6c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b6cc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b6d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b6da8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b6c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b6dac) */
/* WARNING: Removing unreachable block (ram,0x0001033b6d94) */
/* WARNING: Removing unreachable block (ram,0x0001033b6cc8) */
/* WARNING: Removing unreachable block (ram,0x0001033b6c74) */
/* WARNING: Removing unreachable block (ram,0x0001033b6c5c) */
/* WARNING: Removing unreachable block (ram,0x0001033b6a10) */
/* WARNING: Removing unreachable block (ram,0x0001033b6a74) */
/* WARNING: Removing unreachable block (ram,0x0001033b6aa8) */
/* WARNING: Removing unreachable block (ram,0x0001033b6bcc) */
/* WARNING: Removing unreachable block (ram,0x0001033b6acc) */
/* WARNING: Removing unreachable block (ram,0x0001033b6bdc) */
/* WARNING: Removing unreachable block (ram,0x0001033b6afc) */
/* WARNING: Removing unreachable block (ram,0x0001033b6c04) */
/* WARNING: Removing unreachable block (ram,0x0001033b6c14) */
/* WARNING: Removing unreachable block (ram,0x0001033b6c28) */
/* WARNING: Removing unreachable block (ram,0x0001033b6c88) */
/* WARNING: Removing unreachable block (ram,0x0001033b6c30) */
/* WARNING: Removing unreachable block (ram,0x0001033b6c98) */
/* WARNING: Removing unreachable block (ram,0x0001033b6c6c) */
/* WARNING: Removing unreachable block (ram,0x0001033b6ca0) */
/* WARNING: Removing unreachable block (ram,0x0001033b6cb4) */

void FUN_1033b6904(void)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  
  uVar7 = *unaff_x20;
  if ((*(byte *)((long)unaff_x20 + 0x41) & 1) != 0) {
    pcVar1 = "toggleFavorite: ignoring tap - toggle already in progress";
    uVar6 = 0xd000000000000039;
    uVar2 = 1;
LAB_1033b6b48:
    func_0x0001007d6c6c(uVar2,uVar6,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,uVar7,
                        &PTR_DAT_11064c510);
    return;
  }
  puVar3 = unaff_x20 + 9;
  func_0x000107c61618();
  if (puVar3 == (undefined8 *)0x0) {
    pcVar1 = "Cannot toggle favorite: no active lens";
    uVar6 = 0xd000000000000026;
    uVar2 = 2;
    goto LAB_1033b6b48;
  }
  lVar4 = unaff_x20[4];
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    lVar4 = unaff_x20[3];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c602fc(0x1d);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c4b1dc(puVar3);
      func_0x000107c61180();
      func_0x000107c5faec();
      goto code_r0x000107c61170;
    }
    func_0x000107c615e8(lVar5);
  }
  func_0x0001007d6c6c(3,0xd000000000000024,0x800000010f1478c0,uVar7,&PTR_DAT_11064c510);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1033b6db0; end: 1033b6ec3;  */

/* WARNING: Possible PIC construction at 0x0001033b6e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b6f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b6f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b7044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b7054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b7164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b719c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b7118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b7100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b711c) */
/* WARNING: Removing unreachable block (ram,0x0001033b71a0) */
/* WARNING: Removing unreachable block (ram,0x0001033b7168) */
/* WARNING: Removing unreachable block (ram,0x0001033b7058) */
/* WARNING: Removing unreachable block (ram,0x0001033b7048) */
/* WARNING: Removing unreachable block (ram,0x0001033b6f9c) */
/* WARNING: Removing unreachable block (ram,0x0001033b6f68) */
/* WARNING: Removing unreachable block (ram,0x0001033b7158) */
/* WARNING: Removing unreachable block (ram,0x0001033b6f7c) */
/* WARNING: Removing unreachable block (ram,0x0001033b6e80) */
/* WARNING: Removing unreachable block (ram,0x0001033b7104) */

void FUN_1033b6db0(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  
  lVar3 = unaff_x20 + 0x48;
  func_0x000107c61604(lVar3,param_1);
  *(undefined2 *)(unaff_x20 + 0x40) = 0;
  lVar7 = *(long *)(unaff_x20 + 0x38);
  if (lVar7 != 0) {
    func_0x000107c6157c(lVar7);
    func_0x00010434c9e8(1);
    func_0x000107c61574(lVar7);
    lVar3 = lVar7;
  }
  func_0x0001033b94a8();
  puVar2 = PTR_PTR_1126b0c40;
  uVar5 = param_1;
  func_0x000107c61168();
  func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
    lVar7 = *(long *)(unaff_x20 + 0x38);
  }
  else {
    lVar7 = *(long *)(unaff_x20 + 0x38);
  }
  if (lVar7 == 0) {
    func_0x000107c6142c(param_1);
    func_0x000107c61170(puVar2);
    puVar2 = (undefined *)(unaff_x20 + 0x48);
    func_0x000107c61618();
    if (puVar2 == (undefined *)0x0) {
      func_0x0001033b94a8();
      puVar4 = PTR_PTR_1126b0c40;
      func_0x000107c61168();
      func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
        puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
        func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
        func_0x000107c453e4();
        lVar3 = *(long *)(unaff_x20 + 0x38);
      }
      else {
        lVar3 = *(long *)(unaff_x20 + 0x38);
      }
      puVar1 = puVar4;
      if (lVar3 == 0) {
        func_0x000107c6142c(uVar5);
      }
      else {
        func_0x000107c6157c(lVar3);
        func_0x000107c61174(puVar4);
        func_0x00010434ccf0(puVar4,puVar2,uVar5,2);
        func_0x000107c61574(lVar3);
        func_0x000107c6142c(uVar5);
      }
    }
    else {
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar6 = uVar5;
      if (puVar2 == (undefined *)0x0) {
        func_0x000107c5faec();
        uVar6 = uVar5;
        func_0x000107c5fadc();
        func_0x000107c6142c(uVar5);
      }
      func_0x000107c5faec();
      lVar3 = *(long *)(unaff_x20 + 0x20);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c4c18c();
        func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
        return;
      }
      func_0x000107c6142c(uVar6);
      puVar1 = puVar2;
    }
  }
  else {
    func_0x000107c6157c(lVar7);
    puVar1 = puVar2;
    func_0x000107c61174(puVar2);
    func_0x00010434ccf0(puVar2,lVar3,param_1,2);
    func_0x000107c61574(lVar7);
    func_0x000107c6142c(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1033b6ec4; end: 1033b7717;  */

/* WARNING: Possible PIC construction at 0x0001033b6f64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b6f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b7044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b7054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b7164: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b719c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b7118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b7100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b711c) */
/* WARNING: Removing unreachable block (ram,0x0001033b71a0) */
/* WARNING: Removing unreachable block (ram,0x0001033b7168) */
/* WARNING: Removing unreachable block (ram,0x0001033b7058) */
/* WARNING: Removing unreachable block (ram,0x0001033b7048) */
/* WARNING: Removing unreachable block (ram,0x0001033b6f9c) */
/* WARNING: Removing unreachable block (ram,0x0001033b6f68) */
/* WARNING: Removing unreachable block (ram,0x0001033b7158) */
/* WARNING: Removing unreachable block (ram,0x0001033b6f7c) */
/* WARNING: Removing unreachable block (ram,0x0001033b7104) */

void FUN_1033b6ec4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  puVar1 = (undefined *)(unaff_x20 + 0x48);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    func_0x0001033b94a8();
    puVar3 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c453e4();
      lVar2 = *(long *)(unaff_x20 + 0x38);
    }
    else {
      lVar2 = *(long *)(unaff_x20 + 0x38);
    }
    puVar4 = puVar3;
    if (lVar2 == 0) {
      func_0x000107c6142c(param_2);
    }
    else {
      func_0x000107c6157c(lVar2);
      func_0x000107c61174(puVar3);
      func_0x00010434ccf0(puVar3,puVar1,param_2,2);
      func_0x000107c61574(lVar2);
      func_0x000107c6142c(param_2);
    }
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar5 = param_2;
    if (puVar1 == (undefined *)0x0) {
      func_0x000107c5faec();
      uVar5 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c5faec();
    lVar2 = *(long *)(unaff_x20 + 0x20);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4c18c();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
      return;
    }
    func_0x000107c6142c(uVar5);
    puVar4 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1033b7718; end: 1033b781b;  */

/* WARNING: Possible PIC construction at 0x0001033b7760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b77bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b7764) */
/* WARNING: Removing unreachable block (ram,0x0001033b77d8) */
/* WARNING: Removing unreachable block (ram,0x0001033b7768) */
/* WARNING: Removing unreachable block (ram,0x0001033b77c0) */

void FUN_1033b7718(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c4b120(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1033b781c; end: 1033b79d7;  */

void FUN_1033b781c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  uVar7 = *unaff_x20;
  func_0x0001000d224c(&puStack_80);
  puVar1 = puStack_80;
  if (puStack_80 != (undefined *)0x0) {
    lVar2 = unaff_x20[4];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c49824();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      func_0x000107c4045c(param_1);
      func_0x000107c61180();
      puVar6 = puVar1;
      func_0x000107c4b1c0(puVar1);
      func_0x000107c61180();
      puVar4 = &UNK_11064c3a0;
      func_0x000107c613fc(&UNK_11064c3a0,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = param_2;
      *(undefined8 *)(puVar4 + 0x18) = uVar7;
      uStack_60 = 0x1033b8030;
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0x42000000;
      puStack_70 = &UNK_10134a1dc;
      puStack_68 = &UNK_11064c3b8;
      puStack_58 = puVar4;
      func_0x000107c60bc4(&puStack_80);
      puVar4 = puStack_58;
      func_0x000107c61174(param_2);
      func_0x000107c61574(puVar4);
      func_0x000107c5dc64(puVar6);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(puVar1);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(param_1);
      goto LAB_1033b79b4;
    }
    func_0x000107c615e8(puVar1);
  }
  func_0x0001007d6c6c(3,0xd00000000000002a,0x800000010f147a10,uVar7,&PTR_DAT_11064c510);
  puVar6 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c453e4();
  func_0x000107c3fefc(param_2);
LAB_1033b79b4:
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 1033b79d8; end: 1033b7b8b;  */

/* WARNING: Possible PIC construction at 0x0001033b7a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b7a7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b7b6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b7a80) */
/* WARNING: Removing unreachable block (ram,0x0001033b7a4c) */
/* WARNING: Removing unreachable block (ram,0x0001033b7b70) */

void FUN_1033b79d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_1 == 0) {
    uStack_60 = 0;
    uStack_58 = 0xe000000000000000;
    func_0x000107c602fc(0x2e);
    func_0x000107c6142c(uStack_58);
    uStack_60 = 0xd00000000000002c;
    uStack_58 = 0x800000010f147a40;
    uStack_68 = param_2;
    func_0x000107c614b0(param_2);
    uVar1 = 0x112d511f8;
    func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
    func_0x000107c5fb18(&uStack_68,uVar1);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
    uVar1 = uStack_58;
    func_0x0001007d6c6c(3,uStack_60,uStack_58,param_4,&PTR_DAT_11064c510);
    func_0x000107c6142c(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
    func_0x000107c3fefc(param_3);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61174(param_1);
    func_0x000107c4c194(puVar2);
    func_0x000107c61180();
    func_0x000107c51820();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1033b7b8c; end: 1033b7f3b;  */

void FUN_1033b7b8c(long param_1,long param_2,long param_3,ulong param_4,undefined1 *param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  puVar6 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar6,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 == 0) {
    return;
  }
  uVar1 = param_3 + 0x48;
  func_0x000107c61618();
  if (uVar1 == 0) {
LAB_1033b7c5c:
    func_0x0001007d6c6c(1,0xd000000000000034,0x800000010f147800,param_6,&PTR_DAT_11064c510);
    goto LAB_1033b7e04;
  }
  uVar2 = uVar1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = uVar2;
  func_0x000107c5faec();
  puVar7 = puVar6;
  func_0x000107c61170(uVar2);
  if (uVar1 == param_4 && puVar6 == param_5) {
    func_0x000107c6142c(puVar6);
  }
  else {
    puVar7 = puVar6;
    func_0x000107c605b8(uVar1,puVar6,param_4,param_5,0);
    func_0x000107c6142c(puVar6);
    if ((uVar1 & 1) == 0) goto LAB_1033b7c5c;
  }
  if ((param_1 != 0) && (param_2 == 0)) {
    func_0x000107c61174();
    lVar9 = param_1;
    func_0x000107c5bd00();
    *(bool *)(param_3 + 0x40) = lVar9 == 2;
    if (lVar9 == 2) {
      func_0x0001033b9574();
      puVar4 = PTR_PTR_1126b0c40;
      func_0x000107c61168();
    }
    else {
      func_0x0001033b94a8();
      puVar4 = PTR_PTR_1126b0c40;
      func_0x000107c61168();
    }
    func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
      func_0x000107c453e4();
    }
    lVar10 = *(long *)(param_3 + 0x38);
    if (lVar10 == 0) {
      func_0x000107c6142c(puVar7);
    }
    else {
      func_0x000107c6157c(lVar10);
      puVar5 = puVar4;
      func_0x000107c61174(puVar4);
      func_0x00010434ccf0(puVar4,lVar9,puVar7,2);
      func_0x000107c61574(lVar10);
      func_0x000107c6142c(puVar7);
      func_0x000107c61170(puVar5);
      puVar4 = puVar5;
    }
    func_0x000107c61170(puVar4);
    func_0x000107c61574(param_3);
    func_0x000107c61170(param_1);
    return;
  }
  uStack_88 = 0;
  uStack_80 = 0xe000000000000000;
  func_0x000107c602fc(0x22);
  func_0x000107c6142c(uStack_80);
  uStack_88 = 0xd000000000000020;
  uStack_80 = 0x800000010f147840;
  lStack_90 = param_2;
  func_0x000107c614b0(param_2);
  uVar3 = 0x112d511f8;
  func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
  func_0x000107c5fb18(&lStack_90,uVar3);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  uVar3 = uStack_80;
  uVar8 = uStack_88;
  func_0x0001007d6c6c(3,uStack_88,uStack_80,param_6,&PTR_DAT_11064c510);
  func_0x000107c6142c(uVar3);
  func_0x0001033b94a8();
  puVar4 = PTR_PTR_1126b0c40;
  func_0x000107c61168();
  func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
  func_0x000107c61180();
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
    func_0x000107c453e4();
    lVar9 = *(long *)(param_3 + 0x38);
    puVar5 = puVar4;
    if (lVar9 != 0) goto LAB_1033b7d8c;
LAB_1033b7df4:
    func_0x000107c6142c(uVar8);
  }
  else {
    lVar9 = *(long *)(param_3 + 0x38);
    puVar5 = puVar4;
    if (lVar9 == 0) goto LAB_1033b7df4;
LAB_1033b7d8c:
    func_0x000107c6157c(lVar9);
    puVar4 = puVar5;
    func_0x000107c61174(puVar5);
    func_0x00010434ccf0(puVar5,uVar3,uVar8,2);
    func_0x000107c61574(lVar9);
    func_0x000107c6142c(uVar8);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c61170(puVar4);
LAB_1033b7e04:
  func_0x000107c61574(param_3);
  return;
}



/* Entry: 1033b7f3c; end: 1033b7faf;  */

void FUN_1033b7f3c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61610(unaff_x20 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1033b7fb0; end: 1033b7fbf;  */

undefined8 FUN_1033b7fb0(void)

{
  return 0;
}



/* Entry: 1033b7fc0; end: 1033b7fd7;  */

void FUN_1033b7fc0(void)

{
  FUN_1033b6770();
  return;
}



/* Entry: 1033b7fd8; end: 1033b8047;  */

undefined8 FUN_1033b7fd8(void)

{
  return 0;
}



/* Entry: 1033b8048; end: 1033b818f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1033b8048(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  lVar1 = _DAT_112f61e68;
  puVar6 = *(undefined **)(unaff_x20 + _DAT_112f61e68);
  puVar2 = puVar6;
  if (puVar6 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126b0c40;
    func_0x000107c61168();
    func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
    func_0x000107c61180();
    if (puVar2 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x000107c610f8();
      func_0x000107c453e4();
    }
    puVar3 = puVar2;
    func_0x0001033b9644();
    puVar4 = &UNK_11064c438;
    func_0x000107c613fc(&UNK_11064c438,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uVar5 = 0;
    func_0x00010434d014(0);
    func_0x000107c613fc();
    func_0x00010434cbd0(uVar5,puVar2,0,puVar3,param_2,0xd000000000000016,0x800000010f147a90,0,1,
                        FUN_1033b9350,puVar4);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar5);
  }
  func_0x000107c6157c(puVar6);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = puVar2;
  return auVar7;
}



/* Entry: 1033b8190; end: 1033b81e3;  */

void FUN_1033b8190(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1033b81e4();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1033b81e4; end: 1033b8527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b81e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  ppuVar10 = &puStack_a0;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  puStack_a0 = (undefined *)0x0;
  uStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x20);
  func_0x000107c6142c(uStack_98);
  lVar4 = _DAT_112f61e70;
  puStack_a0 = (undefined *)0xd00000000000001e;
  uStack_98 = 0x800000010f147ab0;
  lVar5 = unaff_x20 + _DAT_112f61e70;
  func_0x000107c61618();
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar2 != 0) {
      lVar5 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      goto LAB_1033b82a8;
    }
  }
  lVar5 = 0;
  param_2 = 0;
LAB_1033b82a8:
  uVar3 = 0x112d35ff8;
  lStack_70 = lVar5;
  uStack_68 = param_2;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c5fb18(&lStack_70,uVar3);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  uVar3 = uStack_98;
  puVar11 = puStack_a0;
  func_0x0001007d6c6c(1,puStack_a0,uStack_98,lVar1,&PTR_DAT_11064c4f0);
  func_0x000107c6142c(uVar3);
  lVar4 = unaff_x20 + lVar4;
  func_0x000107c61618();
  if (lVar4 == 0) {
    func_0x0001007d6c6c(2,0xd00000000000001c,0x800000010f147ad0,lVar1,&PTR_DAT_11064c4f0);
  }
  else {
    lVar5 = *(long *)(unaff_x20 + _DAT_112f61e58);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x0001007d6c6c(3,0xd00000000000002c,0x800000010f147af0,lVar1,&PTR_DAT_11064c4f0);
    }
    else {
      lVar2 = lVar5;
      func_0x000107c4c18c();
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      lVar5 = lVar4;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      lVar6 = lVar5;
      func_0x000107c5faec();
      func_0x000107c61170(lVar5);
      lVar5 = lVar4;
      FUN_1033b88f4();
      lVar12 = *(long *)(unaff_x20 + _DAT_112f61e78);
      lVar7 = lVar12;
      if (lVar12 == 0) {
        lVar7 = lVar6;
        func_0x0001033b85ec(lVar6,puVar11);
      }
      puVar8 = &UNK_11064c438;
      func_0x000107c613fc(&UNK_11064c438,0x18,7);
      func_0x000107c61614(puVar8 + 0x10);
      puVar9 = &UNK_11064c460;
      func_0x000107c613fc(&UNK_11064c460,0x40,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      *(long *)(puVar9 + 0x18) = lVar6;
      *(undefined **)(puVar9 + 0x20) = puVar11;
      *(long *)(puVar9 + 0x28) = lVar4;
      *(long *)(puVar9 + 0x30) = lVar5;
      *(long *)(puVar9 + 0x38) = lVar1;
      uStack_80 = 0x1033b9358;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_10102ec58;
      puStack_88 = &UNK_11064c478;
      puStack_78 = puVar9;
      func_0x000107c60bc4(&puStack_a0);
      puVar11 = puStack_78;
      func_0x000107c61174(lVar12);
      func_0x000107c61174(lVar4);
      func_0x000107c61174(lVar5);
      func_0x000107c61574(puVar11);
      func_0x000107c5dc64(lVar7);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(lVar4);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar5);
      lVar4 = lVar7;
    }
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 1033b8528; end: 1033b8767;  */

/* WARNING: Possible PIC construction at 0x0001033b8564: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b8598: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b85b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b859c) */
/* WARNING: Removing unreachable block (ram,0x0001033b8568) */
/* WARNING: Removing unreachable block (ram,0x0001033b85d8) */
/* WARNING: Removing unreachable block (ram,0x0001033b856c) */
/* WARNING: Removing unreachable block (ram,0x0001033b85bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b8528(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c61604(unaff_x20 + _DAT_112f61e70,param_1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f61e78);
  *(undefined8 *)(unaff_x20 + _DAT_112f61e78) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1033b8768; end: 1033b8857;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1033b8768(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112f61e78);
  pcVar5 = (code *)0x0;
  if (lVar6 != 0) {
    func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
    func_0x000107c61174(lVar6);
    lVar2 = lVar6;
    func_0x000100759c94();
    puVar1 = PTR___sSbN_11034dd40;
    uVar3 = 0;
    func_0x000100775264(0,1,FUN_1033b8858,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar2);
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    uVar4 = uVar3;
    func_0x000100775284(uVar3,0,1);
    pcVar5 = FUN_1033b886c;
    func_0x0001000bfde0(FUN_1033b886c,0,puVar1);
    func_0x000107c61170(lVar6);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(uVar4);
  }
  return pcVar5;
}



/* Entry: 1033b8858; end: 1033b886b;  */

void FUN_1033b8858(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = *param_2 != 0;
  return;
}



/* Entry: 1033b886c; end: 1033b88f3;  */

void FUN_1033b886c(byte *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uStack_28;
  
  uStack_28 = *param_2;
  if (*(char *)(param_2 + 1) == '\x01') {
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&uStack_28,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    bVar3 = 0;
  }
  else {
    bVar3 = (byte)uStack_28 & 1;
  }
  *param_1 = bVar3;
  return;
}



/* Entry: 1033b88f4; end: 1033b8a4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1033b88f4(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined *puStack_38;
  
  func_0x000107c614f0();
  func_0x0001000d224c(&puStack_38);
  if (puStack_38 == (undefined *)0x0) {
    func_0x0001007d6c6c(3,0xd00000000000001e,0x800000010f147bf0,unaff_x20,&PTR_DAT_11064c4f0);
    puVar1 = PTR_PTR_1126ae558;
    func_0x000107c61168(PTR_PTR_1126ae558);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar3 = 0xd000000000000019;
    func_0x000107c5fadc(0xd000000000000019,0x800000010dbbe580);
    func_0x000107c466bc(puVar2);
    func_0x000107c61170(uVar3);
    param_1 = puVar2;
    func_0x000107c5ed2c(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c451ac(puVar1);
    func_0x000107c61180();
  }
  else {
    func_0x000107c4045c(param_1);
    func_0x000107c61180();
    puVar1 = puStack_38;
    func_0x000107c4b1c0(puStack_38);
    func_0x000107c61180();
    func_0x000107c615e8(puStack_38);
  }
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 1033b8a4c; end: 1033b8cf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b8a4c(long param_1,long param_2,long param_3,ulong param_4,undefined1 *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar3 = 0;
  uStack_98 = param_6;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = (long)&uStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_78;
  func_0x000107c61428(param_3 + 0x10,puVar7,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    return;
  }
  uVar4 = param_3 + _DAT_112f61e70;
  uStack_b0 = param_7;
  lStack_a0 = param_2;
  func_0x000107c61618();
  if (uVar4 == 0) {
LAB_1033b8b74:
    func_0x0001007d6c6c(3,0xd000000000000027,0x800000010f147b20,param_8,&PTR_DAT_11064c4f0);
    lVar3 = param_3;
  }
  else {
    uVar5 = uVar4;
    uStack_a8 = param_8;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    uVar4 = uVar5;
    func_0x000107c5faec();
    func_0x000107c61170(uVar5);
    if (uVar4 == param_4 && puVar7 == param_5) {
      func_0x000107c6142c(puVar7);
    }
    else {
      func_0x000107c605b8(uVar4,puVar7,param_4,param_5,0);
      func_0x000107c6142c(puVar7);
      param_8 = uStack_a8;
      if ((uVar4 & 1) == 0) goto LAB_1033b8b74;
    }
    lVar2 = lStack_a0;
    uVar1 = uStack_a8;
    if ((param_1 != 0) && (lStack_a0 == 0)) {
      func_0x000107c5edb4(lVar9,param_1);
      func_0x000107c61174(param_1);
      FUN_1033b8cf4(lVar9,uStack_98,uStack_b0);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_3);
      (**(code **)(lVar8 + 8))(lVar9,lVar3);
      return;
    }
    uStack_88 = 0;
    uStack_80 = 0xe000000000000000;
    func_0x000107c602fc(0x33);
    func_0x000107c5fb78(0xd000000000000031,0x800000010f147b50);
    lStack_90 = lVar2;
    func_0x000107c614b0(lVar2);
    uVar6 = 0x112d511f8;
    func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
    func_0x000107c5fb18(&lStack_90,uVar6);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar6);
    uVar6 = uStack_80;
    func_0x0001007d6c6c(3,uStack_88,uStack_80,uVar1,&PTR_DAT_11064c4f0);
    func_0x000107c6142c(uVar6);
    lVar3 = *(long *)(param_3 + _DAT_112f61e78);
    *(undefined8 *)(param_3 + _DAT_112f61e78) = 0;
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 1033b8cf4; end: 1033b9003;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b8cf4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  undefined8 uStack_48;
  
  func_0x000107c614f0();
  puVar1 = PTR_PTR_1126b1b28;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c5ed90();
  func_0x000107c4b568();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x0001000d224c(&uStack_48);
  puVar2 = &UNK_11064c438;
  func_0x000107c613fc(&UNK_11064c438,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_11064c4b0;
  func_0x000107c613fc(&UNK_11064c4b0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  *(undefined8 *)(puVar3 + 0x20) = unaff_x20;
  func_0x000107c61174(puVar1);
  func_0x00010075a04c(0,1,0x1033b9384,puVar3);
  func_0x000107c61574(uStack_48);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1033b9004; end: 1033b9063; -[_TtC18GamesActionBarImpl25GamesActionBarSharePlugin init] */

void FUN_1033b9004(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("GamesActionBarImpl.GamesActionBarSharePlugin",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033b9030);
  (*pcVar1)();
}



/* Entry: 1033b9064; end: 1033b90fb; -[_TtC18GamesActionBarImpl25GamesActionBarSharePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001033b9080: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001033b90b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033b9084) */
/* WARNING: Removing unreachable block (ram,0x0001033b90b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b9064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f61e40));
  return;
}



/* Entry: 1033b90fc; end: 1033b911b;  */

void FUN_1033b90fc(void)

{
  func_0x000107c61168(&PTR_PTR_1128d6180);
  return;
}



/* Entry: 1033b911c; end: 1033b912b;  */

undefined8 FUN_1033b911c(void)

{
  return 1;
}



/* Entry: 1033b912c; end: 1033b9143;  */

void FUN_1033b912c(void)

{
  FUN_1033b8048();
  return;
}



/* Entry: 1033b9144; end: 1033b9153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_1033b9144(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x20;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112f61e78);
  pcVar5 = (code *)0x0;
  if (lVar6 != 0) {
    func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
    func_0x000107c61174(lVar6);
    lVar2 = lVar6;
    func_0x000100759c94();
    puVar1 = PTR___sSbN_11034dd40;
    uVar3 = 0;
    func_0x000100775264(0,1,FUN_1033b8858,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar2);
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    uVar4 = uVar3;
    func_0x000100775284(uVar3,0,1);
    pcVar5 = FUN_1033b886c;
    func_0x0001000bfde0(FUN_1033b886c,0,puVar1);
    func_0x000107c61170(lVar6);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(uVar4);
  }
  return pcVar5;
}



/* Entry: 1033b9154; end: 1033b930b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033b9154(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  func_0x000107c602fc(0x32);
  func_0x000107c6142c(0xe000000000000000);
  puVar5 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  puVar1 = PTR___sSuN_11034e220;
  puVar4 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar4);
  func_0x000107c5fb78(0xd000000000000010,0x800000010f147c30);
  func_0x000107c6057c(puVar1,puVar5);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0x7370756f726720,0xe700000000000000);
  func_0x0001007d6c6c(1,0xd000000000000017,0x800000010f147c10,lVar2,&PTR_DAT_11064c4f0);
  func_0x000107c6142c(0x800000010f147c10);
  lVar6 = *(long *)(unaff_x20 + _DAT_112f61e48);
  lVar2 = lVar6;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c5d17c();
    func_0x000107c61180();
    func_0x000107c41864();
    func_0x000107c615e8(lVar3);
    func_0x000107c4ffe8(lVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c615e8(lVar6);
  }
  return;
}


