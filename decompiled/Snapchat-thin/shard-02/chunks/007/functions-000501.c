/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10212df50; end: 10212df73;  */

/* WARNING: Removing unreachable block (ram,0x00010212d9a4) */

undefined * FUN_10212df50(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar8 = auStack_58;
  func_0x000107c61428(unaff_x20 + 0x10,puVar8,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar7 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c4d73c();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar6);
    func_0x000107c61180();
  }
  else {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e20ef8;
    func_0x000107c61174();
    ppuVar3 = ppuVar2;
    FUN_10212e1a4();
    puVar6 = PTR_PTR_1126b1490;
    func_0x000107c61168(PTR_PTR_1126b1490);
    uVar4 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c5c388(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    puVar5 = PTR_PTR_1126b1498;
    func_0x000107c610f8(PTR_PTR_1126b1498);
    func_0x000107c5fadc(ppuVar3,puVar8);
    func_0x000107c6142c(puVar8);
    func_0x000107c48694(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(ppuVar2);
    func_0x000107c61170(ppuVar3);
    puVar6 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    puVar7 = PTR_PTR_1126ae750;
    func_0x000107c61168(PTR_PTR_1126ae750);
    func_0x000107c5b58c();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(puVar5);
  }
  func_0x000107c61170(puVar7);
  return puVar6;
}



/* Entry: 10212df74; end: 10212df77; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin shouldBadgeForSource:] */

bool FUN_10212df74(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 10212df78; end: 10212df7b; -[_TtC35GamesFriendsFeedShortcutsDataPlugin35GamesFriendsFeedShortcutsDataPlugin shouldShowForSource:] */

bool FUN_10212df78(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 == 1;
}



/* Entry: 10212df7c; end: 10212e187;  */

void FUN_10212df7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5aac0,&UNK_10da60520);
  puVar1 = &UNK_1104cf770;
  func_0x000107c613fc(&UNK_1104cf770,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_10212e188,puVar1);
  return;
}



/* Entry: 10212e188; end: 10212e1a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212e188(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20));
  lVar3 = lStack_48;
  lVar2 = *(long *)(lStack_48 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c49e6c();
    if ((int)lVar2 != 0) {
      func_0x000100083b20(&lStack_48);
      lVar2 = lStack_48;
      lVar4 = lStack_48;
      func_0x000107c4ee78();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      lVar2 = lVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar2 != 0) {
        func_0x000100083b20(&lStack_48);
        lVar5 = 0;
        FUN_10212df30();
        lVar4 = lVar5;
        func_0x000107c610f8();
        *(long *)(lVar4 + _DAT_112e5aa88) = lVar2;
        *(long *)(lVar4 + _DAT_112e5aa90) = lStack_48;
        puVar1 = PTR_s_init_1125d9248;
        lStack_58 = lVar4;
        lStack_50 = lVar5;
        func_0x000107c615f0(lVar2);
        func_0x000107c6157c(lStack_48);
        plVar6 = &lStack_58;
        func_0x000107c61154(plVar6,puVar1);
        func_0x000107c615e8(lVar2);
        func_0x000107c61574(lStack_48);
        func_0x000107c615e8(lVar3);
        goto LAB_10212e16c;
      }
    }
    func_0x000107c615e8(lVar3);
  }
  plVar6 = (long *)0x0;
LAB_10212e16c:
  *param_1 = (long)plVar6;
  return;
}



/* Entry: 10212e1a4; end: 10212e313;  */

undefined1  [16] FUN_10212e1a4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffec;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f064860);
  uVar3 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f064880);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10212e270);
  (*pcVar1)();
}



/* Entry: 10212e314; end: 10212e31b;  */

void FUN_10212e314(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c51f40();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10212e31c; end: 10212e3bb;  */

/* WARNING: Possible PIC construction at 0x00010212e398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010212e39c) */

void FUN_10212e31c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x00010076d0fc();
  func_0x000107c613fc();
  *(undefined1 *)(lVar1 + 0x10) = 3;
  uVar2 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar1 + 0x30) = param_3;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_1104cfb90;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10212e3bc; end: 10212e3c7;  */

/* WARNING: Possible PIC construction at 0x00010212e398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010212e39c) */

void FUN_10212e3bc(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  func_0x00010076d0fc();
  func_0x000107c613fc();
  *(undefined1 *)(lVar3 + 0x10) = 3;
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar3 + 0x30) = uVar2;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  *(undefined8 *)(lVar3 + 0x20) = uVar1;
  *(undefined8 *)(lVar3 + 0x28) = uVar5;
  *param_1 = lVar3;
  param_1[1] = (long)&PTR_DAT_1104cfb90;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10212e3c8; end: 10212e3eb;  */

/* WARNING: Possible PIC construction at 0x00010212e3d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010212e3d8) */

void FUN_10212e3c8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10212e3ec; end: 10212e463;  */

void FUN_10212e3ec(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10212e464; end: 10212e477;  */

void FUN_10212e464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104cf8c8;
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c613fc(&UNK_1104cf8c8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10212e5c4,puVar1);
  return;
}



/* Entry: 10212e478; end: 10212e5c3;  */

void FUN_10212e478(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  func_0x0001000a0a8c(0);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1104cf9d0;
  func_0x000107c613fc(&UNK_1104cf9d0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  pcStack_70 = FUN_10212ec80;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  puStack_78 = &UNK_1104cf9e8;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar1;
  func_0x000100a0dc54(puVar1,0xd000000000000017,0x800000010f064930);
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 10212e5c4; end: 10212e5cf;  */

void FUN_10212e5c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar7 = &puStack_90;
  func_0x0001000a0a8c(0);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar6 = &UNK_1104cf9d0;
  func_0x000107c613fc(&UNK_1104cf9d0,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  pcStack_70 = FUN_10212ec80;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  puStack_78 = &UNK_1104cf9e8;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar6 = puVar5;
  func_0x000100a0dc54(puVar5,0xd000000000000017,0x800000010f064930);
  func_0x000107c61170(puVar5);
  *param_1 = puVar6;
  return;
}



/* Entry: 10212e5d0; end: 10212e78b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212e5d0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c4aca0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  puVar2 = &UNK_1104cfa20;
  func_0x000107c613fc(&UNK_1104cfa20,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  uVar3 = 0x112e5abb8;
  func_0x0001000285a8(0x112e5abb8,&UNK_10da60650);
  func_0x000107c613fc();
  uVar4 = 0x10212ec94;
  func_0x0001000bdd8c(0x10212ec94,puVar2,uVar3);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x0001000285a8(0x112e1bff0,&UNK_10da60480);
  func_0x000100083b20(&lStack_58);
  uVar5 = *(undefined8 *)(lStack_58 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  uVar6 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  lVar7 = 0;
  FUN_1021318b0();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112e5ae28) = 0;
  *(undefined8 *)(lVar8 + _DAT_112e5ae30) = uVar1;
  *(undefined8 *)(lVar8 + _DAT_112e5ae38) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112e5ae40) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112e5ae48) = uVar6;
  lStack_68 = lVar8;
  lStack_60 = lVar7;
  func_0x000107c61154(&lStack_68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10212e78c; end: 10212e79f;  */

void FUN_10212e78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104cf8f0;
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c613fc(&UNK_1104cf8f0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10212e998,puVar1);
  return;
}



/* Entry: 10212e7a0; end: 10212e84b;  */

void FUN_10212e7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c613fc(param_5,0x30,7);
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_3;
  *(undefined8 *)(param_5 + 0x20) = param_2;
  *(undefined8 *)(param_5 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(param_6,param_5);
  return;
}



/* Entry: 10212e84c; end: 10212e997;  */

void FUN_10212e84c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_90;
  func_0x0001000a0a8c(0);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar2 = &UNK_1104cf958;
  func_0x000107c613fc(&UNK_1104cf958,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_5;
  pcStack_70 = FUN_10212eb80;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  puStack_78 = &UNK_1104cf970;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar2);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  puVar2 = puVar1;
  func_0x000100a0dc54(puVar1,0xd00000000000001d,0x800000010f064910);
  func_0x000107c61170(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 10212e998; end: 10212e9c3;  */

void FUN_10212e998(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  ppuVar7 = &puStack_90;
  func_0x0001000a0a8c(0);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar6 = &UNK_1104cf958;
  func_0x000107c613fc(&UNK_1104cf958,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  *(undefined8 *)(puVar6 + 0x28) = uVar4;
  pcStack_70 = FUN_10212eb80;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  puStack_78 = &UNK_1104cf970;
  puStack_68 = puVar6;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  func_0x000107c61574(puVar6);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  puVar6 = puVar5;
  func_0x000100a0dc54(puVar5,0xd00000000000001d,0x800000010f064910);
  func_0x000107c61170(puVar5);
  *param_1 = puVar6;
  return;
}



/* Entry: 10212e9c4; end: 10212eb7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212e9c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar1 = uStack_48;
  func_0x000107c4aca0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  puVar2 = &UNK_1104cf9a8;
  func_0x000107c613fc(&UNK_1104cf9a8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  uVar3 = 0x112e5abb8;
  func_0x0001000285a8(0x112e5abb8,&UNK_10da60650);
  func_0x000107c613fc();
  pcVar4 = FUN_10212ec3c;
  func_0x0001000bdd8c(FUN_10212ec3c,puVar2,uVar3);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x0001000285a8(0x112e1bff0,&UNK_10da60480);
  func_0x000100083b20(&lStack_58);
  uVar5 = *(undefined8 *)(lStack_58 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  uVar6 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  lVar7 = 0;
  FUN_102134f68();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112e5af30) = 0;
  *(undefined8 *)(lVar8 + _DAT_112e5af38) = uVar1;
  *(code **)(lVar8 + _DAT_112e5af40) = pcVar4;
  *(undefined8 *)(lVar8 + _DAT_112e5af48) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112e5af50) = uVar6;
  lStack_68 = lVar8;
  lStack_60 = lVar7;
  func_0x000107c61154(&lStack_68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10212eb80; end: 10212eba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212eb80(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = uStack_48;
  func_0x000107c4aca0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  puVar2 = &UNK_1104cf9a8;
  func_0x000107c613fc(&UNK_1104cf9a8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  uVar3 = 0x112e5abb8;
  func_0x0001000285a8(0x112e5abb8,&UNK_10da60650);
  func_0x000107c613fc();
  pcVar4 = FUN_10212ec3c;
  func_0x0001000bdd8c(FUN_10212ec3c,puVar2,uVar3);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x0001000285a8(0x112e1bff0,&UNK_10da60480);
  func_0x000100083b20(&lStack_58);
  uVar5 = *(undefined8 *)(lStack_58 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  uVar6 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  lVar7 = 0;
  FUN_102134f68();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112e5af30) = 0;
  *(undefined8 *)(lVar8 + _DAT_112e5af38) = uVar1;
  *(code **)(lVar8 + _DAT_112e5af40) = pcVar4;
  *(undefined8 *)(lVar8 + _DAT_112e5af48) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112e5af50) = uVar6;
  lStack_68 = lVar8;
  lStack_60 = lVar7;
  func_0x000107c61154(&lStack_68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10212eba8; end: 10212ec3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212eba8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar1 = *(undefined8 *)(param_2 + _DAT_113083868);
  func_0x0001000bda74();
  lVar2 = 0;
  func_0x00010076d11c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e5b430) = uVar1;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *param_1 = plVar4;
  return;
}



/* Entry: 10212ec3c; end: 10212ec43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212ec3c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  plVar3 = &lStack_40;
  func_0x0001000285a8(0x112d39420,&UNK_10d979900);
  uVar1 = *(undefined8 *)(lVar4 + _DAT_113083868);
  func_0x0001000bda74();
  lVar2 = 0;
  func_0x00010076d11c();
  lVar4 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112e5b430) = uVar1;
  lStack_40 = lVar4;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}



/* Entry: 10212ec44; end: 10212ec7f;  */

void FUN_10212ec44(void)

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



/* Entry: 10212ec80; end: 10212ec97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212ec80(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = uStack_48;
  func_0x000107c4aca0();
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  puVar2 = &UNK_1104cfa20;
  func_0x000107c613fc(&UNK_1104cfa20,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  uVar3 = 0x112e5abb8;
  func_0x0001000285a8(0x112e5abb8,&UNK_10da60650);
  func_0x000107c613fc();
  uVar4 = 0x10212ec94;
  func_0x0001000bdd8c(0x10212ec94,puVar2,uVar3);
  func_0x000100083b20(&uStack_50);
  uVar3 = uStack_50;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  func_0x000107c61170(uStack_50);
  func_0x0001000285a8(0x112e1bff0,&UNK_10da60480);
  func_0x000100083b20(&lStack_58);
  uVar5 = *(undefined8 *)(lStack_58 + _DAT_1130344b8);
  func_0x000107c61174();
  func_0x000107c61170(lStack_58);
  uVar6 = uVar5;
  func_0x0001000bda74();
  func_0x000107c61170(uVar5);
  lVar7 = 0;
  FUN_1021318b0();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112e5ae28) = 0;
  *(undefined8 *)(lVar8 + _DAT_112e5ae30) = uVar1;
  *(undefined8 *)(lVar8 + _DAT_112e5ae38) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112e5ae40) = uVar3;
  *(undefined8 *)(lVar8 + _DAT_112e5ae48) = uVar6;
  lStack_68 = lVar8;
  lStack_60 = lVar7;
  func_0x000107c61154(&lStack_68,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10212ec98; end: 10212ed5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10212ec98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = 0x50;
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_1 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  return unaff_x20;
}



/* Entry: 10212ed5c; end: 10212edb7;  */

void FUN_10212ed5c(long *param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c51f40();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10212edb8; end: 10212edbf;  */

void FUN_10212edb8(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c51f40();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10212edc0; end: 10212ee13;  */

void FUN_10212edc0(undefined8 *param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **appuStack_30 [2];
  
  func_0x0001000d224c(appuStack_30);
  ppuVar2 = appuStack_30[0];
  func_0x000107c611b4();
  if (ppuVar2 == &PTR_PTR_112e5ad98) {
    *param_1 = appuStack_30[0];
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10212ee14);
  (*pcVar1)();
}



/* Entry: 10212ee14; end: 10212ee1b;  */

void FUN_10212ee14(undefined8 *param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **appuStack_30 [2];
  
  func_0x0001000d224c(appuStack_30);
  ppuVar2 = appuStack_30[0];
  func_0x000107c611b4();
  if (ppuVar2 == &PTR_PTR_112e5ad98) {
    *param_1 = appuStack_30[0];
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10212ee14);
  (*pcVar1)();
}



/* Entry: 10212ee1c; end: 10212ee8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212ee1c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = 0;
  func_0x00010076d11c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e5b430) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10212ee8c; end: 10212ee93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10212ee8c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = 0;
  func_0x00010076d11c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e5b430) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 10212ee94; end: 10212eefb;  */

void FUN_10212ee94(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010076d13c(0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  FUN_1021350c0(param_2,param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 10212eefc; end: 10212ef03;  */

void FUN_10212eefc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x00010076d13c(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  FUN_1021350c0(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10212ef04; end: 10212f2c3;  */

void FUN_10212ef04(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  long lVar15;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  uStack_d0 = param_8;
  uStack_c8 = param_3;
  uStack_a0 = param_2;
  uStack_98 = param_5;
  uStack_90 = param_7;
  plStack_88 = param_1;
  uStack_80 = param_6;
  uStack_78 = param_9;
  func_0x000107c5ffd8();
  lStack_b0 = *(long *)(lVar4 + -8);
  lStack_a8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b0 + 0x40));
  lVar14 = (long)&uStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_b8 = lVar14;
  func_0x000107c5ffc4();
  lStack_c0 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5f824();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar15 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x00010076d15c();
  func_0x000107c613fc();
  pcVar6 = "LensLeaderboardServiceImpl";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar5 + 0x50) = pcVar6;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001000285a8(0x112e5acf0,&UNK_10da60e40);
  func_0x000107c613fc();
  ppuVar7 = &puStack_70;
  func_0x00010006c248();
  *(undefined ***)(lVar5 + 0x58) = ppuVar7;
  puStack_70 = (undefined *)0x0;
  uStack_68 = 0;
  func_0x0001000285a8(0x112e5acf8,&UNK_10da60710);
  func_0x000107c613fc();
  ppuVar7 = &puStack_70;
  func_0x00010006c248();
  *(undefined ***)(lVar5 + 0x60) = ppuVar7;
  *(undefined8 *)(lVar5 + 0x68) = 0;
  lVar8 = 0;
  func_0x000102138060();
  func_0x000107c613fc();
  func_0x00010006a340(0);
  func_0x000107c613fc();
  func_0x000107c61434(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_8);
  uVar9 = param_10;
  func_0x000107c6157c();
  func_0x00010006a360();
  *(undefined8 *)(lVar8 + 0x38) = uVar9;
  puVar10 = puVar1;
  FUN_10212f478();
  *(undefined **)(lVar8 + 0x40) = puVar10;
  puVar10 = puVar1;
  func_0x00010212f5c0();
  *(undefined **)(lVar8 + 0x48) = puVar10;
  *(undefined8 *)(lVar8 + 0x58) = 0;
  *(undefined8 *)(lVar8 + 0x50) = 0;
  *(undefined8 *)(lVar8 + 0x68) = 0;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined8 *)(lVar8 + 0x78) = 0;
  *(undefined8 *)(lVar8 + 0x70) = 0;
  puStack_70 = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar8 + 0x80) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined **)(lVar8 + 0x88) = puStack_70;
  func_0x0001000285a8(0x112e5ad00,&UNK_10da60718);
  func_0x000107c613fc();
  ppuVar7 = &puStack_70;
  func_0x00010042e6a0();
  *(undefined ***)(lVar8 + 0x90) = ppuVar7;
  puVar10 = puVar1;
  func_0x00010212f7ac();
  puStack_70 = puVar10;
  func_0x0001000285a8(0x112e5ad08,&UNK_10da60720);
  func_0x000107c613fc();
  ppuVar7 = &puStack_70;
  func_0x00010042e6a0();
  *(undefined ***)(lVar8 + 0x98) = ppuVar7;
  uVar11 = 0;
  func_0x0001000295c4(0);
  func_0x000107c5f808(lVar15);
  puStack_70 = puVar1;
  func_0x000100029608();
  uVar9 = 0x112d4ac70;
  func_0x0001000285a8(0x112d4ac70,&UNK_10d911480);
  uVar12 = uVar9;
  func_0x00010002964c();
  func_0x000107c60264(lVar14,&puStack_70,uVar9,uVar12,lStack_c0,uVar11);
  lVar4 = lStack_b8;
  (**(code **)(lStack_b0 + 0x68))
            (lStack_b8,
             *(undefined4 *)
              PTR___sSo17OS_dispatch_queueC8DispatchE20AutoreleaseFrequencyO7inherityA2EmFWC_11034f960
             ,lStack_a8);
  uVar13 = 0xd000000000000031;
  func_0x000107c5ffec(0xd000000000000031,0x800000010f064990,lVar15,lVar14,lVar4,0);
  uVar3 = uStack_78;
  uVar2 = uStack_80;
  uVar11 = uStack_90;
  uVar12 = uStack_98;
  uVar9 = uStack_d0;
  *(undefined8 *)(lVar8 + 0xa0) = uVar13;
  *(undefined8 *)(lVar8 + 0x10) = uStack_a0;
  *(undefined8 *)(lVar8 + 0x18) = uStack_c8;
  *(undefined8 *)(lVar8 + 0x20) = param_4;
  *(undefined8 *)(lVar8 + 0x28) = param_10;
  *(undefined8 *)(lVar8 + 0x30) = uStack_d0;
  *(undefined8 *)(lVar5 + 0x10) = uStack_98;
  *(undefined8 *)(lVar5 + 0x18) = param_4;
  *(undefined8 *)(lVar5 + 0x20) = uStack_d0;
  *(undefined8 *)(lVar5 + 0x28) = uStack_90;
  *(long *)(lVar5 + 0x48) = lVar8;
  *(undefined8 *)(lVar5 + 0x38) = param_10;
  *(undefined8 *)(lVar5 + 0x40) = uStack_78;
  *(undefined8 *)(lVar5 + 0x30) = uStack_80;
  *plStack_88 = lVar5;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  return;
}



/* Entry: 10212f2c4; end: 10212f2f7;  */

void FUN_10212f2c4(void)

{
  long unaff_x20;
  
  FUN_10212ef04(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10212f2f8; end: 10212f31f;  */

void FUN_10212f2f8(undefined8 *param_1)

{
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  *param_1 = uStack_38;
  param_1[1] = &PTR_DAT_1104d08a8;
  param_1[2] = &PTR_DAT_1104d0810;
  return;
}



/* Entry: 10212f320; end: 10212f367;  */

void FUN_10212f320(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  *param_1 = uStack_38;
  param_1[1] = param_2;
  param_1[2] = param_3;
  return;
}



/* Entry: 10212f368; end: 10212f3a3;  */

void FUN_10212f368(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  *param_1 = uStack_28;
  param_1[1] = &PTR_DAT_1104d08b8;
  return;
}



/* Entry: 10212f3a4; end: 10212f453;  */

/* WARNING: Possible PIC construction at 0x00010212f3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010212f3c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010212f3d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010212f3cc) */
/* WARNING: Removing unreachable block (ram,0x00010212f3bc) */
/* WARNING: Removing unreachable block (ram,0x00010212f3dc) */

void FUN_10212f3a4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10212f454; end: 10212f477;  */

void FUN_10212f454(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010076cbb4();
  *param_1 = param_2;
  return;
}



/* Entry: 10212f478; end: 10212f983;  */

undefined * FUN_10212f478(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  
  puVar13 = *(undefined **)(param_1 + 0x10);
  puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar13 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e5ad30,&UNK_10da60750);
    puVar9 = puVar13;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar15 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar15[-2];
      uVar4 = puVar15[-1];
      uVar3 = *puVar15;
      uVar5 = puVar15[1];
      uVar6 = *(undefined1 *)(puVar15 + 2);
      uVar16 = puVar15[3];
      uVar7 = *(undefined1 *)(puVar15 + 4);
      uVar14 = puVar15[5];
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar5);
      uVar10 = uVar2;
      uVar11 = uVar4;
      func_0x000100029284();
      if ((uVar11 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10212f5bc);
        (*pcVar8)();
      }
      uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar9 + uVar11 + 0x40) =
           *(ulong *)(puVar9 + uVar11 + 0x40) | 1L << (uVar10 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar9 + 0x30) + uVar10 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar4;
      puVar12 = (undefined8 *)(*(long *)(puVar9 + 0x38) + uVar10 * 0x30);
      *puVar12 = uVar3;
      puVar12[1] = uVar5;
      *(undefined1 *)(puVar12 + 2) = uVar6;
      puVar12[3] = uVar16;
      *(undefined1 *)(puVar12 + 4) = uVar7;
      puVar12[5] = uVar14;
      if (SCARRY8(*(long *)(puVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10212f5c0);
        (*pcVar8)();
      }
      puVar15 = puVar15 + 8;
      *(long *)(puVar9 + 0x10) = *(long *)(puVar9 + 0x10) + 1;
      puVar13 = puVar13 + -1;
    } while (puVar13 != (undefined *)0x0);
    func_0x000107c61574(puVar9);
  }
  return puVar9;
}



/* Entry: 10212f984; end: 10212f9cb;  */

undefined8 FUN_10212f984(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10212f9cc; end: 10212fa47;  */

long FUN_10212f9cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined1 *)(unaff_x20 + 0x10) = 3;
  uVar1 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  return unaff_x20;
}



/* Entry: 10212fa48; end: 10212fa5b;  */

bool FUN_10212fa48(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10212fa5c; end: 10212fb07;  */

void FUN_10212fa5c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10212fb08; end: 10212fb17;  */

void FUN_10212fb08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10212fb18; end: 10212fb87;  */

long FUN_10212fb18(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    func_0x000107c5eb54();
    func_0x000107c613fc();
    func_0x000107c5eb50();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    *(long *)(unaff_x20 + 0x38) = lVar1;
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar1;
}



/* Entry: 10212fb88; end: 10212fb93;  */

void FUN_10212fb88(undefined1 *param_1,long param_2)

{
  *param_1 = *(undefined1 *)(param_2 + 0x10);
  return;
}



/* Entry: 10212fb94; end: 10212fdd3;  */

void FUN_10212fb94(void)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  
  uVar10 = *unaff_x20;
  func_0x000100087bd4(&puStack_88,FUN_10212fdd4);
  cVar1 = (char)puStack_88;
  if ((char)puStack_88 == '\x03') {
    func_0x0001000d224c(&puStack_88);
    puVar9 = puStack_88;
    if (puStack_88 != (undefined *)0x0) {
      func_0x0001000d224c(&puStack_88);
      puVar2 = puStack_88;
      if (puStack_88 != (undefined *)0x0) {
        func_0x0001000285a8(0x112e5ad48,&UNK_10da60768);
        func_0x000107c613fc();
        lVar3 = 0;
        func_0x00010095c380();
        func_0x000107c614f0(puStack_88);
        puVar4 = puStack_88;
        func_0x000100bcb214();
        puVar5 = &UNK_1104cfad8;
        func_0x000107c613fc(&UNK_1104cfad8,0x18,7);
        func_0x000107c61644(puVar5 + 0x10);
        puVar6 = &UNK_1104cfb00;
        func_0x000107c613fc(&UNK_1104cfb00,0x28,7);
        *(undefined **)(puVar6 + 0x10) = puVar5;
        *(long *)(puVar6 + 0x18) = lVar3;
        *(undefined8 *)(puVar6 + 0x20) = uVar10;
        pcStack_68 = FUN_10212ff9c;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        pcStack_78 = FUN_10213001c;
        puStack_70 = &UNK_1104cfb18;
        ppuVar7 = &puStack_88;
        puStack_60 = puVar6;
        func_0x000107c60bc4(ppuVar7);
        puVar5 = puStack_60;
        func_0x000107c6157c(lVar3);
        func_0x000107c61574(puVar5);
        func_0x000107c440ec(puVar9);
        func_0x000107c615e8(puVar9);
        func_0x000107c615e8(puVar2);
        func_0x000107c60bd0(ppuVar7);
        func_0x000107c61170(puVar4);
        func_0x000107c6157c(*(undefined8 *)(lVar3 + 0x10));
        func_0x000107c61574(lVar3);
        return;
      }
      func_0x000107c615e8(puVar9);
    }
    puVar8 = (undefined1 *)0x112e5ad38;
    func_0x0001000285a8(0x112e5ad38,&UNK_10da60760);
    FUN_10212fde0();
    puVar9 = &UNK_1104cfc48;
    func_0x000107c613f8(&UNK_1104cfc48,puVar8,0,0);
    *puVar8 = 0;
    func_0x00010488904c();
    func_0x000107c614ac(puVar9);
  }
  else {
    func_0x0001000285a8(0x112e5ad38,&UNK_10da60760);
    puStack_88 = (undefined *)CONCAT71(puStack_88._1_7_,cVar1);
    func_0x000104888f7c(&puStack_88);
  }
  return;
}



/* Entry: 10212fdd4; end: 10212fddf;  */

void FUN_10212fdd4(undefined1 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined1 *)(unaff_x20 + 0x10);
  return;
}



/* Entry: 10212fde0; end: 10212fe1f;  */

void FUN_10212fde0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5ad40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60878;
  func_0x000107c61520(&UNK_10da60878,&UNK_1104cfc48);
  puRam0000000112e5ad40 = puVar1;
  return;
}



/* Entry: 10212fe20; end: 10212ff9b;  */

void FUN_10212fe20(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined1 auStack_60 [31];
  undefined1 uStack_41;
  
  if (param_1 == 0) {
    if (2 < param_2) {
      param_2 = 3;
    }
    uVar4 = (undefined1)param_2;
  }
  else {
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c614b0();
    func_0x000107c602fc(0x2a);
    func_0x000107c6142c(uStack_78);
    uStack_80 = 0xd000000000000028;
    uStack_78 = 0x800000010f064a80;
    func_0x000107c614cc(param_1,auStack_90,auStack_a8);
    uVar2 = uStack_98;
    func_0x000107c60640(uStack_a0,uStack_98);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar2);
    uVar2 = uStack_78;
    func_0x0001007d6c6c(3,uStack_80,uStack_78,param_5,&PTR_DAT_1104cfba8);
    func_0x000107c614ac(param_1);
    func_0x000107c6142c(uVar2);
    uVar4 = 0;
  }
  func_0x000107c61428(param_3 + 0x10,auStack_60,0,0);
  lVar1 = param_3 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    func_0x000107c6157c(uVar3);
    func_0x000107c61574(lVar1);
    uVar2 = 0x112d518a8;
    lStack_70 = param_3;
    uStack_68 = uVar4;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    func_0x000100087bd4(&uStack_41,0x1021308d4,&uStack_80,uVar2);
    func_0x000107c61574(uVar3);
  }
  uStack_80 = CONCAT71(uStack_80._1_7_,uVar4);
  func_0x000100b60084(&uStack_80);
  return;
}



/* Entry: 10212ff9c; end: 10212ffa7;  */

void FUN_10212ff9c(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 uVar5;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  undefined1 uStack_68;
  undefined1 auStack_60 [31];
  undefined1 uStack_41;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  if (param_1 == 0) {
    if (2 < param_2) {
      param_2 = 3;
    }
    uVar5 = (undefined1)param_2;
  }
  else {
    uStack_80 = 0;
    uStack_78 = 0xe000000000000000;
    func_0x000107c614b0();
    func_0x000107c602fc(0x2a);
    func_0x000107c6142c(uStack_78);
    uStack_80 = 0xd000000000000028;
    uStack_78 = 0x800000010f064a80;
    func_0x000107c614cc(param_1,auStack_90,auStack_a8);
    uVar4 = uStack_98;
    func_0x000107c60640(uStack_a0,uStack_98);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar4);
    uVar4 = uStack_78;
    func_0x0001007d6c6c(3,uStack_80,uStack_78,uVar3,&PTR_DAT_1104cfba8);
    func_0x000107c614ac(param_1);
    func_0x000107c6142c(uVar4);
    uVar5 = 0;
  }
  func_0x000107c61428(lVar1 + 0x10,auStack_60,0,0);
  lVar2 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(lVar2);
    uVar3 = 0x112d518a8;
    lStack_70 = lVar1;
    uStack_68 = uVar5;
    func_0x0001000285a8(0x112d518a8,&UNK_10d918730);
    func_0x000100087bd4(&uStack_41,0x1021308d4,&uStack_80,uVar3);
    func_0x000107c61574(uVar4);
  }
  uStack_80 = CONCAT71(uStack_80._1_7_,uVar5);
  func_0x000100b60084(&uStack_80);
  return;
}



/* Entry: 10212ffa8; end: 10213001b;  */

void FUN_10212ffa8(undefined8 param_1,long param_2,undefined1 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x10) = param_3;
    func_0x000107c61574();
  }
  *(bool *)param_1 = param_2 == 0;
  return;
}



/* Entry: 10213001c; end: 10213007f;  */

void FUN_10213001c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102130080; end: 10213009b;  */

void FUN_102130080(long param_1,long param_2)

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



/* Entry: 10213009c; end: 1021304bf;  */

/* WARNING: Removing unreachable block (ram,0x0001021301c8) */

undefined *
FUN_10213009c(byte param_1,byte param_2,undefined1 param_3,undefined8 param_4,undefined8 param_5,
             long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 *unaff_x20;
  byte bVar16;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long alStack_78 [3];
  
  uVar15 = *unaff_x20;
  func_0x000100087bd4(0x1021304c0,&puStack_b0,PTR___sytN_11034f1b0 + 8);
  bVar5 = param_6 == 1;
  uVar1 = 0;
  if (!bVar5) {
    uVar1 = param_5;
  }
  lVar2 = 0;
  if (!bVar5) {
    lVar2 = param_6;
  }
  uVar4 = 0;
  if (!bVar5) {
    uVar4 = param_7;
  }
  bVar16 = 0;
  if (!bVar5) {
    bVar16 = (byte)param_4;
  }
  func_0x0001000d224c(alStack_78);
  if (alStack_78[0] == 0) {
    puVar9 = (undefined1 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    FUN_10212fde0();
    puVar10 = &UNK_1104cfc48;
    func_0x000107c613f8(&UNK_1104cfc48,puVar9,0,0);
    *puVar9 = 0;
    puVar11 = puVar10;
    func_0x00010488904c();
    func_0x000107c614ac(puVar10);
  }
  else {
    uVar6 = param_4;
    func_0x0001021304dc(param_4,param_5,param_6,param_7);
    FUN_10212fb18();
    puStack_b0 = (undefined *)
                 (CONCAT53(puStack_b0._3_5_,CONCAT12(bVar16,CONCAT11(param_2,param_1))) &
                 0xffffffffff010101);
    uVar7 = uVar6;
    uStack_a8 = uVar1;
    FUN_1021304f0();
    puVar10 = &UNK_1104cfdf8;
    ppuVar8 = &puStack_b0;
    func_0x000107c5eb4c(ppuVar8,&UNK_1104cfdf8,uVar7);
    func_0x000107c61574(uVar6);
    puStack_b0 = (undefined *)0x0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c602fc(0x22);
    func_0x000107c6142c(uStack_a8);
    puStack_b0 = (undefined *)0xd000000000000020;
    uStack_a8 = 0x800000010f064a00;
    uVar6 = 0x2d;
    if (lVar2 != 0) {
      uVar6 = uVar1;
    }
    lVar3 = -0x1f00000000000000;
    if (lVar2 != 0) {
      lVar3 = lVar2;
    }
    func_0x0001021304dc(param_4,param_5,param_6,param_7);
    func_0x000107c5fb78(uVar6,lVar3);
    func_0x000107c6142c(lVar3);
    uVar6 = uStack_a8;
    func_0x0001007d6c6c(1,puStack_b0,uStack_a8,uVar15,&PTR_DAT_1104cfba8);
    func_0x000107c6142c(uVar6);
    ppuVar12 = ppuVar8;
    func_0x000107c5ee20(ppuVar8,puVar10);
    ppuVar13 = ppuVar12;
    FUN_1021310f4();
    puVar11 = &UNK_1104cfb50;
    func_0x000107c613fc(&UNK_1104cfb50,0x40,7);
    puVar11[0x10] = param_1 & 1;
    puVar11[0x11] = param_2 & 1;
    puVar11[0x12] = bVar16 & 1;
    *(undefined8 *)(puVar11 + 0x18) = uVar1;
    *(long *)(puVar11 + 0x20) = lVar2;
    *(undefined8 *)(puVar11 + 0x28) = uVar4;
    puVar11[0x30] = bVar5;
    puVar11[0x31] = param_3;
    *(undefined8 *)(puVar11 + 0x38) = uVar15;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    ppuVar14 = &puStack_b0;
    func_0x000107c60bc4(ppuVar14);
    func_0x000107c61574(puVar11);
    func_0x000107c5c2c0(alStack_78[0]);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61170(ppuVar12);
    func_0x000107c61170(ppuVar13);
    puVar11 = (undefined *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000104888f7c();
    func_0x00010006c090(ppuVar8,puVar10);
    func_0x000107c615e8(alStack_78[0]);
  }
  return puVar11;
}



/* Entry: 1021304c0; end: 1021304ef;  */

void FUN_1021304c0(void)

{
  undefined1 uVar1;
  long unaff_x20;
  
  uVar1 = 1;
  if (*(char *)(unaff_x20 + 0x18) == '\0') {
    uVar1 = 2;
  }
  *(undefined1 *)(*(long *)(unaff_x20 + 0x10) + 0x10) = uVar1;
  return;
}



/* Entry: 1021304f0; end: 10213052f;  */

void FUN_1021304f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5ad50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60938;
  func_0x000107c61520(&UNK_10da60938,&UNK_1104cfdf8);
  puRam0000000112e5ad50 = puVar1;
  return;
}



/* Entry: 102130530; end: 102130543;  */

void FUN_102130530(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102130544; end: 1021306af;  */

void FUN_102130544(long param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_1 == 0) {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c602fc(0x23);
    uStack_40 = uStack_70;
    uStack_38 = uStack_68;
    func_0x000107c5fb78(0xd000000000000021,0x800000010f064a30);
    uStack_68 = param_2[1];
    uStack_70 = *param_2;
    uStack_58 = param_2[3];
    uStack_60 = param_2[2];
    uStack_50 = *(undefined2 *)(param_2 + 4);
    func_0x000107c603d0(&uStack_70,&uStack_40,&UNK_1104cfdf8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    uVar1 = uStack_38;
    func_0x0001007d6c6c(1,uStack_40,uStack_38,param_3,&PTR_DAT_1104cfba8);
    func_0x000107c6142c(uVar1);
  }
  else {
    uStack_70 = 0;
    uStack_68 = 0xe000000000000000;
    func_0x000107c614b0();
    func_0x000107c602fc(0x1f);
    func_0x000107c6142c(uStack_68);
    uStack_70 = 0xd00000000000001d;
    uStack_68 = 0x800000010f064a60;
    func_0x000107c614cc(param_1,auStack_78,auStack_90);
    uVar1 = uStack_80;
    func_0x000107c60640(uStack_88,uStack_80);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar1);
    uVar1 = uStack_68;
    func_0x0001007d6c6c(3,uStack_70,uStack_68,param_3,&PTR_DAT_1104cfba8);
    func_0x000107c6142c(uVar1);
    func_0x000107c614ac(param_1);
  }
  return;
}



/* Entry: 1021306b0; end: 1021306f3;  */

void FUN_1021306b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021306f4; end: 102130893;  */

/* WARNING: Removing unreachable block (ram,0x0001021301c8) */

undefined *
FUN_1021306f4(byte param_1,byte param_2,undefined1 param_3,undefined8 param_4,undefined8 param_5,
             long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  undefined8 *unaff_x20;
  byte bVar16;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long alStack_78 [3];
  
  uVar15 = *unaff_x20;
  func_0x000100087bd4(0x1021304c0,&puStack_b0,PTR___sytN_11034f1b0 + 8);
  bVar5 = param_6 == 1;
  uVar1 = 0;
  if (!bVar5) {
    uVar1 = param_5;
  }
  lVar2 = 0;
  if (!bVar5) {
    lVar2 = param_6;
  }
  uVar4 = 0;
  if (!bVar5) {
    uVar4 = param_7;
  }
  bVar16 = 0;
  if (!bVar5) {
    bVar16 = (byte)param_4;
  }
  func_0x0001000d224c(alStack_78);
  if (alStack_78[0] == 0) {
    puVar9 = (undefined1 *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    FUN_10212fde0();
    puVar10 = &UNK_1104cfc48;
    func_0x000107c613f8(&UNK_1104cfc48,puVar9,0,0);
    *puVar9 = 0;
    puVar11 = puVar10;
    func_0x00010488904c();
    func_0x000107c614ac(puVar10);
  }
  else {
    uVar6 = param_4;
    func_0x0001021304dc(param_4,param_5,param_6,param_7);
    FUN_10212fb18();
    puStack_b0 = (undefined *)
                 (CONCAT53(puStack_b0._3_5_,CONCAT12(bVar16,CONCAT11(param_2,param_1))) &
                 0xffffffffff010101);
    uVar7 = uVar6;
    uStack_a8 = uVar1;
    FUN_1021304f0();
    puVar10 = &UNK_1104cfdf8;
    ppuVar8 = &puStack_b0;
    func_0x000107c5eb4c(ppuVar8,&UNK_1104cfdf8,uVar7);
    func_0x000107c61574(uVar6);
    puStack_b0 = (undefined *)0x0;
    uStack_a8 = 0xe000000000000000;
    func_0x000107c602fc(0x22);
    func_0x000107c6142c(uStack_a8);
    puStack_b0 = (undefined *)0xd000000000000020;
    uStack_a8 = 0x800000010f064a00;
    uVar6 = 0x2d;
    if (lVar2 != 0) {
      uVar6 = uVar1;
    }
    lVar3 = -0x1f00000000000000;
    if (lVar2 != 0) {
      lVar3 = lVar2;
    }
    func_0x0001021304dc(param_4,param_5,param_6,param_7);
    func_0x000107c5fb78(uVar6,lVar3);
    func_0x000107c6142c(lVar3);
    uVar6 = uStack_a8;
    func_0x0001007d6c6c(1,puStack_b0,uStack_a8,uVar15,&PTR_DAT_1104cfba8);
    func_0x000107c6142c(uVar6);
    ppuVar12 = ppuVar8;
    func_0x000107c5ee20(ppuVar8,puVar10);
    ppuVar13 = ppuVar12;
    FUN_1021310f4();
    puVar11 = &UNK_1104cfb50;
    func_0x000107c613fc(&UNK_1104cfb50,0x40,7);
    puVar11[0x10] = param_1 & 1;
    puVar11[0x11] = param_2 & 1;
    puVar11[0x12] = bVar16 & 1;
    *(undefined8 *)(puVar11 + 0x18) = uVar1;
    *(long *)(puVar11 + 0x20) = lVar2;
    *(undefined8 *)(puVar11 + 0x28) = uVar4;
    puVar11[0x30] = bVar5;
    puVar11[0x31] = param_3;
    *(undefined8 *)(puVar11 + 0x38) = uVar15;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    ppuVar14 = &puStack_b0;
    func_0x000107c60bc4(ppuVar14);
    func_0x000107c61574(puVar11);
    func_0x000107c5c2c0(alStack_78[0]);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c61170(ppuVar12);
    func_0x000107c61170(ppuVar13);
    puVar11 = (undefined *)0x112d51a30;
    func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
    func_0x000104888f7c();
    func_0x00010006c090(ppuVar8,puVar10);
    func_0x000107c615e8(alStack_78[0]);
  }
  return puVar11;
}



/* Entry: 102130894; end: 1021308ef;  */

void FUN_102130894(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5ae20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60850;
  func_0x000107c61520(&UNK_10da60850,&UNK_1104cfc48);
  puRam0000000112e5ae20 = puVar1;
  return;
}



/* Entry: 1021308f0; end: 1021308f7;  */

void FUN_1021308f0(long param_1,long param_2)

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



/* Entry: 1021308f8; end: 10213098f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021308f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e5ae28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e5ae30) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e5ae38) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e5ae40) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e5ae48) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102130990; end: 102130a07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102130990(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e5ae28;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e5ae28);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000107c5eb24();
    func_0x000107c613fc();
    func_0x000107c5eb20();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar3 = 0;
  }
  func_0x000107c6157c(lVar3);
  return lVar2;
}



/* Entry: 102130a08; end: 102130c37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102130a08(double param_1,undefined1 *param_2,undefined8 param_3,long param_4,long param_5,
                  code *param_6)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_120 [8];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined1 uStack_f7;
  undefined1 uStack_f6;
  undefined5 uStack_f5;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  uint7 uStack_cf;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  
  func_0x000107c614f0();
  uStack_f7 = param_2[0x21];
  if (*(long *)(param_5 + _DAT_11307e728) != 0) {
    uStack_f7 = 5;
  }
  uVar6 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar7 = *(undefined8 *)(param_2 + 0x18);
  uVar4 = param_2[0x20];
  FUN_102131918(param_2,&uStack_c0);
  func_0x000107c6071c();
  param_1 = param_1 * 1000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102130c30);
    (*pcVar5)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102130c34);
    (*pcVar5)();
  }
  if (param_1 < 9.223372036854776e+18) {
    lStack_c8 = (long)param_1;
    uStack_d0 = 0;
    uStack_98 = CONCAT71(uStack_df,uVar4);
    lStack_88 = (ulong)uStack_cf << 8;
    uStack_b0 = CONCAT53(uStack_f5,CONCAT12(uVar3,CONCAT11(uStack_f7,uVar2)));
    uStack_108 = uVar6;
    uStack_100 = uVar1;
    uStack_f8 = uVar2;
    uStack_f6 = uVar3;
    lStack_f0 = param_4;
    uStack_e8 = uVar7;
    uStack_e0 = uVar4;
    uStack_d8 = param_3;
    uStack_c0 = uVar6;
    uStack_b8 = uVar1;
    lStack_a8 = param_4;
    uStack_a0 = uVar7;
    uStack_90 = param_3;
    lStack_80 = lStack_c8;
    func_0x000107c614b0(param_4);
    FUN_102130dfc(&uStack_c0);
    if (param_4 == 0) {
      (*param_6)(0,0);
      func_0x0001021319b8(&uStack_108);
    }
    else {
      uStack_118 = 0;
      uStack_110 = 0xe000000000000000;
      func_0x000107c614b0(param_4);
      func_0x000107c602fc(0x21);
      func_0x000107c6142c(uStack_110);
      uStack_118 = 0xd00000000000001f;
      uStack_110 = 0x800000010f064ba0;
      func_0x000107c614cc(param_4,auStack_120,auStack_138);
      uVar6 = uStack_128;
      func_0x000107c60640(uStack_130,uStack_128);
      func_0x000107c5fb78();
      func_0x000107c6142c(uVar6);
      uVar6 = uStack_110;
      func_0x0001007d6c6c(3,uStack_118,uStack_110,unaff_x20,&PTR_DAT_1104cfcc8);
      func_0x000107c6142c(uVar6);
      (*param_6)(1,param_4);
      func_0x0001021319b8(&uStack_108);
      func_0x000107c614ac(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102130c38);
  (*pcVar5)();
}



/* Entry: 102130c38; end: 102130ce7;  */

void FUN_102130c38(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    (*param_3)(1,0);
  }
  else {
    FUN_102130a08(param_5,param_6,param_1,param_7,param_3,param_4);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102130ce8; end: 102130dfb; -[_TtC27LensLeaderboardServicesImpl23GlobalOptInJobProcessor processJobWithJobConfig:input:context:onComplete:] */

void FUN_102130ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    param_2 = 0xf000000000000000;
  }
  else {
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_1);
    lVar1 = param_4;
    func_0x000107c61174(param_4);
    func_0x000107c5ee30(param_4);
    func_0x000107c61170(lVar1);
  }
  puVar2 = &UNK_1104cfcf8;
  func_0x000107c613fc(&UNK_1104cfcf8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_6;
  lVar1 = param_4;
  FUN_10213127c(param_4,param_2,param_5,FUN_1021318d0,puVar2);
  func_0x000107c61574(puVar2);
  func_0x0001000b44c0(param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 102130dfc; end: 102131007;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102130dfc(undefined8 *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined8 unaff_x20;
  undefined8 uVar4;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c614f0();
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x34);
  func_0x000107c5fb78(0x644974696d627573,0xea0000000000203a);
  lVar3 = param_1[1];
  if (lVar3 == 0) {
    lVar3 = -0x1f00000000000000;
    uVar4 = 0x2d;
  }
  else {
    uVar4 = *param_1;
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar4,lVar3);
  func_0x000107c6142c(lVar3);
  func_0x000107c5fb78(0x646574704f736920,0xec000000203a6e49);
  bVar2 = (*(byte *)(param_1 + 2) & 1) == 0;
  uVar4 = 0x65757274;
  if (bVar2) {
    uVar4 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c5fb78(0x646f6874656d202c,0xea0000000000203a);
  uStack_71 = *(undefined1 *)((long)param_1 + 0x11);
  func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_1106ba710,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x6563637573202c20,0xec000000203a7373);
  uVar4 = 0x65757274;
  if (param_1[3] != 0) {
    uVar4 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (param_1[3] != 0) {
    uVar1 = 0xe500000000000000;
  }
  func_0x000107c5fb78(uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  uVar4 = uStack_68;
  func_0x0001007d6c6c(1,uStack_70,uStack_68,unaff_x20,&PTR_DAT_1104cfcc8);
  func_0x000107c6142c(uVar4);
  func_0x0001000d224c(&uStack_70);
  uVar4 = uStack_70;
  FUN_102143024(param_1);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102131008; end: 102131067; -[_TtC27LensLeaderboardServicesImpl23GlobalOptInJobProcessor init] */

void FUN_102131008(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensLeaderboardServicesImpl.GlobalOptInJobProcessor",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102131034);
  (*pcVar1)();
}



/* Entry: 102131068; end: 1021310cf; -[_TtC27LensLeaderboardServicesImpl23GlobalOptInJobProcessor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021310a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021310a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102131068(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5ae30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e5ae40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e5ae38));
  return;
}



/* Entry: 1021310d0; end: 1021310f3;  */

void FUN_1021310d0(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x0001021310e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 1021310f4; end: 10213127b;  */

undefined * FUN_1021310f4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126b7228;
  func_0x000107c610f8(PTR_PTR_1126b7228);
  func_0x000107c453e4();
  uVar2 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f064930);
  func_0x000107c5597c(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c55960(puVar1);
  func_0x000107c55968(puVar1);
  func_0x000107c54734(puVar1);
  puVar3 = PTR_PTR_1126b7240;
  func_0x000107c610f8(PTR_PTR_1126b7240);
  func_0x000107c453e4();
  func_0x000107c56a40();
  puVar4 = PTR_PTR_1126ae740;
  func_0x000107c610f8(PTR_PTR_1126ae740);
  func_0x000107c453e4();
  func_0x000107c3d810();
  func_0x000107c3d810(puVar4);
  func_0x000107c527c4(puVar3);
  func_0x000107c5277c(puVar3);
  func_0x000107c55958(puVar1);
  puVar5 = PTR_PTR_1126b7230;
  func_0x000107c610f8(PTR_PTR_1126b7230);
  func_0x000107c453e4();
  func_0x000107c57ed0();
  func_0x000107c57ecc(puVar5);
  func_0x000107c56358(puVar5);
  func_0x000107c57ec0(puVar1);
  puVar6 = PTR_PTR_1126b7238;
  func_0x000107c610f8(PTR_PTR_1126b7238);
  func_0x000107c453e4();
  func_0x000107c57f50();
  func_0x000107c55974(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  return puVar1;
}



/* Entry: 10213127c; end: 1021318af;  */

/* WARNING: Removing unreachable block (ram,0x000102131364) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10213127c(undefined8 param_1,ulong param_2,long param_3,code *param_4,undefined8 param_5)

{
  undefined1 uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  long unaff_x20;
  double dVar17;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined1 uStack_120;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined5 uStack_11d;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  long lStack_100;
  undefined1 uStack_f8;
  uint7 uStack_f7;
  long lStack_f0;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined2 uStack_c0;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lVar8 = unaff_x20;
  func_0x000107c614f0();
  lVar9 = *(long *)(unaff_x20 + _DAT_112e5ae30);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar9 != 0) {
    lVar10 = *(long *)(unaff_x20 + _DAT_112e5ae40);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar10 != 0) {
      lVar11 = lVar10;
      func_0x000107c51f40();
      func_0x000107c61180();
      func_0x000107c615e8(lVar10);
      if (param_2 >> 0x3c < 0xf) {
        uVar12 = param_1;
        func_0x00010006c00c(param_1,param_2);
        FUN_102130990();
        uVar13 = uVar12;
        FUN_1021318d8();
        func_0x000107c5eb1c(&puStack_b0,&UNK_1104cfdf8,param_1,param_2,&UNK_1104cfdf8,uVar13);
        func_0x000107c61574(uVar12);
        puStack_d8 = puStack_a8;
        uStack_e0 = puStack_b0;
        puVar14 = uStack_e0;
        puStack_c8 = puStack_98;
        puStack_d0 = puStack_a0;
        uStack_c0 = pcStack_90._0_2_;
        uStack_e0._0_1_ = (byte)puStack_b0;
        bVar3 = (byte)uStack_e0;
        uStack_e0 = puVar14;
        func_0x000107c6071c();
        dVar17 = (double)puStack_b0 * 1000000.0;
        if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10213189c);
          (*pcVar7)();
        }
        if (dVar17 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1021318a0);
          (*pcVar7)();
        }
        if (9.223372036854776e+18 <= dVar17) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1021318a4);
          (*pcVar7)();
        }
        lVar10 = (long)dVar17;
        puStack_b0 = (undefined *)0x0;
        puStack_a8 = (undefined *)0xe000000000000000;
        func_0x000107c602fc(0x47);
        puStack_130 = puStack_b0;
        puStack_128 = puStack_a8;
        func_0x000107c5fb78(0xd000000000000026,0x800000010f064b30);
        puVar5 = puStack_d0;
        puVar15 = puStack_d8;
        puVar14 = (undefined *)0x2d;
        if (puStack_d0 != (undefined *)0x0) {
          puVar14 = puStack_d8;
        }
        puVar2 = (undefined *)0xe100000000000000;
        if (puStack_d0 != (undefined *)0x0) {
          puVar2 = puStack_d0;
        }
        FUN_102131918(&uStack_e0,&puStack_b0);
        func_0x000107c5fb78(puVar14,puVar2);
        func_0x000107c6142c(puVar2);
        func_0x000107c5fb78(0x6574704f7369202c,0xed0000203a6e4964);
        uVar12 = 0x65757274;
        if (bVar3 == 0) {
          uVar12 = 0x65736c6166;
        }
        uVar13 = 0xe400000000000000;
        if (bVar3 == 0) {
          uVar13 = 0xe500000000000000;
        }
        func_0x000107c5fb78(uVar12,uVar13);
        func_0x000107c6142c(uVar13);
        func_0x000107c5fb78(0x656d206874697720,0xee00203a646f6874);
        uVar1 = uStack_c0._1_1_;
        puStack_b0 = (undefined *)CONCAT71(puStack_b0._1_7_,uStack_c0._1_1_);
        func_0x000107c603d0(&puStack_b0,&puStack_130,&UNK_1106ba710,
                            PTR___ss26DefaultStringInterpolationVN_11034ec00,
                            PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
        puVar14 = puStack_128;
        func_0x0001007d6c6c(1,puStack_130,puStack_128,lVar8,&PTR_DAT_1104cfcc8);
        func_0x000107c6142c(puVar14);
        if (((bVar3 | uStack_e0._2_1_ ^ 0xff) & 1) == 0) {
          func_0x0001007d6c6c(1,0xd000000000000036,0x800000010f064b60,lVar8,&PTR_DAT_1104cfcc8);
          puStack_110 = puStack_c8;
          if (*(long *)(param_3 + _DAT_11307e728) != 0) {
            uVar1 = 5;
          }
          uVar4 = uStack_e0._1_1_;
          uVar6 = (undefined1)uStack_c0;
          FUN_102131918(&uStack_e0,&puStack_b0);
          func_0x000107c6071c();
          dVar17 = dVar17 * 1000000.0;
          if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1021318a8);
            (*pcVar7)();
          }
          if (dVar17 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1021318ac);
            (*pcVar7)();
          }
          if (dVar17 < 9.223372036854776e+18) {
            lStack_f0 = (long)dVar17;
            puStack_130 = puVar15;
            puStack_128 = puVar5;
            uStack_120 = 0;
            uStack_11e = uVar4;
            uStack_118 = 0;
            uStack_108 = uVar6;
            uStack_f8 = 0;
            puStack_88 = (undefined *)CONCAT71(uStack_107,uVar6);
            lStack_78 = (ulong)uStack_f7 << 8;
            pcStack_90 = (code *)puStack_110;
            puStack_a0 = (undefined *)((ulong)CONCAT52(uStack_11d,CONCAT11(uVar4,uVar1)) << 8);
            puStack_a8 = puVar5;
            puStack_b0 = puVar15;
            puStack_98 = (undefined *)0x0;
            uStack_11f = uVar1;
            lStack_100 = lVar10;
            lStack_80 = lVar10;
            lStack_70 = lStack_f0;
            FUN_102130dfc(&puStack_b0);
            (*param_4)(0,0);
            func_0x0001000b44c0(param_1,param_2);
            func_0x000107c615e8(lVar9);
            func_0x000107c615e8(lVar11);
            FUN_102131984(&uStack_e0);
            func_0x0001021319b8(&puStack_130);
            return 0;
          }
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1021318b0);
          (*pcVar7)();
        }
        lVar8 = lVar11;
        func_0x000107c614f0(lVar11);
        func_0x000100bcb214();
        puVar14 = &UNK_1104cfd20;
        func_0x000107c613fc(&UNK_1104cfd20,0x18,7);
        func_0x000107c61614(puVar14 + 0x10,unaff_x20);
        puVar15 = &UNK_1104cfd48;
        func_0x000107c613fc(&UNK_1104cfd48,0x60,7);
        *(undefined **)(puVar15 + 0x30) = puStack_d8;
        *(undefined **)(puVar15 + 0x28) = uStack_e0;
        *(undefined **)(puVar15 + 0x10) = puVar14;
        *(code **)(puVar15 + 0x18) = param_4;
        *(undefined8 *)(puVar15 + 0x20) = param_5;
        *(undefined **)(puVar15 + 0x40) = puStack_c8;
        *(undefined **)(puVar15 + 0x38) = puStack_d0;
        *(undefined2 *)(puVar15 + 0x48) = uStack_c0;
        *(long *)(puVar15 + 0x50) = lVar10;
        *(long *)(puVar15 + 0x58) = param_3;
        pcStack_90 = FUN_102131954;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_a8 = (undefined *)0x42000000;
        puStack_a0 = &UNK_100ff4e10;
        puStack_98 = &UNK_1104cfd60;
        ppuVar16 = &puStack_b0;
        puStack_88 = puVar15;
        func_0x000107c60bc4(ppuVar16);
        puVar14 = puStack_88;
        func_0x000107c6157c(param_5);
        func_0x000107c61174(param_3);
        func_0x000107c61574(puVar14);
        func_0x000107c55b64(lVar9);
        func_0x000107c60bd0(ppuVar16);
        func_0x000107c61170(lVar8);
        func_0x0001000b44c0(param_1,param_2);
      }
      else {
        func_0x0001007d6c6c(3,0xd00000000000001d,0x800000010f064b10,lVar8,&PTR_DAT_1104cfcc8);
        (*param_4)(2,0);
      }
      func_0x000107c615e8(lVar9);
      func_0x000107c615e8(lVar11);
      return 0;
    }
    func_0x000107c615e8(lVar9);
  }
  func_0x0001007d6c6c(3,0xd000000000000014,0x800000010f064af0,lVar8,&PTR_DAT_1104cfcc8);
  (*param_4)(2,0);
  return 0;
}



/* Entry: 1021318b0; end: 1021318cf;  */

void FUN_1021318b0(void)

{
  func_0x000107c61168(&PTR_PTR_112820390);
  return;
}



/* Entry: 1021318d0; end: 1021318d7;  */

void FUN_1021318d0(undefined8 param_1,long param_2)

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



/* Entry: 1021318d8; end: 102131917;  */

void FUN_1021318d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5ae78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60910;
  func_0x000107c61520(&UNK_10da60910,&UNK_1104cfdf8);
  puRam0000000112e5ae78 = puVar1;
  return;
}



/* Entry: 102131918; end: 102131953;  */

undefined8 FUN_102131918(undefined8 param_1,undefined8 param_2)

{
  FUN_102133420(param_2,param_1);
  return param_2;
}



/* Entry: 102131954; end: 102131983;  */

void FUN_102131954(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
  func_0x000107c61428(lVar4 + 0x10,auStack_68,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 == 0) {
    (*pcVar2)(1,0);
  }
  else {
    FUN_102130a08(unaff_x20 + 0x28,uVar1,param_1,uVar3,pcVar2,uVar5);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 102131984; end: 1021319eb;  */

undefined8 FUN_102131984(undefined8 param_1)

{
  FUN_102133418();
  return param_1;
}



/* Entry: 1021319ec; end: 102131abf;  */

undefined1  [16] FUN_1021319ec(void)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar2 = *unaff_x20;
  uVar7 = 0x800000010f064c00;
  uVar4 = 0xd000000000000016;
  if (bVar2 != 4) {
    uVar7 = 0xe600000000000000;
    uVar4 = 0x646f6874656d;
  }
  uVar1 = 0xed0000644974696d;
  uVar5 = 0x62755365726f6373;
  if (bVar2 != 3) {
    uVar1 = uVar7;
    uVar5 = uVar4;
  }
  pcVar3 = "Global optIn job failed error: ";
  uVar4 = 0xd000000000000013;
  if (bVar2 != 1) {
    pcVar3 = "isInitialSubmission";
    uVar4 = 0xd000000000000017;
  }
  uVar7 = 0xe90000000000006e;
  uVar6 = 0x49646574704f7369;
  if (bVar2 != 0) {
    uVar7 = (ulong)pcVar3 | 0x8000000000000000;
    uVar6 = uVar4;
  }
  if (bVar2 < 3) {
    uVar1 = uVar7;
    uVar5 = uVar6;
  }
  auVar8._8_8_ = uVar1;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Entry: 102131ac0; end: 102131ae3;  */

void FUN_102131ac0(undefined1 *param_1,undefined1 param_2)

{
  FUN_10213242c();
  *param_1 = param_2;
  return;
}



/* Entry: 102131ae4; end: 102131afb;  */

undefined1  [16] FUN_102131ae4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 102131afc; end: 102131b4b;  */

void FUN_102131afc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102131d34();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 102131b4c; end: 102131d33;  */

/* WARNING: Removing unreachable block (ram,0x000102131cc8) */

void FUN_102131b4c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [9];
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112e5ae80;
  func_0x0001000285a8(0x112e5ae80,&UNK_10da60900);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  FUN_102131d34();
  func_0x000107c606ec(puVar4,&UNK_1104cffe0,&UNK_1104cffe0,param_1,uVar3,uVar1);
  uStack_51 = 0;
  func_0x000107c60540(*unaff_x20,&uStack_51,lVar2);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c60540(unaff_x20[1],&uStack_52,lVar2);
    uStack_53 = 2;
    func_0x000107c60524(unaff_x20[2],&uStack_53,lVar2);
    uStack_54 = 3;
    func_0x000107c60520(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),&uStack_54,
                        lVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_55 = 4;
    func_0x000107c60538(uVar3,unaff_x20[0x20],&uStack_55,lVar2);
    uStack_56 = unaff_x20[0x21];
    uStack_57 = 5;
    func_0x000102131d74();
    func_0x000107c60554(&uStack_56,&uStack_57,lVar2,&UNK_1106ba710,uVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  return;
}



/* Entry: 102131d34; end: 102131db3;  */

void FUN_102131d34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5ae88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da60bb0;
  func_0x000107c61520(&UNK_10da60bb0,&UNK_1104cffe0);
  puRam0000000112e5ae88 = puVar1;
  return;
}



/* Entry: 102131db4; end: 102131f2b;  */

undefined1  [16] FUN_102131db4(ulong param_1,undefined8 param_2,long param_3,byte *param_4)

{
  undefined8 uVar1;
  byte bVar2;
  byte *pbVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  long extraout_x8;
  byte *unaff_x19;
  byte *unaff_x20;
  byte *pbVar10;
  long unaff_x21;
  long unaff_x22;
  byte *unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined2 in_stack_00000028;
  undefined1 auStack_70 [80];
  
code_r0x000102131db4:
  pbVar8 = (byte *)0xed0000644974696d;
  pbVar3 = (byte *)0x62755365726f6373;
  pbVar9 = (byte *)(param_1 & 0xff);
  pbVar10 = unaff_x20;
  switch(pbVar9) {
  default:
    pbVar8 = (byte *)0x7261;
  case (byte *)0x30:
  case (byte *)0x3e:
  case (byte *)0x58:
  case (byte *)0x66:
  case (byte *)0x80:
  case (byte *)0x8e:
  case (byte *)0xa8:
  case (byte *)0xb6:
    pbVar8 = (byte *)((ulong)pbVar8 & 0xffffffff0000ffff | 0x49640000);
    goto code_r0x000102131dfc;
  case (byte *)0x2:
    auVar16._8_8_ = 0xe600000000000000;
    auVar16._0_8_ = 0x6449736e656c;
    return auVar16;
  case (byte *)0x3:
  case (byte *)0x45:
  case (byte *)0x6d:
    pbVar8 = (byte *)0xe500000000000000;
  case (byte *)0x94:
  case (byte *)0x95:
  case (byte *)0xbd:
    auVar17._8_8_ = pbVar8;
    auVar17._0_8_ = 0x6449707061;
    return auVar17;
  case (byte *)0x4:
    pbVar8 = (byte *)0x800000010f064c20;
    pbVar3 = (byte *)0x12;
  case (byte *)0x39:
  case (byte *)0x61:
    auVar13._0_8_ = (ulong)pbVar3 & 0xffffffffffff | 0xd000000000000000;
    auVar13._8_8_ = pbVar8;
    return auVar13;
  case (byte *)0x5:
  case (byte *)0x88:
    uVar4 = 0x70616e73;
    goto code_r0x000102131ee8;
  case (byte *)0x6:
    uVar4 = 0x736e656c;
code_r0x000102131ee8:
    auVar19._0_8_ = uVar4 | 0x72756f5300000000;
    auVar19._8_8_ = 0xea00000000006563;
    return auVar19;
  case (byte *)0x7:
    auVar18._8_8_ = 0xeb00000000737574;
    auVar18._0_8_ = 0x6174536e4974706f;
    return auVar18;
  case (byte *)0x8:
  case (byte *)0xc9:
  case (byte *)0xce:
  case (byte *)0xee:
    pbVar8 = (byte *)0xe500000000000000;
  case (byte *)0xcb:
  case (byte *)0xeb:
    pbVar3 = (byte *)0x6373;
code_r0x000102131f20:
    auVar21._0_8_ = (ulong)pbVar3 & 0xffff00000000ffff | 0x65726f0000;
    auVar21._8_8_ = pbVar8;
    return auVar21;
  case (byte *)0x9:
  case (byte *)0x60:
    auVar15._8_8_ = 0xe800000000000000;
    auVar15._0_8_ = 0x676e69726564726f;
    return auVar15;
  case (byte *)0xa:
    pbVar8 = (byte *)0x66;
  case (byte *)0xf4:
    pbVar8 = (byte *)((ulong)pbVar8 & 0xffffffffffff | 0xe900000000000000);
    pbVar3 = (byte *)0x4465726f6373;
code_r0x000102131f10:
    auVar20._0_8_ = (ulong)pbVar3 & 0xffffffffffff | 0x6669000000000000;
    auVar20._8_8_ = pbVar8;
    return auVar20;
  case (byte *)0xb:
    pbVar8 = (byte *)0xec00000065637275;
  case (byte *)0x11:
  case (byte *)0x14:
  case (byte *)0x19:
  case (byte *)0x1c:
    pbVar3 = (byte *)0x657461647075;
code_r0x000102131e30:
    auVar12._0_8_ = (ulong)pbVar3 & 0xffffffffffff | 0x6f53000000000000;
    auVar12._8_8_ = pbVar8;
    return auVar12;
  case (byte *)0xc:
    pbVar8 = (byte *)0x736e654c;
  case (byte *)0x89:
  case (byte *)0xb1:
    pbVar8 = (byte *)((ulong)pbVar8 & 0xffffffffffff | 0xec00000000000000);
    pbVar3 = (byte *)0x6f69647574537369;
  case (byte *)0x0:
    auVar14._8_8_ = pbVar8;
    auVar14._0_8_ = pbVar3;
    return auVar14;
  case (byte *)0x10:
    goto code_r0x0001021321ac;
  case (byte *)0x12:
  case (byte *)0x1a:
    goto code_r0x000102132194;
  case (byte *)0x18:
  case (byte *)0x3b:
  case (byte *)0x63:
  case (byte *)0x8b:
  case (byte *)0xb3:
    goto code_r0x0001021321c4;
  case (byte *)0x20:
    goto code_r0x000102132178;
  case (byte *)0x21:
  case (byte *)0x35:
  case (byte *)0x49:
  case (byte *)0x5d:
  case (byte *)0x71:
  case (byte *)0x85:
  case (byte *)0x99:
  case (byte *)0xad:
    goto code_r0x0001021321cc;
  case (byte *)0x22:
  case (byte *)0x36:
  case (byte *)0x4a:
  case (byte *)0x5e:
  case (byte *)0x72:
  case (byte *)0x86:
  case (byte *)0x9a:
  case (byte *)0xae:
    goto code_r0x00010213208c;
  case (byte *)0x23:
  case (byte *)0x37:
  case (byte *)0x4b:
  case (byte *)0x5f:
  case (byte *)0x73:
  case (byte *)0x87:
  case (byte *)0x9b:
  case (byte *)0xaf:
    goto code_r0x000102131dfc;
  case (byte *)0x24:
    goto code_r0x000102132154;
  case (byte *)0x25:
  case (byte *)0x4d:
  case (byte *)0x75:
  case (byte *)0x9d:
    goto code_r0x000102131e30;
  case (byte *)0x26:
  case (byte *)0x4e:
  case (byte *)0x76:
  case (byte *)0x9e:
    goto code_r0x000102132108;
  case (byte *)0x2e:
  case (byte *)0x56:
  case (byte *)0x7e:
  case (byte *)0xa6:
    goto code_r0x000102131e00;
  case (byte *)0x34:
    goto code_r0x000102132148;
  case (byte *)0x38:
    goto code_r0x000102131e04;
  case (byte *)0x3a:
  case (byte *)0x62:
  case (byte *)0x8a:
  case (byte *)0xac:
  case (byte *)0xb2:
  case (byte *)0xe8:
    goto code_r0x000102131fa8;
  case (byte *)0x44:
  case (byte *)0x9c:
    goto code_r0x000102131fe4;
  case (byte *)0x47:
  case (byte *)0x6f:
  case (byte *)0x97:
  case (byte *)0xbf:
    goto code_r0x000102131e08;
  case (byte *)0x48:
    goto code_r0x000102132118;
  case (byte *)0x4c:
    goto code_r0x0001021320b4;
  case (byte *)0x5c:
    goto code_r0x0001021320e8;
  case (byte *)0x6c:
    goto code_r0x000102132144;
  case (byte *)0x70:
    auVar26._8_8_ = 1;
    auVar26._0_8_ = 0x62755365726f6373;
    return auVar26;
  case (byte *)0x74:
    func_0x000102132898();
  case (byte *)0x46:
  case (byte *)0x6e:
  case (byte *)0x96:
  case (byte *)0xbe:
    pbVar8 = pbVar3;
code_r0x00010213208c:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss9CodingKeyPsE11descriptionSSvg_11034f120)();
    auVar28._8_8_ = pbVar8;
    auVar28._0_8_ = unaff_x19;
    return auVar28;
  case (byte *)0x84:
    break;
  case (byte *)0x98:
  case (byte *)0xfc:
    goto code_r0x000102131fd8;
  case (byte *)0xbc:
    goto code_r0x000102132004;
  case (byte *)0xc0:
    goto code_r0x000102131f10;
  case (byte *)0xc1:
  case (byte *)0xc5:
    goto code_r0x000102131fa4;
  case (byte *)0xc2:
  case (byte *)0xcc:
  case (byte *)0xe2:
  case (byte *)0xec:
  case (byte *)0xf5:
    goto code_r0x000102131fb0;
  case (byte *)0xc4:
    FUN_102131b4c();
  case (byte *)0xc3:
  case (byte *)0xcd:
  case (byte *)0xe7:
  case (byte *)0xed:
code_r0x000102131f80:
    auVar23._8_8_ = pbVar8;
    auVar23._0_8_ = pbVar3;
    return auVar23;
  case (byte *)0xc6:
    unaff_x19 = pbVar9;
  case (byte *)0xe0:
  case (byte *)0xe5:
    FUN_102132638(&stack0x00000008);
    if (unaff_x21 == 0) {
      *(undefined8 *)(unaff_x19 + 8) = in_stack_00000010;
      *(undefined8 *)unaff_x19 = in_stack_00000008;
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000020;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      *(undefined2 *)(unaff_x19 + 0x20) = in_stack_00000028;
    }
    auVar22._8_8_ = pbVar8;
    auVar22._0_8_ = pbVar3;
    return auVar22;
  case (byte *)0xc7:
  case (byte *)0xd0:
  case (byte *)0xf0:
    goto code_r0x000102131fb4;
  case (byte *)0xc8:
  case (byte *)0xd2:
  case (byte *)0xea:
  case (byte *)0xf2:
    goto code_r0x000102131fc4;
  case (byte *)0xca:
  case (byte *)0xcf:
  case (byte *)0xef:
  case (byte *)0xf8:
    goto code_r0x000102131fac;
  case (byte *)0xd1:
  case (byte *)0xe6:
  case (byte *)0xf1:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (byte *)0xb0:
code_r0x000102131fd8:
    bVar2 = *unaff_x20;
    func_0x000107c6068c((undefined1 *)((long)register0x00000008 + 8),0x62755365726f6373,
                        0xed0000644974696d);
    unaff_x19 = (byte *)(ulong)bVar2;
code_r0x000102131fe4:
    pbVar3 = unaff_x19;
    func_0x000107c60690(pbVar3);
    func_0x000107c606a8();
code_r0x000102132004:
    auVar25._8_8_ = pbVar8;
    auVar25._0_8_ = pbVar3;
    return auVar25;
  case (byte *)0xe1:
    goto code_r0x000102131f80;
  case (byte *)0xe3:
    goto code_r0x000102131fbc;
  case (byte *)0xe9:
  case (byte *)0xf7:
    goto code_r0x000102131f98;
  case (byte *)0xf6:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (byte *)0xe4:
  case (byte *)0xfb:
    *(byte **)((long)register0x00000008 + 0x50) = unaff_x20;
    *(byte **)((long)register0x00000008 + 0x58) = unaff_x19;
    *(long *)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
code_r0x000102131f90:
    unaff_x19 = (byte *)(ulong)*unaff_x20;
code_r0x000102131f98:
    func_0x000107c6068c((undefined1 *)((long)register0x00000008 + 8),0,0xed0000644974696d);
code_r0x000102131fa4:
code_r0x000102131fa8:
    pbVar3 = unaff_x19;
code_r0x000102131fac:
    func_0x000107c60690(pbVar3);
code_r0x000102131fb0:
code_r0x000102131fb4:
    func_0x000107c606a8();
code_r0x000102131fbc:
code_r0x000102131fc0:
code_r0x000102131fc4:
    auVar24._8_8_ = pbVar8;
    auVar24._0_8_ = pbVar3;
    return auVar24;
  case (byte *)0xf9:
    goto code_r0x000102131f90;
  case (byte *)0xfa:
    goto code_r0x000102131f20;
  case (byte *)0xfd:
    goto code_r0x000102131fc0;
  }
  param_1 = (ulong)*unaff_x20;
  goto code_r0x000102131db4;
code_r0x000102131dfc:
  pbVar8 = (byte *)((ulong)pbVar8 & 0xffff0000ffffffff | 0x6400000000);
code_r0x000102131e00:
  pbVar8 = (byte *)((ulong)pbVar8 & 0xffffffffffff | 0xed00000000000000);
code_r0x000102131e04:
  pbVar3 = (byte *)0x656c;
code_r0x000102131e08:
  auVar11._0_8_ = (ulong)pbVar3 & 0xffff | 0x6f62726564610000;
  auVar11._8_8_ = pbVar8;
  return auVar11;
code_r0x0001021320b4:
  register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  unaff_x19 = (byte *)0x112e5ae98;
  func_0x0001000285a8(0x112e5ae98,&UNK_10da60908);
  unaff_x27 = *(long *)(unaff_x19 + -8);
  pbVar9 = (byte *)(*(long *)(unaff_x27 + 0x40) + 0xf);
  pbVar10 = pbVar3;
  unaff_x23 = unaff_x20;
  unaff_x24 = unaff_x21;
code_r0x0001021320e8:
  (*(code *)PTR____chkstk_darwin_11034bd40)((ulong)pbVar9 & 0xfffffffffffffff0);
  unaff_x22 = (long)register0x00000008 - extraout_x8;
  unaff_x25 = *(undefined8 *)(pbVar10 + 0x18);
  unaff_x26 = *(undefined8 *)(pbVar10 + 0x20);
  unaff_x20 = pbVar10;
code_r0x000102132108:
  pbVar3 = unaff_x20;
  func_0x0001000a8868(pbVar3,unaff_x25);
code_r0x000102132118:
  func_0x000102132898();
  func_0x000107c606ec(unaff_x22,&UNK_1104cff50,&UNK_1104cff50,pbVar3,unaff_x25,unaff_x26);
  pbVar3 = *(byte **)unaff_x23;
  pbVar8 = *(byte **)(unaff_x23 + 8);
  *(undefined1 *)(unaff_x29 + -0x41) = 0;
code_r0x000102132144:
  param_3 = unaff_x29 + -0x41;
code_r0x000102132148:
  unaff_x21 = unaff_x24;
  param_4 = unaff_x19;
  unaff_x19 = param_4;
code_r0x000102132154:
  func_0x000107c6053c(pbVar3,pbVar8,param_3,param_4);
  if (unaff_x21 == 0) {
    uVar5 = *(undefined8 *)(unaff_x23 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x23 + 0x18);
    *(undefined1 *)(unaff_x29 + -0x41) = 1;
    func_0x000107c6053c(uVar5,uVar1,unaff_x29 + -0x41,unaff_x19);
    unaff_x21 = 0;
code_r0x000102132178:
    param_4 = unaff_x19;
    unaff_x19 = param_4;
    if (unaff_x21 == 0) {
      pbVar3 = *(byte **)(unaff_x23 + 0x20);
      pbVar8 = *(byte **)(unaff_x23 + 0x28);
      *(undefined1 *)(unaff_x29 + -0x41) = 2;
      param_3 = unaff_x29 + -0x41;
      unaff_x21 = 0;
code_r0x000102132194:
      func_0x000107c6053c(pbVar3,pbVar8,param_3,param_4);
      if (unaff_x21 == 0) {
        pbVar3 = *(byte **)(unaff_x23 + 0x30);
        pbVar8 = *(byte **)(unaff_x23 + 0x38);
        *(undefined1 *)(unaff_x29 + -0x41) = 3;
        param_3 = unaff_x29 + -0x41;
        unaff_x21 = 0;
code_r0x0001021321ac:
        func_0x000107c6053c(pbVar3,pbVar8,param_3,unaff_x19);
        if (unaff_x21 == 0) {
          pbVar3 = *(byte **)(unaff_x23 + 0x40);
          pbVar8 = *(byte **)(unaff_x23 + 0x48);
          pbVar9 = (byte *)0x4;
          unaff_x21 = 0;
code_r0x0001021321c4:
          *(char *)(unaff_x29 + -0x41) = (char)pbVar9;
          param_3 = unaff_x29 + -0x41;
code_r0x0001021321cc:
          func_0x000107c6053c(pbVar3,pbVar8,param_3,unaff_x19);
          if (unaff_x21 == 0) {
            uVar5 = *(undefined8 *)(unaff_x23 + 0x50);
            uVar1 = *(undefined8 *)(unaff_x23 + 0x58);
            *(undefined1 *)(unaff_x29 + -0x41) = 5;
            func_0x000107c6053c(uVar5,uVar1,unaff_x29 + -0x41,unaff_x19);
            uVar5 = *(undefined8 *)(unaff_x23 + 0x60);
            uVar1 = *(undefined8 *)(unaff_x23 + 0x68);
            *(undefined1 *)(unaff_x29 + -0x41) = 6;
            func_0x000107c6053c(uVar5,uVar1,unaff_x29 + -0x41,unaff_x19);
            *(byte *)(unaff_x29 + -0x41) = unaff_x23[0x70];
            *(undefined1 *)(unaff_x29 + -0x42) = 7;
            func_0x0001021328d8();
            func_0x000107c60554(unaff_x29 + -0x41,unaff_x29 + -0x42,unaff_x19,&UNK_1106ba5f0,uVar5);
            uVar5 = *(undefined8 *)(unaff_x23 + 0x78);
            *(undefined1 *)(unaff_x29 + -0x41) = 8;
            func_0x000107c6054c(uVar5,unaff_x29 + -0x41,unaff_x19);
            *(byte *)(unaff_x29 + -0x41) = unaff_x23[0x80];
            *(undefined1 *)(unaff_x29 + -0x42) = 9;
            func_0x000102132918();
            lVar6 = unaff_x29 + -0x41;
            func_0x000107c60554(lVar6,unaff_x29 + -0x42,unaff_x19,&UNK_1106ba560,uVar5);
            *(byte *)(unaff_x29 + -0x41) = unaff_x23[0x81];
            *(undefined1 *)(unaff_x29 + -0x42) = 10;
            func_0x000102132958();
            lVar7 = unaff_x29 + -0x41;
            func_0x000107c60530(lVar7,unaff_x29 + -0x42,unaff_x19,&UNK_1104d1100,lVar6);
            *(byte *)(unaff_x29 + -0x41) = unaff_x23[0x82];
            *(undefined1 *)(unaff_x29 + -0x42) = 0xb;
            func_0x000102132998();
            func_0x000107c60554(unaff_x29 + -0x41,unaff_x29 + -0x42,unaff_x19,&UNK_1106ba680,lVar7);
            bVar2 = unaff_x23[0x83];
            *(undefined1 *)(unaff_x29 + -0x41) = 0xc;
            func_0x000107c60540(bVar2,unaff_x29 + -0x41,unaff_x19);
            (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
            goto LAB_102132210;
          }
        }
      }
    }
  }
  (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
LAB_102132210:
  auVar27._8_8_ = unaff_x19;
  auVar27._0_8_ = unaff_x22;
  return auVar27;
}



/* Entry: 102131f2c; end: 102131f6f;  */

void FUN_102131f2c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined2 uStack_28;
  
  FUN_102132638(&uStack_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    *(undefined2 *)(param_1 + 4) = uStack_28;
  }
  return;
}



/* Entry: 102131f70; end: 102131f83;  */

void FUN_102131f70(void)

{
  FUN_102131b4c();
  return;
}



/* Entry: 102131f84; end: 102132007;  */

void FUN_102131f84(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102132008; end: 10213200f;  */

undefined1  [16] FUN_102132008(undefined8 param_1,undefined8 param_2,long param_3,byte *param_4)

{
  undefined8 uVar1;
  byte *pbVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte bVar9;
  long extraout_x8;
  byte *unaff_x19;
  byte *unaff_x20;
  byte *pbVar10;
  long unaff_x21;
  long unaff_x22;
  byte *unaff_x23;
  long unaff_x24;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  long unaff_x29;
  undefined8 unaff_x30;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined2 in_stack_00000028;
  undefined1 auStack_70 [80];
  
code_r0x000102132008:
  bVar9 = *unaff_x20;
  pbVar4 = (byte *)(ulong)bVar9;
  pbVar8 = (byte *)0xed0000644974696d;
  pbVar2 = (byte *)0x62755365726f6373;
  pbVar10 = unaff_x20;
  switch(bVar9) {
  case 0:
    goto code_r0x000102131e70;
  default:
    pbVar8 = (byte *)0x7261;
  case 0x30:
  case 0x3e:
  case 0x58:
  case 0x66:
  case 0x80:
  case 0x8e:
  case 0xa8:
  case 0xb6:
    pbVar8 = (byte *)((ulong)pbVar8 & 0xffffffff0000ffff | 0x49640000);
    break;
  case 2:
    auVar16._8_8_ = 0xe600000000000000;
    auVar16._0_8_ = 0x6449736e656c;
    return auVar16;
  case 3:
  case 0x45:
  case 0x6d:
    pbVar8 = (byte *)0xe500000000000000;
  case 0x94:
  case 0x95:
  case 0xbd:
    auVar17._8_8_ = pbVar8;
    auVar17._0_8_ = 0x6449707061;
    return auVar17;
  case 4:
    pbVar8 = (byte *)0x800000010f064c20;
    pbVar2 = (byte *)0x12;
  case 0x39:
  case 0x61:
    auVar13._0_8_ = (ulong)pbVar2 & 0xffffffffffff | 0xd000000000000000;
    auVar13._8_8_ = pbVar8;
    return auVar13;
  case 5:
  case 0x88:
    uVar3 = 0x70616e73;
    goto code_r0x000102131ee8;
  case 6:
    uVar3 = 0x736e656c;
code_r0x000102131ee8:
    auVar19._0_8_ = uVar3 | 0x72756f5300000000;
    auVar19._8_8_ = 0xea00000000006563;
    return auVar19;
  case 7:
    auVar18._8_8_ = 0xeb00000000737574;
    auVar18._0_8_ = 0x6174536e4974706f;
    return auVar18;
  case 8:
  case 0xc9:
  case 0xce:
  case 0xee:
    pbVar8 = (byte *)0xe500000000000000;
  case 0xcb:
  case 0xeb:
    pbVar2 = (byte *)0x6373;
code_r0x000102131f20:
    auVar21._0_8_ = (ulong)pbVar2 & 0xffff00000000ffff | 0x65726f0000;
    auVar21._8_8_ = pbVar8;
    return auVar21;
  case 9:
  case 0x60:
    auVar15._8_8_ = 0xe800000000000000;
    auVar15._0_8_ = 0x676e69726564726f;
    return auVar15;
  case 10:
    pbVar8 = (byte *)0x66;
  case 0xf4:
    pbVar8 = (byte *)((ulong)pbVar8 & 0xffffffffffff | 0xe900000000000000);
    pbVar2 = (byte *)0x4465726f6373;
code_r0x000102131f10:
    auVar20._0_8_ = (ulong)pbVar2 & 0xffffffffffff | 0x6669000000000000;
    auVar20._8_8_ = pbVar8;
    return auVar20;
  case 0xb:
    pbVar8 = (byte *)0xec00000065637275;
  case 0x11:
  case 0x14:
  case 0x19:
  case 0x1c:
    pbVar2 = (byte *)0x657461647075;
code_r0x000102131e30:
    auVar12._0_8_ = (ulong)pbVar2 & 0xffffffffffff | 0x6f53000000000000;
    auVar12._8_8_ = pbVar8;
    return auVar12;
  case 0xc:
    pbVar8 = (byte *)0x736e654c;
  case 0x89:
  case 0xb1:
    pbVar8 = (byte *)((ulong)pbVar8 & 0xffffffffffff | 0xec00000000000000);
    pbVar2 = (byte *)0x6f69647574537369;
code_r0x000102131e70:
    auVar14._8_8_ = pbVar8;
    auVar14._0_8_ = pbVar2;
    return auVar14;
  case 0x10:
    goto code_r0x0001021321ac;
  case 0x12:
  case 0x1a:
    goto code_r0x000102132194;
  case 0x18:
  case 0x3b:
  case 99:
  case 0x8b:
  case 0xb3:
    goto code_r0x0001021321c4;
  case 0x20:
    goto code_r0x000102132178;
  case 0x21:
  case 0x35:
  case 0x49:
  case 0x5d:
  case 0x71:
  case 0x85:
  case 0x99:
  case 0xad:
    goto code_r0x0001021321cc;
  case 0x22:
  case 0x36:
  case 0x4a:
  case 0x5e:
  case 0x72:
  case 0x86:
  case 0x9a:
  case 0xae:
    goto code_r0x00010213208c;
  case 0x23:
  case 0x37:
  case 0x4b:
  case 0x5f:
  case 0x73:
  case 0x87:
  case 0x9b:
  case 0xaf:
    break;
  case 0x24:
    goto code_r0x000102132154;
  case 0x25:
  case 0x4d:
  case 0x75:
  case 0x9d:
    goto code_r0x000102131e30;
  case 0x26:
  case 0x4e:
  case 0x76:
  case 0x9e:
    goto code_r0x000102132108;
  case 0x2e:
  case 0x56:
  case 0x7e:
  case 0xa6:
    goto code_r0x000102131e00;
  case 0x34:
    goto code_r0x000102132148;
  case 0x38:
    goto code_r0x000102131e04;
  case 0x3a:
  case 0x62:
  case 0x8a:
  case 0xac:
  case 0xb2:
  case 0xe8:
    goto code_r0x000102131fa8;
  case 0x44:
  case 0x9c:
    goto code_r0x000102131fe4;
  case 0x47:
  case 0x6f:
  case 0x97:
  case 0xbf:
    goto code_r0x000102131e08;
  case 0x48:
    goto code_r0x000102132118;
  case 0x4c:
    goto code_r0x0001021320b4;
  case 0x5c:
    goto code_r0x0001021320e8;
  case 0x6c:
    goto code_r0x000102132144;
  case 0x70:
    auVar26._8_8_ = 1;
    auVar26._0_8_ = 0x62755365726f6373;
    return auVar26;
  case 0x74:
    func_0x000102132898();
  case 0x46:
  case 0x6e:
  case 0x96:
  case 0xbe:
    pbVar8 = pbVar2;
code_r0x00010213208c:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9de8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ss9CodingKeyPsE11descriptionSSvg_11034f120)();
    auVar28._8_8_ = pbVar8;
    auVar28._0_8_ = unaff_x19;
    return auVar28;
  case 0x84:
    goto code_r0x000102132008;
  case 0x98:
  case 0xfc:
    goto code_r0x000102131fd8;
  case 0xbc:
    goto code_r0x000102132004;
  case 0xc0:
    goto code_r0x000102131f10;
  case 0xc1:
  case 0xc5:
    goto code_r0x000102131fa4;
  case 0xc2:
  case 0xcc:
  case 0xe2:
  case 0xec:
  case 0xf5:
    goto code_r0x000102131fb0;
  case 0xc4:
    FUN_102131b4c();
  case 0xc3:
  case 0xcd:
  case 0xe7:
  case 0xed:
code_r0x000102131f80:
    auVar23._8_8_ = pbVar8;
    auVar23._0_8_ = pbVar2;
    return auVar23;
  case 0xc6:
    unaff_x19 = pbVar4;
  case 0xe0:
  case 0xe5:
    FUN_102132638(&stack0x00000008);
    if (unaff_x21 == 0) {
      *(undefined8 *)(unaff_x19 + 8) = in_stack_00000010;
      *(undefined8 *)unaff_x19 = in_stack_00000008;
      *(undefined8 *)(unaff_x19 + 0x18) = in_stack_00000020;
      *(undefined8 *)(unaff_x19 + 0x10) = in_stack_00000018;
      *(undefined2 *)(unaff_x19 + 0x20) = in_stack_00000028;
    }
    auVar22._8_8_ = pbVar8;
    auVar22._0_8_ = pbVar2;
    return auVar22;
  case 199:
  case 0xd0:
  case 0xf0:
    goto code_r0x000102131fb4;
  case 200:
  case 0xd2:
  case 0xea:
  case 0xf2:
    goto code_r0x000102131fc4;
  case 0xca:
  case 0xcf:
  case 0xef:
  case 0xf8:
    goto code_r0x000102131fac;
  case 0xd1:
  case 0xe6:
  case 0xf1:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case 0xb0:
code_r0x000102131fd8:
    bVar9 = *unaff_x20;
    func_0x000107c6068c((undefined1 *)((long)register0x00000008 + 8),0x62755365726f6373,
                        0xed0000644974696d);
    unaff_x19 = (byte *)(ulong)bVar9;
code_r0x000102131fe4:
    pbVar2 = unaff_x19;
    func_0x000107c60690(pbVar2);
    func_0x000107c606a8();
code_r0x000102132004:
    auVar25._8_8_ = pbVar8;
    auVar25._0_8_ = pbVar2;
    return auVar25;
  case 0xe1:
    goto code_r0x000102131f80;
  case 0xe3:
    goto code_r0x000102131fbc;
  case 0xe9:
  case 0xf7:
    goto code_r0x000102131f98;
  case 0xf6:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case 0xe4:
  case 0xfb:
    *(byte **)((long)register0x00000008 + 0x50) = unaff_x20;
    *(byte **)((long)register0x00000008 + 0x58) = unaff_x19;
    *(long *)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
code_r0x000102131f90:
    unaff_x19 = (byte *)(ulong)*unaff_x20;
code_r0x000102131f98:
    func_0x000107c6068c((undefined1 *)((long)register0x00000008 + 8),0,0xed0000644974696d);
code_r0x000102131fa4:
code_r0x000102131fa8:
    pbVar2 = unaff_x19;
code_r0x000102131fac:
    func_0x000107c60690(pbVar2);
code_r0x000102131fb0:
code_r0x000102131fb4:
    func_0x000107c606a8();
code_r0x000102131fbc:
code_r0x000102131fc0:
code_r0x000102131fc4:
    auVar24._8_8_ = pbVar8;
    auVar24._0_8_ = pbVar2;
    return auVar24;
  case 0xf9:
    goto code_r0x000102131f90;
  case 0xfa:
    goto code_r0x000102131f20;
  case 0xfd:
    goto code_r0x000102131fc0;
  }
  pbVar8 = (byte *)((ulong)pbVar8 & 0xffff0000ffffffff | 0x6400000000);
code_r0x000102131e00:
  pbVar8 = (byte *)((ulong)pbVar8 & 0xffffffffffff | 0xed00000000000000);
code_r0x000102131e04:
  pbVar2 = (byte *)0x656c;
code_r0x000102131e08:
  auVar11._0_8_ = (ulong)pbVar2 & 0xffff | 0x6f62726564610000;
  auVar11._8_8_ = pbVar8;
  return auVar11;
code_r0x0001021320b4:
  register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  unaff_x19 = (byte *)0x112e5ae98;
  func_0x0001000285a8(0x112e5ae98,&UNK_10da60908);
  unaff_x27 = *(long *)(unaff_x19 + -8);
  pbVar4 = (byte *)(*(long *)(unaff_x27 + 0x40) + 0xf);
  pbVar10 = pbVar2;
  unaff_x23 = unaff_x20;
  unaff_x24 = unaff_x21;
code_r0x0001021320e8:
  (*(code *)PTR____chkstk_darwin_11034bd40)((ulong)pbVar4 & 0xfffffffffffffff0);
  unaff_x22 = (long)register0x00000008 - extraout_x8;
  unaff_x25 = *(undefined8 *)(pbVar10 + 0x18);
  unaff_x26 = *(undefined8 *)(pbVar10 + 0x20);
  unaff_x20 = pbVar10;
code_r0x000102132108:
  pbVar2 = unaff_x20;
  func_0x0001000a8868(pbVar2,unaff_x25);
code_r0x000102132118:
  func_0x000102132898();
  func_0x000107c606ec(unaff_x22,&UNK_1104cff50,&UNK_1104cff50,pbVar2,unaff_x25,unaff_x26);
  pbVar2 = *(byte **)unaff_x23;
  pbVar8 = *(byte **)(unaff_x23 + 8);
  *(undefined1 *)(unaff_x29 + -0x41) = 0;
code_r0x000102132144:
  param_3 = unaff_x29 + -0x41;
code_r0x000102132148:
  unaff_x21 = unaff_x24;
  param_4 = unaff_x19;
  unaff_x19 = param_4;
code_r0x000102132154:
  func_0x000107c6053c(pbVar2,pbVar8,param_3,param_4);
  if (unaff_x21 == 0) {
    uVar5 = *(undefined8 *)(unaff_x23 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x23 + 0x18);
    *(undefined1 *)(unaff_x29 + -0x41) = 1;
    func_0x000107c6053c(uVar5,uVar1,unaff_x29 + -0x41,unaff_x19);
    unaff_x21 = 0;
code_r0x000102132178:
    param_4 = unaff_x19;
    unaff_x19 = param_4;
    if (unaff_x21 == 0) {
      pbVar2 = *(byte **)(unaff_x23 + 0x20);
      pbVar8 = *(byte **)(unaff_x23 + 0x28);
      *(undefined1 *)(unaff_x29 + -0x41) = 2;
      param_3 = unaff_x29 + -0x41;
      unaff_x21 = 0;
code_r0x000102132194:
      func_0x000107c6053c(pbVar2,pbVar8,param_3,param_4);
      if (unaff_x21 == 0) {
        pbVar2 = *(byte **)(unaff_x23 + 0x30);
        pbVar8 = *(byte **)(unaff_x23 + 0x38);
        *(undefined1 *)(unaff_x29 + -0x41) = 3;
        param_3 = unaff_x29 + -0x41;
        unaff_x21 = 0;
code_r0x0001021321ac:
        func_0x000107c6053c(pbVar2,pbVar8,param_3,unaff_x19);
        if (unaff_x21 == 0) {
          pbVar2 = *(byte **)(unaff_x23 + 0x40);
          pbVar8 = *(byte **)(unaff_x23 + 0x48);
          bVar9 = 4;
          unaff_x21 = 0;
code_r0x0001021321c4:
          *(byte *)(unaff_x29 + -0x41) = bVar9;
          param_3 = unaff_x29 + -0x41;
code_r0x0001021321cc:
          func_0x000107c6053c(pbVar2,pbVar8,param_3,unaff_x19);
          if (unaff_x21 == 0) {
            uVar5 = *(undefined8 *)(unaff_x23 + 0x50);
            uVar1 = *(undefined8 *)(unaff_x23 + 0x58);
            *(undefined1 *)(unaff_x29 + -0x41) = 5;
            func_0x000107c6053c(uVar5,uVar1,unaff_x29 + -0x41,unaff_x19);
            uVar5 = *(undefined8 *)(unaff_x23 + 0x60);
            uVar1 = *(undefined8 *)(unaff_x23 + 0x68);
            *(undefined1 *)(unaff_x29 + -0x41) = 6;
            func_0x000107c6053c(uVar5,uVar1,unaff_x29 + -0x41,unaff_x19);
            *(byte *)(unaff_x29 + -0x41) = unaff_x23[0x70];
            *(undefined1 *)(unaff_x29 + -0x42) = 7;
            func_0x0001021328d8();
            func_0x000107c60554(unaff_x29 + -0x41,unaff_x29 + -0x42,unaff_x19,&UNK_1106ba5f0,uVar5);
            uVar5 = *(undefined8 *)(unaff_x23 + 0x78);
            *(undefined1 *)(unaff_x29 + -0x41) = 8;
            func_0x000107c6054c(uVar5,unaff_x29 + -0x41,unaff_x19);
            *(byte *)(unaff_x29 + -0x41) = unaff_x23[0x80];
            *(undefined1 *)(unaff_x29 + -0x42) = 9;
            func_0x000102132918();
            lVar6 = unaff_x29 + -0x41;
            func_0x000107c60554(lVar6,unaff_x29 + -0x42,unaff_x19,&UNK_1106ba560,uVar5);
            *(byte *)(unaff_x29 + -0x41) = unaff_x23[0x81];
            *(undefined1 *)(unaff_x29 + -0x42) = 10;
            func_0x000102132958();
            lVar7 = unaff_x29 + -0x41;
            func_0x000107c60530(lVar7,unaff_x29 + -0x42,unaff_x19,&UNK_1104d1100,lVar6);
            *(byte *)(unaff_x29 + -0x41) = unaff_x23[0x82];
            *(undefined1 *)(unaff_x29 + -0x42) = 0xb;
            func_0x000102132998();
            func_0x000107c60554(unaff_x29 + -0x41,unaff_x29 + -0x42,unaff_x19,&UNK_1106ba680,lVar7);
            bVar9 = unaff_x23[0x83];
            *(undefined1 *)(unaff_x29 + -0x41) = 0xc;
            func_0x000107c60540(bVar9,unaff_x29 + -0x41,unaff_x19);
            (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
            goto LAB_102132210;
          }
        }
      }
    }
  }
  (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
LAB_102132210:
  auVar27._8_8_ = unaff_x19;
  auVar27._0_8_ = unaff_x22;
  return auVar27;
}



/* Entry: 102132010; end: 102132033;  */

void FUN_102132010(undefined1 *param_1,undefined1 param_2)

{
  FUN_1021329d8();
  *param_1 = param_2;
  return;
}



/* Entry: 102132034; end: 10213204b;  */

undefined1  [16] FUN_102132034(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10213204c; end: 10213209b;  */

void FUN_10213204c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_102132898();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10213209c; end: 1021323af;  */

void FUN_10213209c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_60 [14];
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112e5ae98;
  func_0x0001000285a8(0x112e5ae98,&UNK_10da60908);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_60 + -extraout_x8;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  FUN_102132898();
  func_0x000107c606ec(puVar6,&UNK_1104cff50,&UNK_1104cff50,param_1,uVar3,uVar1);
  uStack_51 = 0;
  func_0x000107c6053c(*unaff_x20,unaff_x20[1],&uStack_51,lVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 1;
    func_0x000107c6053c(unaff_x20[2],unaff_x20[3],&uStack_51,lVar2);
    uStack_51 = 2;
    func_0x000107c6053c(unaff_x20[4],unaff_x20[5],&uStack_51,lVar2);
    uStack_51 = 3;
    func_0x000107c6053c(unaff_x20[6],unaff_x20[7],&uStack_51,lVar2);
    uStack_51 = 4;
    func_0x000107c6053c(unaff_x20[8],unaff_x20[9],&uStack_51,lVar2);
    uStack_51 = 5;
    func_0x000107c6053c(unaff_x20[10],unaff_x20[0xb],&uStack_51,lVar2);
    uVar3 = unaff_x20[0xc];
    uStack_51 = 6;
    func_0x000107c6053c(uVar3,unaff_x20[0xd],&uStack_51,lVar2);
    uStack_51 = *(undefined1 *)(unaff_x20 + 0xe);
    uStack_52 = 7;
    func_0x0001021328d8();
    func_0x000107c60554(&uStack_51,&uStack_52,lVar2,&UNK_1106ba5f0,uVar3);
    uVar3 = unaff_x20[0xf];
    uStack_51 = 8;
    func_0x000107c6054c(uVar3,&uStack_51,lVar2);
    uStack_51 = *(undefined1 *)(unaff_x20 + 0x10);
    uStack_52 = 9;
    func_0x000102132918();
    puVar4 = &uStack_51;
    func_0x000107c60554(puVar4,&uStack_52,lVar2,&UNK_1106ba560,uVar3);
    uStack_51 = *(undefined1 *)((long)unaff_x20 + 0x81);
    uStack_52 = 10;
    func_0x000102132958();
    puVar5 = &uStack_51;
    func_0x000107c60530(puVar5,&uStack_52,lVar2,&UNK_1104d1100,puVar4);
    uStack_51 = *(undefined1 *)((long)unaff_x20 + 0x82);
    uStack_52 = 0xb;
    func_0x000102132998();
    func_0x000107c60554(&uStack_51,&uStack_52,lVar2,&UNK_1106ba680,puVar5);
    uStack_51 = 0xc;
    func_0x000107c60540(*(undefined1 *)((long)unaff_x20 + 0x83),&uStack_51,lVar2);
    (**(code **)(lVar7 + 8))(puVar6,lVar2);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar6,lVar2);
  }
  return;
}



/* Entry: 1021323b0; end: 102132417;  */

void FUN_1021323b0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  FUN_102132e14(&uStack_a8);
  if (unaff_x21 == 0) {
    param_1[0xd] = uStack_40;
    param_1[0xc] = uStack_48;
    param_1[0xf] = uStack_30;
    param_1[0xe] = uStack_38;
    *(undefined4 *)(param_1 + 0x10) = uStack_28;
    param_1[5] = uStack_80;
    param_1[4] = uStack_88;
    param_1[7] = uStack_70;
    param_1[6] = uStack_78;
    param_1[9] = uStack_60;
    param_1[8] = uStack_68;
    param_1[0xb] = uStack_50;
    param_1[10] = uStack_58;
    param_1[1] = uStack_a0;
    *param_1 = uStack_a8;
    param_1[3] = uStack_90;
    param_1[2] = uStack_98;
  }
  return;
}



/* Entry: 102132418; end: 10213242b;  */

void FUN_102132418(void)

{
  FUN_10213209c();
  return;
}


