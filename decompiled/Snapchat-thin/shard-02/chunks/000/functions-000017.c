/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016baf20; end: 1016bb053;  */

void FUN_1016baf20(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  puVar2 = PTR_PTR_1126b84b0;
  func_0x000107c61168();
  func_0x000107c50364();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    uVar3 = 0x6e6f73616572;
    func_0x000107c5fadc(0x6e6f73616572,0xe600000000000000);
    func_0x000107c614cc(param_1,auStack_48,auStack_60);
    uVar6 = uStack_50;
    func_0x000107c60640(uStack_58,uStack_50);
    uVar4 = uStack_58;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
    puVar5 = puVar2;
    func_0x000107c5e508(puVar2);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar4);
    puVar7 = *(undefined **)(unaff_x20 + 0x10);
    puVar2 = puVar5;
    if (puVar7 != (undefined *)0x0) {
      func_0x000107c61174(puVar5);
      func_0x000107c61174();
      puVar2 = puVar7;
      func_0x000107c452f8();
      func_0x000107c61180();
      if (puVar2 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bb054);
        (*pcVar1)();
      }
      func_0x000107c45314();
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar7);
    }
    func_0x000107c61170(puVar2);
  }
  return;
}



/* Entry: 1016bb054; end: 1016bb077;  */

void FUN_1016bb054(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016bb078; end: 1016bb52b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1016bb078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  puVar8 = auStack_70;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112dc06a8);
  *puVar1 = 0xd000000000000018;
  puVar1[1] = 0x800000010ef11a10;
  *(undefined8 *)(unaff_x20 + _DAT_112dc06b0) = 120000;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112dc06b8);
  *puVar2 = 0xd000000000000012;
  puVar2[1] = 0x800000010efb6d20;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112dc06c0);
  *puVar3 = 0xd000000000000010;
  puVar3[1] = 0x800000010ef1c330;
  puVar4 = PTR_PTR_1126ae728;
  func_0x000107c61168(PTR_PTR_1126ae728);
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar5 = *puVar1;
  uVar7 = puVar1[1];
  func_0x000107c61434(uVar7);
  func_0x000107c5fadc(uVar5,uVar7);
  func_0x000107c6142c(uVar7);
  puVar6 = puVar4;
  func_0x000107c545b8(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c57f3c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c59d5c(puVar4);
  func_0x000107c61180();
  func_0x000107c61170();
  uVar5 = *puVar2;
  uVar7 = puVar2[1];
  func_0x000107c61434(uVar7);
  func_0x000107c5fadc(uVar5,uVar7);
  func_0x000107c6142c(uVar7);
  uVar7 = param_2;
  func_0x000107c40a28(param_2);
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  puVar6 = PTR_PTR_1126a78f8;
  func_0x000107c610f8();
  func_0x000107c49088();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar7);
  *(undefined **)(unaff_x20 + _DAT_112dc06c8) = puVar6;
  *(undefined8 *)(unaff_x20 + _DAT_112dc06d0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112dc06d8) = param_4;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_2);
  func_0x000107c615e8(param_1);
  return puVar8;
}



/* Entry: 1016bb52c; end: 1016bb537;  */

void FUN_1016bb52c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = 0;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &UNK_1103f7930;
  func_0x000107c613fc(&UNK_1103f7930,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = uVar5;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  puStack_70 = &UNK_100bf8344;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000b0c7c;
  puStack_78 = &UNK_1103f7948;
  ppuVar4 = &puStack_90;
  puStack_68 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61174(param_1);
  func_0x000107c6157c(uVar6);
  func_0x000107c614b0(param_2);
  func_0x000107c5f808(lVar9);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001c7eec();
  uVar5 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar6 = uVar5;
  func_0x0001001c7f30();
  func_0x000107c60264(lVar8,&puStack_98,uVar5,uVar6,lVar1,param_2);
  func_0x000107c5ffe8(0,lVar9,lVar8,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  (**(code **)(lVar10 + 8))(lVar8,lVar1);
  (**(code **)(lVar7 + 8))(lVar9,lVar2);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 1016bb538; end: 1016bb593; -[_TtC23IncomingFriendsSyncImpl30IncomingFriendsSyncGrpcService init] */

void FUN_1016bb538(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("IncomingFriendsSyncImpl.IncomingFriendsSyncGrpcService",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bb564);
  (*pcVar1)();
}



/* Entry: 1016bb594; end: 1016bb657; -[_TtC23IncomingFriendsSyncImpl30IncomingFriendsSyncGrpcService .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016bb5b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016bb5b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bb594(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc06c8));
  return;
}



/* Entry: 1016bb658; end: 1016bb7b3;  */

long FUN_1016bb658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long unaff_x20;
  undefined **ppuVar2;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  ppuVar2 = &PTR____CFConstantStringClassReference_110e96718;
  puVar1 = PTR_PTR_1126b7490;
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(&PTR____CFConstantStringClassReference_110e96718);
  func_0x000107c5fadc(param_6,param_7);
  func_0x000107c6142c(param_7);
  func_0x000107c45480();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(ppuVar2);
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_8;
  *(undefined8 *)(unaff_x20 + 0x48) = param_9;
  return unaff_x20;
}



/* Entry: 1016bb7b4; end: 1016bb827;  */

void FUN_1016bb7b4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1016bb828; end: 1016bb8a7;  */

undefined * FUN_1016bb828(undefined *param_1,undefined *param_2)

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
    FUN_1016bb8a8();
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



/* Entry: 1016bb8a8; end: 1016bb913;  */

void FUN_1016bb8a8(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000100bf9c98(0,0x112dc0708,&PTR_PTR_1126db240);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112dc07e8;
  plVar5 = (long *)&UNK_10d97cd20;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 1016bb914; end: 1016bb927;  */

ulong FUN_1016bb914(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bba0c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bba10);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126db240;
    func_0x000107c61168(PTR_PTR_1126db240);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126db240;
    func_0x000107c61168(PTR_PTR_1126db240);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000100bf9c98(0,0x112dc0708,&PTR_PTR_1126db240);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bbae4);
  (*pcVar2)();
}



/* Entry: 1016bb928; end: 1016bbae3;  */

ulong FUN_1016bb928(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bba0c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bba10);
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
  func_0x000100bf9c98(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bbae4);
  (*pcVar2)();
}



/* Entry: 1016bbae4; end: 1016bbd23;  */

ulong FUN_1016bbae4(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bbc0c);
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
  FUN_1016bb828(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bbc08);
      (*pcVar1)();
    }
    func_0x0001016bbc0c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1016bbd24; end: 1016bbffb;  */

undefined * FUN_1016bbd24(double param_1,long param_2,undefined8 param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar5 = param_2;
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar5 == 0) {
    return (undefined *)0x0;
  }
  lVar3 = lVar5;
  func_0x000107c5faec();
  func_0x000107c61170(lVar5);
  puVar4 = PTR_PTR_1126db240;
  func_0x000107c610f8(PTR_PTR_1126db240);
  func_0x000107c453e4();
  uVar6 = param_3;
  func_0x000103ee34e0(lVar3,param_3);
  if ((param_4 & 0xff) == 1) {
    puVar7 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126afad0;
    func_0x000107c610f8(PTR_PTR_1126afad0);
    func_0x000107c453e4();
    func_0x000107c55138();
    func_0x000107c5616c(puVar7);
  }
  func_0x000107c6142c(param_3);
  func_0x000107c5a344(puVar4);
  func_0x000107c61170(puVar7);
  lVar5 = param_2;
  func_0x000107c5db08(param_2);
  func_0x000107c61180();
  func_0x000107c568b4(puVar4);
  func_0x000107c61170(lVar5);
  lVar5 = param_2;
  func_0x000107c42120(param_2);
  func_0x000107c61180();
  func_0x000107c54230(puVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c54c00(puVar4);
  lVar5 = param_2;
  func_0x000107c452e8();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c3d958();
    func_0x000107c61170(lVar5);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bbffc);
      (*pcVar1)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bbff0);
      (*pcVar1)();
    }
    bVar2 = 1.8446744073709552e+19 <= param_1;
    param_1 = 1.8446744073709552e+19;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bbea8);
      (*pcVar1)();
    }
  }
  func_0x000107c524d4(puVar4);
  lVar5 = param_2;
  func_0x000107c452e8();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar3 = lVar5;
    func_0x000107c3d888();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar3 != 0) {
      lVar5 = lVar3;
      func_0x000107c5faec(lVar3);
      func_0x000107c61170(lVar3);
      goto LAB_1016bbf14;
    }
    lVar5 = 0;
  }
  uVar6 = 0xe000000000000000;
LAB_1016bbf14:
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar6);
  func_0x000107c59a80(puVar4);
  func_0x000107c61170(lVar5);
  lVar5 = param_2;
  func_0x000107c452e8();
  func_0x000107c61180();
  if (lVar5 == 0) {
    param_1 = 0.0;
  }
  else {
    func_0x000107c4f8d0();
    func_0x000107c61170(lVar5);
  }
  func_0x000107c58c9c(param_1,puVar4);
  func_0x000107c452e8();
  func_0x000107c61180();
  if (param_2 != 0) {
    lVar5 = param_2;
    func_0x000107c45220();
    func_0x000107c61170(param_2);
    if (lVar5 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bbff4);
      (*pcVar1)();
    }
    if (0x7fffffff < lVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bbff8);
      (*pcVar1)();
    }
    if (lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bbfc0);
      (*pcVar1)();
    }
  }
  func_0x000107c55304(puVar4);
  return puVar4;
}



/* Entry: 1016bbffc; end: 1016bc01b;  */

undefined1  [16] FUN_1016bbffc(void)

{
  return ZEXT816(0x1103f7c80);
}



/* Entry: 1016bc01c; end: 1016bc093; -[_TtC50FriendsFeedNativeDataModelTranslatorImplementation36FriendsFeedNativeDataModelTranslator friendsFeedConversationIdFromNativeMultiRecipientFeedEntryIdentifier:] */

void FUN_1016bc01c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1016bcd30(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1016bc094; end: 1016bc153; -[_TtC50FriendsFeedNativeDataModelTranslatorImplementation36FriendsFeedNativeDataModelTranslator recipientUserIdForNativeParticipantUUIDs:currentUserId:] */

void FUN_1016bc094(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  func_0x000100bc2654(0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c5faec();
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  func_0x000100bc2698(param_3,param_4,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  func_0x000107c6142c(uVar1);
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c5fadc(uVar2,param_4);
    func_0x000107c6142c(param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1016bc154; end: 1016bc187;  */

void FUN_1016bc154(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016bc188; end: 1016bc283;  */

void FUN_1016bc188(ulong *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar1 = uVar3;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1016bcd1c();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  lStack_50 = uVar3 + 0x20;
  uVar1 = uVar4;
  uStack_48 = uVar4;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar4) {
    puVar5 = (undefined *)(uVar4 >> 1);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar4) {
      puVar2 = puVar5;
      func_0x000107c60380(puVar5,PTR___sSSN_11034da80);
      *(undefined **)(puVar2 + 0x10) = puVar5;
    }
    puStack_68 = puVar2 + 0x20;
    puStack_60 = puVar5;
    FUN_1016bc284(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    func_0x000107c61574(puVar2);
  }
  else if (uVar4 != 0) {
    FUN_1016bc708(0,uVar4,1,&lStack_50);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 1016bc284; end: 1016bc707;  */

void FUN_1016bc284(undefined **param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long unaff_x21;
  undefined8 *puVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined *puVar21;
  long lVar22;
  undefined8 uVar23;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  
  puVar21 = PTR___sSSN_11034da80;
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar11 = param_3[1];
  if (0 < lVar11) {
    ppuVar4 = param_1;
    lVar15 = 0;
    do {
      lVar18 = lVar15 + 1;
      ppuVar6 = ppuVar4;
      if (lVar18 < lVar11) {
        puVar17 = (undefined8 *)(*param_3 + lVar18 * 0x10);
        uStack_70 = *puVar17;
        uStack_68 = puVar17[1];
        lVar19 = lVar15 * 0x10;
        puVar20 = (undefined8 *)(*param_3 + lVar19);
        puVar17 = puVar20 + 5;
        puStack_80 = (undefined *)*puVar20;
        uStack_78 = puVar20[1];
        func_0x000100e8b654();
        ppuVar5 = &puStack_80;
        func_0x000107c60204(ppuVar5,puVar21,puVar21,ppuVar4,ppuVar4);
        ppuVar6 = ppuVar5;
        lVar14 = lVar15 + 2;
        do {
          lVar22 = lVar14;
          lVar18 = lVar11;
          if (lVar11 == lVar22) break;
          uStack_70 = puVar17[-1];
          uStack_68 = *puVar17;
          puStack_80 = (undefined *)puVar17[-3];
          uStack_78 = puVar17[-2];
          ppuVar6 = &puStack_80;
          func_0x000107c60204(ppuVar6,puVar21,puVar21,ppuVar4,ppuVar4);
          puVar17 = puVar17 + 2;
          lVar14 = lVar22 + 1;
          lVar18 = lVar22;
        } while ((ppuVar5 == (undefined **)0xffffffffffffffff) !=
                 (ppuVar6 != (undefined **)0xffffffffffffffff));
        if (ppuVar5 == (undefined **)0xffffffffffffffff) {
          if (lVar18 < lVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bc6e4);
            (*pcVar2)();
          }
          if (lVar15 < lVar18) {
            lVar22 = *param_3;
            lVar13 = lVar18 << 4;
            lVar14 = lVar18;
            lVar11 = lVar15;
            do {
              lVar14 = lVar14 + -1;
              if (lVar11 != lVar14) {
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bc6fc);
                  (*pcVar2)();
                }
                puVar17 = (undefined8 *)(lVar22 + lVar19);
                lVar1 = lVar22 + lVar13;
                uVar10 = *puVar17;
                uVar12 = puVar17[1];
                uVar23 = *(undefined8 *)(lVar1 + -0x10);
                puVar17[1] = *(undefined8 *)(lVar1 + -8);
                *puVar17 = uVar23;
                *(undefined8 *)(lVar1 + -0x10) = uVar10;
                *(undefined8 *)(lVar1 + -8) = uVar12;
              }
              lVar11 = lVar11 + 1;
              lVar13 = lVar13 + -0x10;
              lVar19 = lVar19 + 0x10;
            } while (lVar11 < lVar14);
          }
        }
      }
      lVar11 = param_3[1];
      lVar19 = lVar18;
      if (lVar18 < lVar11) {
        if (SBORROW8(lVar18,lVar15)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bc6d8);
          (*pcVar2)();
        }
        if (lVar18 - lVar15 < param_4) {
          if (SCARRY8(lVar15,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bc6dc);
            (*pcVar2)();
          }
          lVar14 = lVar15 + param_4;
          if (lVar11 <= lVar15 + param_4) {
            lVar14 = lVar11;
          }
          if (lVar14 < lVar15) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bc6e0);
            (*pcVar2)();
          }
          if (lVar18 != lVar14) {
            lVar22 = *param_3;
            func_0x000100e8b654();
            puVar17 = (undefined8 *)(lVar22 + lVar18 * 0x10);
            lVar11 = lVar15 - lVar18;
            do {
              puVar20 = (undefined8 *)(lVar22 + lVar18 * 0x10);
              uVar10 = *puVar20;
              uVar12 = puVar20[1];
              lVar19 = lVar11;
              puVar20 = puVar17;
              do {
                puStack_80 = (undefined *)puVar20[-2];
                uStack_78 = puVar20[-1];
                ppuVar4 = &puStack_80;
                uStack_70 = uVar10;
                uStack_68 = uVar12;
                func_0x000107c60204(ppuVar4,puVar21,puVar21,ppuVar6,ppuVar6);
                if (ppuVar4 != (undefined **)0xffffffffffffffff) break;
                if (lVar22 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bc6e8);
                  (*pcVar2)();
                }
                uVar10 = *puVar20;
                uVar12 = puVar20[1];
                puVar20[1] = puVar20[-1];
                *puVar20 = puVar20[-2];
                puVar20[-1] = uVar12;
                puVar20 = puVar20 + -2;
                *puVar20 = uVar10;
                bVar3 = lVar19 != -1;
                lVar19 = lVar19 + 1;
              } while (bVar3);
              lVar18 = lVar18 + 1;
              puVar17 = puVar17 + 2;
              lVar11 = lVar11 + -1;
              lVar19 = lVar14;
            } while (lVar18 != lVar14);
          }
        }
      }
      puVar9 = puStack_58;
      if (lVar19 < lVar15) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bc6cc);
        (*pcVar2)();
      }
      puVar7 = puStack_58;
      func_0x000107c61558();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar16 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar16) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        func_0x0001000a91e0(puVar9,uVar16 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar16 + 1;
      *(long *)(puVar9 + uVar16 * 0x10 + 0x20) = lVar15;
      *(long *)(puVar9 + uVar16 * 0x10 + 0x28) = lVar19;
      puStack_58 = puVar9;
      if (*param_1 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bc700);
        (*pcVar2)();
      }
      ppuVar4 = &puStack_58;
      FUN_1016bc808(ppuVar4,*param_1,param_3);
      puVar9 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1016bc69c;
      lVar11 = param_3[1];
      lVar15 = lVar19;
    } while (lVar19 < lVar11);
  }
  puVar9 = puStack_58;
  puVar21 = *param_1;
  if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bc708);
    (*pcVar2)();
  }
  puVar7 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar7 & 1) == 0) {
    func_0x000100e06d54();
  }
  uVar16 = *(ulong *)(puVar9 + 0x10);
  while (puStack_58 = puVar9, 1 < uVar16) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bc704);
      (*pcVar2)();
    }
    lVar19 = uVar16 - 1;
    lVar18 = *(long *)(puVar9 + uVar16 * 0x10);
    lVar15 = *(long *)(puVar9 + lVar19 * 0x10 + 0x28);
    FUN_1016bca70(lVar11 + lVar18 * 0x10,lVar11 + *(long *)(puVar9 + lVar19 * 0x10 + 0x20) * 0x10,
                  lVar11 + lVar15 * 0x10,puVar21);
    if (unaff_x21 != 0) break;
    if (lVar15 < lVar18) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bc6d0);
      (*pcVar2)();
    }
    puVar7 = puVar9;
    func_0x000107c61558();
    if (((ulong)puVar7 & 1) == 0) {
      func_0x000100e06d54();
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar16 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bc6d4);
      (*pcVar2)();
    }
    *(long *)(puVar9 + uVar16 * 0x10) = lVar18;
    *(long *)((long)(puVar9 + uVar16 * 0x10) + 8) = lVar15;
    puStack_58 = puVar9;
    func_0x0001000a97cc(lVar19);
    puVar9 = puStack_58;
    uVar16 = *(ulong *)(puStack_58 + 0x10);
  }
LAB_1016bc69c:
  func_0x000107c6142c(puVar9);
  return;
}



/* Entry: 1016bc708; end: 1016bc807;  */

void FUN_1016bc708(long param_1,long param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_3 != param_2) {
    lVar8 = *param_4;
    lVar4 = param_1;
    func_0x000100e8b654();
    puVar1 = PTR___sSSN_11034da80;
    param_1 = param_1 - param_3;
    puVar6 = (undefined8 *)(lVar8 + param_3 * 0x10);
    do {
      puVar7 = (undefined8 *)(lVar8 + param_3 * 0x10);
      uStack_70 = *puVar7;
      uStack_68 = puVar7[1];
      puVar7 = puVar6;
      lVar9 = param_1;
      do {
        uStack_80 = puVar7[-2];
        uStack_78 = puVar7[-1];
        puVar5 = &uStack_80;
        func_0x000107c60204(puVar5,puVar1,puVar1,lVar4,lVar4);
        if (puVar5 != (undefined8 *)0xffffffffffffffff) break;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1016bc808);
          (*pcVar2)();
        }
        uStack_70 = *puVar7;
        uStack_68 = puVar7[1];
        puVar7[1] = puVar7[-1];
        *puVar7 = puVar7[-2];
        puVar7[-1] = uStack_68;
        puVar7 = puVar7 + -2;
        *puVar7 = uStack_70;
        bVar3 = lVar9 != -1;
        lVar9 = lVar9 + 1;
      } while (bVar3);
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 2;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1016bc808; end: 1016bca6f;  */

undefined8 FUN_1016bc808(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1016bc8dc;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca58);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1016bc940:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca48);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca50);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca30);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca34);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca3c);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca44);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1016bc8dc:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca38);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca40);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca4c);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca54);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1016bc940;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca5c);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca24);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca70);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1016bca70(lVar9 + lVar12 * 0x10,lVar9 + *plVar1 * 0x10,lVar9 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca28);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016bca2c);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1016bca70; end: 1016bcd1b;  */

undefined8
FUN_1016bca70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar12 = (long)param_2 - (long)param_1;
  lVar6 = lVar12 + 0xf;
  if (-1 < lVar12) {
    lVar6 = lVar12;
  }
  lVar6 = lVar6 >> 4;
  lVar13 = (long)param_3 - (long)param_2;
  lVar9 = lVar13 + 0xf;
  if (-1 < lVar13) {
    lVar9 = lVar13;
  }
  lVar9 = lVar9 >> 4;
  if (lVar6 < lVar9) {
    if (((param_4 < param_1) || (param_1 + lVar6 * 2 <= param_4)) ||
       (puVar4 = param_1, param_4 != param_1)) {
      puVar4 = param_4;
      func_0x000107c610b8(param_4,param_1,lVar6 << 4);
    }
    puVar10 = param_4 + lVar6 * 2;
    puVar5 = param_1;
    if ((0xf < lVar12) && (param_2 < param_3)) {
      func_0x000100e8b654();
      puVar2 = PTR___sSSN_11034da80;
      do {
        uStack_70 = *param_2;
        uStack_68 = param_2[1];
        uStack_80 = *param_4;
        uStack_78 = param_4[1];
        puVar3 = &uStack_80;
        func_0x000107c60204(puVar3,puVar2,puVar2,puVar4,puVar4);
        if (puVar3 == (undefined8 *)0xffffffffffffffff) {
          puVar11 = param_2 + 2;
          puVar7 = param_4;
          puVar3 = param_2;
        }
        else {
          puVar11 = param_2;
          puVar7 = param_4 + 2;
          puVar3 = param_4;
        }
        param_4 = puVar7;
        param_2 = puVar11;
        if (puVar5 != puVar3) {
          uVar14 = *puVar3;
          puVar5[1] = puVar3[1];
          *puVar5 = uVar14;
        }
        puVar5 = puVar5 + 2;
      } while ((param_4 < puVar10) && (param_2 < param_3));
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar9 * 2 <= param_4)) ||
       (puVar4 = param_1, param_4 != param_2)) {
      puVar4 = param_4;
      func_0x000107c610b8(param_4,param_2,lVar9 << 4);
    }
    puVar3 = param_4 + lVar9 * 2;
    puVar10 = puVar3;
    puVar5 = param_2;
    if ((param_1 < param_2) && (0xf < lVar13)) {
      func_0x000100e8b654();
      do {
        puVar7 = param_2 + -2;
        puVar11 = param_3;
        while( true ) {
          param_3 = puVar11 + -2;
          puVar10 = puVar3 + -2;
          uStack_70 = *puVar10;
          uStack_68 = puVar3[-1];
          uStack_80 = param_2[-2];
          uStack_78 = param_2[-1];
          puVar5 = &uStack_80;
          func_0x000107c60204(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,puVar4,puVar4);
          if (puVar5 == (undefined8 *)0xffffffffffffffff) break;
          if (puVar11 != puVar3) {
            uVar14 = *puVar10;
            puVar11[-1] = puVar3[-1];
            *param_3 = uVar14;
          }
          puVar5 = param_2;
          puVar3 = puVar10;
          puVar11 = param_3;
          if (puVar10 <= param_4) goto LAB_1016bccb8;
        }
        if (puVar11 != param_2) {
          uVar14 = *puVar7;
          puVar11[-1] = param_2[-1];
          *param_3 = uVar14;
        }
        puVar10 = puVar3;
        puVar5 = puVar7;
      } while ((param_1 < puVar7) && (param_2 = puVar7, param_4 < puVar3));
    }
  }
LAB_1016bccb8:
  uVar8 = (long)puVar10 - (long)param_4;
  uVar1 = uVar8 + 0xf;
  if (-1 < (long)uVar8) {
    uVar1 = uVar8;
  }
  if ((puVar5 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= puVar5)) {
    func_0x000107c610b8(puVar5,param_4,((long)uVar1 >> 4) << 4);
  }
  return 1;
}



/* Entry: 1016bcd1c; end: 1016bcd2f;  */

/* WARNING: Removing unreachable block (ram,0x000100ed9e68) */
/* WARNING: Removing unreachable block (ram,0x000100ed9e78) */
/* WARNING: Removing unreachable block (ram,0x000100ed9f50) */
/* WARNING: Removing unreachable block (ram,0x000100ed9e84) */
/* WARNING: Removing unreachable block (ram,0x000100ed9e8c) */
/* WARNING: Removing unreachable block (ram,0x000100ed9f04) */
/* WARNING: Removing unreachable block (ram,0x000100ed9f0c) */
/* WARNING: Removing unreachable block (ram,0x000100ed9f10) */
/* WARNING: Removing unreachable block (ram,0x000100ed9f14) */
/* WARNING: Removing unreachable block (ram,0x000100ed9f1c) */

undefined * FUN_1016bcd1c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar2 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar2 = puVar4 + -0x20;
    }
    *(long *)(puVar3 + 0x10) = lVar5;
    *(long *)(puVar3 + 0x18) = ((long)puVar2 >> 4) << 1;
  }
  func_0x000107c6140c(puVar3 + 0x20,param_1 + 0x20,lVar5,PTR___sSSN_11034da80);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 1016bcd30; end: 1016bcf3f;  */

/* WARNING: Removing unreachable block (ram,0x0001016bcf34) */

undefined1  [16] FUN_1016bcd30(ulong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined *puStack_68;
  
  func_0x000107c41844();
  func_0x000107c61180();
  uVar2 = 0;
  func_0x000100bc2654(0);
  uVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar2);
  func_0x000107c61170(param_1);
  if (uVar3 >> 0x3e == 0) {
    uVar13 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar13 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar13 = uVar3;
    }
    func_0x000107c60480();
  }
  if (uVar13 == 0) {
    func_0x000107c6142c(uVar3);
    puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar9 = uVar13 & ((long)uVar13 >> 0x3f ^ 0xffffffffffffffffU);
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,uVar9,0);
    if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bcf34);
      (*pcVar1)();
    }
    uVar14 = 0;
    do {
      puVar12 = puStack_68;
      if ((uVar3 & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(uVar3 + uVar14 * 8 + 0x20);
        func_0x000107c61174();
        uVar10 = uVar9;
      }
      else {
        uVar4 = uVar14;
        uVar10 = uVar3;
        func_0x000100bc2938();
      }
      uVar5 = uVar4;
      func_0x000107c5cb4c();
      func_0x000107c61180();
      uVar6 = uVar5;
      func_0x000107c5faec();
      uVar9 = uVar10;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar5);
      uVar5 = *(ulong *)(puVar12 + 0x10);
      uVar4 = uVar5 + 1;
      puStack_68 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar5) {
        uVar9 = uVar4;
        func_0x000100403514(1 < *(ulong *)(puVar12 + 0x18),uVar4,1);
      }
      puVar12 = puStack_68;
      uVar14 = uVar14 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar4;
      *(ulong *)(puStack_68 + uVar5 * 0x10 + 0x20) = uVar6;
      *(ulong *)(puStack_68 + uVar5 * 0x10 + 0x28) = uVar10;
    } while (uVar13 != uVar14);
    func_0x000107c6142c(uVar3);
  }
  puStack_68 = puVar12;
  func_0x000107c61434(puVar12);
  FUN_1016bc188(&puStack_68);
  func_0x000107c6142c(puVar12);
  puVar12 = puStack_68;
  uVar2 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar7 = uVar2;
  func_0x00010011d734();
  uVar8 = 0x202c;
  uVar11 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar2,uVar7);
  func_0x000107c61574(puVar12);
  auVar15._8_8_ = uVar11;
  auVar15._0_8_ = uVar8;
  return auVar15;
}



/* Entry: 1016bcf40; end: 1016bcf4f;  */

undefined1  [16] FUN_1016bcf40(void)

{
  return ZEXT816(0x1103f7d40);
}



/* Entry: 1016bcf50; end: 1016bd00f;  */

void FUN_1016bcf50(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  lVar2 = lStack_38;
  func_0x000107c3fa04();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_40);
    uVar3 = uStack_40;
    func_0x000107c5d700(uStack_40);
    func_0x000107c61180();
    func_0x000107c61170(uStack_40);
    puVar4 = PTR_PTR_1126a7928;
    func_0x000107c610f8();
    func_0x0001053d2928();
    func_0x000107c61170(uVar3);
    func_0x000107c615e8(lVar2);
    *param_1 = puVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bd010);
  (*pcVar1)();
}



/* Entry: 1016bd010; end: 1016bd04f;  */

undefined1  [16] FUN_1016bd010(void)

{
  return ZEXT816(0x1103f7e08);
}



/* Entry: 1016bd050; end: 1016bd1ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bd050(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar4 = lStack_58;
  lVar2 = lStack_58;
  func_0x000107c444a4(lStack_58);
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000100083b20(&lStack_58);
  uVar3 = *(undefined8 *)(lStack_58 + _DAT_113091ae0);
  func_0x000107c61174(uVar3);
  func_0x000107c61170(lStack_58);
  lVar4 = lVar2;
  func_0x000107c5c734(lVar2);
  func_0x000107c61180();
  func_0x000107c49e24(uVar3);
  puVar5 = PTR_PTR_1126b2930;
  func_0x000107c61168();
  func_0x000107c418c4();
  func_0x000107c61180();
  if (puVar5 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar5;
    func_0x000107c5faec();
    func_0x000107c61170(puVar5);
    func_0x000107c5fadc(puVar6,param_3);
    func_0x000107c6142c(param_3);
  }
  puVar5 = PTR_PTR_1126a7948;
  func_0x000107c610f8();
  func_0x000107c46bd0();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(lVar4);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c61170(uVar3);
    func_0x000107c61170(lVar2);
    *param_1 = puVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bd1ac);
  (*pcVar1)();
}



/* Entry: 1016bd1ac; end: 1016bd1cb;  */

undefined1  [16] FUN_1016bd1ac(void)

{
  return ZEXT816(0x1103f8030);
}



/* Entry: 1016bd1cc; end: 1016bd237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bd1cc(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1016bd5c0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112dc0870) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1016bd238; end: 1016bd2a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bd238(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc0870) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016bd2a4; end: 1016bd303; -[_TtC49LensProcessingPluginsScopedFactoryServiceProvider37SCLensProcessingPluginsScopedServices init] */

void FUN_1016bd2a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensProcessingPluginsScopedFactoryServiceProvider.SCLensProcessingPluginsScopedServices"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bd2d0);
  (*pcVar1)();
}



/* Entry: 1016bd304; end: 1016bd313; -[_TtC49LensProcessingPluginsScopedFactoryServiceProvider37SCLensProcessingPluginsScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bd304(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dc0870));
  return;
}



/* Entry: 1016bd314; end: 1016bd37f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bd314(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103f8228;
  func_0x000107c613fc(&UNK_1103f8228,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1016bd69c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1016bd380; end: 1016bd41b;  */

void FUN_1016bd380(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103f8138;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103f8138;
  return;
}



/* Entry: 1016bd41c; end: 1016bd453;  */

void FUN_1016bd41c(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 1016bd454; end: 1016bd45b;  */

undefined8 FUN_1016bd454(void)

{
  return 0x1b;
}



/* Entry: 1016bd45c; end: 1016bd58f;  */

void FUN_1016bd45c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1103f8250;
  func_0x000107c613fc(&UNK_1103f8250,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1016bd674;
  func_0x00010058fa64(FUN_1016bd674,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1016bd590; end: 1016bd5bf;  */

undefined ** FUN_1016bd590(void)

{
  return &PTR_DAT_11302a4d0;
}



/* Entry: 1016bd5c0; end: 1016bd5df;  */

void FUN_1016bd5c0(void)

{
  func_0x000107c61168(&PTR_PTR_1127e67f8);
  return;
}



/* Entry: 1016bd5e0; end: 1016bd62f;  */

undefined1  [16] FUN_1016bd5e0(void)

{
  return ZEXT816(0x1103f8188);
}



/* Entry: 1016bd630; end: 1016bd673;  */

void FUN_1016bd630(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc08d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a7950;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112dc08d8 = puVar1;
  return;
}



/* Entry: 1016bd674; end: 1016bd69b;  */

void FUN_1016bd674(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1016bd69c; end: 1016bd6af;  */

void FUN_1016bd69c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1016bd6b0; end: 1016bd9ab;  */

void FUN_1016bd6b0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112dc08f0,&UNK_10d97d360);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1016be64c();
  func_0x000100082720("LensProcessingPluginsScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112dc08f8,&UNK_10d97d370);
  puVar3 = &UNK_1103f82b0;
  func_0x000107c613fc(&UNK_1103f82b0,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar9 = 0x1016bd9b4;
  func_0x0001000823a8(0x1016bd9b4,puVar3);
  func_0x000100082720("SCLensProcessingApplicatorEventsEntryPointWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1016bd41c;
  func_0x0001000823a8(FUN_1016bd41c,0);
  func_0x000100082720("SCLensProcessingPluginsScopedServicesCleanupRelayServiceProvider",0x40,2);
  func_0x0001000285a8(0x112dc0900,&UNK_10d97d368);
  puVar3 = &UNK_1103f82d8;
  func_0x000107c613fc(&UNK_1103f82d8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1016bd9bc;
  func_0x0001000823a8(0x1016bd9bc,puVar3);
  func_0x000100082720("SCLensProcessingPluginsScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112dc0878,&UNK_10d97d0b0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1016bd9c8;
  func_0x0001000823a8(0x1016bd9c8,uVar5);
  func_0x000100082720("SCLensProcessingPluginsScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112dc0868,&UNK_10d97d0a0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1016bd9d0;
  func_0x0001000823a8(0x1016bd9d0,uVar6);
  func_0x000100082720("SCLensProcessingPluginsScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1103f8300;
  func_0x000107c613fc(&UNK_1103f8300,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1016bda04;
  func_0x0001000823a8(FUN_1016bda04,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCLensProcessingPluginsScopeEntryPointProvider",0x2e,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1016bd9ac; end: 1016bd9d7;  */

void FUN_1016bd9ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112dc08f0,&UNK_10d97d360);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1016be64c();
  func_0x000100082720("LensProcessingPluginsScopeGraphBridgeServicesServiceProvider",0x3c,2);
  func_0x0001000285a8(0x112dc08f8,&UNK_10d97d370);
  puVar3 = &UNK_1103f82b0;
  func_0x000107c613fc(&UNK_1103f82b0,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar9 = 0x1016bd9b4;
  func_0x0001000823a8(0x1016bd9b4,puVar3);
  func_0x000100082720("SCLensProcessingApplicatorEventsEntryPointWrapperServiceProvider",0x40,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1016bd41c;
  func_0x0001000823a8(FUN_1016bd41c,0);
  func_0x000100082720("SCLensProcessingPluginsScopedServicesCleanupRelayServiceProvider",0x40,2);
  func_0x0001000285a8(0x112dc0900,&UNK_10d97d368);
  puVar3 = &UNK_1103f82d8;
  func_0x000107c613fc(&UNK_1103f82d8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1016bd9bc;
  func_0x0001000823a8(0x1016bd9bc,puVar3);
  func_0x000100082720("SCLensProcessingPluginsScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  func_0x0001000285a8(0x112dc0878,&UNK_10d97d0b0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1016bd9c8;
  func_0x0001000823a8(0x1016bd9c8,uVar5);
  func_0x000100082720("SCLensProcessingPluginsScopeInitializationServiceProvider",0x39,2);
  func_0x0001000285a8(0x112dc0868,&UNK_10d97d0a0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1016bd9d0;
  func_0x0001000823a8(0x1016bd9d0,uVar6);
  func_0x000100082720("SCLensProcessingPluginsScopedServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1103f8300;
  func_0x000107c613fc(&UNK_1103f8300,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1016bda04;
  func_0x0001000823a8(FUN_1016bda04,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCLensProcessingPluginsScopeEntryPointProvider",0x2e,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1016bd9d8; end: 1016bda03;  */

void FUN_1016bd9d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016bda04; end: 1016bda0b;  */

void FUN_1016bda04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103f8138;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103f8138;
  return;
}



/* Entry: 1016bda0c; end: 1016bdaf3;  */

void FUN_1016bda0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_1016bdd58();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1016bdc10(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1016bdaf4; end: 1016bdb1f;  */

void FUN_1016bdaf4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016bdb20; end: 1016bdb27;  */

undefined8 FUN_1016bdb20(void)

{
  return 0x1b;
}



/* Entry: 1016bdb28; end: 1016bdbab;  */

void FUN_1016bdb28(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1016bdd98,param_2,FUN_1016bdd9c,param_2,FUN_1016bddc4,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1016bdbac; end: 1016bdbfb;  */

undefined8 FUN_1016bdbac(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1016bdbfc; end: 1016bdc0f;  */

void FUN_1016bdbfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_1103f8318;
  return;
}



/* Entry: 1016bdc10; end: 1016bdd3b;  */

void FUN_1016bdc10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7958;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efb6fe0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1016bdd3c; end: 1016bdd57;  */

undefined ** FUN_1016bdd3c(void)

{
  return &PTR_DAT_11302a4d0;
}



/* Entry: 1016bdd58; end: 1016bdd77;  */

void FUN_1016bdd58(void)

{
  func_0x000107c61168(&PTR_PTR_112dc0970);
  return;
}



/* Entry: 1016bdd78; end: 1016bdd9b;  */

undefined1  [16] FUN_1016bdd78(void)

{
  return ZEXT816(0x1103f8358);
}



/* Entry: 1016bdd9c; end: 1016bddc3;  */

void FUN_1016bdd9c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1016bddc4; end: 1016bddcb;  */

undefined8 FUN_1016bddc4(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1016bddcc; end: 1016bde07;  */

void FUN_1016bddcc(undefined8 *param_1,undefined8 param_2)

{
  FUN_1016bde08();
  func_0x0001000a7f38("SCLensProcessingPluginsScopeInitializationPluginRegistryServiceProvider",0x47
                      ,2);
  *param_1 = param_2;
  return;
}



/* Entry: 1016bde08; end: 1016bdff3;  */

void FUN_1016bde08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11071b3c0;
  ppuVar4 = &PTR_DAT_11302a4d0;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1103f83a8;
  func_0x000107c613fc(&UNK_1103f83a8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112dc09d8;
  func_0x0001000285a8(0x112dc09d8,&UNK_10d97d4e8);
  func_0x0001000a6ee8(&UNK_1103f8588,
                      "LensProcessingPluginsScopeGraphBridgeScopeInitializationPluginKey",0x41,2,
                      FUN_1016bdff4,puVar2,uVar3,&UNK_1103f8588,&PTR_DAT_112dc0a68);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1103f8358,
                      "SCLensProcessingApplicatorEventsEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4d,2,FUN_1016be0a8,param_3,uVar3,&UNK_1103f8358,&PTR_DAT_112dc0908);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1103f83d0;
  func_0x000107c613fc(&UNK_1103f83d0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1103f81c8,
                      "SCLensProcessingPluginsScopedServicesScopeInitializationPluginKey",0x41,2,
                      FUN_1016be158,puVar2,uVar3,&UNK_1103f81c8,&PTR_DAT_112dc0880);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112dc09e0;
  func_0x0001000285a8(0x112dc09e0,&UNK_10d97d4f0);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 1016bdff4; end: 1016be033;  */

void FUN_1016bdff4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1016be730(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("LensProcessingPluginsScopeGraphBridgeScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1016be034; end: 1016be0a7;  */

void FUN_1016be034(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x1016be194;
  func_0x0001000823a8(0x1016be194,param_3);
  func_0x000100082720("SCLensProcessingApplicatorEventsEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1016be0a8; end: 1016be0af;  */

void FUN_1016be0a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x1016be194;
  func_0x0001000823a8();
  func_0x000100082720("SCLensProcessingApplicatorEventsEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x52,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 1016be0b0; end: 1016be157;  */

void FUN_1016be0b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103f83f8;
  func_0x000107c613fc(&UNK_1103f83f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_1016be18c;
  func_0x0001000823a8(FUN_1016be18c,puVar1);
  func_0x000100082720("SCLensProcessingPluginsScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 1016be158; end: 1016be15f;  */

void FUN_1016be158(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1103f83f8;
  func_0x000107c613fc(&UNK_1103f83f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_1016be18c;
  func_0x0001000823a8(FUN_1016be18c,puVar3);
  func_0x000100082720("SCLensProcessingPluginsScopedServicesScopeInitializationPluginProvider",0x46,
                      2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 1016be160; end: 1016be18b;  */

void FUN_1016be160(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1016be18c; end: 1016be19b;  */

void FUN_1016be18c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1103f8250;
  func_0x000107c613fc(&UNK_1103f8250,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1016bd674;
  func_0x00010058fa64(FUN_1016bd674,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1016be19c; end: 1016be223;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1016be19c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_1016be55c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112dc09e8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112dc09f0) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016be224);
  (*pcVar1)();
}



/* Entry: 1016be224; end: 1016be283; -[_TtC37LensProcessingPluginsScopeGraphBridge52LensProcessingPluginsScopeGraphBridgeSaberEntryPoint init] */

void FUN_1016be224(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensProcessingPluginsScopeGraphBridge.LensProcessingPluginsScopeGraphBridgeSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016be250);
  (*pcVar1)();
}



/* Entry: 1016be284; end: 1016be2bb; -[_TtC37LensProcessingPluginsScopeGraphBridge52LensProcessingPluginsScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001016be2a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016be2a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016be284(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc09e8));
  return;
}



/* Entry: 1016be2bc; end: 1016be2e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016be2bc(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112dc09f0),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112dc09e8));
  return;
}



/* Entry: 1016be2e4; end: 1016be303;  */

void FUN_1016be2e4(void)

{
  func_0x000107c61168(&PTR_PTR_1127e68b8);
  return;
}



/* Entry: 1016be304; end: 1016be38b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1016be304(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112dc0a20) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112dc0a28);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1016be38c);
  (*pcVar2)();
}



/* Entry: 1016be38c; end: 1016be473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1016be38c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dc0a20);
  *(undefined **)(unaff_x20 + _DAT_112dc0a20) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112dc0a28);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112dc0a28))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1103f84e8;
  func_0x000107c613fc(&UNK_1103f84e8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x1016be478,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1016be474; end: 1016be47f;  */

void FUN_1016be474(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1016be480; end: 1016be4df; -[_TtC37LensProcessingPluginsScopeGraphBridge52SCLensProcessingPluginsScopedServicesSaberEntryPoint init] */

void FUN_1016be480(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensProcessingPluginsScopeGraphBridge.SCLensProcessingPluginsScopedServicesSaberEntryPoint"
                      ,0x5a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1016be4ac);
  (*pcVar1)();
}



/* Entry: 1016be4e0; end: 1016be517; -[_TtC37LensProcessingPluginsScopeGraphBridge52SCLensProcessingPluginsScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016be4e0(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112dc0a28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc0a20));
  return;
}



/* Entry: 1016be518; end: 1016be51b;  */

void FUN_1016be518(void)

{
  return;
}



/* Entry: 1016be51c; end: 1016be53b;  */

void FUN_1016be51c(void)

{
  FUN_1016be38c();
  return;
}



/* Entry: 1016be53c; end: 1016be55b;  */

void FUN_1016be53c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e6980);
  return;
}



/* Entry: 1016be55c; end: 1016be62b;  */

undefined8 FUN_1016be55c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112dc0a58,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_1016be62c();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 1016be62c; end: 1016be64b;  */

void FUN_1016be62c(void)

{
  func_0x000107c61168(&PTR_PTR_1127e6a48);
  return;
}



/* Entry: 1016be64c; end: 1016be6b7;  */

void FUN_1016be64c(void)

{
  func_0x0001000285a8(0x112dc0a60,&UNK_10d97d5c8);
  func_0x0001000823a8(0x1016be68c,0);
  return;
}



/* Entry: 1016be6b8; end: 1016be6f3; -[_TtC37LensProcessingPluginsScopeGraphBridge45LensProcessingPluginsScopeGraphBridgeServices init] */

void FUN_1016be6b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016be6f4; end: 1016be727;  */

void FUN_1016be6f4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016be728; end: 1016be72f;  */

undefined8 FUN_1016be728(void)

{
  return 0x1b;
}



/* Entry: 1016be730; end: 1016be8a7;  */

void FUN_1016be730(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1103f8530;
  func_0x000107c613fc(&UNK_1103f8530,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1016be8a8,puVar1);
  return;
}



/* Entry: 1016be8a8; end: 1016be8af;  */

void FUN_1016be8a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112dc0a58,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112dc0a58,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1103f85c8;
  func_0x000107c613fc(&UNK_1103f85c8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x1016be95c;
  func_0x00010058fa64(0x1016be95c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1016be8b0; end: 1016be90b;  */

void FUN_1016be8b0(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112dc0a58,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112dc0a58,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 1016be90c; end: 1016be963;  */

undefined ** FUN_1016be90c(void)

{
  return &PTR_DAT_11302a4d0;
}



/* Entry: 1016be964; end: 1016be9ab; -[SCLensProcessingPluginsScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016be964(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dc0ab8;
  func_0x000107c61428(param_1 + _DAT_112dc0ab8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1016be9ac; end: 1016bea03; -[SCLensProcessingPluginsScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016be9ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dc0ab8;
  func_0x000107c61428(param_1 + _DAT_112dc0ab8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1016bea04; end: 1016bea4b; -[SCLensProcessingPluginsScopeGraphBridgeSaberEntryPoint lensProcessingPluginsScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bea04(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112dc0ac0;
  func_0x000107c61428(param_1 + _DAT_112dc0ac0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1016bea4c; end: 1016beaaf; -[SCLensProcessingPluginsScopeGraphBridgeSaberEntryPoint setLensProcessingPluginsScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016bea4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112dc0ac0;
  func_0x000107c61428(param_1 + _DAT_112dc0ac0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1016beab0; end: 1016bebe3;  */

/* WARNING: Possible PIC construction at 0x0001016beb68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016beb84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016beba0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016beb6c) */
/* WARNING: Removing unreachable block (ram,0x0001016beb88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016beab0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c4b35c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_1016be2e4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_1016be55c();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1016bebe4);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112dc09e8) = lVar5;
    *(long *)(lVar4 + _DAT_112dc09f0) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1016bebe4; end: 1016bec0b; -[SCLensProcessingPluginsScopeGraphBridgeSaberEntryPoint begin] */

void FUN_1016bebe4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1016beab0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1016bec0c; end: 1016bec4f; -[SCLensProcessingPluginsScopeGraphBridgeSaberEntryPoint end] */

void FUN_1016bec0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


