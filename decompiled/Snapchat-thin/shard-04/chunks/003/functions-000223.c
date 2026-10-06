/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10335de68; end: 10335de9f;  */

void FUN_10335de68(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10335dea0; end: 10335df5b;  */

void FUN_10335dea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ee3a00,&UNK_10db0ebc0);
  puVar1 = &UNK_1106429c0;
  func_0x000107c613fc(&UNK_1106429c0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_10335e4f4,puVar1);
  return;
}



/* Entry: 10335df5c; end: 10335e4f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10335df5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  long *plVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  lVar3 = lStack_68;
  lVar4 = *(long *)(lStack_68 + 0x30);
  if (lVar4 == 0) {
    func_0x000107c61574(lStack_68);
    puVar17 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    func_0x000100083b20(&lStack_68);
    lVar5 = lStack_68;
    puVar17 = &UNK_110642a08;
    func_0x000107c613fc(&UNK_110642a08,0x18,7);
    *(long *)(puVar17 + 0x10) = lVar5;
    func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
    func_0x000107c613fc();
    func_0x000107c61174();
    pcVar6 = FUN_10335e58c;
    func_0x0001000bdd8c(FUN_10335e58c,puVar17);
    func_0x0001000285a8(0x112d5a608,&UNK_10d921390);
    uVar7 = *(undefined8 *)(lVar3 + 0x38);
    func_0x000107c61174();
    uVar8 = uVar7;
    func_0x0001000bda74();
    func_0x000107c61170(uVar7);
    puVar17 = &UNK_110642a30;
    func_0x000107c613fc(&UNK_110642a30,0x18,7);
    *(long *)(puVar17 + 0x10) = lVar4;
    func_0x0001000285a8(0x112f5bc60,&UNK_10dbb4128);
    func_0x000107c613fc();
    func_0x000107c61174();
    pcVar9 = FUN_10335e5f0;
    func_0x0001000bdd8c(FUN_10335e5f0,puVar17);
    puVar17 = &UNK_10da60480;
    func_0x0001000285a8(0x112e1bff0);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    uVar7 = *(undefined8 *)(lStack_68 + _DAT_1130344b8);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    uVar10 = uVar7;
    func_0x0001000bda74();
    func_0x000107c61170(uVar7);
    func_0x000100083b20(&lStack_68);
    uVar11 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lStack_68);
    uVar7 = uVar11;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    uVar11 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    func_0x000107c6157c(pcVar6);
    func_0x000100083b20(&lStack_70);
    uVar21 = *(undefined8 *)(lStack_70 + _DAT_112fc8c48);
    func_0x000107c6157c(uVar21);
    func_0x000107c61170(lStack_70);
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    plVar18 = *(long **)(lVar3 + 0x18);
    func_0x000107c6157c(uVar8);
    func_0x000107c6157c(pcVar9);
    func_0x000107c6157c(uVar10);
    func_0x000107c61174();
    plVar12 = plVar18;
    func_0x0001000b637c();
    func_0x000107c61170(plVar18);
    lVar13 = 0;
    FUN_10335ba58();
    lVar14 = lVar13;
    func_0x000107c610f8();
    lVar2 = _DAT_112f5bc10;
    uVar7 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar14 + lVar2) = uVar7;
    *(undefined8 *)(lVar14 + _DAT_112f5bc18) = 0;
    puVar1 = (undefined8 *)(lVar14 + _DAT_112f5bbe0);
    *puVar1 = uVar11;
    puVar1[1] = puVar17;
    *(code **)(lVar14 + _DAT_112f5bbe8) = pcVar6;
    *(undefined8 *)(lVar14 + _DAT_112f5bbf0) = uVar8;
    *(code **)(lVar14 + _DAT_112f5bbf8) = pcVar9;
    *(undefined8 *)(lVar14 + _DAT_112f5bc00) = uVar21;
    *(undefined8 *)(lVar14 + _DAT_112f5bc08) = uVar10;
    puVar17 = PTR_s_init_1125d9248;
    lStack_80 = lVar14;
    lStack_78 = lVar13;
    func_0x000107c6157c();
    func_0x000107c6157c(uVar21);
    func_0x000107c6157c(uVar8);
    func_0x000107c6157c(pcVar9);
    func_0x000107c6157c(uVar10);
    plVar18 = &lStack_80;
    func_0x000107c61154(plVar18,puVar17);
    puVar17 = &UNK_110642a58;
    func_0x000107c613fc(&UNK_110642a58,0x18,7);
    func_0x000107c61614(puVar17 + 0x10,plVar18);
    pcVar19 = *(code **)(*plVar12 + 0x60);
    func_0x000107c61174();
    uVar7 = 0x10335e5f8;
    puVar16 = puVar17;
    (*pcVar19)();
    func_0x000107c61574(puVar17);
    uVar11 = uVar7;
    func_0x000107c614f0();
    uVar20 = *(undefined8 *)((long)plVar18 + _DAT_112f5bc10);
    pcVar19 = *(code **)(puVar16 + 0x10);
    func_0x000107c6157c(uVar20);
    (*pcVar19)();
    func_0x000107c61170(plVar18);
    func_0x000107c61574(pcVar6);
    func_0x000107c61574(uVar21);
    func_0x000107c61574(uVar8);
    func_0x000107c61574(pcVar9);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(plVar12);
    func_0x000107c615e8(uVar7);
    func_0x000107c61574(uVar20);
    ppuVar15 = &PTR____CFConstantStringClassReference_110dd6d58;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd6d58);
    puVar17 = PTR_PTR_1126b1cb0;
    func_0x000107c610f8();
    func_0x000107c61174(plVar18);
    func_0x000107c5fadc(ppuVar15,uVar11);
    func_0x000107c6142c(uVar11);
    uVar7 = 0x6f6272656461656c;
    func_0x000107c5fadc(0x6f6272656461656c,0xec00000073647261);
    func_0x000107c46c6c();
    func_0x000107c61574(lVar3);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(pcVar9);
    func_0x000107c61574(uVar8);
    func_0x000107c61574(pcVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(plVar18);
    func_0x000107c61170(plVar18);
    func_0x000107c61170(ppuVar15);
    func_0x000107c61170(uVar7);
  }
  *param_1 = puVar17;
  return;
}



/* Entry: 10335e4f4; end: 10335e513;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10335e4f4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined *puVar17;
  long unaff_x20;
  long *plVar18;
  code *pcVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  lVar3 = lStack_68;
  lVar4 = *(long *)(lStack_68 + 0x30);
  if (lVar4 == 0) {
    func_0x000107c61574(lStack_68);
    puVar17 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    func_0x000100083b20(&lStack_68);
    lVar5 = lStack_68;
    puVar17 = &UNK_110642a08;
    func_0x000107c613fc(&UNK_110642a08,0x18,7);
    *(long *)(puVar17 + 0x10) = lVar5;
    func_0x0001000285a8(0x112d54e08,&UNK_10d91bfb0);
    func_0x000107c613fc();
    func_0x000107c61174();
    pcVar6 = FUN_10335e58c;
    func_0x0001000bdd8c(FUN_10335e58c,puVar17);
    func_0x0001000285a8(0x112d5a608,&UNK_10d921390);
    uVar7 = *(undefined8 *)(lVar3 + 0x38);
    func_0x000107c61174();
    uVar8 = uVar7;
    func_0x0001000bda74();
    func_0x000107c61170(uVar7);
    puVar17 = &UNK_110642a30;
    func_0x000107c613fc(&UNK_110642a30,0x18,7);
    *(long *)(puVar17 + 0x10) = lVar4;
    func_0x0001000285a8(0x112f5bc60,&UNK_10dbb4128);
    func_0x000107c613fc();
    func_0x000107c61174();
    pcVar9 = FUN_10335e5f0;
    func_0x0001000bdd8c(FUN_10335e5f0,puVar17);
    puVar17 = &UNK_10da60480;
    func_0x0001000285a8(0x112e1bff0);
    func_0x000100083b20(&lStack_68);
    lVar2 = lStack_68;
    uVar7 = *(undefined8 *)(lStack_68 + _DAT_1130344b8);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    uVar10 = uVar7;
    func_0x0001000bda74();
    func_0x000107c61170(uVar7);
    func_0x000100083b20(&lStack_68);
    uVar11 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
    func_0x000107c61174();
    func_0x000107c61170(lStack_68);
    uVar7 = uVar11;
    func_0x000107c5d984();
    func_0x000107c61180();
    func_0x000107c61170(uVar11);
    uVar11 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    func_0x000107c6157c(pcVar6);
    func_0x000100083b20(&lStack_70);
    uVar21 = *(undefined8 *)(lStack_70 + _DAT_112fc8c48);
    func_0x000107c6157c(uVar21);
    func_0x000107c61170(lStack_70);
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    plVar18 = *(long **)(lVar3 + 0x18);
    func_0x000107c6157c(uVar8);
    func_0x000107c6157c(pcVar9);
    func_0x000107c6157c(uVar10);
    func_0x000107c61174();
    plVar12 = plVar18;
    func_0x0001000b637c();
    func_0x000107c61170(plVar18);
    lVar13 = 0;
    FUN_10335ba58();
    lVar14 = lVar13;
    func_0x000107c610f8();
    lVar2 = _DAT_112f5bc10;
    uVar7 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar14 + lVar2) = uVar7;
    *(undefined8 *)(lVar14 + _DAT_112f5bc18) = 0;
    puVar1 = (undefined8 *)(lVar14 + _DAT_112f5bbe0);
    *puVar1 = uVar11;
    puVar1[1] = puVar17;
    *(code **)(lVar14 + _DAT_112f5bbe8) = pcVar6;
    *(undefined8 *)(lVar14 + _DAT_112f5bbf0) = uVar8;
    *(code **)(lVar14 + _DAT_112f5bbf8) = pcVar9;
    *(undefined8 *)(lVar14 + _DAT_112f5bc00) = uVar21;
    *(undefined8 *)(lVar14 + _DAT_112f5bc08) = uVar10;
    puVar17 = PTR_s_init_1125d9248;
    lStack_80 = lVar14;
    lStack_78 = lVar13;
    func_0x000107c6157c();
    func_0x000107c6157c(uVar21);
    func_0x000107c6157c(uVar8);
    func_0x000107c6157c(pcVar9);
    func_0x000107c6157c(uVar10);
    plVar18 = &lStack_80;
    func_0x000107c61154(plVar18,puVar17);
    puVar17 = &UNK_110642a58;
    func_0x000107c613fc(&UNK_110642a58,0x18,7);
    func_0x000107c61614(puVar17 + 0x10,plVar18);
    pcVar19 = *(code **)(*plVar12 + 0x60);
    func_0x000107c61174();
    uVar7 = 0x10335e5f8;
    puVar16 = puVar17;
    (*pcVar19)();
    func_0x000107c61574(puVar17);
    uVar11 = uVar7;
    func_0x000107c614f0();
    uVar20 = *(undefined8 *)((long)plVar18 + _DAT_112f5bc10);
    pcVar19 = *(code **)(puVar16 + 0x10);
    func_0x000107c6157c(uVar20);
    (*pcVar19)();
    func_0x000107c61170(plVar18);
    func_0x000107c61574(pcVar6);
    func_0x000107c61574(uVar21);
    func_0x000107c61574(uVar8);
    func_0x000107c61574(pcVar9);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(plVar12);
    func_0x000107c615e8(uVar7);
    func_0x000107c61574(uVar20);
    ppuVar15 = &PTR____CFConstantStringClassReference_110dd6d58;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd6d58);
    puVar17 = PTR_PTR_1126b1cb0;
    func_0x000107c610f8();
    func_0x000107c61174(plVar18);
    func_0x000107c5fadc(ppuVar15,uVar11);
    func_0x000107c6142c(uVar11);
    uVar7 = 0x6f6272656461656c;
    func_0x000107c5fadc(0x6f6272656461656c,0xec00000073647261);
    func_0x000107c46c6c();
    func_0x000107c61574(lVar3);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(pcVar9);
    func_0x000107c61574(uVar8);
    func_0x000107c61574(pcVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(plVar18);
    func_0x000107c61170(plVar18);
    func_0x000107c61170(ppuVar15);
    func_0x000107c61170(uVar7);
  }
  *param_1 = puVar17;
  return;
}



/* Entry: 10335e514; end: 10335e58b;  */

void FUN_10335e514(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
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



/* Entry: 10335e58c; end: 10335e593;  */

void FUN_10335e58c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
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



/* Entry: 10335e594; end: 10335e5ef;  */

void FUN_10335e594(long *param_1,long param_2)

{
  long lVar1;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c4b508();
    func_0x000107c61180();
    func_0x000107c615e8(param_2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10335e5f0; end: 10335e5ff;  */

void FUN_10335e5f0(long *param_1)

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
    func_0x000107c4b508();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10335e600; end: 10335ed03;  */

/* WARNING: Possible PIC construction at 0x00010335e670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010335ec00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010335eb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010335eb4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010335e898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010335e83c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010335e89c) */
/* WARNING: Removing unreachable block (ram,0x00010335eb50) */
/* WARNING: Removing unreachable block (ram,0x00010335eb90) */
/* WARNING: Removing unreachable block (ram,0x00010335ec04) */
/* WARNING: Removing unreachable block (ram,0x00010335e674) */
/* WARNING: Removing unreachable block (ram,0x00010335e818) */
/* WARNING: Removing unreachable block (ram,0x00010335e678) */
/* WARNING: Removing unreachable block (ram,0x00010335e688) */
/* WARNING: Removing unreachable block (ram,0x00010335e698) */
/* WARNING: Removing unreachable block (ram,0x00010335e874) */
/* WARNING: Removing unreachable block (ram,0x00010335e6a0) */
/* WARNING: Removing unreachable block (ram,0x00010335e6c4) */
/* WARNING: Removing unreachable block (ram,0x00010335e6cc) */
/* WARNING: Removing unreachable block (ram,0x00010335e91c) */
/* WARNING: Removing unreachable block (ram,0x00010335e934) */
/* WARNING: Removing unreachable block (ram,0x00010335e940) */
/* WARNING: Removing unreachable block (ram,0x00010335eb34) */
/* WARNING: Removing unreachable block (ram,0x00010335e958) */
/* WARNING: Removing unreachable block (ram,0x00010335e6e0) */
/* WARNING: Removing unreachable block (ram,0x00010335e73c) */
/* WARNING: Removing unreachable block (ram,0x00010335ea2c) */
/* WARNING: Removing unreachable block (ram,0x00010335e794) */
/* WARNING: Removing unreachable block (ram,0x00010335eab8) */
/* WARNING: Removing unreachable block (ram,0x00010335ead4) */
/* WARNING: Removing unreachable block (ram,0x00010335eae4) */
/* WARNING: Removing unreachable block (ram,0x00010335eb88) */
/* WARNING: Removing unreachable block (ram,0x00010335eaec) */
/* WARNING: Removing unreachable block (ram,0x00010335eb94) */
/* WARNING: Removing unreachable block (ram,0x00010335ecf8) */
/* WARNING: Removing unreachable block (ram,0x00010335eb28) */
/* WARNING: Removing unreachable block (ram,0x00010335eba0) */
/* WARNING: Removing unreachable block (ram,0x00010335eba4) */
/* WARNING: Removing unreachable block (ram,0x00010335e7f8) */
/* WARNING: Removing unreachable block (ram,0x00010335ea50) */
/* WARNING: Removing unreachable block (ram,0x00010335ea80) */
/* WARNING: Removing unreachable block (ram,0x00010335ea98) */
/* WARNING: Removing unreachable block (ram,0x00010335e840) */
/* WARNING: Removing unreachable block (ram,0x00010335e8cc) */
/* WARNING: Removing unreachable block (ram,0x00010335ed00) */
/* WARNING: Removing unreachable block (ram,0x00010335e8f8) */

void FUN_10335e600(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001009438f0();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61434(uVar2);
  func_0x0001043492ac(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10335ed04; end: 10335ee33;  */

void FUN_10335ed04(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 auStack_68 [32];
  undefined1 uStack_48;
  
  ppuVar2 = &puStack_c0;
  func_0x0001007d6c6c(3,param_2,param_3,*unaff_x20,&PTR_DAT_110642a70);
  uStack_48 = 1;
  uVar3 = unaff_x20[8];
  auStack_68[0] = param_1;
  FUN_10335fe14(auStack_68,&uStack_90,0x112ee4d20,&UNK_10db0ff90);
  puVar1 = &UNK_110642d98;
  func_0x000107c613fc(&UNK_110642d98,0x41,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = uStack_88;
  *(undefined8 *)(puVar1 + 0x20) = uStack_90;
  *(undefined8 *)(puVar1 + 0x38) = uStack_78;
  *(undefined8 *)(puVar1 + 0x30) = uStack_80;
  puVar1[0x40] = uStack_70;
  uStack_a0 = 0x10335ffa8;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_110642db0;
  puStack_98 = puVar1;
  func_0x000107c60bc4(&puStack_c0);
  puVar1 = puStack_98;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar3);
  func_0x000107c60bd0(ppuVar2);
  FUN_10335ff1c(auStack_68,0x112ee4d20,&UNK_10db0ff90);
  return;
}



/* Entry: 10335ee34; end: 10335f133;  */

void FUN_10335ee34(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar3 = *param_1;
  FUN_10335f134(uVar3,param_3,param_4,param_6,param_7,param_8,param_9);
  puVar4 = &UNK_110642b68;
  func_0x000107c613fc(&UNK_110642b68,0x29,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  *(undefined8 *)(puVar4 + 0x20) = param_5;
  puVar4[0x28] = (char)param_6;
  puVar5 = &UNK_110642b90;
  func_0x000107c613fc(&UNK_110642b90,0x48,7);
  *(code **)(puVar5 + 0x10) = FUN_10335fd0c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(puVar5 + 0x28) = 0x635374696d627573;
  *(undefined8 *)(puVar5 + 0x30) = 0xeb0000000065726f;
  *(undefined8 *)(puVar5 + 0x38) = param_10;
  *(undefined8 *)(puVar5 + 0x40) = param_11;
  puVar6 = &UNK_110642bb8;
  func_0x000107c613fc(&UNK_110642bb8,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10335fd40;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_70 = FUN_10335fd54;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100f15b68;
  puStack_78 = &UNK_110642bd0;
  ppuVar7 = &puStack_90;
  puStack_68 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar8 = puStack_68;
  func_0x000107c61434(param_4);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_110642c08;
  func_0x000107c613fc(&UNK_110642c08,0x38,7);
  *(undefined8 *)(puVar8 + 0x10) = param_2;
  *(undefined8 *)(puVar8 + 0x18) = 0x635374696d627573;
  *(undefined8 *)(puVar8 + 0x20) = 0xeb0000000065726f;
  *(undefined8 *)(puVar8 + 0x28) = param_10;
  *(undefined8 *)(puVar8 + 0x30) = param_11;
  puVar9 = &UNK_110642c30;
  func_0x000107c613fc(&UNK_110642c30,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_10335fdc4;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_70 = (code *)0x10335ffc0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100e27b38;
  puStack_78 = &UNK_110642c48;
  ppuVar10 = &puStack_90;
  puStack_68 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar1 = puStack_68;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(uVar3);
  func_0x000107c61574(puVar4);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar5);
  puVar4 = puVar6;
  func_0x000107c61544(puVar6,"",0x81,0x90,0x1d,1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10335f130);
    (*pcVar2)();
  }
  puVar4 = puVar9;
  func_0x000107c61544(puVar9,"",0x81,0x97,0x15,1);
  func_0x000107c61574(puVar9);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10335f134);
  (*pcVar2)();
}



/* Entry: 10335f134; end: 10335f2af;  */

void FUN_10335f134(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  uVar6 = *unaff_x20;
  puVar3 = &UNK_110642cd0;
  func_0x000107c613fc(&UNK_110642cd0,0x48,7);
  *(undefined8 **)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  puVar3[0x28] = param_4;
  puVar3[0x29] = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = uVar6;
  puVar4 = &UNK_110642cf8;
  func_0x000107c613fc(&UNK_110642cf8,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10335fea4;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  uStack_70 = 0x10335ffc4;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_100f15b68;
  puStack_78 = &UNK_110642d10;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_7);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x81,0x79,0x1d,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10335f2b0);
  (*pcVar2)();
}



/* Entry: 10335f2b0; end: 10335f37b;  */

void FUN_10335f2b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x15);
  func_0x000107c6142c(uStack_48);
  uStack_50 = 0xd000000000000013;
  uStack_48 = 0x800000010f140890;
  func_0x000107c614cc(param_1,auStack_58,auStack_70);
  uVar1 = uStack_60;
  func_0x000107c60640(uStack_68,uStack_60);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar1);
  uVar1 = uStack_48;
  FUN_10335ed04(3,uStack_50,uStack_48,param_3,param_4);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 10335f37c; end: 10335fac7;  */

/* WARNING: Removing unreachable block (ram,0x00010335f438) */

void FUN_10335f37c(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined1 auStack_1b8 [24];
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_120;
  undefined8 *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 uStack_d0;
  undefined8 auStack_c8 [4];
  undefined1 uStack_a8;
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = (undefined8 *)0x0;
  puVar8 = (undefined8 *)0x0;
  puVar9 = param_5;
  puVar10 = param_6;
  func_0x000107c61428(param_2 + 0x10,auStack_80,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((param_1 & 1) != 0) {
      uStack_f0 = 0x101;
      uVar1 = 0;
      func_0x000107c5eb54();
      func_0x000107c613fc();
      func_0x000107c5eb50();
      uVar12 = uVar1;
      func_0x00010335fedc();
      puVar5 = &UNK_110642e50;
      puVar2 = &uStack_f0;
      func_0x000107c5eb4c(puVar2,&UNK_110642e50,uVar12);
      func_0x000107c61574(uVar1);
      puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x000107c61168();
      puVar4 = puVar2;
      func_0x000107c5ee20(puVar2,puVar5);
      auStack_c8[0] = 0;
      puVar9 = auStack_c8;
      func_0x000107c3ab8c();
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      uVar12 = auStack_c8[0];
      func_0x000107c61174();
      if (puVar3 == (undefined *)0x0) {
        uVar1 = uVar12;
        func_0x000107c5ed30();
        func_0x000107c61170(uVar12);
        func_0x000107c61654();
        func_0x00010006c090(puVar2,puVar5);
        func_0x000107c614ac(uVar1);
        puStack_118 = (undefined8 *)0x0;
        puStack_120 = (undefined *)0x0;
        puStack_108 = (undefined *)0x0;
        puStack_110 = (undefined *)0x0;
      }
      else {
        func_0x000107c60234(&puStack_120,puVar3);
        func_0x00010006c090(puVar2,puVar5);
        func_0x000107c615e8(puVar3);
        if (puStack_108 != (undefined *)0x0) {
          func_0x000100102924(&puStack_120,auStack_a0);
          func_0x0001000bb420(auStack_a0,auStack_c8);
          uStack_a8 = 0;
          uVar12 = *(undefined8 *)(param_2 + 0x40);
          puVar7 = (undefined8 *)&UNK_10db0ff90;
          puVar8 = puVar7;
          FUN_10335fe14(auStack_c8,&uStack_f0,0x112ee4d20,&UNK_10db0ff90);
          puVar5 = &UNK_110642d48;
          func_0x000107c613fc(&UNK_110642d48,0x41,7);
          *(undefined8 **)(puVar5 + 0x10) = param_5;
          *(undefined8 **)(puVar5 + 0x18) = param_6;
          *(undefined8 *)(puVar5 + 0x28) = uStack_e8;
          *(ulong *)(puVar5 + 0x20) = CONCAT62(uStack_ee,uStack_f0);
          *(undefined8 *)(puVar5 + 0x38) = uStack_d8;
          *(undefined8 *)(puVar5 + 0x30) = uStack_e0;
          puVar5[0x40] = uStack_d0;
          uStack_100 = 0x10335ffa4;
          puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
          puStack_118 = (undefined8 *)0x42000000;
          puStack_110 = &UNK_1000f6b44;
          puStack_108 = &UNK_110642d60;
          ppuVar6 = &puStack_120;
          puStack_f8 = puVar5;
          func_0x000107c60bc4();
          puVar5 = puStack_f8;
          func_0x000107c6157c(param_6);
          func_0x000107c61574(puVar5);
          func_0x000107c4e524(uVar12);
          func_0x000107c60bd0(ppuVar6);
          FUN_10335ff1c(auStack_c8,0x112ee4d20,&UNK_10db0ff90);
          FUN_10335fe5c(auStack_a0);
          func_0x000107c61574(param_2);
          goto LAB_10335f4e0;
        }
      }
      FUN_10335ff1c(&puStack_120,0x112d387f8,&UNK_10d902650);
    }
    puStack_120 = (undefined *)0x0;
    puStack_118 = (undefined8 *)0xe000000000000000;
    func_0x000107c602fc(0x3b);
    func_0x000107c5fb78(0xd000000000000039,0x800000010f1408f0);
    func_0x000107c5fb78(param_3,param_4);
    puVar9 = puStack_118;
    puVar7 = puStack_118;
    FUN_10335ed04(3,puStack_120,puStack_118,param_5);
    func_0x000107c61574(param_2);
    func_0x000107c6142c(puVar9);
    puVar8 = param_5;
    puVar9 = param_6;
  }
LAB_10335f4e0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    func_0x0001000d224c(auStack_1b8);
    func_0x0001000a8868(auStack_1b8,uStack_1a0);
    uVar11 = 1;
    if (((ulong)puVar9 & 0xff) == 0) {
      uVar11 = 2;
    }
    (**(code **)(lStack_198 + 0x20))
              (puVar7,puVar8,uVar11,10,puVar10,param_7,param_8,uStack_1a0,lStack_198);
    FUN_10335fe5c(auStack_1b8);
    return;
  }
  return;
}



/* Entry: 10335fac8; end: 10335fbd7;  */

void FUN_10335fac8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x15);
  uVar1 = uStack_58;
  func_0x000107c61434(param_4);
  func_0x000107c6142c(uVar1);
  uStack_60 = param_3;
  uStack_58 = param_4;
  func_0x000107c5fb78(0xd000000000000011,0x800000010f1408b0);
  if (param_1 == 0) {
    uStack_70 = 0xe700000000000000;
  }
  else {
    func_0x000107c614cc(param_1,auStack_68,auStack_80);
    func_0x000107c60640(uStack_78,uStack_70);
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(uStack_70);
  uVar1 = uStack_58;
  FUN_10335ed04(3,uStack_60,uStack_58,param_5,param_6);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 10335fbd8; end: 10335fc13;  */

void FUN_10335fbd8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10335fc14; end: 10335fc1b;  */

undefined8 FUN_10335fc14(void)

{
  return 1;
}



/* Entry: 10335fc1c; end: 10335fc47;  */

undefined1  [16] FUN_10335fc1c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x000107c61434(*(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 10335fc48; end: 10335fc7f;  */

/* WARNING: Possible PIC construction at 0x00010335e670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010335ec00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010335eb8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010335eb4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010335e898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010335e83c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010335e89c) */
/* WARNING: Removing unreachable block (ram,0x00010335eb50) */
/* WARNING: Removing unreachable block (ram,0x00010335eb90) */
/* WARNING: Removing unreachable block (ram,0x00010335ec04) */
/* WARNING: Removing unreachable block (ram,0x00010335e674) */
/* WARNING: Removing unreachable block (ram,0x00010335e818) */
/* WARNING: Removing unreachable block (ram,0x00010335e678) */
/* WARNING: Removing unreachable block (ram,0x00010335e688) */
/* WARNING: Removing unreachable block (ram,0x00010335e698) */
/* WARNING: Removing unreachable block (ram,0x00010335e874) */
/* WARNING: Removing unreachable block (ram,0x00010335e6a0) */
/* WARNING: Removing unreachable block (ram,0x00010335e6c4) */
/* WARNING: Removing unreachable block (ram,0x00010335e6cc) */
/* WARNING: Removing unreachable block (ram,0x00010335e91c) */
/* WARNING: Removing unreachable block (ram,0x00010335e934) */
/* WARNING: Removing unreachable block (ram,0x00010335e940) */
/* WARNING: Removing unreachable block (ram,0x00010335eb34) */
/* WARNING: Removing unreachable block (ram,0x00010335e958) */
/* WARNING: Removing unreachable block (ram,0x00010335e6e0) */
/* WARNING: Removing unreachable block (ram,0x00010335e73c) */
/* WARNING: Removing unreachable block (ram,0x00010335ea2c) */
/* WARNING: Removing unreachable block (ram,0x00010335e794) */
/* WARNING: Removing unreachable block (ram,0x00010335eab8) */
/* WARNING: Removing unreachable block (ram,0x00010335ead4) */
/* WARNING: Removing unreachable block (ram,0x00010335eae4) */
/* WARNING: Removing unreachable block (ram,0x00010335eb88) */
/* WARNING: Removing unreachable block (ram,0x00010335eaec) */
/* WARNING: Removing unreachable block (ram,0x00010335eb94) */
/* WARNING: Removing unreachable block (ram,0x00010335ecf8) */
/* WARNING: Removing unreachable block (ram,0x00010335eb28) */
/* WARNING: Removing unreachable block (ram,0x00010335eba0) */
/* WARNING: Removing unreachable block (ram,0x00010335eba4) */
/* WARNING: Removing unreachable block (ram,0x00010335e7f8) */
/* WARNING: Removing unreachable block (ram,0x00010335ea50) */
/* WARNING: Removing unreachable block (ram,0x00010335ea80) */
/* WARNING: Removing unreachable block (ram,0x00010335ea98) */
/* WARNING: Removing unreachable block (ram,0x00010335e840) */
/* WARNING: Removing unreachable block (ram,0x00010335e8cc) */
/* WARNING: Removing unreachable block (ram,0x00010335ed00) */
/* WARNING: Removing unreachable block (ram,0x00010335e8f8) */

void FUN_10335fc48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x0001009438f0();
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61434(uVar2);
  func_0x0001043492ac(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10335fc80; end: 10335fcbf;  */

void FUN_10335fc80(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10335ee34(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x31),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 10335fcc0; end: 10335fccb;  */

void FUN_10335fcc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x15,*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(uStack_48);
  uStack_50 = 0xd000000000000013;
  uStack_48 = 0x800000010f140890;
  func_0x000107c614cc(param_1,auStack_58,auStack_70);
  uVar2 = uStack_60;
  func_0x000107c60640(uStack_68,uStack_60);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  uVar2 = uStack_48;
  FUN_10335ed04(3,uStack_50,uStack_48,uVar1,uVar3);
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 10335fccc; end: 10335fd0b;  */

void FUN_10335fccc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bd28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb4264;
  func_0x000107c61520(&UNK_10dbb4264,&UNK_110642f58);
  puRam0000000112f5bd28 = puVar1;
  return;
}



/* Entry: 10335fd0c; end: 10335fd3f;  */

void FUN_10335fd0c(byte *param_1,byte param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_10335ffc8();
  *param_1 = param_2 & 1;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  param_1[0x18] = param_5;
  return;
}



/* Entry: 10335fd40; end: 10335fd53;  */

/* WARNING: Removing unreachable block (ram,0x00010335f858) */

void FUN_10335fd40(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  undefined **ppuVar15;
  undefined8 *puVar16;
  long lVar17;
  long unaff_x20;
  undefined **ppuVar18;
  long lVar19;
  code *pcVar20;
  undefined1 auStack_1b0 [8];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 auStack_198 [8];
  undefined **ppuStack_190;
  undefined **ppuStack_188;
  undefined1 *puStack_180;
  undefined *puStack_178;
  undefined **ppuStack_170;
  long lStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  long lStack_150;
  undefined8 *puStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined *puStack_128;
  undefined **ppuStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  code *pcStack_108;
  undefined **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined1 uStack_d8;
  undefined8 auStack_d0 [4];
  undefined1 uStack_b0;
  undefined *apuStack_a8 [4];
  undefined1 auStack_88 [32];
  long lStack_68;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar17 = *(long *)(unaff_x20 + 0x20);
  puVar2 = *(undefined **)(unaff_x20 + 0x28);
  ppuVar8 = *(undefined ***)(unaff_x20 + 0x30);
  ppuVar9 = *(undefined ***)(unaff_x20 + 0x38);
  puVar16 = *(undefined8 **)(unaff_x20 + 0x40);
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = ppuVar8;
  if (param_1 == 0) {
    param_1 = 0;
    pcVar20 = (code *)0xc000000000000000;
  }
  else {
    pcVar20 = pcVar1;
    func_0x000107c5ee30(param_1,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  }
  (*pcVar1)(auStack_88,param_1,pcVar20);
  func_0x00010006c090(param_1,pcVar20);
  uVar3 = 0;
  func_0x000107c5eb54();
  func_0x000107c613fc();
  func_0x000107c5eb50();
  uVar4 = uVar3;
  FUN_10335fdd4();
  puVar11 = &UNK_110642ed0;
  puVar5 = auStack_88;
  func_0x000107c5eb4c(puVar5,&UNK_110642ed0,uVar4);
  func_0x000107c61574(uVar3);
  puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar7 = puVar5;
  func_0x000107c5ee20(puVar5,puVar11);
  auStack_d0[0] = 0;
  puVar14 = auStack_d0;
  func_0x000107c3ab8c();
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  uVar4 = auStack_d0[0];
  func_0x000107c61174(auStack_d0[0]);
  if (puVar6 == (undefined *)0x0) {
    uVar3 = uVar4;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar4);
    func_0x000107c61654();
    func_0x00010006c090(puVar5,puVar11);
    func_0x000107c614ac(uVar3);
    puStack_128 = (undefined *)0x0;
    ppuStack_120 = (undefined **)0xe000000000000000;
    func_0x000107c602fc(0x19);
    ppuVar18 = ppuStack_120;
    func_0x000107c61434(ppuVar8);
    func_0x000107c6142c(ppuVar18);
    puStack_128 = puVar2;
    ppuStack_120 = ppuVar8;
    func_0x000107c5fb78(0xd000000000000017,0x800000010f1408d0);
    ppuVar18 = ppuStack_120;
    ppuVar12 = ppuStack_120;
    ppuVar13 = ppuVar9;
    puVar14 = puVar16;
    FUN_10335ed04(3,puStack_128,ppuStack_120,ppuVar9,puVar16);
    ppuVar10 = ppuVar18;
    func_0x000107c6142c();
    lVar19 = lVar17;
  }
  else {
    func_0x000107c60234(&puStack_128,puVar6);
    func_0x00010006c090(puVar5,puVar11);
    func_0x000107c615e8(puVar6);
    func_0x000100102924(&puStack_128,apuStack_a8);
    func_0x0001000bb420(apuStack_a8,auStack_d0);
    uStack_b0 = 0;
    lVar19 = *(long *)(lVar17 + 0x40);
    lVar17 = 0x112ee4d20;
    ppuVar18 = (undefined **)&UNK_10db0ff90;
    ppuVar13 = ppuVar18;
    FUN_10335fe14(auStack_d0,&puStack_f8,0x112ee4d20);
    ppuVar8 = (undefined **)&UNK_110642c80;
    func_0x000107c613fc(&UNK_110642c80,0x41,7);
    ppuVar8[2] = (undefined *)ppuVar9;
    ppuVar8[3] = (undefined *)puVar16;
    ppuVar8[5] = puStack_f0;
    ppuVar8[4] = puStack_f8;
    ppuVar8[7] = puStack_e0;
    ppuVar8[6] = puStack_e8;
    *(undefined1 *)(ppuVar8 + 8) = uStack_d8;
    pcStack_108 = FUN_10335fe7c;
    puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
    ppuStack_120 = (undefined **)0x42000000;
    puStack_118 = &UNK_1000f6b44;
    puStack_110 = &UNK_110642c98;
    ppuVar9 = &puStack_128;
    ppuStack_100 = ppuVar8;
    func_0x000107c60bc4();
    ppuVar8 = ppuStack_100;
    func_0x000107c6157c(puVar16);
    func_0x000107c61574(ppuVar8);
    func_0x000107c4e524(lVar19);
    func_0x000107c60bd0(ppuVar9);
    ppuVar12 = ppuVar18;
    FUN_10335ff1c(auStack_d0,0x112ee4d20);
    ppuVar10 = apuStack_a8;
    FUN_10335fe5c();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    func_0x000107c60e78();
    pcStack_138 = FUN_10335fac8;
    ppuStack_190 = (undefined **)0x0;
    ppuStack_188 = (undefined **)0xe000000000000000;
    puStack_180 = puVar5;
    puStack_178 = puVar2;
    ppuStack_170 = ppuVar8;
    lStack_168 = lVar19;
    ppuStack_160 = ppuVar9;
    ppuStack_158 = ppuVar18;
    lStack_150 = lVar17;
    puStack_148 = puVar16;
    puStack_140 = &stack0xfffffffffffffff0;
    func_0x000107c602fc(0x15);
    ppuVar9 = ppuStack_188;
    func_0x000107c61434(ppuVar13);
    func_0x000107c6142c(ppuVar9);
    ppuStack_190 = ppuVar12;
    ppuStack_188 = ppuVar13;
    func_0x000107c5fb78(0xd000000000000011,0x800000010f1408b0);
    if (ppuVar10 == (undefined **)0x0) {
      uStack_1a0 = 0xe700000000000000;
    }
    else {
      func_0x000107c614cc(ppuVar10,auStack_198,auStack_1b0);
      func_0x000107c60640(uStack_1a8,uStack_1a0);
    }
    func_0x000107c5fb78();
    func_0x000107c6142c(uStack_1a0);
    ppuVar9 = ppuStack_188;
    FUN_10335ed04(3,ppuStack_190,ppuStack_188,puVar14,ppuVar15);
    func_0x000107c6142c(ppuVar9);
    return;
  }
  return;
}



/* Entry: 10335fd54; end: 10335fd73;  */

void FUN_10335fd54(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10335fd74; end: 10335fd8f;  */

void FUN_10335fd74(long param_1,long param_2)

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



/* Entry: 10335fd90; end: 10335fdc3;  */

void FUN_10335fd90(void)

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



/* Entry: 10335fdc4; end: 10335fdd3;  */

void FUN_10335fdc4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x15,*(undefined8 *)(unaff_x20 + 0x10));
  uVar4 = uStack_58;
  func_0x000107c61434(uVar1);
  func_0x000107c6142c(uVar4);
  uStack_60 = uVar2;
  uStack_58 = uVar1;
  func_0x000107c5fb78(0xd000000000000011,0x800000010f1408b0);
  if (param_1 == 0) {
    uStack_70 = 0xe700000000000000;
  }
  else {
    func_0x000107c614cc(param_1,auStack_68,auStack_80);
    func_0x000107c60640(uStack_78,uStack_70);
  }
  func_0x000107c5fb78();
  func_0x000107c6142c(uStack_70);
  uVar1 = uStack_58;
  FUN_10335ed04(3,uStack_60,uStack_58,uVar3,uVar5);
  func_0x000107c6142c(uVar1);
  return;
}



/* Entry: 10335fdd4; end: 10335fe13;  */

void FUN_10335fdd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bd30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb423c;
  func_0x000107c61520(&UNK_10dbb423c,&UNK_110642ed0);
  puRam0000000112f5bd30 = puVar1;
  return;
}



/* Entry: 10335fe14; end: 10335fe5b;  */

undefined8 FUN_10335fe14(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10335fe5c; end: 10335fe7b;  */

void FUN_10335fe5c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010335fe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 10335fe7c; end: 10335fea3;  */

void FUN_10335fe7c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),unaff_x20 + 0x20);
  return;
}



/* Entry: 10335fea4; end: 10335ff1b;  */

void FUN_10335fea4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010335f6dc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                      *(undefined1 *)(unaff_x20 + 0x29),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 10335ff1c; end: 10335ff5b;  */

undefined8 FUN_10335ff1c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10335ff5c; end: 10335ff8f;  */

void FUN_10335ff5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(char *)(unaff_x20 + 0x40) == '\0') {
    FUN_10335fe5c(unaff_x20 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10335ff90; end: 10335ffc7;  */

void FUN_10335ff90(long param_1,long param_2)

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



/* Entry: 10335ffc8; end: 103360113;  */

undefined1  [16] FUN_10335ffc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  FUN_103360114();
  func_0x000107c614e8();
  func_0x000107c5ee20(param_1,param_2);
  func_0x000107c4e380();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  uVar3 = 0;
  if (lVar2 == 0) {
    uVar5 = uVar3;
    func_0x000107c61174();
    func_0x000107c5ed30(0);
    func_0x000107c61170(uVar5);
    func_0x000107c61654();
    func_0x000107c614ac(uVar3);
  }
  else {
    func_0x000107c61174();
    lVar4 = lVar2;
    func_0x000107c447a8();
    if ((int)lVar4 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      lVar4 = lVar2;
      func_0x000107c3fbb4();
      func_0x000107c61180();
      if (lVar4 == 0) goto LAB_103360110;
      func_0x000107c519c8();
      func_0x000107c61170(lVar4);
      func_0x000107c61170(lVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    auVar7._8_8_ = param_3;
    auVar7._0_8_ = 1;
    return auVar7;
  }
  func_0x000107c60e78();
LAB_103360110:
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103360114);
  (*pcVar1)();
}



/* Entry: 103360114; end: 103360157;  */

void FUN_103360114(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e5af90 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126be180;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e5af90 = puVar1;
  return;
}



/* Entry: 103360158; end: 103360367;  */

int FUN_103360158(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 4;
    if (param_2 + 0xff01 < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xff01 < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_1033601d4;
        goto LAB_1033601b4;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1033601b4:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xff01;
    }
  }
LAB_1033601d4:
  uVar1 = 0xffffffff;
  if (1 < (byte)*param_1) {
    uVar1 = (byte)*param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103360368; end: 1033603a3;  */

undefined8 * FUN_103360368(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1033603a4; end: 1033603ff;  */

undefined8 * FUN_1033603a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 103360400; end: 103360443;  */

undefined8 * FUN_103360400(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 103360444; end: 1033604df;  */

int FUN_103360444(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1033604e0; end: 10336064f;  */

void FUN_1033604e0(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x69646e6563736564;
  if (cVar2 != '\x01') {
    uVar1 = 0x6e69646e65637361;
  }
  uVar3 = 0xea0000000000676e;
  if (cVar2 != '\x01') {
    uVar3 = 0xe900000000000067;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 103360650; end: 1033606c7;  */

void FUN_103360650(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1033606c8; end: 10336070f;  */

void FUN_1033606c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x69646e6563736564;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6e69646e65637361;
  }
  uVar2 = 0xea0000000000676e;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe900000000000067;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 103360710; end: 10336076b;  */

void FUN_103360710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x0001033617a0();
  func_0x000107c5fc40(param_1,param_2,param_3,param_4,uVar1);
  return;
}



/* Entry: 10336076c; end: 1033607cf;  */

undefined1  [16] FUN_10336076c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar4 = *unaff_x20;
  uVar1 = 0x65726f6373;
  if (cVar4 != '\x01') {
    uVar1 = 0x676e69726564726f;
  }
  uVar2 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0xe800000000000000;
  }
  uVar3 = 0xed00006449647261;
  uVar5 = 0x6f6272656461656c;
  if (cVar4 != '\0') {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = uVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Entry: 1033607d0; end: 1033607f3;  */

void FUN_1033607d0(undefined1 *param_1,undefined1 param_2)

{
  FUN_103360e38();
  *param_1 = param_2;
  return;
}



/* Entry: 1033607f4; end: 1033607ff;  */

undefined1  [16] FUN_1033607f4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103360800; end: 10336084f;  */

void FUN_103360800(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103361118();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103360850; end: 10336087f;  */

void FUN_103360850(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long unaff_x21;
  
  FUN_103360f50();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    *(undefined1 *)(param_1 + 3) = param_5;
  }
  return;
}



/* Entry: 103360880; end: 1033609eb;  */

void FUN_103360880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 *puVar5;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112f5bd58;
  uStack_68 = param_3;
  func_0x0001000285a8(0x112f5bd58,&UNK_10dbb4298);
  lVar4 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x000103361198();
  func_0x000107c606ec(puVar5,&UNK_110643088,&UNK_110643088,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c60540(param_2,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c6054c(uStack_68,&uStack_52,lVar3);
    uStack_53 = 2;
    func_0x000107c60538(param_4,param_5,&uStack_53,lVar3);
    (**(code **)(lVar4 + 8))(puVar5,lVar3);
  }
  else {
    (**(code **)(lVar4 + 8))(puVar5,lVar3);
  }
  return;
}



/* Entry: 1033609ec; end: 103360a47;  */

undefined1  [16] FUN_1033609ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar3 = *unaff_x20;
  uVar4 = 0xee0065726f635364;
  uVar2 = 0x657474696d627573;
  if (cVar3 != '\x01') {
    uVar4 = 0xe800000000000000;
    uVar2 = 0x65726f635377656e;
  }
  uVar1 = 0x6b6f;
  if (cVar3 != '\0') {
    uVar1 = uVar2;
  }
  uVar2 = 0xe200000000000000;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Entry: 103360a48; end: 103360a6b;  */

void FUN_103360a48(undefined1 *param_1,undefined1 param_2)

{
  FUN_1033617e0();
  *param_1 = param_2;
  return;
}



/* Entry: 103360a6c; end: 103360a77;  */

undefined1  [16] FUN_103360a6c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103360a78; end: 103360ac7;  */

void FUN_103360a78(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000103361198();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103360ac8; end: 103360ae7;  */

void FUN_103360ac8(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_103360880(param_1,*unaff_x20,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20[0x18]);
  return;
}



/* Entry: 103360ae8; end: 103360c13;  */

void FUN_103360ae8(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [14];
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112f5bd68;
  func_0x0001000285a8(0x112f5bd68,&UNK_10dbb42a0);
  lVar5 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_60 + -extraout_x8;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar1);
  func_0x0001033611d8();
  func_0x000107c606ec(puVar4,&UNK_110642ff8,&UNK_110642ff8,param_1,uVar1,uVar2);
  uStack_51 = 0;
  func_0x000107c60540(param_2 & 1,&uStack_51,lVar3);
  if (unaff_x21 == 0) {
    uStack_52 = 1;
    func_0x000107c60540(param_2 >> 8 & 1,&uStack_52,lVar3);
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  else {
    (**(code **)(lVar5 + 8))(puVar4,lVar3);
  }
  return;
}



/* Entry: 103360c14; end: 103360c97;  */

void FUN_103360c14(void)

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



/* Entry: 103360c98; end: 103360ccb;  */

undefined1  [16] FUN_103360c98(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x65746e6573657270;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6b6f;
  }
  uVar2 = 0xe900000000000064;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe200000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 103360ccc; end: 103360da3;  */

void FUN_103360ccc(undefined1 *param_1,long param_2,long param_3)

{
  ulong uVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x6b6f || param_3 != -0x1e00000000000000) {
    uVar1 = 0x6b6f;
    func_0x000107c605b8(0x6b6f,0xe200000000000000,param_2,param_3,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0;
      if ((param_2 == 0x65746e6573657270) && (param_3 == -0x16ffffffffffff9c)) {
        func_0x000107c6142c(0xe900000000000064);
        uVar2 = 1;
      }
      else {
        func_0x000107c605b8(0x65746e6573657270,0xe900000000000064,param_2,param_3,0);
        func_0x000107c6142c(param_3);
        uVar2 = 1;
        if ((uVar1 & 1) == 0) {
          uVar2 = 2;
        }
      }
      goto LAB_103360d24;
    }
  }
  func_0x000107c6142c(param_3);
  uVar2 = 0;
LAB_103360d24:
  *param_1 = uVar2;
  return;
}



/* Entry: 103360da4; end: 103360dbb;  */

undefined1  [16] FUN_103360da4(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 103360dbc; end: 103360e0b;  */

void FUN_103360dbc(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001033611d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 103360e0c; end: 103360e37;  */

void FUN_103360e0c(undefined8 param_1)

{
  uint uVar1;
  byte *unaff_x20;
  
  uVar1 = 0x100;
  if (unaff_x20[1] == 0) {
    uVar1 = 0;
  }
  FUN_103360ae8(param_1,uVar1 | *unaff_x20);
  return;
}



/* Entry: 103360e38; end: 103360f4f;  */

undefined4 FUN_103360e38(long param_1,long param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if ((param_1 == 0x6f6272656461656c && param_2 == -0x12ffff9bb69b8d9f) ||
     (func_0x000107c605b8(0x6f6272656461656c,0xed00006449647261,param_1,param_2,0), (uVar1 & 1) != 0
     )) {
    func_0x000107c6142c(param_2);
    uVar2 = 0;
  }
  else {
    uVar1 = 0x65726f6373;
    if (((param_1 == 0x65726f6373) && (param_2 == -0x1b00000000000000)) ||
       (func_0x000107c605b8(0x65726f6373,0xe500000000000000,param_1,param_2,0), (uVar1 & 1) != 0)) {
      func_0x000107c6142c(param_2);
      uVar2 = 1;
    }
    else {
      uVar1 = 0x676e69726564726f;
      if ((param_1 == 0x676e69726564726f) && (param_2 == -0x1800000000000000)) {
        func_0x000107c6142c(0xe800000000000000);
        uVar2 = 2;
      }
      else {
        func_0x000107c605b8(0x676e69726564726f,0xe800000000000000,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        uVar2 = 2;
        if ((uVar1 & 1) == 0) {
          uVar2 = 3;
        }
      }
    }
  }
  return uVar2;
}



/* Entry: 103360f50; end: 103361117;  */

/* WARNING: Removing unreachable block (ram,0x000103361090) */
/* WARNING: Removing unreachable block (ram,0x0001033610f4) */
/* WARNING: Removing unreachable block (ram,0x000103361018) */

undefined1 * FUN_103360f50(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112f5bd40;
  func_0x0001000285a8(0x112f5bd40,&UNK_10dbb4290);
  lVar6 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  func_0x0001000a8868(param_1,uVar1);
  FUN_103361118();
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110643118,&UNK_110643118,lVar3,
                      uVar1,puVar4);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar4 = &uStack_51;
    func_0x000107c604f4(puVar4,lVar2);
    uStack_52 = 1;
    puVar5 = &uStack_52;
    func_0x000107c60500(puVar5,lVar2);
    uStack_54 = 2;
    func_0x000103361158();
    func_0x000107c604e8(&uStack_53,&UNK_1106431c8,&uStack_54,lVar2,&UNK_1106431c8,puVar5);
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar2);
    func_0x0001000834e4(param_1);
  }
  else {
    func_0x0001000834e4(param_1);
  }
  return puVar4;
}



/* Entry: 103361118; end: 103361217;  */

void FUN_103361118(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bd48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb4644;
  func_0x000107c61520(&UNK_10dbb4644,&UNK_110643118);
  puRam0000000112f5bd48 = puVar1;
  return;
}



/* Entry: 103361218; end: 1033614fb;  */

void FUN_103361218(void)

{
  return;
}



/* Entry: 1033614fc; end: 10336153b;  */

void FUN_1033614fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bd78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb432c;
  func_0x000107c61520(&UNK_10dbb432c,&UNK_1106431c8);
  puRam0000000112f5bd78 = puVar1;
  return;
}



/* Entry: 10336153c; end: 10336153f;  */

void FUN_10336153c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bd80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb43e4;
  func_0x000107c61520(&UNK_10dbb43e4,&UNK_110643118);
  puRam0000000112f5bd80 = puVar1;
  return;
}



/* Entry: 103361540; end: 10336157f;  */

void FUN_103361540(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bd80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb43e4;
  func_0x000107c61520(&UNK_10dbb43e4,&UNK_110643118);
  puRam0000000112f5bd80 = puVar1;
  return;
}



/* Entry: 103361580; end: 103361583;  */

void FUN_103361580(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bd88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb449c;
  func_0x000107c61520(&UNK_10dbb449c,&UNK_110643088);
  puRam0000000112f5bd88 = puVar1;
  return;
}



/* Entry: 103361584; end: 1033615c3;  */

void FUN_103361584(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bd88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb449c;
  func_0x000107c61520(&UNK_10dbb449c,&UNK_110643088);
  puRam0000000112f5bd88 = puVar1;
  return;
}



/* Entry: 1033615c4; end: 1033615c7;  */

void FUN_1033615c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bd90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb4554;
  func_0x000107c61520(&UNK_10dbb4554,&UNK_110642ff8);
  puRam0000000112f5bd90 = puVar1;
  return;
}



/* Entry: 1033615c8; end: 103361607;  */

void FUN_1033615c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bd90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb4554;
  func_0x000107c61520(&UNK_10dbb4554,&UNK_110642ff8);
  puRam0000000112f5bd90 = puVar1;
  return;
}



/* Entry: 103361608; end: 10336160b;  */

void FUN_103361608(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bd98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb44ec;
  func_0x000107c61520(&UNK_10dbb44ec,&UNK_110642ff8);
  puRam0000000112f5bd98 = puVar1;
  return;
}



/* Entry: 10336160c; end: 10336164b;  */

void FUN_10336160c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bd98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb44ec;
  func_0x000107c61520(&UNK_10dbb44ec,&UNK_110642ff8);
  puRam0000000112f5bd98 = puVar1;
  return;
}



/* Entry: 10336164c; end: 10336164f;  */

void FUN_10336164c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bda0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb44c4;
  func_0x000107c61520(&UNK_10dbb44c4,&UNK_110642ff8);
  puRam0000000112f5bda0 = puVar1;
  return;
}



/* Entry: 103361650; end: 10336168f;  */

void FUN_103361650(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bda0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb44c4;
  func_0x000107c61520(&UNK_10dbb44c4,&UNK_110642ff8);
  puRam0000000112f5bda0 = puVar1;
  return;
}



/* Entry: 103361690; end: 103361693;  */

void FUN_103361690(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bda8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb4434;
  func_0x000107c61520(&UNK_10dbb4434,&UNK_110643088);
  puRam0000000112f5bda8 = puVar1;
  return;
}



/* Entry: 103361694; end: 1033616d3;  */

void FUN_103361694(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bda8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb4434;
  func_0x000107c61520(&UNK_10dbb4434,&UNK_110643088);
  puRam0000000112f5bda8 = puVar1;
  return;
}



/* Entry: 1033616d4; end: 1033616d7;  */

void FUN_1033616d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bdb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb440c;
  func_0x000107c61520(&UNK_10dbb440c,&UNK_110643088);
  puRam0000000112f5bdb0 = puVar1;
  return;
}



/* Entry: 1033616d8; end: 103361717;  */

void FUN_1033616d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bdb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb440c;
  func_0x000107c61520(&UNK_10dbb440c,&UNK_110643088);
  puRam0000000112f5bdb0 = puVar1;
  return;
}



/* Entry: 103361718; end: 10336171b;  */

void FUN_103361718(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bdb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb437c;
  func_0x000107c61520(&UNK_10dbb437c,&UNK_110643118);
  puRam0000000112f5bdb8 = puVar1;
  return;
}



/* Entry: 10336171c; end: 10336175b;  */

void FUN_10336171c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bdb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb437c;
  func_0x000107c61520(&UNK_10dbb437c,&UNK_110643118);
  puRam0000000112f5bdb8 = puVar1;
  return;
}



/* Entry: 10336175c; end: 10336175f;  */

void FUN_10336175c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bdc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb4354;
  func_0x000107c61520(&UNK_10dbb4354,&UNK_110643118);
  puRam0000000112f5bdc0 = puVar1;
  return;
}



/* Entry: 103361760; end: 1033617df;  */

void FUN_103361760(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5bdc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb4354;
  func_0x000107c61520(&UNK_10dbb4354,&UNK_110643118);
  puRam0000000112f5bdc0 = puVar1;
  return;
}



/* Entry: 1033617e0; end: 1033618f3;  */

undefined4 FUN_1033617e0(long param_1,long param_2)

{
  ulong uVar1;
  
  if (param_1 != 0x6b6f || param_2 != -0x1e00000000000000) {
    uVar1 = 0x6b6f;
    func_0x000107c605b8(0x6b6f,0xe200000000000000,param_1,param_2,0);
    if ((uVar1 & 1) == 0) {
      uVar1 = 0x657474696d627573;
      if (((param_1 != 0x657474696d627573) || (param_2 != -0x11ff9a8d909cac9c)) &&
         (func_0x000107c605b8(0x657474696d627573,0xee0065726f635364,param_1,param_2,0),
         (uVar1 & 1) == 0)) {
        uVar1 = 0;
        if ((param_1 == 0x65726f635377656e) && (param_2 == -0x1800000000000000)) {
          func_0x000107c6142c(0xe800000000000000);
          return 2;
        }
        func_0x000107c605b8(0x65726f635377656e,0xe800000000000000,param_1,param_2,0);
        func_0x000107c6142c(param_2);
        if ((uVar1 & 1) != 0) {
          return 2;
        }
        return 3;
      }
      func_0x000107c6142c(param_2);
      return 1;
    }
  }
  func_0x000107c6142c(param_2);
  return 0;
}



/* Entry: 1033618f4; end: 103361977;  */

undefined1 FUN_1033618f4(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 103361978; end: 103361a3b;  */

void FUN_103361978(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f5be28;
  func_0x0001000285a8(0x112f5be28,&UNK_10dbb46a0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103361a3c; end: 103361a3f;  */

void FUN_103361a3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5be38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb46b0;
  func_0x000107c61520(&UNK_10dbb46b0,&UNK_1106433d0);
  puRam0000000112f5be38 = puVar1;
  return;
}



/* Entry: 103361a40; end: 103361aab;  */

void FUN_103361a40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5be38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb46b0;
  func_0x000107c61520(&UNK_10dbb46b0,&UNK_1106433d0);
  puRam0000000112f5be38 = puVar1;
  return;
}



/* Entry: 103361aac; end: 103361aaf;  */

void FUN_103361aac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5be50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb4758;
  func_0x000107c61520(&UNK_10dbb4758,&UNK_110643460);
  puRam0000000112f5be50 = puVar1;
  return;
}



/* Entry: 103361ab0; end: 103361b1b;  */

void FUN_103361ab0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5be50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb4758;
  func_0x000107c61520(&UNK_10dbb4758,&UNK_110643460);
  puRam0000000112f5be50 = puVar1;
  return;
}



/* Entry: 103361b1c; end: 103361b9f;  */

void FUN_103361b1c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103361ba0; end: 103361ba3;  */

void FUN_103361ba0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5be68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb47c8;
  func_0x000107c61520(&UNK_10dbb47c8,&UNK_110643460);
  puRam0000000112f5be68 = puVar1;
  return;
}



/* Entry: 103361ba4; end: 103361be3;  */

void FUN_103361ba4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5be68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb47c8;
  func_0x000107c61520(&UNK_10dbb47c8,&UNK_110643460);
  puRam0000000112f5be68 = puVar1;
  return;
}



/* Entry: 103361be4; end: 103361be7;  */

void FUN_103361be4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5be70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb4780;
  func_0x000107c61520(&UNK_10dbb4780,&UNK_110643460);
  puRam0000000112f5be70 = puVar1;
  return;
}



/* Entry: 103361be8; end: 103361c27;  */

void FUN_103361be8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f5be70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbb4780;
  func_0x000107c61520(&UNK_10dbb4780,&UNK_110643460);
  puRam0000000112f5be70 = puVar1;
  return;
}


