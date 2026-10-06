/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102959448; end: 102959513;  */

void FUN_102959448(void)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  pcVar1 = "launch()";
  func_0x0001000c10c0("launch()");
  func_0x000107c61180();
  puVar2 = &UNK_110571e20;
  func_0x000107c613fc(&UNK_110571e20,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_102959d94;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110571e38;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 102959514; end: 102959567;  */

void FUN_102959514(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_102959568();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102959568; end: 102959b7b;  */

/* WARNING: Possible PIC construction at 0x00010295987c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029598a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029598b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029598ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959960: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959b14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959b44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959a9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959acc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959a14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959a24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029599f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959a04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001029599e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102959a08) */
/* WARNING: Removing unreachable block (ram,0x0001029599f8) */
/* WARNING: Removing unreachable block (ram,0x000102959a28) */
/* WARNING: Removing unreachable block (ram,0x000102959a18) */
/* WARNING: Removing unreachable block (ram,0x000102959ad0) */
/* WARNING: Removing unreachable block (ram,0x000102959ab0) */
/* WARNING: Removing unreachable block (ram,0x000102959aa0) */
/* WARNING: Removing unreachable block (ram,0x000102959a90) */
/* WARNING: Removing unreachable block (ram,0x000102959b48) */
/* WARNING: Removing unreachable block (ram,0x000102959b28) */
/* WARNING: Removing unreachable block (ram,0x000102959b18) */
/* WARNING: Removing unreachable block (ram,0x000102959b08) */
/* WARNING: Removing unreachable block (ram,0x000102959994) */
/* WARNING: Removing unreachable block (ram,0x000102959974) */
/* WARNING: Removing unreachable block (ram,0x000102959964) */
/* WARNING: Removing unreachable block (ram,0x000102959954) */
/* WARNING: Removing unreachable block (ram,0x0001029598f0) */
/* WARNING: Removing unreachable block (ram,0x000102959a54) */
/* WARNING: Removing unreachable block (ram,0x000102959934) */
/* WARNING: Removing unreachable block (ram,0x000102959afc) */
/* WARNING: Removing unreachable block (ram,0x00010295993c) */
/* WARNING: Removing unreachable block (ram,0x0001029598b8) */
/* WARNING: Removing unreachable block (ram,0x0001029598a8) */
/* WARNING: Removing unreachable block (ram,0x000102959880) */
/* WARNING: Removing unreachable block (ram,0x0001029599e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102959568(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_120 [64];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ecf038);
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112ecf058);
  func_0x000107c42294();
  func_0x000107c61180();
  lVar2 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar3;
  if (lVar2 != 0) {
    lVar5 = *(long *)(*(long *)(unaff_x20 + _DAT_112ecf070) + _DAT_113083868);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c615e8(lVar3);
      lVar4 = lVar2;
    }
    else {
      lVar6 = *(long *)(unaff_x20 + _DAT_112ecf040);
      func_0x000107c5d7b4();
      func_0x000107c61180();
      lVar9 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170();
      if (lVar9 == 0) {
        func_0x000107c615e8(lVar3);
        lVar4 = lVar2;
      }
      else {
        puVar8 = *(ulong **)(unaff_x20 + _DAT_112ecf060);
        (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar8) + 0x70))();
        if ((lVar6 != 0) && (FUN_102959ba4(&uStack_e0), lVar4 = lVar6, lStack_a8 != 0)) {
          uStack_a0 = uStack_e0;
          uStack_98 = uStack_d8;
          uStack_90 = uStack_d0;
          uStack_88 = uStack_c8;
          uStack_80 = uStack_c0;
          uStack_78 = uStack_b8;
          uStack_70 = uStack_b0;
          uVar7 = *(undefined8 *)((long)puVar8 + _DAT_112f27008);
          uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ecf048);
          uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112ecf050);
          uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112ecf028);
          lVar9 = *(long *)(unaff_x20 + _DAT_112ecf020);
          func_0x000107c615f0();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c61174();
          FUN_102959f30(&uStack_e0,auStack_120);
          func_0x000107c3fa04();
          func_0x000107c61180();
          if (lVar9 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x102959b7c);
            (*pcVar1)();
          }
          FUN_10295c534();
          func_0x000107c614f0();
          func_0x000107c615f0();
          func_0x000107c61174();
          func_0x000107c61174();
          func_0x000107c615f0(lVar3);
          func_0x000107c615f0(lVar2);
          func_0x000107c615f0(lVar5);
          func_0x000107c615f0(lVar6);
          func_0x000102959f80(uStack_e0,uStack_d8,uStack_d0,uStack_c8,uStack_c0,uStack_b8,uStack_b0)
          ;
          FUN_10295c1f4(uVar7,&uStack_a0,lVar6,lVar3,uVar10,uVar11,uVar12,lVar2);
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
  return;
}



/* Entry: 102959b7c; end: 102959ba3; -[_TtC28SCPlusUpsellNotificationImpl36PlusUpsellNotificationImplEntryPoint launch] */

void FUN_102959b7c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102959448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102959ba4; end: 102959d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102959ba4(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)(*(long *)(param_2 + _DAT_112ecf060) + _DAT_112f27000);
  if (*(char *)(lVar1 + _DAT_112f26fa8) == '\0') {
    func_0x000107c5c034();
    uVar2 = 0;
    lVar3 = 0;
    uVar5 = 0;
    lVar4 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 2;
LAB_102959cd4:
    func_0x000107c61180();
    lVar1 = param_3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(param_3);
    if (lVar1 != 0) goto LAB_102959d68;
    func_0x000102959fcc(uVar2,lVar3,uVar5,lVar4,uVar6,uVar7,uVar8);
    lVar3 = 0;
    lVar4 = 0;
  }
  else {
    if (*(char *)(lVar1 + _DAT_112f26fa8) != '\x01') {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112f26fc8);
      func_0x000107c61174(uVar2);
      func_0x000107c4cc30();
      lVar3 = 0;
      uVar5 = 0;
      lVar4 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 1;
      goto LAB_102959cd4;
    }
    lVar3 = ((undefined8 *)(lVar1 + _DAT_112f26fb0))[1];
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = ((undefined8 *)(lVar1 + _DAT_112f26fb8))[1];
      if (lVar4 != 0) {
        uVar2 = *(undefined8 *)(lVar1 + _DAT_112f26fb0);
        uVar5 = *(undefined8 *)(lVar1 + _DAT_112f26fb8);
        uVar6 = *(undefined8 *)(lVar1 + _DAT_112f26fc0);
        uVar7 = ((undefined8 *)(lVar1 + _DAT_112f26fc0))[1];
        func_0x000107c61434(uVar7);
        func_0x000107c61434(lVar3);
        func_0x000107c61434(lVar4);
        func_0x000107c40ce0();
        uVar8 = 0;
        goto LAB_102959cd4;
      }
      lVar3 = 0;
    }
    lVar1 = 0;
  }
  uVar7 = 0;
  uVar6 = 0;
  uVar5 = 0;
  uVar2 = 0;
  uVar8 = 0;
LAB_102959d68:
  *param_1 = uVar2;
  param_1[1] = lVar3;
  param_1[2] = uVar5;
  param_1[3] = lVar4;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = lVar1;
  return;
}



/* Entry: 102959d94; end: 102959db7;  */

void FUN_102959d94(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102959568();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102959db8; end: 102959e17; -[_TtC28SCPlusUpsellNotificationImpl36PlusUpsellNotificationImplEntryPoint init] */

void FUN_102959db8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusUpsellNotificationImpl.PlusUpsellNotificationImplEntryPoint",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102959de4);
  (*pcVar1)();
}



/* Entry: 102959e18; end: 102959e27;  */

undefined1  [16] FUN_102959e18(void)

{
  return ZEXT816(0x110571e70);
}



/* Entry: 102959e28; end: 102959f0f; -[_TtC28SCPlusUpsellNotificationImpl36PlusUpsellNotificationImplEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102959e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959e64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959e84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102959ee4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102959ec8) */
/* WARNING: Removing unreachable block (ram,0x000102959ea8) */
/* WARNING: Removing unreachable block (ram,0x000102959e88) */
/* WARNING: Removing unreachable block (ram,0x000102959e68) */
/* WARNING: Removing unreachable block (ram,0x000102959e48) */
/* WARNING: Removing unreachable block (ram,0x000102959ee8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102959e28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecf018));
  return;
}



/* Entry: 102959f10; end: 102959f2f;  */

void FUN_102959f10(void)

{
  func_0x000107c61168(&PTR_PTR_112872a20);
  return;
}



/* Entry: 102959f30; end: 10295a05f;  */

undefined8 FUN_102959f30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ecf0a0;
  func_0x0001000285a8(0x112ecf0a0,&UNK_10daf5378);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10295a060; end: 10295a09b;  */

void FUN_10295a060(long param_1,undefined8 param_2)

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



/* Entry: 10295a09c; end: 10295a0d3;  */

void FUN_10295a09c(void)

{
  FUN_10295a0d4();
  return;
}



/* Entry: 10295a0d4; end: 10295a20b;  */

undefined8
FUN_10295a0d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,code *param_15)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  uVar1 = param_10;
  func_0x000107c614f0();
  uVar2 = param_1;
  (*param_15)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
              param_11,param_12,param_13,param_14,unaff_x20,uVar1);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c615e8(param_8);
  func_0x000107c615e8(param_9);
  func_0x000107c615e8(param_10);
  func_0x000107c615e8(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  FUN_10295c270(param_2);
  func_0x000107c615e8(param_1);
  return uVar2;
}



/* Entry: 10295a20c; end: 10295a25f; -[_TtC28SCPlusUpsellNotificationImpl30PlusUpsellNotificationLauncher plusSubscribeDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295a20c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecf0b0);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  func_0x000107c4eac0(*(undefined8 *)(param_1 + _DAT_112ecf0b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10295a260; end: 10295a26f; -[_TtC28SCPlusUpsellNotificationImpl30PlusUpsellNotificationLauncher didDismissFanPassSubscriptionScopeWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295a260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c102850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112ecf0b8),
             PTR_s_plusUpsellNotificationPresentati_11261e430);
  return;
}



/* Entry: 10295a270; end: 10295a49b;  */

void FUN_10295a270(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 auStack_70 [2];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar8 = (long)&uStack_60 + lVar1;
  func_0x00010439c014(0);
  func_0x000107c610f8();
  uVar2 = 0x8d;
  uVar5 = 0;
  func_0x00010439b9d8(0x8d,0,0,7,0,0,8,0);
  uVar9 = 0xe000000000000000;
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x18);
  func_0x000107c6142c(uStack_58);
  uStack_60 = 0x7461686370616e73;
  uStack_58 = 0xeb000000002f2f3a;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e21338);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar5);
  uVar5 = 0xe90000000000003d;
  func_0x000107c5fb78(0x657275746165663f,0xe90000000000003d);
  lVar3 = 8;
  func_0x000107c311e0();
  func_0x000107c61180();
  if (lVar3 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(lVar3);
    uVar9 = uVar5;
  }
  func_0x000107c5fb78(lVar10,uVar9);
  func_0x000107c6142c(uVar9);
  uVar9 = uStack_58;
  uVar6 = uStack_58;
  func_0x000107c5edd0(lVar8,uStack_60,uStack_58);
  func_0x000107c6142c(uVar9);
  func_0x00010295cfc4();
  uVar5 = uVar9;
  uVar7 = uVar6;
  func_0x00010295d090();
  puVar4 = &UNK_110571f60;
  func_0x000107c613fc(&UNK_110571f60,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  func_0x000107c61174(uVar2);
  *(code **)((long)auStack_70 + lVar1) = FUN_10295c5a8;
  *(undefined **)((long)auStack_70 + lVar1 + 8) = puVar4;
  FUN_10295a950(uVar9,uVar6,uVar5,uVar7,8,0,0,lVar8);
  func_0x000107c61170(uVar2);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar7);
  func_0x000107c61574(puVar4);
  func_0x0001000293e4(lVar8);
  return;
}



/* Entry: 10295a49c; end: 10295a8e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295a49c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long alStack_a0 [2];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112d36580;
  uStack_88 = param_1;
  uStack_78 = param_5;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar9 = auStack_90 + lVar2;
  func_0x00010439b5f4(0);
  func_0x000107c610f8();
  uVar3 = 0xed;
  func_0x00010439b428(0xed,0xee);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112ecf0c0);
  func_0x0001003604c8(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar10);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  *(long *)((long)alStack_a0 + lVar2) = unaff_x20;
  func_0x000103b67ad8(uVar10,param_1,param_2,param_3,param_4,0,0,uVar3);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x19);
  func_0x000107c6142c(uStack_68);
  uStack_70 = 0x7461686370616e73;
  uStack_68 = 0xeb000000002f2f3a;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e50738);
  func_0x000107c5fb78();
  func_0x000107c6142c(param_1);
  func_0x000107c5fb78(0x726f74616572632f,0xea00000000002f73);
  uVar4 = 0;
  if (param_6 != 0) {
    uVar4 = uStack_78;
  }
  lVar1 = -0x2000000000000000;
  if (param_6 != 0) {
    lVar1 = param_6;
  }
  func_0x000107c61434(param_6);
  func_0x000107c5fb78(uVar4,lVar1);
  func_0x000107c6142c(lVar1);
  uVar4 = uStack_68;
  uVar7 = uStack_68;
  func_0x000107c5edd0(puVar9,uStack_70,uStack_68);
  func_0x000107c6142c(uVar4);
  func_0x00010295d15c();
  uVar5 = uVar4;
  uVar8 = uVar7;
  func_0x00010295d090();
  puVar6 = &UNK_1105721e0;
  func_0x000107c613fc(&UNK_1105721e0,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar10;
  func_0x000107c61174(uVar10);
  *(code **)((long)alStack_a0 + lVar2) = FUN_10295c688;
  *(undefined **)((long)alStack_a0 + lVar2 + 8) = puVar6;
  FUN_10295a950(uVar4,uVar7,uVar5,uVar8,uStack_88,param_2,1,puVar9);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c6142c(uVar7);
  func_0x000107c6142c(uVar8);
  func_0x000107c61574(puVar6);
  func_0x0001000293e4(puVar9);
  return;
}



/* Entry: 10295a8e4; end: 10295a94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295a8e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecf0d8);
  func_0x000107c3eda8(uVar1,param_2,*(undefined8 *)(param_1 + _DAT_112ecf0c0),param_2,param_1,0,0);
  func_0x000107c61180();
  func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112ecf0b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10295a950; end: 10295b8d3;  */

/* WARNING: Removing unreachable block (ram,0x00010295b218) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295a950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,long param_7,uint param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long *plVar12;
  char *pcVar13;
  undefined8 uVar14;
  long extraout_x8;
  ulong uVar15;
  undefined8 uVar16;
  long unaff_x20;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined *puVar25;
  undefined8 auStack_1b0 [5];
  undefined1 auStack_188 [8];
  undefined8 auStack_180 [2];
  undefined1 auStack_170 [8];
  undefined **ppuStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long lStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  long lStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  puStack_120 = (undefined *)param_11;
  lVar21 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  lVar23 = *(long *)(lVar21 + -8);
  lVar21 = *(long *)(lVar23 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar21 + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar25 = &UNK_110571f88;
  func_0x000107c613fc(&UNK_110571f88,0x18,7);
  func_0x000107c61614(puVar25 + 0x10);
  FUN_10295c640(param_9,auStack_170 + lVar2,0x112d36580,&UNK_10d9016d0);
  uVar15 = (ulong)*(byte *)(lVar23 + 0x50);
  uVar18 = uVar15 + 0x18 & (uVar15 ^ 0xffffffffffffffff);
  uVar19 = lVar21 + uVar18 + 7 & 0xfffffffffffffff8;
  puVar5 = &UNK_110571fb0;
  func_0x000107c613fc(&UNK_110571fb0,uVar19 + 0x10,uVar15 | 7);
  *(undefined **)(puVar5 + 0x10) = puVar25;
  func_0x0001001021cc(auStack_170 + lVar2,puVar5 + uVar18);
  *(undefined8 *)(puVar5 + uVar19) = param_10;
  *(undefined8 *)((long)(puVar5 + uVar19) + 8) = param_11;
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ecf0e0);
  uVar22 = *(undefined8 *)(unaff_x20 + _DAT_112ecf0e8);
  uVar20 = *(undefined8 *)(unaff_x20 + _DAT_112ecf120);
  puVar25 = *(undefined **)(unaff_x20 + _DAT_112ecf0f8);
  lVar24 = *(long *)(unaff_x20 + _DAT_112ecf100);
  uStack_128 = *(undefined8 *)(unaff_x20 + _DAT_112ecf110);
  lVar23 = 0;
  puStack_130 = puVar25;
  FUN_102958084();
  lStack_138 = lVar23;
  func_0x000107c610f8();
  lVar21 = lVar23 + _DAT_112eceea8;
  *(undefined8 *)(lVar21 + 8) = 0;
  func_0x000107c61614(lVar21,0);
  plVar12 = (long *)(lVar23 + _DAT_112eceeb8);
  *plVar12 = (long)param_6;
  plVar12[1] = param_7;
  *(char *)(plVar12 + 2) = (char)param_8;
  puVar1 = (undefined8 *)(lVar23 + _DAT_112eceee0);
  *puVar1 = FUN_10295c5b0;
  puVar1[1] = puVar5;
  *(undefined8 *)(lVar23 + _DAT_112ecee88) = uVar16;
  *(undefined8 *)(lVar23 + _DAT_112ecee90) = uVar22;
  *(undefined8 *)(lVar23 + _DAT_112ecee98) = uVar20;
  *(undefined **)(lVar23 + _DAT_112eceea0) = puVar25;
  *(long *)(lVar23 + _DAT_112eceec0) = lVar24;
  *(undefined8 *)(lVar23 + _DAT_112eceec8) = uStack_128;
  *(undefined ***)(lVar21 + 8) = &PTR_DAT_110571e80;
  lStack_140 = lVar23;
  func_0x000107c61604();
  puVar25 = PTR_PTR_1126ae560;
  func_0x000107c610f8();
  func_0x000107c61580(puVar5,2);
  func_0x000107c6157c(puStack_120);
  func_0x000107c615f0(uVar16);
  func_0x000107c615f0(uVar22);
  func_0x000107c6157c(uVar20);
  func_0x000107c615f0(puStack_130);
  func_0x000107c61174();
  FUN_1029580a4(param_6,param_7,param_8);
  func_0x000107c453e4();
  puStack_120 = puVar25;
  if ((param_8 & 0xff) == 0) {
    if (lRam0000000112ecee78 != -1) {
      func_0x000107c61568(0x112ecee78,FUN_102956f10);
    }
    func_0x0001048b0ec8(0);
    func_0x000107c610f8();
    uVar20 = 0xd000000000000019;
    func_0x0001048b0b48(0xd000000000000019,0x800000010f0cecd0,0x29);
    puVar17 = &UNK_110572168;
    func_0x000107c613fc(&UNK_110572168,0x18,7);
    *(undefined **)(puVar17 + 0x10) = puVar25;
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = (code *)0x10295c6e8;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_100f4f500;
    puStack_90 = &UNK_110572180;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar17;
    func_0x000107c60bc4(ppuVar6);
    puVar17 = puStack_80;
    func_0x000107c61174(puVar25);
    func_0x000107c61574(puVar17);
    func_0x000107c4226c(uVar16);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar20);
    puVar17 = PTR_PTR_1126c3378;
    func_0x000107c61168(PTR_PTR_1126c3378);
    func_0x000107c43bf4(puVar25);
    func_0x000107c61180();
    func_0x000107c4a974(puVar17);
    func_0x000107c61180();
    func_0x000107c61170(puVar25);
    uVar22 = 0;
    FUN_102956bf4();
    func_0x000107c610f8();
    func_0x000107c6157c(puVar5);
    uVar16 = param_2;
    func_0x000107c5fadc(param_2,param_3);
    uVar20 = param_4;
    func_0x000107c5fadc(param_4,param_5);
    pcStack_88 = FUN_10295c5b0;
    puStack_a8 = puVar7;
    lStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_1000f6b44;
    puStack_90 = &UNK_1105721a8;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4();
    *(undefined ***)((long)auStack_180 + lVar2) = ppuVar6;
    func_0x000107c46dc8();
    func_0x000107c61170(puVar17);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar20);
    func_0x000107c61574(puStack_80);
    lVar21 = lStack_140;
    *(undefined8 *)(lStack_140 + _DAT_112eceed0) = uVar22;
    func_0x000107c5a050(uVar22);
    *(undefined8 *)(lVar21 + _DAT_112eceed8) = 0;
    goto LAB_10295b618;
  }
  if ((param_8 & 0xff) == 1) {
    if (lRam0000000112ecee80 != -1) {
      func_0x000107c61568(0x112ecee80,0x102956fb4);
    }
    func_0x0001048b0ec8(0);
    func_0x000107c610f8();
    uVar20 = 0xd000000000000019;
    func_0x0001048b0b48(0xd000000000000019,0x800000010f0cecd0,0x29);
    puVar17 = &UNK_1105720f0;
    func_0x000107c613fc(&UNK_1105720f0,0x18,7);
    *(undefined **)(puVar17 + 0x10) = puVar25;
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_88 = (code *)0x10295c638;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_100f4f500;
    puStack_90 = &UNK_110572108;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar17;
    func_0x000107c60bc4(ppuVar6);
    puVar17 = puStack_80;
    func_0x000107c61174(puVar25);
    func_0x000107c61574(puVar17);
    func_0x000107c4226c(uVar16);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar20);
    puVar17 = PTR_PTR_1126c3378;
    func_0x000107c61168(PTR_PTR_1126c3378);
    func_0x000107c43bf4(puVar25);
    func_0x000107c61180();
    func_0x000107c4a974(puVar17);
    func_0x000107c61180();
    func_0x000107c61170(puVar25);
    uVar22 = 0;
    func_0x000102958e0c();
    func_0x000107c610f8();
    func_0x000107c6157c(puVar5);
    uVar16 = param_2;
    func_0x000107c5fadc(param_2,param_3);
    uVar20 = param_4;
    func_0x000107c5fadc(param_4,param_5);
    pcStack_88 = FUN_10295c5b0;
    puStack_a8 = puVar7;
    lStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_1000f6b44;
    puStack_90 = &UNK_110572130;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4();
    *(undefined ***)((long)auStack_180 + lVar2) = ppuVar6;
    func_0x000107c46dc8();
    func_0x000107c61170(puVar17);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(uVar16);
    func_0x000107c61170(uVar20);
    func_0x000107c61574(puStack_80);
    lVar21 = lStack_140;
    *(undefined8 *)(lStack_140 + _DAT_112eceed0) = uVar22;
    func_0x000107c5a050(uVar22);
    *(undefined8 *)(lVar21 + _DAT_112eceed8) = 0;
    goto LAB_10295b618;
  }
  func_0x0001000d224c(&puStack_a8);
  ppuVar6 = &puStack_a8;
  func_0x0001000a8868(ppuVar6,puStack_90);
  if (puRam0000000112ecefc8 == (undefined *)0x0) {
    puVar17 = *ppuVar6;
    uVar16 = 0xd000000000000039;
    func_0x000107c5fadc(0xd000000000000039,0x800000010f0ceb80);
    func_0x000107c4980c();
    func_0x000107c61170(uVar16);
    if (-1 < (int)puVar17) goto LAB_10295b104;
    bVar4 = true;
  }
  else {
    if ((long)puRam0000000112ecefc8 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10295b8d4);
      (*pcVar3)();
    }
    puVar17 = puRam0000000112ecefc8;
    if ((ulong)puRam0000000112ecefc8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10295b0b0);
      (*pcVar3)();
    }
LAB_10295b104:
    bVar4 = (int)puVar17 != 1;
  }
  func_0x0001000834e4(&puStack_a8);
  puVar17 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c51820();
  func_0x000107c61170(puVar17);
  uVar22 = 0;
  FUN_102955f74();
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar14 = 0;
  uVar16 = uVar22;
  FUN_102956ca4(param_1);
  func_0x000107c61170(uVar22);
  uStack_148 = uVar20;
  uStack_128 = uVar16;
  if ((bVar4) || (param_6 == (undefined *)0x0)) {
LAB_10295b274:
    func_0x000107c3fefc(puVar25);
  }
  else {
    lVar21 = *(long *)(lVar24 + _DAT_112ff73d0);
    puVar17 = param_6;
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar21 == 0) {
      func_0x0001029580d8(param_6,param_7,2);
      goto LAB_10295b274;
    }
    func_0x000107c3eea8();
    func_0x000107c61180();
    puVar7 = puVar17;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar17);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    puVar17 = puVar7;
    func_0x0001010282b0(puVar7,uVar14);
    func_0x00010006c090(puVar7,uVar14);
    if (puVar17 == (undefined *)0x0) {
      func_0x0001029580d8(param_6,param_7,2);
      func_0x000107c615e8(lVar21);
      goto LAB_10295b274;
    }
    lVar23 = lVar21;
    func_0x000107c5c92c(0x4064000000000000,lVar21);
    func_0x000107c61180();
    puVar7 = &UNK_1105720a0;
    func_0x000107c613fc(&UNK_1105720a0,0x20,7);
    uVar16 = uStack_128;
    *(undefined **)(puVar7 + 0x10) = puVar25;
    *(undefined8 *)(puVar7 + 0x18) = uStack_128;
    pcStack_88 = (code *)0x10295c630;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    param_1 = 0x42000000;
    lStack_a0 = 0x42000000;
    pcStack_98 = (code *)&UNK_10134a1dc;
    puStack_90 = &UNK_1105720b8;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar7;
    func_0x000107c60bc4(ppuVar6);
    puVar7 = puStack_80;
    func_0x000107c61174(puVar25);
    func_0x000107c61174(uVar16);
    func_0x000107c61574(puVar7);
    pcVar13 = 
    "init(style:title:subtitle:actionHandler:resourceDownloader:userTrackedLogger:upsellNotificationCOFConfig:upsellSurfaceController:snapDocThumbnailServices:sourceType:delegate:)"
    ;
    func_0x0001000c10c0(
                       "init(style:title:subtitle:actionHandler:resourceDownloader:userTrackedLogger:upsellNotificationCOFConfig:upsellSurfaceController:snapDocThumbnailServices:sourceType:delegate:)"
                       );
    func_0x000107c61180();
    func_0x000107c5dc64(lVar23);
    func_0x000107c615e8(pcVar13);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c615e8(lVar21);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(lVar23);
    func_0x0001029580d8(param_6,param_7,2);
  }
  puVar17 = PTR_PTR_1126b0ae0;
  func_0x000107c61168();
  puVar7 = PTR_PTR_1126c3378;
  puStack_130 = puVar17;
  func_0x000107c61168();
  func_0x000107c43bf4(puVar25);
  func_0x000107c61180();
  func_0x000107c4a978();
  func_0x000107c61180();
  puStack_150 = puVar7;
  func_0x000107c61170(puVar25);
  uVar16 = param_2;
  func_0x000107c5fadc(param_2,param_3);
  uVar20 = param_4;
  uVar22 = param_5;
  uStack_158 = uVar16;
  func_0x000107c5fadc(param_4,param_5);
  puVar17 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_10295c5b0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  lStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_1000f6b44;
  puStack_90 = &UNK_110571fc8;
  ppuVar6 = &puStack_a8;
  uStack_160 = uVar20;
  puStack_80 = puVar5;
  func_0x000107c60bc4();
  puVar25 = puStack_80;
  ppuStack_168 = ppuVar6;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar25);
  FUN_10295cef8();
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar22);
  puVar7 = PTR_PTR_1126b15a0;
  func_0x000107c61168();
  func_0x000107c3ee8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar25);
  pcStack_88 = FUN_10295c5b0;
  puStack_a8 = puVar17;
  lStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_1000f6b44;
  puStack_90 = &UNK_110571ff0;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4();
  puVar25 = puStack_80;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar25);
  puVar25 = &UNK_110572028;
  puVar9 = puVar25;
  func_0x000107c613fc(&UNK_110572028,0x20,7);
  *(undefined ***)(puVar9 + 0x18) = &PTR_DAT_110571e80;
  func_0x000107c61614(puVar9 + 0x10,unaff_x20);
  pcStack_88 = (code *)0x10295c620;
  puStack_a8 = puVar17;
  lStack_a0 = 0x42000000;
  pcStack_98 = (code *)&UNK_1000f6b44;
  puStack_90 = &UNK_110572040;
  ppuVar10 = &puStack_a8;
  puStack_80 = puVar9;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_80);
  func_0x000107c613fc(&UNK_110572028,0x20,7);
  *(undefined ***)(puVar25 + 0x18) = &PTR_DAT_110571e80;
  func_0x000107c61614(puVar25 + 0x10,unaff_x20);
  pcStack_88 = (code *)0x10295c628;
  puStack_a8 = puVar17;
  lStack_a0 = 0x42000000;
  pcStack_98 = FUN_10295a060;
  puStack_90 = &UNK_110572068;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar25;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_80);
  func_0x0001000d224c(&puStack_a8);
  ppuVar6 = &puStack_a8;
  func_0x0001000a8868(ppuVar6,puStack_90);
  FUN_102958e7c(*ppuVar6);
  uVar16 = 0xd000000000000038;
  func_0x000107c5fadc(0xd000000000000038,0x800000010f0cebc0);
  *(undefined8 *)((long)auStack_180 + lVar2) = uVar16;
  auStack_188[lVar2] = 1;
  *(undefined ***)((long)auStack_1b0 + lVar2 + 0x18) = ppuVar10;
  *(undefined ***)((long)auStack_1b0 + lVar2 + 0x20) = ppuVar11;
  *(undefined **)((long)auStack_1b0 + lVar2 + 8) = puVar7;
  *(undefined ***)((long)auStack_1b0 + lVar2 + 0x10) = ppuVar8;
  ppuVar6 = ppuStack_168;
  *(undefined ***)((long)auStack_1b0 + lVar2) = ppuStack_168;
  puVar25 = puStack_150;
  uVar22 = uStack_158;
  uVar20 = uStack_160;
  puVar17 = puStack_130;
  func_0x000107c40af8(param_1);
  func_0x000107c61180();
  func_0x000107c61170(uVar16);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar20);
  func_0x0001000834e4(&puStack_a8);
  lVar21 = lStack_140;
  *(undefined **)(lStack_140 + _DAT_112eceed8) = puVar17;
  func_0x000107c61174();
  puVar25 = puVar17;
  func_0x000107c403bc();
  func_0x000107c61180();
  func_0x000107c61170(puVar17);
  func_0x000107c61170(uStack_128);
  *(undefined **)(lVar21 + _DAT_112eceed0) = puVar25;
LAB_10295b618:
  puStack_a8 = (undefined *)0x0;
  lStack_a0 = 0xe000000000000000;
  func_0x000107c602fc(0x3b);
  puStack_b8 = puStack_a8;
  uStack_b0 = lStack_a0;
  func_0x000107c5fb78(0xd00000000000001b,0x800000010f0cec00);
  pcStack_98 = (code *)CONCAT71(pcStack_98._1_7_,(char)param_8);
  puStack_a8 = param_6;
  lStack_a0 = param_7;
  func_0x000107c603d0(&puStack_a8,&puStack_b8,&UNK_110571a20,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x7420687469772029,0xee00203a656c7469);
  func_0x000107c5fb78(param_2,param_3);
  func_0x000107c5fb78(0x746974627573202c,0xec000000203a656c);
  func_0x000107c5fb78(param_4,param_5);
  func_0x000107c61170(puStack_120);
  puVar1 = (undefined8 *)(lVar21 + _DAT_112eceeb0);
  *puVar1 = puStack_b8;
  puVar1[1] = uStack_b0;
  lStack_c0 = lStack_138;
  plVar12 = &lStack_c8;
  lStack_c8 = lVar21;
  func_0x000107c61154(plVar12,PTR_s_init_1125d9248);
  func_0x000107c61574(puVar5);
  func_0x000107c5c2e0(*(undefined8 *)(unaff_x20 + _DAT_112ecf0c8));
  func_0x000107c61574(puVar5);
  func_0x000107c61170(plVar12);
  return;
}



/* Entry: 10295b8d4; end: 10295b9b7;  */

void FUN_10295b8d4(undefined8 param_1,undefined8 param_2)

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
  pcVar1 = "handleCreatorStoryReply(hostAccountId:displayNameOrUsername:username:)";
  func_0x0001000c10c0("handleCreatorStoryReply(hostAccountId:displayNameOrUsername:username:)");
  func_0x000107c61180();
  puVar2 = &UNK_110572208;
  func_0x000107c613fc(&UNK_110572208,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  uStack_50 = 0x10295c690;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110572220;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10295b9b8; end: 10295ba3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295b9b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ecf0c0);
  uStack_30 = param_2;
  func_0x00010008a7c8(&uStack_28,&uStack_30);
  func_0x000100083b20(&uStack_30);
  func_0x000107c61574(uStack_28);
  uVar1 = uStack_30;
  func_0x000107c3e2c0(uVar2);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10295ba3c; end: 10295be23;  */

/* WARNING: Possible PIC construction at 0x00010295ba84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295bac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295bb3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295bb60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010295bb40) */
/* WARNING: Removing unreachable block (ram,0x00010295bac4) */
/* WARNING: Removing unreachable block (ram,0x00010295ba88) */
/* WARNING: Removing unreachable block (ram,0x00010295bb88) */
/* WARNING: Removing unreachable block (ram,0x00010295ba8c) */
/* WARNING: Removing unreachable block (ram,0x00010295bba0) */
/* WARNING: Removing unreachable block (ram,0x00010295baa8) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x00010295bb64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295ba3c(undefined8 param_1)

{
  func_0x00010451338c();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10295be24; end: 10295be83; -[_TtC28SCPlusUpsellNotificationImpl30PlusUpsellNotificationLauncher init] */

void FUN_10295be24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusUpsellNotificationImpl.PlusUpsellNotificationLauncher",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10295be50);
  (*pcVar1)();
}



/* Entry: 10295be84; end: 10295bf8b; -[_TtC28SCPlusUpsellNotificationImpl30PlusUpsellNotificationLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295be84(long param_1)

{
  undefined8 *puVar1;
  
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecf0c0));
  puVar1 = (undefined8 *)(param_1 + _DAT_112ecf0a8);
  func_0x000102959fcc(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],
                      *(undefined1 *)(puVar1 + 6));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecf0b8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecf0c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecf0d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecf0b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecf0d8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecf0e0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecf0e8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecf0f0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecf0f8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecf100));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ecf108));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecf120));
  return;
}



/* Entry: 10295bf8c; end: 10295c1f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295bf8c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [64];
  
  lVar2 = param_15;
  func_0x000107c614f0();
  *(undefined1 *)(param_15 + _DAT_112ecf118) = 0;
  *(undefined8 *)(param_15 + _DAT_112ecf0c0) = param_1;
  puVar1 = (undefined8 *)(param_15 + _DAT_112ecf0a8);
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar5;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  uVar5 = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[4] = uVar5;
  *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined8 *)(param_15 + _DAT_112ecf0b8) = param_3;
  *(undefined8 *)(param_15 + _DAT_112ecf0c8) = param_4;
  *(undefined8 *)(param_15 + _DAT_112ecf0b0) = param_5;
  *(undefined8 *)(param_15 + _DAT_112ecf0d8) = param_6;
  *(undefined8 *)(param_15 + _DAT_112ecf0d0) = param_7;
  *(undefined8 *)(param_15 + _DAT_112ecf0e0) = param_8;
  *(undefined8 *)(param_15 + _DAT_112ecf0e8) = param_9;
  *(undefined8 *)(param_15 + _DAT_112ecf0f0) = param_10;
  *(undefined8 *)(param_15 + _DAT_112ecf0f8) = param_11;
  *(undefined8 *)(param_15 + _DAT_112ecf100) = param_12;
  *(undefined8 *)(param_15 + _DAT_112ecf108) = param_13;
  *(undefined8 *)(param_15 + _DAT_112ecf110) = param_14;
  puVar3 = &UNK_110571f38;
  func_0x000107c613fc(&UNK_110571f38,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_10;
  func_0x0001000285a8(0x112ecf150,&UNK_10daf53e0);
  func_0x000107c613fc();
  func_0x000107c615f4(param_10,2);
  func_0x000107c615f0(param_1);
  FUN_10295c574(param_2,auStack_a0);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c615f0(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  pcVar4 = FUN_10295c554;
  func_0x0001000bdd8c(FUN_10295c554,puVar3);
  *(code **)(param_15 + _DAT_112ecf120) = pcVar4;
  lStack_b0 = param_15;
  lStack_a8 = lVar2;
  func_0x000107c61154(&lStack_b0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10295c1f4; end: 10295c26f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295c1f4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,long param_15)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [64];
  
  func_0x000107c610f8();
  lVar2 = param_15;
  func_0x000107c614f0();
  *(undefined1 *)(param_15 + _DAT_112ecf118) = 0;
  *(undefined8 *)(param_15 + _DAT_112ecf0c0) = param_1;
  puVar1 = (undefined8 *)(param_15 + _DAT_112ecf0a8);
  uVar5 = *param_2;
  uVar7 = param_2[3];
  uVar6 = param_2[2];
  puVar1[1] = param_2[1];
  *puVar1 = uVar5;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  uVar5 = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[4] = uVar5;
  *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined8 *)(param_15 + _DAT_112ecf0b8) = param_3;
  *(undefined8 *)(param_15 + _DAT_112ecf0c8) = param_4;
  *(undefined8 *)(param_15 + _DAT_112ecf0b0) = param_5;
  *(undefined8 *)(param_15 + _DAT_112ecf0d8) = param_6;
  *(undefined8 *)(param_15 + _DAT_112ecf0d0) = param_7;
  *(undefined8 *)(param_15 + _DAT_112ecf0e0) = param_8;
  *(undefined8 *)(param_15 + _DAT_112ecf0e8) = param_9;
  *(undefined8 *)(param_15 + _DAT_112ecf0f0) = param_10;
  *(undefined8 *)(param_15 + _DAT_112ecf0f8) = param_11;
  *(undefined8 *)(param_15 + _DAT_112ecf100) = param_12;
  *(undefined8 *)(param_15 + _DAT_112ecf108) = param_13;
  *(undefined8 *)(param_15 + _DAT_112ecf110) = param_14;
  puVar3 = &UNK_110571f38;
  func_0x000107c613fc(&UNK_110571f38,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_10;
  func_0x0001000285a8(0x112ecf150,&UNK_10daf53e0);
  func_0x000107c613fc();
  func_0x000107c615f4(param_10,2);
  func_0x000107c615f0(param_1);
  FUN_10295c574(param_2,auStack_a0);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c615f0(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  pcVar4 = FUN_10295c554;
  func_0x0001000bdd8c(FUN_10295c554,puVar3);
  *(code **)(param_15 + _DAT_112ecf120) = pcVar4;
  lStack_b0 = param_15;
  lStack_a8 = lVar2;
  func_0x000107c61154(&lStack_b0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10295c270; end: 10295c2d3;  */

undefined8 * FUN_10295c270(undefined8 *param_1)

{
  func_0x000102959fcc(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
                      *(undefined1 *)(param_1 + 6));
  return param_1;
}



/* Entry: 10295c2d4; end: 10295c2eb;  */

/* WARNING: Possible PIC construction at 0x000102959ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102959ff8) */

void FUN_10295c2d4(undefined8 *param_1)

{
  if (*(char *)(param_1 + 6) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)
              (*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
    return;
  }
  if (*(char *)(param_1 + 6) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_1[1]);
    return;
  }
  return;
}



/* Entry: 10295c2ec; end: 10295c3ef;  */

undefined8 * FUN_10295c2ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  func_0x000102959f80(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Entry: 10295c3f0; end: 10295c443;  */

undefined8 * FUN_10295c3f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  func_0x000102959fcc(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  return param_1;
}



/* Entry: 10295c444; end: 10295c533;  */

int FUN_10295c444(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 0xc) ^ 0xff;
  if (*(byte *)(param_1 + 0xc) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10295c534; end: 10295c553;  */

void FUN_10295c534(void)

{
  func_0x000107c61168(&PTR_PTR_112872b40);
  return;
}



/* Entry: 10295c554; end: 10295c573;  */

void FUN_10295c554(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  param_1[3] = &UNK_110571db0;
  param_1[4] = &PTR_DAT_110571dc8;
  *param_1 = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 10295c574; end: 10295c5a7;  */

undefined8 FUN_10295c574(undefined8 param_1,undefined8 param_2)

{
  FUN_10295c2ec(param_2,param_1,&UNK_110571f18);
  return param_2;
}



/* Entry: 10295c5a8; end: 10295c5af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295c5a8(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ecf0d8);
  func_0x000107c3eda8(uVar1,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(param_1 + _DAT_112ecf0c0),*(undefined8 *)(unaff_x20 + 0x10),
                      param_1,0,0);
  func_0x000107c61180();
  func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112ecf0b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10295c5b0; end: 10295c603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295c5b0(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  undefined1 *puVar14;
  long lVar15;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar12 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar12 = uVar12 + 0x18 & (uVar12 ^ 0xffffffffffffffff);
  lVar11 = *(long *)(unaff_x20 + 0x10);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar12 + 7 & 0xfffffffffffffff8))
  ;
  pcVar2 = (code *)*puVar1;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0,pcVar2,puVar1[1]);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = auStack_70 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar13 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61428(lVar11 + 0x10,auStack_68,0,0);
  lVar11 = lVar11 + 0x10;
  func_0x000107c61618();
  if (lVar11 == 0) {
    FUN_10295c640(unaff_x20 + uVar12,puVar14,0x112d36580,&UNK_10d9016d0);
    puVar4 = puVar14;
    (**(code **)(lVar15 + 0x30))(puVar14,1,lVar3);
    if ((int)puVar4 == 1) {
      func_0x0001000293e4(puVar14);
    }
    else {
      (**(code **)(lVar15 + 0x20))(lVar13,puVar14,lVar3);
      puVar5 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168();
      puVar6 = puVar5;
      func_0x000107c5a9c4();
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c5ed90();
      puVar8 = puVar6;
      func_0x000107c3f3f4();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      if ((int)puVar8 != 0) {
        func_0x000107c5a9c4(puVar5);
        func_0x000107c61180();
        puVar6 = puVar5;
        func_0x000107c5ed90();
        puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar9 = 0;
        func_0x000100dfa6ec(0);
        uVar10 = uVar9;
        func_0x000100f33384();
        puVar8 = puVar7;
        func_0x000107c5f9dc(puVar7,uVar9,PTR___sypN_11034f1a8 + 8,uVar10);
        func_0x000107c6142c(puVar7);
        func_0x000107c4de70(puVar5);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar8);
      }
      (**(code **)(lVar15 + 8))(lVar13,lVar3);
    }
  }
  else {
    if ((*(byte *)(lVar11 + _DAT_112ecf118) & 1) == 0) {
      *(undefined1 *)(lVar11 + _DAT_112ecf118) = 1;
      func_0x000107c4dc3c(*(undefined8 *)(lVar11 + _DAT_112ecf0f8));
      (*pcVar2)(lVar11);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 10295c604; end: 10295c63f;  */

void FUN_10295c604(long param_1,long param_2)

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



/* Entry: 10295c640; end: 10295c687;  */

undefined8 FUN_10295c640(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10295c688; end: 10295c6eb;  */

void FUN_10295c688(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  ppuVar3 = &puStack_70;
  pcVar1 = "handleCreatorStoryReply(hostAccountId:displayNameOrUsername:username:)";
  func_0x0001000c10c0("handleCreatorStoryReply(hostAccountId:displayNameOrUsername:username:)");
  func_0x000107c61180();
  puVar2 = &UNK_110572208;
  func_0x000107c613fc(&UNK_110572208,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  uStack_50 = 0x10295c690;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_110572220;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 10295c6ec; end: 10295c737;  */

void FUN_10295c6ec(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10295c7c4,param_1);
  return;
}



/* Entry: 10295c738; end: 10295c7c3;  */

void FUN_10295c738(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10295c7c4; end: 10295c7db;  */

void FUN_10295c7c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e5e838;
  func_0x0001000285a8(0x112e5e838,&UNK_10da68a50);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10295c7dc; end: 10295c8d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10295c7dc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ecf158;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ecf158);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c53840();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10295c8d4; end: 10295cdcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10295c8d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffff70;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ecf158) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ecf160) = 0;
  func_0x000107c5b078(param_3);
  func_0x000107c61154(0,0,param_1,param_2,&stack0xffffffffffffff70,PTR_s_initWithFrame__1125e2948);
  puVar4 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c450a4(0x4050000000000000,0x4050000000000000,puVar4);
  func_0x000107c61180();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50(puVar3);
  func_0x000107c61170(puVar5);
  FUN_10295c7dc();
  func_0x000107c3d89c(puVar3);
  func_0x000107c61170(puVar5);
  lVar1 = _DAT_112ecf158;
  func_0x000107c5a050(*(undefined8 *)(puVar3 + _DAT_112ecf158));
  uVar6 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c55258(uVar6);
  func_0x00010295c858();
  func_0x000107c3d89c(puVar3);
  func_0x000107c61170(uVar6);
  lVar2 = _DAT_112ecf160;
  func_0x000107c5a050(*(undefined8 *)(puVar3 + _DAT_112ecf160));
  func_0x000107c55258(*(undefined8 *)(puVar3 + lVar2));
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar7 = puVar5;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 0x15;
  *(undefined8 *)(puVar7 + 0x10) = 10;
  puVar8 = puVar3;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c40290(param_1);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  *(undefined1 **)(puVar7 + 0x20) = puVar9;
  puVar8 = puVar3;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c40290(param_2);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  *(undefined1 **)(puVar7 + 0x28) = puVar9;
  uVar10 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar8 = puVar3;
  func_0x000107c4acb0(puVar3);
  func_0x000107c61180();
  uVar6 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar7 + 0x30) = uVar6;
  uVar10 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar8 = puVar3;
  func_0x000107c5ce8c(puVar3);
  func_0x000107c61180();
  uVar6 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar7 + 0x38) = uVar6;
  uVar10 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar8 = puVar3;
  func_0x000107c5cbe4(puVar3);
  func_0x000107c61180();
  uVar6 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar7 + 0x40) = uVar6;
  uVar10 = *(undefined8 *)(puVar3 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar8 = puVar3;
  func_0x000107c3ec1c(puVar3);
  func_0x000107c61180();
  uVar6 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar7 + 0x48) = uVar6;
  uVar10 = *(undefined8 *)(puVar3 + lVar2);
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar8 = puVar3;
  func_0x000107c3f75c(puVar3);
  func_0x000107c61180();
  uVar6 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar7 + 0x50) = uVar6;
  uVar10 = *(undefined8 *)(puVar3 + lVar2);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar8 = puVar3;
  func_0x000107c3f764(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  uVar6 = uVar10;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar7 + 0x58) = uVar6;
  uVar10 = *(undefined8 *)(puVar3 + lVar2);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar6 = uVar10;
  func_0x000107c40290(0x4050000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  *(undefined8 *)(puVar7 + 0x60) = uVar6;
  uVar10 = *(undefined8 *)(puVar3 + lVar2);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar6 = uVar10;
  func_0x000107c40290(0x4050000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  *(undefined8 *)(puVar7 + 0x68) = uVar6;
  uVar6 = 0;
  func_0x000100847984();
  puVar11 = puVar7;
  func_0x000107c5fc48(puVar7,uVar6);
  func_0x000107c61574(puVar7);
  func_0x000107c3d048(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar11);
  return puVar3;
}



/* Entry: 10295cdd0; end: 10295ce3f; -[_TtC28SCPlusUpsellNotificationImpl34SnapThumbnailNotificationImageView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295cdd0(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ecf158) = 0;
  *(undefined8 *)(param_1 + _DAT_112ecf160) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCPlusUpsellNotificationImpl/SnapThumbnailNotificationImage.swift",0x41,2,
                      0x44,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10295ce40);
  (*pcVar1)();
}



/* Entry: 10295ce40; end: 10295ce9f; -[_TtC28SCPlusUpsellNotificationImpl34SnapThumbnailNotificationImageView initWithFrame:] */

void FUN_10295ce40(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlusUpsellNotificationImpl.SnapThumbnailNotificationImageView",0x3f,
                      "init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10295ce6c);
  (*pcVar1)();
}



/* Entry: 10295cea0; end: 10295ced7; -[_TtC28SCPlusUpsellNotificationImpl34SnapThumbnailNotificationImageView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010295cebc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010295cec0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295cea0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecf158));
  return;
}



/* Entry: 10295ced8; end: 10295cef7;  */

void FUN_10295ced8(void)

{
  func_0x000107c61168(&PTR_PTR_112872c78);
  return;
}



/* Entry: 10295cef8; end: 10295d42b;  */

undefined1  [16] FUN_10295cef8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe0;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f0cedd0);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0cee00);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10295cfc4);
  (*pcVar1)();
}



/* Entry: 10295d42c; end: 10295d497;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295d42c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecf198) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10295d498; end: 10295d4f7; -[_TtC41PlusSubscribeScopedFactoryServiceProvider27PlusSubscribeScopedServices init] */

void FUN_10295d498(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusSubscribeScopedFactoryServiceProvider.PlusSubscribeScopedServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10295d4c4);
  (*pcVar1)();
}



/* Entry: 10295d4f8; end: 10295d507; -[_TtC41PlusSubscribeScopedFactoryServiceProvider27PlusSubscribeScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295d4f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ecf198));
  return;
}



/* Entry: 10295d508; end: 10295d573;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295d508(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110572460;
  func_0x000107c613fc(&UNK_110572460,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10295d84c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10295d574; end: 10295d60f;  */

void FUN_10295d574(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110572370;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110572370;
  return;
}



/* Entry: 10295d610; end: 10295d647;  */

void FUN_10295d610(long *param_1)

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



/* Entry: 10295d648; end: 10295d64f;  */

undefined8 FUN_10295d648(void)

{
  return 0x1b;
}



/* Entry: 10295d650; end: 10295d783;  */

void FUN_10295d650(undefined8 *param_1)

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
  puVar1 = &UNK_110572488;
  func_0x000107c613fc(&UNK_110572488,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10295d824;
  func_0x00010058fa64(FUN_10295d824,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10295d784; end: 10295d7b3;  */

undefined ** FUN_10295d784(void)

{
  return &PTR_DAT_113066730;
}



/* Entry: 10295d7b4; end: 10295d7d3;  */

void FUN_10295d7b4(void)

{
  func_0x000107c61168(&PTR_PTR_112872d40);
  return;
}



/* Entry: 10295d7d4; end: 10295d823;  */

undefined1  [16] FUN_10295d7d4(void)

{
  return ZEXT816(0x1105723c0);
}



/* Entry: 10295d824; end: 10295d84b;  */

void FUN_10295d824(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10295d84c; end: 10295d85f;  */

void FUN_10295d84c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10295d860; end: 10295dad7;  */

void FUN_10295d860(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  uVar7 = *param_2;
  func_0x0001000285a8(0x112ecf210,&UNK_10daf56b8);
  puVar1 = &uStack_68;
  uStack_68 = uVar7;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10295e2a4();
  func_0x000100082720("PlusSubscribeScopeGraphBridgeServicesServiceProvider",0x34,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar3 = FUN_10295d610;
  func_0x0001000823a8(FUN_10295d610,0);
  func_0x000100082720("PlusSubscribeScopedServicesCleanupRelayServiceProvider",0x36,2);
  func_0x0001000285a8(0x112ecf218,&UNK_10daf56c8);
  puVar4 = &UNK_1105724e8;
  func_0x000107c613fc(&UNK_1105724e8,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(undefined8 **)(puVar4 + 0x18) = puVar2;
  *(code **)(puVar4 + 0x20) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(pcVar3);
  pcVar5 = FUN_10295dad8;
  func_0x0001000823a8(FUN_10295dad8,puVar4);
  func_0x000100082720("PlusSubscribeScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112ecf1a0,&UNK_10daf5480);
  func_0x000107c6157c(pcVar5);
  uVar7 = 0x10295dae4;
  func_0x0001000823a8(0x10295dae4,pcVar5);
  func_0x000100082720("PlusSubscribeScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112ecf190,&UNK_10daf5470);
  func_0x000107c6157c(uVar7);
  uVar6 = 0x10295daec;
  func_0x0001000823a8(0x10295daec,uVar7);
  func_0x000100082720("PlusSubscribeScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_110572510;
  func_0x000107c613fc(&UNK_110572510,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(code **)(puVar4 + 0x18) = pcVar3;
  func_0x000107c6157c(pcVar3);
  uVar6 = 0x10295daf4;
  func_0x0001000823a8(0x10295daf4,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar7);
  func_0x000100082720("PlusSubscribeScopeEntryPointProvider",0x24,2);
  *param_1 = uVar6;
  return;
}



/* Entry: 10295dad8; end: 10295dafb;  */

void FUN_10295dad8(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10295db38(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000a7f38("PlusSubscribeScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10295dafc; end: 10295db37;  */

void FUN_10295dafc(undefined8 *param_1,undefined8 param_2)

{
  FUN_10295db38();
  func_0x0001000a7f38("PlusSubscribeScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10295db38; end: 10295dccf;  */

void FUN_10295db38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074ce70;
  ppuVar4 = &PTR_DAT_113066730;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110572538;
  func_0x000107c613fc(&UNK_110572538,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112ecf220;
  func_0x0001000285a8(0x112ecf220,&UNK_10daf56d0);
  func_0x0001000a6ee8(&UNK_110572748,"PlusSubscribeScopeGraphBridgeScopeInitializationPluginKey",
                      0x39,2,FUN_10295dcd0,puVar2,uVar3,&UNK_110572748,&PTR_DAT_112ecf2b0);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_110572560;
  func_0x000107c613fc(&UNK_110572560,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110572400,"PlusSubscribeScopedServicesScopeInitializationPluginKey",0x37,
                      2,FUN_10295ddb8,puVar2,uVar3,&UNK_110572400,&PTR_DAT_112ecf1a8);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112ecf228;
  func_0x0001000285a8(0x112ecf228,&UNK_10daf56d8);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 10295dcd0; end: 10295dd0f;  */

void FUN_10295dcd0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10295e388(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("PlusSubscribeScopeGraphBridgeScopeInitializationPluginProvider",0x3e,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10295dd10; end: 10295ddb7;  */

void FUN_10295dd10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110572588;
  func_0x000107c613fc(&UNK_110572588,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_10295ddec;
  func_0x0001000823a8(FUN_10295ddec,puVar1);
  func_0x000100082720("PlusSubscribeScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10295ddb8; end: 10295ddbf;  */

void FUN_10295ddb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_110572588;
  func_0x000107c613fc(&UNK_110572588,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_10295ddec;
  func_0x0001000823a8(FUN_10295ddec,puVar3);
  func_0x000100082720("PlusSubscribeScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 10295ddc0; end: 10295ddeb;  */

void FUN_10295ddc0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10295ddec; end: 10295ddf3;  */

void FUN_10295ddec(undefined8 *param_1)

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
  puVar1 = &UNK_110572488;
  func_0x000107c613fc(&UNK_110572488,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10295d824;
  func_0x00010058fa64(FUN_10295d824,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10295ddf4; end: 10295de7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10295ddf4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_10295e1b4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112ecf230) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112ecf238) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10295de7c);
  (*pcVar1)();
}



/* Entry: 10295de7c; end: 10295dedb; -[_TtC29PlusSubscribeScopeGraphBridge44PlusSubscribeScopeGraphBridgeSaberEntryPoint init] */

void FUN_10295de7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusSubscribeScopeGraphBridge.PlusSubscribeScopeGraphBridgeSaberEntryPoint",
                      0x4a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10295dea8);
  (*pcVar1)();
}



/* Entry: 10295dedc; end: 10295df13; -[_TtC29PlusSubscribeScopeGraphBridge44PlusSubscribeScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010295def8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010295defc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295dedc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecf230));
  return;
}



/* Entry: 10295df14; end: 10295df3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295df14(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112ecf238),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112ecf230));
  return;
}



/* Entry: 10295df3c; end: 10295df5b;  */

void FUN_10295df3c(void)

{
  func_0x000107c61168(&PTR_PTR_112872e00);
  return;
}



/* Entry: 10295df5c; end: 10295dfe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10295df5c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ecf268) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112ecf270);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10295dfe4);
  (*pcVar2)();
}



/* Entry: 10295dfe4; end: 10295e0cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10295dfe4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ecf268);
  *(undefined **)(unaff_x20 + _DAT_112ecf268) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112ecf270);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ecf270))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1105726a8;
  func_0x000107c613fc(&UNK_1105726a8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x10295e0d0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10295e0cc; end: 10295e0d7;  */

void FUN_10295e0cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10295e0d8; end: 10295e137; -[_TtC29PlusSubscribeScopeGraphBridge42PlusSubscribeScopedServicesSaberEntryPoint init] */

void FUN_10295e0d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusSubscribeScopeGraphBridge.PlusSubscribeScopedServicesSaberEntryPoint",
                      0x48,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10295e104);
  (*pcVar1)();
}



/* Entry: 10295e138; end: 10295e16f; -[_TtC29PlusSubscribeScopeGraphBridge42PlusSubscribeScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295e138(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ecf270));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ecf268));
  return;
}



/* Entry: 10295e170; end: 10295e173;  */

void FUN_10295e170(void)

{
  return;
}



/* Entry: 10295e174; end: 10295e193;  */

void FUN_10295e174(void)

{
  FUN_10295dfe4();
  return;
}



/* Entry: 10295e194; end: 10295e1b3;  */

void FUN_10295e194(void)

{
  func_0x000107c61168(&PTR_PTR_112872ec8);
  return;
}



/* Entry: 10295e1b4; end: 10295e283;  */

undefined8 FUN_10295e1b4(void)

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
  
  func_0x000107c61428(0x112ecf2a0,&uStack_40,0x20,0);
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
    FUN_10295e284();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 10295e284; end: 10295e2a3;  */

void FUN_10295e284(void)

{
  func_0x000107c61168(&PTR_PTR_112872f90);
  return;
}



/* Entry: 10295e2a4; end: 10295e30f;  */

void FUN_10295e2a4(void)

{
  func_0x0001000285a8(0x112ecf2a8,&UNK_10daf5788);
  func_0x0001000823a8(0x10295e2e4,0);
  return;
}



/* Entry: 10295e310; end: 10295e34b; -[_TtC29PlusSubscribeScopeGraphBridge37PlusSubscribeScopeGraphBridgeServices init] */

void FUN_10295e310(undefined8 param_1)

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



/* Entry: 10295e34c; end: 10295e37f;  */

void FUN_10295e34c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10295e380; end: 10295e387;  */

undefined8 FUN_10295e380(void)

{
  return 0x1b;
}



/* Entry: 10295e388; end: 10295e4ff;  */

void FUN_10295e388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1105726f0;
  func_0x000107c613fc(&UNK_1105726f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10295e500,puVar1);
  return;
}



/* Entry: 10295e500; end: 10295e507;  */

void FUN_10295e500(undefined8 *param_1)

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
  func_0x000107c61428(0x112ecf2a0,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112ecf2a0,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_110572788;
  func_0x000107c613fc(&UNK_110572788,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x10295e5b4;
  func_0x00010058fa64(0x10295e5b4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10295e508; end: 10295e563;  */

void FUN_10295e508(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112ecf2a0,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112ecf2a0,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 10295e564; end: 10295e5bb;  */

undefined ** FUN_10295e564(void)

{
  return &PTR_DAT_113066730;
}



/* Entry: 10295e5bc; end: 10295e603; -[SCPlusSubscribeScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295e5bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecf300;
  func_0x000107c61428(param_1 + _DAT_112ecf300,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10295e604; end: 10295e65b; -[SCPlusSubscribeScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295e604(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecf300;
  func_0x000107c61428(param_1 + _DAT_112ecf300,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10295e65c; end: 10295e6a3; -[SCPlusSubscribeScopeGraphBridgeSaberEntryPoint plusSubscribeScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295e65c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ecf308;
  func_0x000107c61428(param_1 + _DAT_112ecf308,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10295e6a4; end: 10295e707; -[SCPlusSubscribeScopeGraphBridgeSaberEntryPoint setPlusSubscribeScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295e6a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ecf308;
  func_0x000107c61428(param_1 + _DAT_112ecf308,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10295e708; end: 10295e83b;  */

/* WARNING: Possible PIC construction at 0x00010295e7c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295e7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010295e7f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010295e7c4) */
/* WARNING: Removing unreachable block (ram,0x00010295e7e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10295e708(void)

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
  func_0x000107c4eaac();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_10295df3c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_10295e1b4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10295e83c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112ecf230) = lVar5;
    *(long *)(lVar4 + _DAT_112ecf238) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}


