/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10083e9c8; end: 10083e9d3; -[_TtC40SimpleSnapchatExperimentServicesProvider46SimpleSnapchatExperimentServicesImplementation notificationCenterOnCamera] */

uint FUN_10083e9c8(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_10083ea0c();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 10083e9d4; end: 10083ea0b;  */

uint FUN_10083e9d4(undefined8 param_1,undefined8 param_2,code *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  (*param_3)();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 10083ea0c; end: 10083ea83;  */

uint FUN_10083ea0c(void)

{
  undefined8 uVar1;
  uint uVar2;
  long unaff_x20;
  
  uVar2 = (uint)*(byte *)(unaff_x20 + 0x28);
  if (*(byte *)(unaff_x20 + 0x28) == 2) {
    uVar2 = (uint)*(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = 0xd000000000000022;
    func_0x000107c5fadc(0xd000000000000022,0x800000010f006370);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar1);
    *(char *)(unaff_x20 + 0x28) = (char)uVar2;
  }
  return uVar2 & 1;
}



/* Entry: 10083ea84; end: 10083eb2f; -[SCHeaderButtonProvider cameraAddFriendsButtonItem] */

void FUN_10083ea84(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = *(undefined **)(param_1 + 0x118);
  if (puVar4 == (undefined *)0x0) {
    puVar4 = PTR_PTR_1126c2d70;
    func_0x000107c610fc();
    puVar1 = PTR_PTR_1126ce8f0;
    func_0x000107c610f4(PTR_PTR_1126ce8f0);
    func_0x000107c45acc();
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x000107c3eccc(uVar2,param_2,puVar1);
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0x120) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61174(puVar4);
    uVar2 = *(undefined8 *)(param_1 + 0x118);
    *(undefined **)(param_1 + 0x118) = puVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar1);
  }
  else {
    func_0x000107c61174(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10083eb30; end: 10083ebe3; -[_TtC29SCAddFriendsHeaderButtonScope29SCAddFriendsHeaderButtonScope initWithButtonItem:pageType:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083eb30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112f31278;
  func_0x000107c61614(param_1 + _DAT_112f31278,0);
  *(undefined8 *)(param_1 + _DAT_112f31268) = param_3;
  *(undefined8 *)(param_1 + _DAT_112f31270) = param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  func_0x000107c61604(param_1 + lVar2,param_5);
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 10083ebe4; end: 10083ec6b; -[_TtC29SCAddFriendsHeaderButtonScope37SCAddFriendsHeaderButtonScopeServices build:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083ebe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10008a7c8(&uStack_38,&uStack_40);
  FUN_100083b20(&uStack_40);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_40);
  return;
}



/* Entry: 10083ec6c; end: 10083ee1f;  */

void FUN_10083ec6c(long *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_68;
  
  uVar3 = *param_2;
  FUN_1000285a8(0x112ea2160,&UNK_10dab4430);
  puVar1 = &uStack_68;
  uStack_68 = uVar3;
  FUN_1000838ec();
  puVar2 = puVar1;
  func_0x00010083ed34();
  func_0x000107c61574(puVar1);
  FUN_100082720("AddFriendsHeaderButtonEntryPointEntryPointProvider",0x32,2);
  *param_1 = (long)puVar2;
  return;
}



/* Entry: 10083ee20; end: 10083ee33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083ee20(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined8 uVar19;
  long unaff_x20;
  undefined8 uVar20;
  undefined1 uVar21;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(alStack_70,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&lStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&lStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_10083f4b0();
  lVar18 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar18 + _DAT_112ea2170) = 0;
  *(undefined8 *)(lVar18 + _DAT_112ea2178) = 0;
  *(long *)(lVar18 + _DAT_112ea2180) = alStack_70[0];
  *(undefined8 *)(lVar18 + _DAT_112ea2188) = uStack_78;
  *(long *)(lVar18 + _DAT_112ea2190) = lStack_80;
  *(undefined8 *)(lVar18 + _DAT_112ea2198) = uStack_88;
  *(undefined8 *)(lVar18 + _DAT_112ea21a0) = uStack_90;
  *(long *)(lVar18 + _DAT_112ea21a8) = lStack_a0;
  uVar21 = (undefined1)*(undefined8 *)(lStack_80 + _DAT_113092298);
  lVar2 = alStack_70[0];
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174();
  lVar4 = lStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  lVar7 = lStack_a0;
  func_0x000107c61174();
  func_0x00010083f4d0();
  *(undefined1 *)(lVar18 + _DAT_112ea21b0) = uVar21;
  plVar8 = &lStack_b8;
  lStack_b8 = lVar18;
  lStack_b0 = lVar1;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  uVar19 = *(undefined8 *)(lVar2 + _DAT_112f31268);
  uVar20 = *(undefined8 *)(lVar2 + _DAT_112f31270);
  func_0x000107c61174();
  func_0x000107c61174();
  FUN_10083f500();
  puVar9 = PTR_PTR_1126c2d78;
  func_0x000107c610f8();
  func_0x000107c46d14();
  func_0x000107c61170(plVar8);
  func_0x000107c5a444(puVar9);
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0a6f40);
  func_0x000107c520f4(puVar9);
  func_0x000107c61170();
  func_0x00010083f588();
  func_0x000107c61180();
  func_0x000107c520fc(puVar9);
  func_0x000107c61170();
  func_0x00010083f5a0();
  puVar10 = PTR_PTR_1126c2fb0;
  func_0x000107c610f8(PTR_PTR_1126c2fb0);
  func_0x000107c45eb4();
  func_0x000107c5a2b4();
  func_0x000107c556a8(puVar10);
  func_0x000107c59c78(puVar10);
  func_0x000107c5271c(puVar10);
  func_0x000107c52b8c(puVar9);
  puVar11 = PTR_PTR_1126aa960;
  func_0x000107c610f8();
  func_0x000107c46ca0();
  puVar12 = PTR_PTR_1126aa968;
  func_0x000107c610f8();
  func_0x000107c456d8();
  lVar18 = *(long *)((long)plVar8 + _DAT_112ea2170);
  *(undefined **)((long)plVar8 + _DAT_112ea2170) = puVar12;
  func_0x000107c61170();
  FUN_1008201f0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar18 + 0x18) = 3;
  *(undefined8 *)(lVar18 + 0x10) = 1;
  *(undefined **)(lVar18 + 0x20) = puVar9;
  uVar13 = 0;
  func_0x00010082024c(0);
  func_0x000107c61174(puVar9);
  lVar1 = lVar18;
  func_0x000107c5fc48(lVar18,uVar13);
  func_0x000107c61574(lVar18);
  func_0x000107c5707c(uVar19);
  func_0x000107c61170(lVar1);
  puVar12 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar13 = *(undefined8 *)((long)plVar8 + _DAT_112ea2178);
  *(undefined **)((long)plVar8 + _DAT_112ea2178) = puVar12;
  func_0x000107c61174();
  func_0x000107c61170(uVar13);
  lVar1 = lVar7;
  func_0x000107c41090();
  func_0x000107c61180();
  lVar18 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar18 != 0) {
    lVar1 = lVar18;
    func_0x000107c4442c(lVar18);
    func_0x000107c61180();
    lVar14 = lVar1;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    puVar15 = &UNK_1105182f0;
    func_0x000107c613fc(&UNK_1105182f0,0x18,7);
    func_0x000107c61614(puVar15 + 0x10,plVar8);
    puVar16 = &UNK_1105183d8;
    func_0x000107c613fc(&UNK_1105183d8,0x28,7);
    *(undefined **)(puVar16 + 0x10) = puVar15;
    *(undefined8 *)(puVar16 + 0x18) = uVar19;
    *(undefined **)(puVar16 + 0x20) = puVar11;
    pcStack_c8 = FUN_10083ff50;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0x42000000;
    uStack_d8 = 0x10083fefc;
    puStack_d0 = &UNK_1105183f0;
    ppuVar17 = &puStack_e8;
    puStack_c0 = puVar16;
    func_0x000107c60bc4(ppuVar17);
    puVar15 = puStack_c0;
    func_0x000107c61174(uVar19);
    func_0x000107c61174(puVar11);
    func_0x000107c61574(puVar15);
    lVar1 = lVar14;
    func_0x000107c5c320(lVar14);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c61170(lVar14);
    func_0x000107c3e924(lVar1);
    func_0x000107c615e8(lVar18);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar20);
  *param_1 = plVar8;
  return;
}



/* Entry: 10083ee34; end: 10083f487;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083ee34(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  long alStack_70 [2];
  
  FUN_100083b20(alStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&lStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&lStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_10083f4b0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ea2170) = 0;
  *(undefined8 *)(lVar1 + _DAT_112ea2178) = 0;
  *(long *)(lVar1 + _DAT_112ea2180) = alStack_70[0];
  *(undefined8 *)(lVar1 + _DAT_112ea2188) = uStack_78;
  *(long *)(lVar1 + _DAT_112ea2190) = lStack_80;
  *(undefined8 *)(lVar1 + _DAT_112ea2198) = uStack_88;
  *(undefined8 *)(lVar1 + _DAT_112ea21a0) = uStack_90;
  *(long *)(lVar1 + _DAT_112ea21a8) = lStack_a0;
  uVar21 = (undefined1)*(undefined8 *)(lStack_80 + _DAT_113092298);
  lVar2 = alStack_70[0];
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174();
  lVar4 = lStack_80;
  func_0x000107c61174();
  uVar5 = uStack_88;
  func_0x000107c61174();
  uVar6 = uStack_90;
  func_0x000107c61174();
  lVar7 = lStack_a0;
  func_0x000107c61174();
  func_0x00010083f4d0();
  *(undefined1 *)(lVar1 + _DAT_112ea21b0) = uVar21;
  plVar8 = &lStack_b8;
  lStack_b8 = lVar1;
  lStack_b0 = param_2;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  uVar19 = *(undefined8 *)(lVar2 + _DAT_112f31268);
  uVar20 = *(undefined8 *)(lVar2 + _DAT_112f31270);
  func_0x000107c61174();
  func_0x000107c61174();
  FUN_10083f500();
  puVar9 = PTR_PTR_1126c2d78;
  func_0x000107c610f8();
  func_0x000107c46d14();
  func_0x000107c61170(plVar8);
  func_0x000107c5a444(puVar9);
  func_0x000107c5fadc(0xd000000000000024,0x800000010f0a6f40);
  func_0x000107c520f4(puVar9);
  func_0x000107c61170();
  func_0x00010083f588();
  func_0x000107c61180();
  func_0x000107c520fc(puVar9);
  func_0x000107c61170();
  func_0x00010083f5a0();
  puVar10 = PTR_PTR_1126c2fb0;
  func_0x000107c610f8(PTR_PTR_1126c2fb0);
  func_0x000107c45eb4();
  func_0x000107c5a2b4();
  func_0x000107c556a8(puVar10);
  func_0x000107c59c78(puVar10);
  func_0x000107c5271c(puVar10);
  func_0x000107c52b8c(puVar9);
  puVar11 = PTR_PTR_1126aa960;
  func_0x000107c610f8();
  func_0x000107c46ca0();
  puVar12 = PTR_PTR_1126aa968;
  func_0x000107c610f8();
  func_0x000107c456d8();
  lVar18 = *(long *)((long)plVar8 + _DAT_112ea2170);
  *(undefined **)((long)plVar8 + _DAT_112ea2170) = puVar12;
  func_0x000107c61170();
  FUN_1008201f0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar18 + 0x18) = 3;
  *(undefined8 *)(lVar18 + 0x10) = 1;
  *(undefined **)(lVar18 + 0x20) = puVar9;
  uVar13 = 0;
  func_0x00010082024c(0);
  func_0x000107c61174(puVar9);
  lVar1 = lVar18;
  func_0x000107c5fc48(lVar18,uVar13);
  func_0x000107c61574(lVar18);
  func_0x000107c5707c(uVar19);
  func_0x000107c61170(lVar1);
  puVar12 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar13 = *(undefined8 *)((long)plVar8 + _DAT_112ea2178);
  *(undefined **)((long)plVar8 + _DAT_112ea2178) = puVar12;
  func_0x000107c61174();
  func_0x000107c61170(uVar13);
  lVar1 = lVar7;
  func_0x000107c41090();
  func_0x000107c61180();
  lVar18 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar18 != 0) {
    lVar1 = lVar18;
    func_0x000107c4442c(lVar18);
    func_0x000107c61180();
    lVar14 = lVar1;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    puVar15 = &UNK_1105182f0;
    func_0x000107c613fc(&UNK_1105182f0,0x18,7);
    func_0x000107c61614(puVar15 + 0x10,plVar8);
    puVar16 = &UNK_1105183d8;
    func_0x000107c613fc(&UNK_1105183d8,0x28,7);
    *(undefined **)(puVar16 + 0x10) = puVar15;
    *(undefined8 *)(puVar16 + 0x18) = uVar19;
    *(undefined **)(puVar16 + 0x20) = puVar11;
    pcStack_c8 = FUN_10083ff50;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0x42000000;
    uStack_d8 = 0x10083fefc;
    puStack_d0 = &UNK_1105183f0;
    ppuVar17 = &puStack_e8;
    puStack_c0 = puVar16;
    func_0x000107c60bc4(ppuVar17);
    puVar15 = puStack_c0;
    func_0x000107c61174(uVar19);
    func_0x000107c61174(puVar11);
    func_0x000107c61574(puVar15);
    lVar1 = lVar14;
    func_0x000107c5c320(lVar14);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c61170(lVar14);
    func_0x000107c3e924(lVar1);
    func_0x000107c615e8(lVar18);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uStack_98);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar20);
  *param_1 = plVar8;
  return;
}



/* Entry: 10083f488; end: 10083f4ab;  */

void FUN_10083f488(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10083f4ac; end: 10083f4af;  */

void FUN_10083f4ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10083f4b0; end: 10083f4ff;  */

void FUN_10083f4b0(void)

{
  func_0x000107c61168(&PTR_PTR_112849d40);
  return;
}



/* Entry: 10083f500; end: 10083f57f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083f500(long param_1)

{
  char cVar1;
  long unaff_x20;
  
  if ((param_1 - 1U < 4) || (param_1 != 0)) {
    func_0x000107c61168(PTR_PTR_1126b0c40);
  }
  else {
    cVar1 = *(char *)(unaff_x20 + _DAT_112ea21b0);
    func_0x000107c61168(PTR_PTR_1126b0c40);
    if (cVar1 != '\x01') {
      func_0x000107c450a4(0x4038000000000000,0x4038000000000000);
      goto LAB_10083f570;
    }
  }
  func_0x000107c45110(0x4038000000000000,0x4038000000000000);
LAB_10083f570:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 10083f580; end: 10083f5b3; -[SIGHeaderButtonOption setUsesCustomBackgroundWhenBadged:] */

void FUN_10083f580(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x2a) = param_3;
  return;
}



/* Entry: 10083f5b4; end: 10083f66f; -[SIGHeaderButtonBadge initWithColor:style:text:] */

undefined1 *
FUN_10083f5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_11270b518;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x20) = 0x7b;
    *(undefined1 *)((long)puVar1 + 0x10) = 0;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = 0;
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = 0;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x11) = 1;
  }
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10083f670; end: 10083f677; -[SIGHeaderButtonBadge setUseShadows:] */

void FUN_10083f670(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x11) = param_3;
  return;
}



/* Entry: 10083f678; end: 10083f6cb; -[SIGHeaderButtonBadge setIsHidden:] */

void FUN_10083f678(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x10) = param_3;
  uStack_30 = 0xc2000000;
  puStack_28 = &UNK_10b852c6c;
  puStack_20 = &UNK_110d62a20;
  lStack_18 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10083f6cc; end: 10083f75b; -[SIGHeaderButtonBadge forEachObserver:] */

/* WARNING: Possible PIC construction at 0x00010083f734: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010083f738) */

void FUN_10083f6cc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  lVar1 = *(long *)(param_1 + 8);
  if ((lVar1 != 0) && (func_0x000107c40808(), lVar1 != 0)) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x000107c4eaf0(lVar1);
    func_0x000107c61180();
    (**(code **)(param_3 + 0x10))(param_3,lVar1);
    param_3 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10083f75c; end: 10083f763; -[SIGHeaderButtonBadge setTextColor:] */

void FUN_10083f75c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10083f764; end: 10083f7b7; -[SIGHeaderButtonBadge setAnimationStyle:] */

void FUN_10083f764(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(param_1 + 0x30) = param_3;
  uStack_30 = 0xc2000000;
  puStack_28 = &UNK_10b852b38;
  puStack_20 = &UNK_110d62a20;
  lStack_18 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 10083f7b8; end: 10083f86f; -[SIGHeaderButtonOption setBadge:] */

void FUN_10083f7b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x000107c61174(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  puStack_50 = &UNK_10b854d30;
  puStack_48 = &UNK_110d62ae0;
  lStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(uVar1);
  func_0x000107c437dc(param_1,param_2,&puStack_60);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10083f870; end: 10083f8fb; -[SCAddFriendsButtonMutator initWithHeaderButtonOption:] */

undefined1 * FUN_10083f870(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126edb48;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c3e614();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    func_0x000107c3fdb8();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10083f8fc; end: 10083f903; -[SIGHeaderButtonBadge color] */

undefined8 FUN_10083f8fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10083f904; end: 10083fc17; -[SCAddFriendsButtonBadgeUpdater initWithAppLifeCycleManager:addFriendsButtonMutator:friendingBadgeRepository:badgeLoggingInfo:badgeRanker:navigationLoggingServices:] */

undefined8 *
FUN_10083f904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  puStack_68 = PTR_PTR_1126edb40;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[2];
    puVar1[2] = param_8;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[3];
    puVar1[3] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[5];
    puVar1[5] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[7];
    puVar1[7] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_78,puVar1);
    uVar2 = param_3;
    func_0x000107c5c734(param_3);
    func_0x000107c61180();
    puVar3 = PTR_PTR_1126ae960;
    puVar4 = PTR_PTR_1126bd748;
    func_0x000107c3d6cc(PTR_PTR_1126bd748);
    func_0x000107c61180();
    func_0x000107c43a0c(puVar3);
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126ae970;
    func_0x000107c44e60(PTR_PTR_1126ae970);
    func_0x000107c61180();
    uVar6 = puVar1[4];
    func_0x000107c4f7c0(uVar6);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_80,auStack_78);
    func_0x000107c5e08c(uVar2);
    func_0x000107c611b0();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_80);
    func_0x000107c61120(auStack_78);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10083fc18; end: 10083fc1f; +[SCAttributedFriendingTask addFriendsButtonBadgeUpdater] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10083fc18(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 8;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10083fc20; end: 10083fc27; -[SCPlusCustomAppThemeProviderImpl globalTheme] */

void FUN_10083fc20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x58),PTR_s_target_112678178);
  return;
}



/* Entry: 10083fc28; end: 10083fd23;  */

void FUN_10083fc28(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5d6fc();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c51c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10083fe48;
  puStack_40 = &UNK_110847450;
  uStack_38 = *(undefined8 *)(param_1 + 0x20);
  puVar4 = PTR_PTR_1126ae720;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_58);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126d1a78;
  func_0x000107c610f4(PTR_PTR_1126d1a78);
  func_0x000107c47b60();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10083fd24; end: 10083fe47;  */

void FUN_10083fd24(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  
  func_0x000107c61174(param_2);
  puVar7 = PTR_PTR_1126ae6b8;
  lVar1 = param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4442c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  if (lVar3 == 0) {
    func_0x000107c4a8a4(puVar7);
    func_0x000107c61180();
  }
  else {
    lVar4 = param_2;
    func_0x000107c4dfe8(param_2);
    func_0x000107c61180();
    lVar5 = lVar4;
    func_0x000107c4442c();
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    func_0x000107c4a8a4(puVar7);
    func_0x000107c61180();
    func_0x000107c61170(lVar6);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
  }
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10083fe48; end: 10083fee3;  */

void FUN_10083fe48(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c41050();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar2 = uVar3;
  func_0x000107c4442c(uVar3);
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c4d3e4();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10083fee4; end: 10083ff03;  */

void FUN_10083fee4(long param_1,long param_2)

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



/* Entry: 10083ff04; end: 10083ff4f;  */

void FUN_10083ff04(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10083ff50; end: 10083ff5f;  */

void FUN_10083ff50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar4 = &puStack_70;
  puVar3 = &UNK_110518388;
  func_0x000107c613fc(&UNK_110518388,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  puStack_50 = &UNK_100c692e8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1000f6b44;
  puStack_58 = &UNK_1105183a0;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000100162d98(&UNK_10dab44c0,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 10083ff60; end: 100840037;  */

void FUN_10083ff60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_110518388;
  func_0x000107c613fc(&UNK_110518388,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  puStack_50 = &UNK_100c692e8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1000f6b44;
  puStack_58 = &UNK_1105183a0;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61574(puVar1);
  func_0x000100162d98(&UNK_10dab44c0,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100840038; end: 10084003b;  */

void FUN_100840038(long param_1,long param_2)

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



/* Entry: 10084003c; end: 100840097;  */

void FUN_10084003c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100840098; end: 1008400fb; -[SCMainCameraHeaderLayoutController _configureAddFriendsItem:style:iconCanHaveBackground:] */

void FUN_100840098(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  uint param_5)

{
  if (param_3 != 0) {
    func_0x000107c61174(param_3);
    func_0x000107c59a2c(param_3,param_2,param_4);
    func_0x000107c52864(param_3,param_2,param_5 ^ 1);
    func_0x000107c59cb0(param_3,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 1008400fc; end: 1008400ff; -[SCMainCameraHeaderLayoutController _shouldAddTrailingSpacer] */

void FUN_1008400fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be456b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__isVerticalToolbarTopAlignedWith_11256ef48);
  return;
}



/* Entry: 100840100; end: 100840157; -[SCMainCameraHeaderLayoutController _isVerticalToolbarTopAlignedWithHeaderItems] */

bool FUN_100840100(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b9cb0;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c3de48(uVar1);
  func_0x000107c61180();
  func_0x000107c5cbb8(puVar2,param_2,uVar1);
  func_0x000107c61170(uVar1);
  return puVar2 + -3 < (undefined *)0xfffffffffffffffe;
}



/* Entry: 100840158; end: 100840193; +[SCCameraVerticalToolbarRepositioningExperiment toolbarPositionWithAppStartExperimentReader:] */

undefined8 FUN_100840158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  FUN_100840194(param_3);
  func_0x000107c615e8(param_3);
  return uVar1;
}



/* Entry: 100840194; end: 1008402b7;  */

undefined8 FUN_100840194(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = 0;
  if (param_1 != 0) {
    func_0x000107c61428(0x112ef4368,auStack_48,0,0);
    if (bRam0000000112ef4368 < 2) {
      uVar1 = 1;
      if (bRam0000000112ef4368 != 0) {
        uVar1 = 2;
      }
    }
    else if (bRam0000000112ef4368 == 2) {
      uVar1 = 0;
    }
    else {
      func_0x000107c615f0(param_1);
      uVar1 = 0xd000000000000026;
      func_0x000107c5fadc(0xd000000000000026,0x800000010f0f1820);
      lVar2 = param_1;
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar1);
      uVar1 = 0xd000000000000024;
      func_0x000107c5fadc(0xd000000000000024,0x800000010f0f1850);
      lVar3 = param_1;
      func_0x000107c3ebd4();
      func_0x000107c61170(uVar1);
      func_0x000107c615e8(param_1);
      uVar1 = 1;
      if ((int)lVar3 != 0) {
        uVar1 = 2;
      }
      if ((int)lVar2 == 0) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}



/* Entry: 1008402b8; end: 1008402bf; -[SIGHeaderButtonBadge style] */

undefined8 FUN_1008402b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1008402c0; end: 1008402c7; -[SIGHeaderButtonBadge useShadows] */

undefined1 FUN_1008402c0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Entry: 1008402c8; end: 1008402cf; -[SIGHeaderButtonBadge accessibilityIdentifier] */

undefined8 FUN_1008402c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1008402d0; end: 1008402d7; -[SIGHeaderButtonBadge accessibilityLabel] */

undefined8 FUN_1008402d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1008402d8; end: 1008402df; -[SIGHeaderButtonBadge textColor] */

undefined8 FUN_1008402d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1008402e0; end: 1008402e7; -[SIGHeaderButtonBadge text] */

undefined8 FUN_1008402e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1008402e8; end: 1008402ef; -[SIGHeaderButtonBadge animationStyle] */

undefined8 FUN_1008402e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1008402f0; end: 1008402f7; -[SIGHeaderButtonBadge isHidden] */

undefined1 FUN_1008402f0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x10);
}



/* Entry: 1008402f8; end: 10084035b; -[SIGHeaderButtonBadge addObserver:] */

/* WARNING: Possible PIC construction at 0x00010084033c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100840340) */

void FUN_1008402f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 8) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSPointerArray_1126c4b90;
    func_0x000107c5e160();
    func_0x000107c61180();
    param_3 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
  }
  else {
    func_0x000107c3d7f8(*(long *)(param_1 + 8),param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10084035c; end: 1008403ef; -[SIGHeaderItem setTrailingAccessoryView:] */

void FUN_10084035c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  puStack_48 = &UNK_10b856a4c;
  puStack_40 = &UNK_110d62b40;
  lStack_38 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_58);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1008403f0; end: 10084042f;  */

void FUN_1008403f0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b1ec();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100840430; end: 100840507; -[SCCameraUIServicesEntryPoint _createCameraToolbarUIOrchestrator] */

void FUN_100840430(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126c7808;
  func_0x000107c610f4(PTR_PTR_1126c7808);
  func_0x000107c4954c();
  puVar2 = PTR_PTR_1126c7810;
  func_0x000107c41624(PTR_PTR_1126c7810,param_2,puVar1);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126c7818;
  func_0x000107c610f4(PTR_PTR_1126c7818);
  func_0x000107c47608();
  puVar4 = PTR_PTR_1126c7820;
  func_0x000107c610f4(PTR_PTR_1126c7820);
  puVar5 = puVar4;
  FUN_100078e94();
  func_0x000107c61180();
  func_0x000107c46484(puVar4,param_2,puVar2,puVar3,puVar5,1);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100840508; end: 100840553; -[SCCameraToolbarUIVisibilityState initWithVisibilityStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100840508(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_113038660) = param_3;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100840554; end: 1008405a3; +[SCStateTransition defaultStateTransition:] */

void FUN_100840554(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7810;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c489bc();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1008405a4; end: 100840647; -[SCStateTransition initWithState:transitionInfo:] */

undefined1 *
FUN_1008405a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701e48;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100840648; end: 1008406ab; -[SCStateOrchestratorBlockReducer initWithMaxBlock:] */

undefined * FUN_100840648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7818;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c3ba14();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 1008406ac; end: 100840757; -[SCStateOrchestratorBlockReducer _initWithMaxBlock:requesterComparator:] */

undefined1 *
FUN_1008406ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701e38;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c61184();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100840758; end: 100840787; -[SCStateOrchestratorBlockReducer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100840770: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100840774) */

void FUN_100840758(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100840788; end: 1008408ef; -[SCStateOrchestrator initWithDefaultState:reducer:performer:preferSynchronous:] */

undefined1 *
FUN_100840788(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_112701e30;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_3;
    func_0x000107c61170(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    func_0x000107c61174(uVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c4d664(*(undefined8 *)((long)puVar1 + 0x40));
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    func_0x000107c421ac();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar4);
    puVar3 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x000107c4c420();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x30) = param_6;
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1008408f0; end: 100840973; -[SCStateOrchestrator observable] */

void FUN_1008408f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  if (*(long *)(param_1 + 0x28) == 0) {
    func_0x000107c61174(uVar1);
  }
  else {
    func_0x000107c4da8c(uVar1,param_2,*(long *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100840974; end: 1008409fb;  */

/* WARNING: Possible PIC construction at 0x0001008409d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008409e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001008409d4) */
/* WARNING: Removing unreachable block (ram,0x0001008409e8) */

void FUN_100840974(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5bcc0(param_2);
    func_0x000107c61180();
    func_0x000107c5dfc4();
    func_0x000107c3cd38(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1008409fc; end: 100840a03; -[SCStateTransition state] */

undefined8 FUN_1008409fc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100840a04; end: 100840a13; -[SCCameraToolbarUIVisibilityState visibilityStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100840a04(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_113038660);
}



/* Entry: 100840a14; end: 100840a1b; -[SCMainCameraHeaderLayoutController _updateWithToolbarExpanded:] */

void FUN_100840a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2194f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_setTrailingAccessoryViewHidden__112663f60);
  return;
}



/* Entry: 100840a1c; end: 100840a6f; -[SIGHeaderItem setTrailingAccessoryViewHidden:] */

void FUN_100840a1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined1 *)(param_1 + 0x15) = param_3;
  uStack_30 = 0xc2000000;
  puStack_28 = &UNK_10b856a9c;
  puStack_20 = &UNK_110d62b40;
  lStack_18 = param_1;
  func_0x000107c437dc(param_1,param_2,&puStack_38);
  return;
}



/* Entry: 100840a70; end: 100840b1f; -[SCMainCameraHeaderLayoutController _updateToolbarWithSoundPillPresented:] */

/* WARNING: Possible PIC construction at 0x000100840ac8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100840acc) */
/* WARNING: Removing unreachable block (ram,0x000100840ae0) */
/* WARNING: Removing unreachable block (ram,0x000100840af0) */
/* WARNING: Removing unreachable block (ram,0x000100840af8) */
/* WARNING: Removing unreachable block (ram,0x000100840b08) */

void FUN_100840a70(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f4(PTR_PTR_1126c7808);
  func_0x000107c4954c();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c40408();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100840b20; end: 100840b93; -[SCTransitionableStateOrchestrator containsState:] */

undefined8 FUN_100840b20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c7810;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c489bc();
  func_0x000107c61170(param_3);
  func_0x000107c403e8(param_1,param_2,puVar1);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100840b94; end: 100840cff; -[SCStateOrchestrator contains:] */

undefined1 * FUN_100840b94(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  uVar1 = *(ulong *)(param_1 + 0x48);
  puVar6 = param_3;
  func_0x000107c49cec();
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x000107c60ae8();
    func_0x000107c61180();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c4080c();
    puVar7 = (undefined1 *)0x0;
    if (lVar3 != 0) {
      lVar8 = *plStack_110;
      do {
        lVar9 = 0;
        do {
          if (*plStack_110 != lVar8) {
            func_0x000107c61128(lVar2);
          }
          uVar4 = *(ulong *)(lStack_118 + lVar9 * 8);
          func_0x000107c5bcc0();
          func_0x000107c61180();
          uVar1 = uVar4;
          puVar5 = (undefined8 *)param_3;
          func_0x000107c49cec();
          func_0x000107c61170(uVar4);
          if ((uVar1 & 1) != 0) {
            puVar7 = (undefined1 *)0x1;
            goto LAB_100840cac;
          }
          lVar9 = lVar9 + 1;
        } while (lVar3 != lVar9);
        lVar3 = lVar2;
        puVar5 = &uStack_120;
        func_0x000107c4080c();
      } while (lVar3 != 0);
      puVar7 = (undefined1 *)0x0;
    }
LAB_100840cac:
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
  }
  else {
    puVar7 = (undefined1 *)0x1;
    puVar5 = (undefined8 *)puVar6;
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar7;
  }
  func_0x000107c60e78();
  func_0x000107c61174(puVar5);
  func_0x000107c61158(param_3);
  puVar6 = (undefined1 *)puVar5;
  func_0x000107c6115c(puVar5,param_3);
  if (((ulong)puVar6 & 1) == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar7 = (undefined1 *)puVar5;
    func_0x000107c5bcc0(puVar5);
    func_0x000107c61180();
    puVar6 = puVar7;
    func_0x000107c49cec();
    func_0x000107c61170(puVar7);
  }
  func_0x000107c61170(puVar5);
  return puVar6;
}



/* Entry: 100840d00; end: 100840d83; -[SCStateTransition isEqual:] */

ulong FUN_100840d00(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61158(param_1);
  uVar2 = param_3;
  func_0x000107c6115c(param_3,param_1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_3;
    func_0x000107c5bcc0(param_3);
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c49cec();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c61170(param_3);
  return uVar2;
}



/* Entry: 100840d84; end: 100840e03; -[SCCameraToolbarUIVisibilityState isEqual:] */

uint FUN_100840d84(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_100840e04(&uStack_40);
  func_0x000107c61170(param_1);
  FUN_10006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 100840e04; end: 100840ea3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_100840e04(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lStack_58;
  undefined1 auStack_50 [24];
  long lStack_38;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  FUN_100672b50(param_1,auStack_50);
  if (lStack_38 == 0) {
    FUN_10006e7f4(auStack_50);
  }
  else {
    plVar4 = &lStack_58;
    func_0x000107c6147c(plVar4,auStack_50,PTR___sypN_11034f1a8 + 8,lVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_113038660);
      iVar2 = *(int *)(lStack_58 + _DAT_113038660);
      func_0x000107c61170();
      return iVar1 == iVar2;
    }
  }
  return false;
}



/* Entry: 100840ea4; end: 100840ed3; -[SCStateTransition .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100840ebc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100840ec0) */

void FUN_100840ea4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100840ed4; end: 100840efb; -[SCMainCameraHeaderLayoutController _shouldUpdateToolbarWithSoundPillPresented:currentIsLensesActive:] */

bool FUN_100840ed4(long param_1,undefined8 param_2,uint param_3,uint param_4)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(byte *)(param_1 + 0x50) != param_4;
  bVar2 = *(byte *)(param_1 + 0x60) != param_3;
  if (bVar1 || bVar2) {
    *(char *)(param_1 + 0x50) = (char)param_4;
    *(char *)(param_1 + 0x60) = (char)param_3;
  }
  return bVar1 || bVar2;
}



/* Entry: 100840efc; end: 100840f6f; -[SCMainCameraScopedLensCarouselScopeServices initWithLensDelegate:] */

undefined1 * FUN_100840efc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112701d10;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100840f70; end: 100840faf; -[SCMainCameraViewControllerStartupWorkflow setHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100840f70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127623b4;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100840fb0; end: 1008410c7; -[SCMainCameraEntryPoint _attachUI:] */

/* WARNING: Possible PIC construction at 0x000100841038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100841048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100841058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001008410a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010084105c) */
/* WARNING: Removing unreachable block (ram,0x00010084104c) */
/* WARNING: Removing unreachable block (ram,0x00010084103c) */
/* WARNING: Removing unreachable block (ram,0x0001008410a4) */

void FUN_100840fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1008410c8(param_1);
  func_0x000107c61180();
  func_0x000107c4c15c();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4c160();
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3e2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1008410c8; end: 1008410eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1008410c8(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_112743244);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1008410ec; end: 100841223;  */

void FUN_1008410ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x000107c4008c();
  func_0x000107c61180();
  uVar5 = uVar1;
  func_0x000107c5b038();
  func_0x000107c61180();
  uVar2 = uVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c509bc();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  if ((int)uVar3 == 0) {
    uVar5 = *(undefined8 *)(param_5 + 0x28);
    func_0x000107c5c734(uVar5);
    func_0x000107c61180();
    func_0x000107c3d998();
    func_0x000107c61170(uVar5);
  }
  else {
    param_1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
    param_2 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
    param_3 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
    param_4 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  }
  puVar4 = PTR_PTR_1126c8e10;
  func_0x000107c610f4(PTR_PTR_1126c8e10);
  func_0x000107c4594c(param_1,param_2,param_3,param_4);
  uVar5 = *(undefined8 *)(param_5 + 0x28);
  func_0x000107c5c734(uVar5);
  func_0x000107c61180();
  func_0x000107c3e858();
  func_0x000107c61170(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100841224; end: 100841253;  */

void FUN_100841224(void)

{
  func_0x000107c610f4(PTR_PTR_1126c8e08);
  func_0x000107c46cac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100841254; end: 100841303; -[SCMainCameraPresentationWorkflow initWithHeaderItem:cameraCircumstanceEngineServices:] */

undefined1 *
FUN_100841254(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126f06a8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_4);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_3);
    puVar2 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100841304; end: 100841397; -[SCMainCameraPresentationWorkflow additionalSafeAreaInsetsForRootViewController] */

undefined8 FUN_100841304(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b9e78;
  func_0x000107c49d70();
  if ((int)puVar1 != 0) {
    func_0x000107c4c858(PTR_PTR_1126b9e78);
    func_0x000107c609b8();
    puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c609b8();
    FUN_100594f4c();
    func_0x000107c61170(puVar1);
    func_0x000107c517cc(PTR__OBJC_CLASS___UIScreen_1126aea10);
  }
  return 0;
}



/* Entry: 100841398; end: 1008413bb; +[SCCameraWidenedFOVSettingsProvider maxMediaAreaFrame] */

void FUN_100841398(undefined8 param_1)

{
  func_0x000107c4ad70();
                    /* WARNING: Could not recover jumptable at 0x00010c0c2630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_maxMediaAreaFrameWithInsets__11260e3a0);
  return;
}



/* Entry: 1008413bc; end: 1008413c7; +[SCCameraWidenedFOVSettingsProvider legacySafeAreaInsetsForCameraGeometry] */

void FUN_1008413bc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b9aa0,PTR_s_legacySafeAreaInsetsForCameraGeo_112601720);
  return;
}



/* Entry: 1008413c8; end: 1008413cb; +[SCCameraCapriUtils legacySafeAreaInsetsForCameraGeometry] */

undefined8 FUN_1008413c8(int param_1)

{
  undefined8 uVar1;
  
  FUN_1007f85fc();
  if (param_1 == 0) {
    uVar1 = 0x4034000000000000;
  }
  else {
    if (lRam00000001137f3f68 != -1) {
      FUN_10002a2fc(0x1137f3f68,&PTR___NSConcreteGlobalBlock_110cb7098);
    }
    if ((bRam00000001137f3f60 & 1) == 0) {
      if (lRam00000001137f3fa8 != -1) {
        FUN_10002a2fc(0x1137f3fa8,&PTR___NSConcreteGlobalBlock_110cb7118);
      }
      uVar1 = *(undefined8 *)(&UNK_10e5541c8 + lRam00000001137f3fa0 * 8);
    }
    else {
      if (lRam00000001137f3f78 != -1) {
        FUN_10002a2fc(0x1137f3f78,&PTR___NSConcreteGlobalBlock_110cb70b8);
      }
      uVar1 = 0;
      if (uRam00000001137f3f70 < 0x28) {
        uVar1 = *(undefined8 *)(&UNK_10e554218 + uRam00000001137f3f70 * 8);
      }
    }
  }
  return uVar1;
}



/* Entry: 1008413cc; end: 1008414c7;  */

undefined8 FUN_1008413cc(int param_1)

{
  undefined8 uVar1;
  
  FUN_1007f85fc();
  if (param_1 == 0) {
    uVar1 = 0x4034000000000000;
  }
  else {
    if (lRam00000001137f3f68 != -1) {
      FUN_10002a2fc(0x1137f3f68,&PTR___NSConcreteGlobalBlock_110cb7098);
    }
    if ((bRam00000001137f3f60 & 1) == 0) {
      if (lRam00000001137f3fa8 != -1) {
        FUN_10002a2fc(0x1137f3fa8,&PTR___NSConcreteGlobalBlock_110cb7118);
      }
      uVar1 = *(undefined8 *)(&UNK_10e5541c8 + lRam00000001137f3fa0 * 8);
    }
    else {
      if (lRam00000001137f3f78 != -1) {
        FUN_10002a2fc(0x1137f3f78,&PTR___NSConcreteGlobalBlock_110cb70b8);
      }
      uVar1 = 0;
      if (uRam00000001137f3f70 < 0x28) {
        uVar1 = *(undefined8 *)(&UNK_10e554218 + uRam00000001137f3f70 * 8);
      }
    }
  }
  return uVar1;
}



/* Entry: 1008414c8; end: 10084158f; +[SCCameraWidenedFOVSettingsProvider maxMediaAreaFrameWithInsets:] */

double FUN_1008414c8(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined *puVar1;
  double dVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar2 = param_3;
  uVar3 = param_4;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c51724();
  FUN_100841590(dVar2,uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c515a8(param_1,param_2,param_3,param_4,param_5);
  return dVar2 + param_2;
}



/* Entry: 100841590; end: 1008415a3;  */

undefined8 FUN_100841590(void)

{
  return 0;
}



/* Entry: 1008415a4; end: 10084160f; +[SCCameraWidenedFOVSettingsProvider safeAreaInsetsWithExistingInsets:] */

undefined8 FUN_1008415a4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2;
  uVar2 = param_1;
  func_0x000107c49d70();
  if ((uVar1 & 1) != 0) {
    func_0x000107c3afc0(param_2);
    param_1 = uVar2;
  }
  return param_1;
}



/* Entry: 100841610; end: 1008416ff; +[SCCameraWidenedFOVSettingsProvider _cameraPreviewEdgeInsets] */

double FUN_100841610(undefined8 param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x30);
  uVar5 = (undefined2)((ulong)param_1 >> 0x20);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (ushort)param_1;
  uVar1 = param_5;
  FUN_100456ca0();
  if ((uVar1 & 1) == 0) {
    param_3 = (double)-(ulong)(dRam0000000113732888 ==
                              *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10));
    uVar3 = NEON_uminv(CONCAT26(-(ushort)(dRam0000000113732890 ==
                                         *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18)),
                                CONCAT24(SUB82(param_3,0),
                                         CONCAT22(-(ushort)(dRam0000000113732880 ==
                                                           *(double *)
                                                            (PTR__UIEdgeInsetsZero_110345bb0 + 8)),
                                                  -(ushort)(dRam0000000113732878 ==
                                                           *(double *)
                                                            PTR__UIEdgeInsetsZero_110345bb0)))),2);
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    param_2 = dRam0000000113732880;
    param_4 = dRam0000000113732890;
    if ((uVar3 & 1) == 0) {
      return dRam0000000113732878;
    }
  }
  func_0x000107c5ded0(PTR_PTR_1126b9aa0);
  dRam0000000113732878 = (double)CONCAT26(uVar6,CONCAT24(uVar5,CONCAT22(uVar4,uVar3)));
  dRam0000000113732880 = param_2;
  dRam0000000113732888 = param_3;
  dRam0000000113732890 = param_4;
  func_0x000107c519f8(param_5);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c51724();
  func_0x000107c61170(puVar2);
  param_3 = param_3 - (double)CONCAT26(uVar6,CONCAT24(uVar5,CONCAT22(uVar4,uVar3)));
  if (dRam0000000113732880 + dRam0000000113732890 < param_3) {
    dRam0000000113732880 = param_3 * 0.5;
    dRam0000000113732890 = dRam0000000113732880;
  }
  return dRam0000000113732878;
}



/* Entry: 100841700; end: 10084177f; +[SCCameraCapriUtils viewFinderInsets] */

undefined8
FUN_100841700(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c3cddc(param_3,param_4,param_5);
  func_0x000107c61170(puVar1);
  return param_3;
}



/* Entry: 100841780; end: 100841827; +[SCCameraCapriUtils _viewFinderInsetsWithScreenSize:] */

double FUN_100841780(double param_1,double param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_1;
  func_0x000107c3cde4();
  dVar2 = dVar1;
  func_0x000107c3cdd8(param_3);
  dVar4 = dVar2;
  func_0x000107c3cde0(param_3);
  dVar3 = dVar4;
  func_0x000107c3cde0(param_3);
  if (((dVar4 < 0.0) || ((param_2 - dVar3) - dVar2 < 0.0)) || ((param_1 - dVar1) * 0.5 < 0.0)) {
    dVar4 = *(double *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  return dVar4;
}



/* Entry: 100841828; end: 10084182b; +[SCCameraCapriUtils _viewFinderWidth] */

double FUN_100841828(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  uint uVar1;
  undefined *puVar2;
  double dVar4;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c51724();
  uVar1 = (uint)puVar3;
  FUN_100456ca0();
  dVar4 = 1.7777777777777777;
  if ((uVar1 & param_4 < param_3) == 0) {
    dVar4 = 0.5625;
  }
  if (param_4 * dVar4 <= param_3) {
    param_3 = param_4 * dVar4;
  }
  func_0x000107c61170(puVar2);
  return (double)(float)(int)param_3;
}



/* Entry: 10084182c; end: 1008418b3;  */

double FUN_10084182c(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  uint uVar1;
  undefined *puVar2;
  double dVar4;
  undefined *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c51724();
  uVar1 = (uint)puVar3;
  FUN_100456ca0();
  dVar4 = 1.7777777777777777;
  if ((uVar1 & param_4 < param_3) == 0) {
    dVar4 = 0.5625;
  }
  if (param_4 * dVar4 <= param_3) {
    param_3 = param_4 * dVar4;
  }
  func_0x000107c61170(puVar2);
  return (double)(float)(int)param_3;
}



/* Entry: 1008418b4; end: 1008418b7; +[SCCameraCapriUtils _viewFinderHeight] */

double FUN_1008418b4(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c51724();
  uVar1 = (uint)puVar4;
  FUN_100456ca0();
  uVar2 = uVar1;
  FUN_100456ca0();
  dVar5 = 1.7777777777777777;
  dVar6 = dVar5;
  if ((uVar2 & param_4 < param_3) == 0) {
    dVar6 = 0.5625;
  }
  dVar7 = dVar5;
  if (uVar2 == 0) {
    dVar7 = 0.5625;
  }
  if ((uVar1 & param_4 < param_3) == 0) {
    dVar5 = 0.5625;
    dVar7 = dVar6;
  }
  if (param_4 * dVar7 <= param_3) {
    param_3 = param_4 * dVar7;
  }
  func_0x000107c61170(puVar3);
  return (double)(float)(int)((double)(float)(int)param_3 / dVar5);
}



/* Entry: 1008418b8; end: 100841973;  */

double FUN_1008418b8(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined *puVar4;
  
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194();
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c51724();
  uVar1 = (uint)puVar4;
  FUN_100456ca0();
  uVar2 = uVar1;
  FUN_100456ca0();
  dVar5 = 1.7777777777777777;
  dVar6 = dVar5;
  if ((uVar2 & param_4 < param_3) == 0) {
    dVar6 = 0.5625;
  }
  dVar7 = dVar5;
  if (uVar2 == 0) {
    dVar7 = 0.5625;
  }
  if ((uVar1 & param_4 < param_3) == 0) {
    dVar5 = 0.5625;
    dVar7 = dVar6;
  }
  if (param_4 * dVar7 <= param_3) {
    param_3 = param_4 * dVar7;
  }
  func_0x000107c61170(puVar3);
  return (double)(float)(int)((double)(float)(int)param_3 / dVar5);
}



/* Entry: 100841974; end: 100841977; +[SCCameraCapriUtils _viewFinderTopInset] */

undefined8
FUN_100841974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar3;
  
  func_0x000107c517cc(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar5 = param_3;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c51724();
  iVar1 = (int)puVar3;
  uVar6 = uVar5;
  uVar7 = param_4;
  FUN_10052b600();
  dVar4 = (double)iVar1;
  FUN_10052b668(dVar4);
  FUN_10052ba54(uVar5,param_4,param_1,param_3,dVar4,param_2,uVar6,uVar7);
  func_0x000107c61170(puVar2);
  return uVar5;
}



/* Entry: 100841978; end: 100841a13;  */

undefined8
FUN_100841978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar3;
  
  func_0x000107c517cc(PTR__OBJC_CLASS___UIScreen_1126aea10);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar5 = param_3;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c51724();
  iVar1 = (int)puVar3;
  uVar6 = uVar5;
  uVar7 = param_4;
  FUN_10052b600();
  dVar4 = (double)iVar1;
  FUN_10052b668(dVar4);
  FUN_10052ba54(uVar5,param_4,param_1,param_3,dVar4,param_2,uVar6,uVar7);
  func_0x000107c61170(puVar2);
  return uVar5;
}



/* Entry: 100841a14; end: 100841a8f;  */

/* WARNING: Possible PIC construction at 0x000100841a78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100841a7c) */

void FUN_100841a14(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x000107c43638(*(undefined8 *)(param_1 + 0x20));
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0(PTR__OBJC_CLASS___NSFileManager_1126aff20);
  func_0x000107c61180();
  func_0x000107c4ff50();
  func_0x000107c4ff84(*(undefined8 *)(param_1 + 0x20),param_2,0);
  FUN_10063a374(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100841a90; end: 100841b13; +[SCCameraWidenedFOVSettingsProvider screenSizeConstrainedToTargetAspectRatio] */

undefined1  [16]
FUN_100841a90(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5)

{
  undefined *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c4c194(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c61180();
  func_0x000107c51724();
  func_0x000107c61170(puVar1);
  func_0x000107c5c738(param_5);
  param_1 = param_4 * param_1;
  dVar2 = param_3;
  if (param_1 <= param_3) {
    dVar2 = param_1;
  }
  func_0x000107c5c738(param_5);
  if (param_3 / param_1 <= param_4) {
    param_4 = param_3 / param_1;
  }
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = dVar2;
  return auVar3;
}



/* Entry: 100841b14; end: 10084227b; -[SCMainCameraScreenRouterImpl initWithBaseUIContainer:cameraUIScopeViewContainer:headerItem:additionalSafeAreaInsets:usesRuntimeViewfinderGeometry:lensCarouselLayoutProvider:cameraConfigurationServices:] */

undefined8 *
FUN_100841b14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 auStack_200 [8];
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined1 auStack_190 [8];
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  undefined1 auStack_158 [8];
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined *puStack_90;
  
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  puStack_90 = PTR_PTR_1126f06d0;
  puVar1 = &uStack_98;
  uStack_98 = param_5;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61144(auStack_a0,puVar1);
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[4] = param_4;
    *(undefined1 *)(puVar1 + 5) = param_10;
    uVar3 = param_8;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c403c8();
    func_0x000107c61180();
    uVar8 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61174(param_11);
    uVar3 = puVar1[8];
    puVar1[8] = param_11;
    func_0x000107c61170(uVar3);
    uVar3 = param_12;
    func_0x000107c4008c(param_12);
    func_0x000107c61180();
    func_0x000107c611a0(puVar1 + 0x15,uVar3);
    func_0x000107c61170(uVar3);
    puVar4 = PTR_PTR_1126ae720;
    puVar7 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d0 = 0xc2000000;
    uStack_c8 = 0x100842644;
    puStack_c0 = &UNK_1109162e8;
    func_0x000107c61174(param_9);
    uStack_b8 = param_9;
    func_0x000107c61174(param_12);
    uStack_b0 = param_12;
    func_0x000107c6111c(auStack_a8,auStack_a0);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126ae720;
    puStack_100 = puVar7;
    uStack_f8 = 0xc2000000;
    pcStack_f0 = FUN_100843728;
    puStack_e8 = &UNK_11089afa0;
    func_0x000107c61174();
    puStack_e0 = puVar4;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x10];
    puVar1[0x10] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_128 = puVar7;
    uStack_120 = 0xc2000000;
    puStack_118 = &UNK_106209858;
    puStack_110 = &UNK_110857508;
    func_0x000107c61174(puVar4);
    puStack_108 = puVar4;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_150 = puVar7;
    uStack_148 = 0xc2000000;
    puStack_140 = &UNK_1062098bc;
    puStack_138 = &UNK_110857508;
    func_0x000107c61174(puVar4);
    puStack_130 = puVar4;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x1c];
    puVar1[0x1c] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_188 = puVar7;
    uStack_180 = 0xc2000000;
    pcStack_178 = FUN_100843778;
    puStack_170 = &UNK_110916318;
    func_0x000107c6111c(auStack_158,auStack_a0);
    func_0x000107c61174(param_7);
    uStack_168 = param_7;
    func_0x000107c61174(puVar4);
    puStack_160 = puVar4;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_1c0 = puVar7;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_10084259c;
    puStack_1a8 = &UNK_110916348;
    func_0x000107c6111c(auStack_190,auStack_a0);
    func_0x000107c61174(param_7);
    uStack_1a0 = param_7;
    func_0x000107c61174(puVar4);
    puStack_198 = puVar4;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0xc];
    puVar1[0xc] = puVar5;
    func_0x000107c61170(uVar3);
    puVar5 = PTR_PTR_1126ae720;
    puStack_1f8 = puVar7;
    uStack_1f0 = 0xc2000000;
    puStack_1e8 = &UNK_10620991c;
    puStack_1e0 = &UNK_110916348;
    func_0x000107c6111c(auStack_1c8,auStack_a0);
    func_0x000107c61174(param_7);
    uStack_1d8 = param_7;
    func_0x000107c61174(puVar4);
    puStack_1d0 = puVar4;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0xd];
    puVar1[0xd] = puVar5;
    func_0x000107c61170(uVar3);
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_200,auStack_a0);
    func_0x000107c61174(param_7);
    func_0x000107c61174(puVar4);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = puVar7;
    func_0x000107c61170(uVar3);
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x11];
    puVar1[0x11] = puVar7;
    func_0x000107c61170(uVar3);
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x12];
    puVar1[0x12] = puVar7;
    func_0x000107c61170(uVar3);
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x13];
    puVar1[0x13] = puVar7;
    func_0x000107c61170(uVar3);
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x14];
    puVar1[0x14] = puVar7;
    func_0x000107c61170(uVar3);
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c61174(puVar4);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x1a];
    puVar1[0x1a] = puVar7;
    func_0x000107c61170(uVar3);
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = puVar7;
    func_0x000107c61170(uVar3);
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = puVar7;
    func_0x000107c61170(uVar3);
    puVar6 = puVar1;
    func_0x000107c3b2a0();
    func_0x000107c61180();
    uVar3 = puVar1[0x1b];
    puVar1[0x1b] = puVar6;
    func_0x000107c61170(uVar3);
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[6];
    puVar1[6] = puVar7;
    func_0x000107c61170(uVar3);
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar3 = puVar1[9];
    puVar1[9] = puVar7;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(param_7);
    func_0x000107c61120(auStack_200);
    func_0x000107c61170(puStack_1d0);
    func_0x000107c61170(uStack_1d8);
    func_0x000107c61120(auStack_1c8);
    func_0x000107c61170(puStack_198);
    func_0x000107c61170(uStack_1a0);
    func_0x000107c61120(auStack_190);
    func_0x000107c61170(puStack_160);
    func_0x000107c61170(uStack_168);
    func_0x000107c61120(auStack_158);
    func_0x000107c61170(puStack_130);
    func_0x000107c61170(puStack_108);
    func_0x000107c61170(puStack_e0);
    func_0x000107c61170(puVar4);
    func_0x000107c61120(auStack_a8);
    func_0x000107c61170(uStack_b0);
    func_0x000107c61170(uStack_b8);
    func_0x000107c61120(auStack_a0);
  }
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  return puVar1;
}


