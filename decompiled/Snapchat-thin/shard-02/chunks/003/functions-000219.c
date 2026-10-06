/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101bb5278; end: 101bb5297;  */

undefined1  [16] FUN_101bb5278(void)

{
  return ZEXT816(0x110451028);
}



/* Entry: 101bb5298; end: 101bb52d3;  */

/* WARNING: Possible PIC construction at 0x000101bb52c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bb52c4) */

void FUN_101bb5298(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  param_1[3] = &UNK_110451118;
  param_1[4] = &PTR_DAT_110451080;
  *param_1 = uVar2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101bb52d4; end: 101bb537b;  */

void FUN_101bb52d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 auStack_68 [3];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  (**(code **)(lStack_48 + 8))(param_1,param_2,uStack_50,lStack_48);
  func_0x0001000834e4(auStack_68);
  func_0x000100083b20(auStack_68);
  func_0x000107c4bfb0(auStack_68[0]);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(auStack_68[0]);
  return;
}



/* Entry: 101bb537c; end: 101bb538b;  */

undefined1  [16] FUN_101bb537c(void)

{
  return ZEXT816(0x1104510a0);
}



/* Entry: 101bb538c; end: 101bb53e7;  */

/* WARNING: Possible PIC construction at 0x000101bb53a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bb53a4) */

void FUN_101bb538c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101bb53e8; end: 101bb5443;  */

undefined8 * FUN_101bb53e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101bb5444; end: 101bb547f;  */

undefined8 * FUN_101bb5444(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61574(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 101bb5480; end: 101bb551b;  */

int FUN_101bb5480(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101bb551c; end: 101bb55d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb551c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_101bb7b2c();
  lVar4 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112e07040) = 1;
  *(undefined8 *)(lVar4 + _DAT_112e07048) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112e07050) = uVar2;
  *(undefined8 *)(lVar4 + _DAT_112e07058) = uVar6;
  puVar3 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = param_2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_50,puVar3);
  param_1[3] = param_2;
  param_1[4] = &PTR_DAT_1104512d0;
  *param_1 = plVar5;
  return;
}



/* Entry: 101bb55d8; end: 101bb565b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb55d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e07040) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112e07048) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e07050) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e07058) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101bb565c; end: 101bb5817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101bb565c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  long lStack_58;
  
  lVar1 = _DAT_112e07040;
  lVar7 = *(long *)(unaff_x20 + _DAT_112e07040);
  lVar8 = lVar7;
  if (lVar7 != 1) goto LAB_101bb57f0;
  func_0x000100083b20(&lStack_58);
  lVar8 = lStack_58;
  func_0x000107c4cfbc();
  func_0x000107c61180();
  func_0x000107c61170(lStack_58);
  lVar2 = lVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  if (lVar2 == 0) {
LAB_101bb57d4:
    lVar8 = 0;
  }
  else {
    lVar8 = 0x112d53088;
    func_0x000101bb69ac(0x112d53088,&PTR_PTR_1126b6868,0x112d53090,&UNK_10d919920);
    func_0x000107c613fc();
    *(undefined8 *)(lVar8 + 0x18) = 3;
    *(undefined8 *)(lVar8 + 0x10) = 1;
    puVar3 = PTR_PTR_1126b6868;
    func_0x000107c610f8();
    func_0x000107c47924();
    *(undefined **)(lVar8 + 0x20) = puVar3;
    uVar4 = 0;
    func_0x000101bb8df4(0,0x112d53088,&PTR_PTR_1126b6868);
    lVar5 = lVar8;
    func_0x000107c5fc48(lVar8,uVar4);
    func_0x000107c61574(lVar8);
    lVar6 = lVar2;
    func_0x000107c4cfd0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    if (lVar6 == 0) {
      func_0x000107c615e8(lVar2);
      goto LAB_101bb57d4;
    }
    lVar8 = lVar6;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(lVar6);
    if (lVar8 == 0) goto LAB_101bb57d4;
  }
  uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  *(long *)(unaff_x20 + lVar1) = lVar8;
  func_0x000107c615f0(lVar8);
  func_0x000100fe3f08(uVar4);
LAB_101bb57f0:
  func_0x000100fe3f18(lVar7);
  return lVar8;
}



/* Entry: 101bb5818; end: 101bb5d0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101bb5818(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *unaff_x20;
  undefined *puStack_118;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  FUN_101bb631c();
  func_0x000107c613fc();
  lVar1 = param_1;
  FUN_101bb640c();
  FUN_101bb6564();
  func_0x000107c613fc();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101bb763c();
  puStack_a8 = puVar2;
  func_0x0001000285a8(0x112e07060,&UNK_10d9db398);
  func_0x000107c613fc();
  ppuVar3 = &puStack_a8;
  func_0x00010006c248();
  *(undefined ***)(lVar1 + 0x10) = ppuVar3;
  func_0x000107c614f0();
  puVar2 = unaff_x20;
  FUN_101bb565c();
  if (puVar2 == (undefined *)0x0) {
    puVar7 = PTR_PTR_1126ae6b8;
    func_0x000107c61168();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c453e4();
    func_0x000107c4a8a4();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puStack_118 = puVar7;
    func_0x000107c5cb24();
    func_0x000107c61180();
  }
  else {
    func_0x000107c5bc1c();
    func_0x0001000285a8(0x112d530a0,&UNK_10d9db4c0);
    puVar4 = puVar2;
    func_0x000107c4cd74();
    func_0x000107c61180();
    puVar7 = puVar4;
    func_0x0001000b637c();
    func_0x000107c61170(puVar4);
    puVar4 = &UNK_110451478;
    func_0x000107c613fc(&UNK_110451478,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar1;
    *(undefined **)(puVar4 + 0x18) = unaff_x20;
    uVar5 = 0;
    func_0x000101bb8df4(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c6157c(lVar1);
    pcVar6 = FUN_101bb8388;
    func_0x0001000bfde0(FUN_101bb8388,puVar4,uVar5);
    func_0x000107c61574(puVar4);
    func_0x000107c61574();
    func_0x0001004575f0();
    func_0x000107c61574(pcVar6);
    puStack_118 = puVar7;
    func_0x000107c5cb24();
    func_0x000107c61180();
    func_0x000107c615e8(puVar2);
  }
  func_0x000107c61170(puVar7);
  puVar2 = &UNK_110451218;
  func_0x000107c613fc(&UNK_110451218,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar7 = &UNK_110451240;
  func_0x000107c613fc(&UNK_110451240,0x28,7);
  *(undefined **)(puVar7 + 0x10) = puVar2;
  *(long *)(puVar7 + 0x18) = param_1;
  *(long *)(puVar7 + 0x20) = lVar1;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(lVar1);
  func_0x000100083b20(&puStack_a8);
  puVar4 = puStack_a8;
  puVar8 = puStack_a8;
  func_0x000107c43d50();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar8;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  if (puVar4 == (undefined *)0x0) {
    puVar8 = PTR_PTR_1126ae6b8;
    func_0x000107c61168(PTR_PTR_1126ae6b8);
    func_0x000101bb8df4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar5 = 0;
    func_0x000107c6010c(0);
    func_0x000107c4a8a4(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
  }
  else {
    puVar8 = puVar4;
    func_0x000107c43d4c(puVar4);
    func_0x000107c61180();
    func_0x000107c615e8(puVar4);
  }
  puVar9 = puVar8;
  func_0x000107c5cb24(puVar8);
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  puVar4 = &UNK_110451218;
  func_0x000107c613fc(&UNK_110451218,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c(puVar4);
  func_0x000107c5cb24(uVar5);
  func_0x000107c61180();
  puVar10 = PTR_PTR_1126a8bc8;
  func_0x000107c610f8(PTR_PTR_1126a8bc8);
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_101bb7770;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  pcStack_98 = FUN_101bb6960;
  puStack_90 = &UNK_110451258;
  ppuVar3 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar3);
  pcStack_b8 = FUN_101bb7afc;
  puStack_d8 = puVar8;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_1000f6b44;
  puStack_c0 = &UNK_110451280;
  ppuVar11 = &puStack_d8;
  puStack_b0 = puVar4;
  func_0x000107c60bc4(ppuVar11);
  pcStack_e8 = FUN_101bb5d0c;
  uStack_e0 = 0;
  puStack_108 = puVar8;
  uStack_100 = 0x42000000;
  puStack_f8 = &UNK_1000f6b44;
  puStack_f0 = &UNK_1104512a8;
  ppuVar12 = &puStack_108;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c45654(puVar10);
  func_0x000107c61170(puStack_118);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61574(param_1);
  func_0x000107c61574(lVar1);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(uStack_e0);
  func_0x000107c61574(puStack_b0);
  puVar7 = puStack_80;
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar7);
  return puVar10;
}



/* Entry: 101bb5d0c; end: 101bb5d37;  */

void FUN_101bb5d0c(void)

{
  return;
}



/* Entry: 101bb5d38; end: 101bb5f93;  */

void FUN_101bb5d38(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = *(long *)(unaff_x22 + 0x98);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xb0) = lVar9;
  func_0x000107c43e24();
  func_0x000107c61180();
  uVar10 = uVar8;
  func_0x000107c5faec();
  uVar7 = param_2;
  func_0x000107c61170(uVar8);
  if (lVar9 != 0) {
    uVar1 = *(undefined1 *)(unaff_x22 + 0xc9);
    uVar2 = *(undefined1 *)(unaff_x22 + 200);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
    func_0x000107c4b1dc(uVar3);
    func_0x000107c61180();
    uVar8 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    uVar3 = 0;
    func_0x000103a6cbb8(0);
    func_0x000107c610f8();
    func_0x000103a6c948(uVar3,uVar10,param_2,uVar8,uVar7,uVar2,uVar1,0,0,0);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar10;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_101bb5f94;
    lVar4 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar4,1);
    uVar8 = 0x112e071e0;
    func_0x0001000285a8(0x112e071e0,&UNK_10d9db4a0);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar8;
    *(long *)(unaff_x22 + 0x70) = lVar4;
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_101bb6270;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1104513a0;
    func_0x000107c5c29c(lVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  lVar9 = *(long *)(unaff_x22 + 0xa8);
  uVar8 = *(undefined8 *)(lVar9 + 0x18);
  puVar5 = &UNK_110451338;
  func_0x000107c613fc(&UNK_110451338,0x18,7);
  func_0x000107c61644(puVar5 + 0x10,lVar9);
  puVar6 = &UNK_110451360;
  func_0x000107c613fc(&UNK_110451360,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = uVar10;
  *(undefined8 *)(puVar6 + 0x20) = param_2;
  *(code **)(unaff_x22 + 0x70) = FUN_101bb7ce8;
  *(undefined **)(unaff_x22 + 0x78) = puVar6;
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_1000f6b44;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_110451378;
  lVar9 = unaff_x22 + 0x50;
  func_0x000107c60bc4(lVar9);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61434(param_2);
  func_0x000107c61574(uVar10);
  func_0x000107c4e524(uVar8);
  func_0x000107c60bd0(lVar9);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x000101bb5f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bb5f94; end: 101bb5feb;  */

void FUN_101bb5f94(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xc0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101bb5fec;
  }
  else {
    pcVar1 = FUN_101bb6128;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101bb5fec; end: 101bb6127;  */

void FUN_101bb5fec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x90));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c43e24();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  puVar4 = &UNK_110451338;
  func_0x000107c613fc(&UNK_110451338,0x18,7);
  func_0x000107c61644(puVar4 + 0x10,lVar3);
  puVar5 = &UNK_1104513d8;
  func_0x000107c613fc(&UNK_1104513d8,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar8;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x101bb8e6c;
  *(undefined **)(unaff_x22 + 0x78) = puVar5;
  puVar6 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar6 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_1000f6b44;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1104513f0;
  func_0x000107c60bc4();
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61434(param_2);
  func_0x000107c61574(uVar8);
  func_0x000107c4e524(uVar7);
  func_0x000107c60bd0(puVar6);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bb6124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bb6128; end: 101bb626f;  */

void FUN_101bb6128(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61654();
  func_0x000107c614ac(uVar6);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar2 = *(long *)(unaff_x22 + 0xa8);
  func_0x000107c43e24();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  uVar7 = *(undefined8 *)(lVar2 + 0x18);
  puVar3 = &UNK_110451338;
  func_0x000107c613fc(&UNK_110451338,0x18,7);
  func_0x000107c61644(puVar3 + 0x10,lVar2);
  puVar4 = &UNK_1104513d8;
  func_0x000107c613fc(&UNK_1104513d8,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = uVar8;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = 0x101bb8e6c;
  *(undefined **)(unaff_x22 + 0x78) = puVar4;
  puVar5 = (undefined8 *)(unaff_x22 + 0x50);
  *puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_1000f6b44;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_1104513f0;
  func_0x000107c60bc4();
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c61434(param_2);
  func_0x000107c61574(uVar8);
  func_0x000107c4e524(uVar7);
  func_0x000107c60bd0(puVar5);
  func_0x000107c6142c(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101bb626c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bb6270; end: 101bb631b;  */

void FUN_101bb6270(long param_1,long param_2,long param_3)

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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bb631c);
  (*pcVar1)();
}



/* Entry: 101bb631c; end: 101bb636f;  */

void FUN_101bb631c(void)

{
  func_0x000107c61168(&PTR_PTR_112e07170);
  return;
}



/* Entry: 101bb6370; end: 101bb63e7; -[_TtC28MemTwoAiSnapsTabServicesImpl34MemTwoAiSnapsTabContextBuilderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb6370(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e07058));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e07048));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e07050));
  if (*(long *)(param_1 + _DAT_112e07040) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 101bb63e8; end: 101bb640b;  */

void FUN_101bb63e8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101bb640c; end: 101bb6563;  */

void FUN_101bb640c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  (**(code **)(lVar5 + 0x68))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1);
  puVar3 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar4 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f0020e0);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar4);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61174(uVar4);
  func_0x000107c453e4(puVar2);
  func_0x000107c4d664(uVar4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 101bb6564; end: 101bb6583;  */

void FUN_101bb6564(void)

{
  func_0x000107c61168(&PTR_PTR_112e070d0);
  return;
}



/* Entry: 101bb6584; end: 101bb67e3;  */

void FUN_101bb6584(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c5eea0(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar8 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    puVar2 = PTR_PTR_1126a8bd0;
    func_0x000107c610f8();
    func_0x000107c5fadc(param_3,param_4);
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c5fadc(param_7,param_8);
    func_0x000107c46b28(param_1 * 1000.0);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_7);
    func_0x000107c61428(param_2 + 0x20,auStack_a0,0x21,0);
    FUN_101bb6a24();
    uVar6 = *(ulong *)(param_2 + 0x20);
    uVar5 = uVar6 & 0xffffffffffffff8;
    uVar3 = *(ulong *)(uVar5 + 0x10);
    uVar4 = uVar6;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_101bb6ab4(uVar4,uVar3 + 1,1,uVar6,0x112e071e8,&PTR_PTR_1126a8bd0,0x112e071f0,
                    &UNK_10d9db4b0);
      uVar5 = uVar4 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar5 + 0x10) = uVar3 + 1;
    *(undefined **)(uVar5 + uVar3 * 8 + 0x20) = puVar2;
    *(ulong *)(param_2 + 0x20) = uVar4;
    func_0x000107c614a8(auStack_a0);
    uVar7 = *(undefined8 *)(param_2 + 0x10);
    func_0x000101bb8df4(0,0x112e071e8,&PTR_PTR_1126a8bd0);
    func_0x000107c61174(uVar7);
    uVar3 = uVar4;
    func_0x000107c61434(uVar4);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar4);
    func_0x000107c4d664(uVar7);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 101bb67e4; end: 101bb6947;  */

/* WARNING: Removing unreachable block (ram,0x000101bb693c) */

void FUN_101bb67e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + 0x20,auStack_60,0x21,0);
    func_0x000107c61434(param_3);
    lVar2 = param_1 + 0x20;
    FUN_101bb7eb4(lVar2,param_2,param_3);
    func_0x000107c6142c(param_3);
    uVar5 = *(ulong *)(param_1 + 0x20);
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
    if ((long)uVar4 < lVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bb693c);
      (*pcVar1)();
    }
    FUN_101bb82b0(lVar2);
    func_0x000107c614a8(auStack_60);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x000101bb8df4(0,0x112e071e8,&PTR_PTR_1126a8bd0);
    func_0x000107c61174(uVar6);
    uVar3 = uVar7;
    func_0x000107c61434(uVar7);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar7);
    func_0x000107c4d664(uVar6);
    func_0x000107c61574(param_1);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 101bb6948; end: 101bb695f;  */

void FUN_101bb6948(void)

{
  undefined *puVar1;
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  puVar1 = PTR__swift_bridgeObjectRelease_11034f258;
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  (*(code *)puVar1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000101bb7c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101bb6960; end: 101bb6a23;  */

void FUN_101bb6960(long param_1,undefined8 param_2)

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



/* Entry: 101bb6a24; end: 101bb6ab3;  */

void FUN_101bb6a24(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = uVar3;
  func_0x000107c61550();
  *unaff_x20 = uVar3;
  if ((((int)uVar1 == 0) || ((long)uVar3 < 0)) || ((uVar3 >> 0x3e & 1) != 0)) {
    if (uVar3 >> 0x3e == 0) {
      uVar1 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar1 = uVar3 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar3) {
        uVar1 = uVar3;
      }
      func_0x000107c60480(uVar1);
    }
    uVar2 = 0;
    FUN_101bb6ab4(0,uVar1 + 1,1,uVar3,0x112e071e8,&PTR_PTR_1126a8bd0,0x112e071f0,&UNK_10d9db4b0);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 101bb6ab4; end: 101bb6c13;  */

ulong FUN_101bb6ab4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bb6c14);
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
  FUN_101bb6c14(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bb6c10);
      (*pcVar1)();
    }
    FUN_101bb6ca4(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 101bb6c14; end: 101bb6ca3;  */

undefined *
FUN_101bb6c14(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    func_0x000101bb69ac(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 101bb6ca4; end: 101bb6f2f;  */

long FUN_101bb6ca4(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb6dbc);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb6dc0);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000101bb8df4(0,param_5,param_6);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x000101bb8df4(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb6db8);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 101bb6f30; end: 101bb71cb;  */

void FUN_101bb6f30(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112e07210;
  func_0x0001000285a8(0x112e07210,&UNK_10dc5cbd0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_101bb7198:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101bb71c8);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_101bb7198;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x101bb71cc);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 101bb71cc; end: 101bb7387;  */

ulong FUN_101bb71cc(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb72b0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb72b4);
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
  func_0x000101bb8df4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb7388);
  (*pcVar2)();
}



/* Entry: 101bb7388; end: 101bb73a3;  */

void FUN_101bb7388(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101bb73a4();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101bb73a4; end: 101bb75c7;  */

undefined * FUN_101bb73a4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb74f8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e071f8;
    func_0x000101bb69ac(0x112e071f8,&PTR_PTR_1126a8bd8,0x112e07200,&UNK_10d9db4c8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    func_0x000101bb8df4(0,0x112e071f8,&PTR_PTR_1126a8bd8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 101bb75c8; end: 101bb763b;  */

void FUN_101bb75c8(ulong param_1)

{
  ulong uVar1;
  
  if (param_1 >> 0x3e == 0) {
    uVar1 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    func_0x000107c60480(uVar1);
  }
  FUN_101bb6ab4(0,uVar1,0,param_1,0x112e071e8,&PTR_PTR_1126a8bd0,0x112e071f0,&UNK_10d9db4b0);
  return;
}



/* Entry: 101bb763c; end: 101bb773b;  */

undefined * FUN_101bb763c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e07210,&UNK_10dc5cbd0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101bb7738);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101bb773c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 101bb773c; end: 101bb776f;  */

void FUN_101bb773c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101bb7770; end: 101bb7afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb7770(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined1 uStack_c8;
  undefined1 uStack_c4;
  undefined1 auStack_b8 [32];
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar11 = *(long *)(unaff_x20 + 0x20);
  puVar8 = auStack_b8;
  func_0x000107c61428(lVar2 + 0x10,puVar8,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar14 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar7 = uVar14;
    func_0x000107c5faec();
    func_0x000107c61170(uVar14);
    uVar12 = *(undefined8 *)(lVar11 + 0x10);
    puStack_80 = (undefined *)uVar7;
    puStack_78 = puVar8;
    func_0x000107c6157c(uVar12);
    uVar14 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    ppuVar9 = &puStack_90;
    func_0x000100075034(&lStack_98,FUN_101bb7b4c,ppuVar9,uVar14);
    func_0x000107c61574(uVar12);
    func_0x000107c6142c(puVar8);
    if (lStack_98 == 0) {
      uStack_c8 = 0;
      uStack_c4 = 0;
      lVar11 = 0;
      ppuVar13 = (undefined **)0xe000000000000000;
    }
    else {
      lVar11 = lStack_98;
      func_0x000107c4b334();
      func_0x000107c61180();
      if (lVar11 == 0) {
        lVar11 = 0;
        ppuVar13 = (undefined **)0xe000000000000000;
        ppuVar6 = ppuVar9;
      }
      else {
        lVar3 = lVar11;
        func_0x000107c5c964();
        func_0x000107c61180();
        func_0x000107c61170(lVar11);
        lVar11 = lVar3;
        func_0x000107c5faec();
        ppuVar6 = ppuVar9;
        func_0x000107c61170(lVar3);
        ppuVar13 = ppuVar9;
      }
      ppuVar9 = ppuVar6;
      lVar3 = lStack_98;
      func_0x000107c504b4();
      uStack_c4 = (undefined1)lVar3;
      lVar3 = lStack_98;
      func_0x000107c5d0ec();
      uStack_c8 = (undefined1)lVar3;
    }
    uVar14 = param_1;
    func_0x000107c43e24();
    func_0x000107c61180();
    uVar7 = uVar14;
    func_0x000107c5faec();
    ppuVar10 = ppuVar9;
    func_0x000107c61170(uVar14);
    uVar14 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar12 = uVar14;
    func_0x000107c5faec();
    func_0x000107c61170(uVar14);
    uVar14 = *(undefined8 *)(lVar1 + 0x18);
    puVar4 = &UNK_110451338;
    func_0x000107c613fc(&UNK_110451338,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,lVar1);
    puVar5 = &UNK_110451428;
    func_0x000107c613fc(&UNK_110451428,0x48,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(undefined8 *)(puVar5 + 0x18) = uVar7;
    *(undefined ***)(puVar5 + 0x20) = ppuVar9;
    *(long *)(puVar5 + 0x28) = lVar11;
    *(undefined ***)(puVar5 + 0x30) = ppuVar13;
    *(undefined8 *)(puVar5 + 0x38) = uVar12;
    *(undefined ***)(puVar5 + 0x40) = ppuVar10;
    pcStack_70 = FUN_101bb8374;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_110451440;
    ppuVar6 = &puStack_90;
    puStack_68 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar4 = puStack_68;
    func_0x000107c61434(ppuVar9);
    func_0x000107c61434(ppuVar13);
    func_0x000107c61434(ppuVar10);
    func_0x000107c61574(puVar4);
    func_0x000107c4e524(uVar14);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c6142c(ppuVar13);
    func_0x000107c6142c(ppuVar9);
    func_0x000107c6142c(ppuVar10);
    func_0x000100083b20(&puStack_90);
    puVar4 = puStack_90;
    uVar14 = *(undefined8 *)(puStack_90 + _DAT_112fd9a58);
    func_0x000107c61174();
    func_0x000107c61170(puVar4);
    puVar4 = &UNK_110451310;
    func_0x000107c613fc(&UNK_110451310,0x2a,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar14;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    *(long *)(puVar4 + 0x20) = lVar1;
    puVar4[0x28] = uStack_c4;
    puVar4[0x29] = uStack_c8;
    func_0x000107c61174(uVar14);
    func_0x000107c61174(param_1);
    func_0x000107c6157c(lVar1);
    uVar7 = 0x20;
    func_0x0001001ca524(0x20,0,0x48,4,0,0,&UNK_10d9db498,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lStack_98);
    func_0x000107c61170(uVar14);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar7);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101bb7afc; end: 101bb7b2b;  */

void FUN_101bb7afc(void)

{
  return;
}



/* Entry: 101bb7b2c; end: 101bb7b4b;  */

void FUN_101bb7b2c(void)

{
  func_0x000107c61168(&PTR_PTR_1127fbdb0);
  return;
}



/* Entry: 101bb7b4c; end: 101bb7bd7;  */

void FUN_101bb7b4c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_2;
  if (*(long *)(lVar4 + 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    lVar1 = *(long *)(unaff_x20 + 0x10);
    uVar2 = *(ulong *)(unaff_x20 + 0x18);
    func_0x000107c61434(lVar4);
    func_0x000100029284();
    if ((uVar2 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar1 * 8);
      func_0x000107c61174(uVar3);
    }
    func_0x000107c6142c(lVar4);
  }
  *param_1 = uVar3;
  return;
}



/* Entry: 101bb7bd8; end: 101bb7c33;  */

void FUN_101bb7bd8(code *param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000101bb7c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101bb7c34; end: 101bb7cab;  */

void FUN_101bb7c34(void)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x29);
  plVar5 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101bb7cac;
  *(undefined1 *)((long)plVar5 + 0xc9) = uVar4;
  *(undefined1 *)(plVar5 + 0x19) = uVar3;
  plVar5[0x14] = lVar2;
  plVar5[0x15] = lVar6;
  plVar5[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb5d38,0,0);
  return;
}



/* Entry: 101bb7cac; end: 101bb7ce7;  */

void FUN_101bb7cac(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bb7ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bb7ce8; end: 101bb7d0b;  */

/* WARNING: Removing unreachable block (ram,0x000101bb693c) */

void FUN_101bb7ce8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x000107c61428(lVar2 + 0x20,auStack_60,0x21,0);
    func_0x000107c61434(uVar6);
    lVar3 = lVar2 + 0x20;
    FUN_101bb7eb4(lVar3,uVar4,uVar6);
    func_0x000107c6142c(uVar6);
    uVar7 = *(ulong *)(lVar2 + 0x20);
    if (uVar7 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar7 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar7) {
        uVar5 = uVar7;
      }
      func_0x000107c60480();
    }
    if ((long)uVar5 < lVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bb693c);
      (*pcVar1)();
    }
    FUN_101bb82b0(lVar3);
    func_0x000107c614a8(auStack_60);
    uVar6 = *(undefined8 *)(lVar2 + 0x10);
    uVar8 = *(undefined8 *)(lVar2 + 0x20);
    func_0x000101bb8df4(0,0x112e071e8,&PTR_PTR_1126a8bd0);
    func_0x000107c61174(uVar6);
    uVar4 = uVar8;
    func_0x000107c61434(uVar8);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar8);
    func_0x000107c4d664(uVar6);
    func_0x000107c61574(lVar2);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 101bb7d0c; end: 101bb7d37;  */

void FUN_101bb7d0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101bb7d38; end: 101bb7eb3;  */

undefined1  [16] FUN_101bb7d38(ulong param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  ulong uStack_68;
  ulong uStack_58;
  
  uVar4 = param_2;
  if (param_1 >> 0x3e == 0) {
    uStack_58 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uStack_58 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uStack_58 = param_1;
    }
    func_0x000107c60480();
  }
  uStack_68 = param_1 & 0xffffffffffffff8;
  uVar8 = 0;
  while( true ) {
    if (uStack_58 == uVar8) {
      uVar8 = 0;
      uVar7 = 1;
      goto LAB_101bb7e68;
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uStack_68 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101bb7e94);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(param_1 + uVar8 * 8 + 0x20);
      func_0x000107c61174();
      uVar6 = uVar4;
    }
    else {
      uVar3 = uVar8;
      uVar6 = param_1;
      FUN_101bb71cc(uVar8,param_1,&PTR_PTR_1126a8bd0,0x112e071e8);
    }
    uVar4 = uVar3;
    func_0x000107c43e24();
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    if (uVar5 == param_2 && uVar6 == param_3) break;
    uVar4 = uVar6;
    func_0x000107c605b8(uVar5,uVar6,param_2,param_3,0);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(uVar6);
    if ((uVar5 & 1) != 0) goto LAB_101bb7e64;
    bVar2 = SCARRY8(uVar8,1);
    uVar8 = uVar8 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bb7e98);
      (*pcVar1)();
    }
  }
  func_0x000107c61170(uVar3);
  func_0x000107c6142c(uVar6);
LAB_101bb7e64:
  uVar7 = 0;
LAB_101bb7e68:
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = uVar8;
  return auVar9;
}



/* Entry: 101bb7eb4; end: 101bb81a3;  */

void FUN_101bb7eb4(ulong *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  uint uVar12;
  ulong uVar13;
  
  uVar11 = *param_1;
  uVar4 = uVar11;
  uVar8 = param_2;
  FUN_101bb7d38();
  if (unaff_x21 == 0) {
    if (((uint)uVar8 & 0xff) == 1) {
      if (uVar11 >> 0x3e != 0) {
        uVar4 = uVar11 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar11) {
          uVar4 = uVar11;
        }
        func_0x000107c60480(uVar4);
      }
    }
    else {
      uVar13 = uVar4;
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb7f28);
        (*pcVar2)();
      }
      while( true ) {
        uVar13 = uVar13 + 1;
        if (uVar11 >> 0x3e == 0) {
          uVar5 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
          uVar9 = uVar8;
        }
        else {
          uVar5 = uVar11 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar11) {
            uVar5 = uVar11;
          }
          func_0x000107c60480();
          uVar9 = uVar8;
        }
        if (uVar13 == uVar5) break;
        if ((uVar11 & 0xc000000000000001) == 0) {
          if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb816c);
            (*pcVar2)();
          }
          if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb8170);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar11 + uVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar5 = uVar13;
          uVar9 = uVar11;
          FUN_101bb71cc(uVar13,uVar11,&PTR_PTR_1126a8bd0,0x112e071e8);
        }
        uVar10 = uVar5;
        func_0x000107c43e24();
        func_0x000107c61180();
        uVar6 = uVar10;
        func_0x000107c5faec();
        uVar8 = uVar9;
        func_0x000107c61170(uVar10);
        if ((uVar6 == param_2) && (uVar9 == param_3)) {
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar9);
        }
        else {
          uVar8 = uVar9;
          func_0x000107c605b8(uVar6,uVar9,param_2,param_3,0);
          func_0x000107c61170(uVar5);
          func_0x000107c6142c(uVar9);
          if ((uVar6 & 1) == 0) {
            if (uVar4 != uVar13) {
              if ((uVar11 & 0xc000000000000001) == 0) {
                if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb8180);
                  (*pcVar2)();
                }
                uVar5 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
                if (uVar5 <= uVar4) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb8184);
                  (*pcVar2)();
                }
                if (uVar5 <= uVar13) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb8188);
                  (*pcVar2)();
                }
                uVar5 = *(ulong *)(uVar11 + 0x20 + uVar4 * 8);
                uVar9 = *(ulong *)(uVar11 + 0x20 + uVar13 * 8);
                func_0x000107c61174();
                func_0x000107c61174();
              }
              else {
                uVar5 = uVar4;
                FUN_101bb71cc(uVar4,uVar11,&PTR_PTR_1126a8bd0,0x112e071e8);
                uVar9 = uVar13;
                uVar8 = uVar11;
                FUN_101bb71cc(uVar13,uVar11,&PTR_PTR_1126a8bd0,0x112e071e8);
              }
              uVar10 = uVar11;
              func_0x000107c61550();
              if ((((int)uVar10 == 0) || ((long)uVar11 < 0)) || ((uVar11 >> 0x3e & 1) != 0)) {
                FUN_101bb75c8();
                uVar12 = (uint)(uVar11 >> 0x3e) & 1;
              }
              else {
                uVar12 = 0;
              }
              uVar10 = uVar11 & 0xffffffffffffff8;
              lVar1 = uVar10 + uVar4 * 8;
              uVar7 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar9;
              func_0x000107c61170(uVar7);
              if (((long)uVar11 < 0) || (uVar12 != 0)) {
                FUN_101bb75c8();
                uVar10 = uVar11 & 0xffffffffffffff8;
              }
              if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb8140);
                (*pcVar2)();
              }
              if (*(ulong *)(uVar10 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb817c);
                (*pcVar2)();
              }
              lVar1 = uVar10 + uVar13 * 8;
              uVar7 = *(undefined8 *)(lVar1 + 0x20);
              *(ulong *)(lVar1 + 0x20) = uVar5;
              func_0x000107c61170(uVar7);
              *param_1 = uVar11;
            }
            bVar3 = SCARRY8(uVar4,1);
            uVar4 = uVar4 + 1;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb8178);
              (*pcVar2)();
            }
          }
        }
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x101bb8174);
          (*pcVar2)();
        }
      }
    }
  }
  return;
}



/* Entry: 101bb81a4; end: 101bb82af;  */

void FUN_101bb81a4(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101bb828c);
    (*pcVar5)();
  }
  uVar9 = *unaff_x20;
  uVar8 = uVar9 & 0xffffffffffffff8;
  lVar1 = uVar8 + 0x20 + param_1 * 8;
  uVar6 = 0;
  func_0x000101bb8df4(0,0x112e071e8,&PTR_PTR_1126a8bd0);
  func_0x000107c61408(lVar1,lVar3,uVar6);
  lVar4 = param_3 - lVar3;
  if (SBORROW8(param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101bb8290);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
      lVar3 = uVar7 - param_2;
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
      lVar3 = uVar7 - param_2;
    }
    if (SBORROW8(uVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101bb82a8);
      (*pcVar5)();
    }
    uVar7 = lVar1 + param_3 * 8;
    uVar2 = uVar8 + 0x20 + param_2 * 8;
    if (uVar7 != uVar2 || uVar2 + lVar3 * 8 <= uVar7) {
      func_0x000107c610b8(uVar7,uVar2,lVar3 << 3);
    }
    if (uVar9 >> 0x3e == 0) {
      uVar7 = *(ulong *)(uVar8 + 0x10);
    }
    else {
      uVar7 = uVar8;
      if ((uVar9 & 0x8000000000000000) != 0) {
        uVar7 = uVar9;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar7,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101bb82ac);
      (*pcVar5)();
    }
    *(ulong *)(uVar8 + 0x10) = uVar7 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x101bb82b0);
    (*pcVar5)();
  }
  return;
}



/* Entry: 101bb82b0; end: 101bb8373;  */

/* WARNING: Removing unreachable block (ram,0x000101bb82ac) */

void FUN_101bb82b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8350);
    (*pcVar3)();
  }
  uVar7 = *unaff_x20;
  if (uVar7 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar6 = uVar7 & 0xffffffffffffff8;
    if ((uVar7 & 0x8000000000000000) != 0) {
      uVar6 = uVar7;
    }
    func_0x000107c60480();
  }
  if ((long)uVar6 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8368);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb836c);
    (*pcVar3)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (uVar7 >> 0x3e == 0) {
      uVar6 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar6 = uVar7 & 0xffffffffffffff8;
      if ((uVar7 & 0x8000000000000000) != 0) {
        uVar6 = uVar7;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar6,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8374);
      (*pcVar3)();
    }
    func_0x000101bb74f8(uVar6 + lVar1,1);
    lVar1 = param_2 - param_1;
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb828c);
      (*pcVar3)();
    }
    uVar8 = *unaff_x20;
    uVar6 = uVar8 & 0xffffffffffffff8;
    uVar7 = uVar6 + 0x20 + param_1 * 8;
    uVar4 = 0;
    func_0x000101bb8df4(0,0x112e071e8,&PTR_PTR_1126a8bd0);
    func_0x000107c61408(uVar7,lVar1,uVar4);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8290);
      (*pcVar3)();
    }
    if (lVar2 != 0) {
      if (uVar8 >> 0x3e == 0) {
        uVar5 = *(ulong *)(uVar6 + 0x10);
        lVar1 = uVar5 - param_2;
      }
      else {
        uVar5 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar5 = uVar8;
        }
        func_0x000107c60480();
        lVar1 = uVar5 - param_2;
      }
      if (SBORROW8(uVar5,param_2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb82a8);
        (*pcVar3)();
      }
      uVar5 = uVar6 + 0x20 + param_2 * 8;
      if (uVar7 != uVar5 || uVar5 + lVar1 * 8 <= uVar7) {
        func_0x000107c610b8(uVar7,uVar5,lVar1 << 3);
      }
      if (uVar8 >> 0x3e == 0) {
        uVar7 = *(ulong *)(uVar6 + 0x10);
      }
      else {
        uVar7 = uVar6;
        if ((uVar8 & 0x8000000000000000) != 0) {
          uVar7 = uVar8;
        }
        func_0x000107c60480();
      }
      if (SCARRY8(uVar7,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb82ac);
        (*pcVar3)();
      }
      *(ulong *)(uVar6 + 0x10) = uVar7 + lVar2;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8370);
  (*pcVar3)();
}



/* Entry: 101bb8374; end: 101bb8387;  */

void FUN_101bb8374(double param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long extraout_x8;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  func_0x000107c61428(lVar3 + 0x10,auStack_88,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    func_0x000107c5eea0(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee8c();
    (**(code **)(lVar14 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
    puVar4 = PTR_PTR_1126a8bd0;
    func_0x000107c610f8();
    func_0x000107c5fadc(uVar5,uVar13);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c5fadc(uVar7,uVar10);
    func_0x000107c46b28(param_1 * 1000.0);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar7);
    func_0x000107c61428(lVar3 + 0x20,auStack_a0,0x21,0);
    FUN_101bb6a24();
    uVar12 = *(ulong *)(lVar3 + 0x20);
    uVar11 = uVar12 & 0xffffffffffffff8;
    uVar8 = *(ulong *)(uVar11 + 0x10);
    uVar9 = uVar12;
    if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar8) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
      FUN_101bb6ab4(uVar9,uVar8 + 1,1,uVar12,0x112e071e8,&PTR_PTR_1126a8bd0,0x112e071f0,
                    &UNK_10d9db4b0);
      uVar11 = uVar9 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar11 + 0x10) = uVar8 + 1;
    *(undefined **)(uVar11 + uVar8 * 8 + 0x20) = puVar4;
    *(ulong *)(lVar3 + 0x20) = uVar9;
    func_0x000107c614a8(auStack_a0);
    uVar13 = *(undefined8 *)(lVar3 + 0x10);
    func_0x000101bb8df4(0,0x112e071e8,&PTR_PTR_1126a8bd0);
    func_0x000107c61174(uVar13);
    uVar8 = uVar9;
    func_0x000107c61434(uVar9);
    func_0x000107c5fc48();
    func_0x000107c6142c(uVar9);
    func_0x000107c4d664(uVar13);
    func_0x000107c61574(lVar3);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar8);
  }
  return;
}



/* Entry: 101bb8388; end: 101bb8d63;  */

void FUN_101bb8388(undefined8 *param_1,ulong *param_2)

{
  long lVar1;
  ulong *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  long unaff_x20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_78;
  
  lVar17 = *(long *)(unaff_x20 + 0x10);
  puVar4 = (undefined *)*param_2;
  func_0x000107c3d128();
  func_0x000107c61180();
  puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar4 != (undefined *)0x0) {
    uVar5 = 0;
    func_0x000101bb8df4(0,0x112d530b0,&PTR_PTR_1126d8840);
    puVar6 = puVar4;
    func_0x000107c5fc54(puVar4,uVar5);
    func_0x000107c61170(puVar4);
    puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((ulong)puVar6 >> 0x3e == 0) {
      puVar21 = *(undefined **)(puVar4 + 0x10);
    }
    else {
      puVar21 = puVar4;
      if ((undefined *)0x7fffffffffffffff < puVar6) {
        puVar21 = puVar6;
      }
      func_0x000107c60480();
    }
    puStack_b8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar12 = (undefined *)0x0;
    while (puVar21 != puVar12) {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        if (*(undefined **)(puVar4 + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8c88);
          (*pcVar3)();
        }
        puVar7 = *(undefined **)(puVar6 + (long)puVar12 * 8 + 0x20);
        func_0x000107c61174();
        puVar24 = PTR___NSConcreteStackBlock_11034bd00;
      }
      else {
        puVar7 = puVar12;
        FUN_101bb71cc(puVar12,puVar6,&PTR_PTR_1126d8840,0x112d530b0);
        puVar24 = PTR___NSConcreteStackBlock_11034bd00;
      }
      PTR___NSConcreteStackBlock_11034bd00 = puVar24;
      if (SCARRY8((long)puVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8c84);
        (*pcVar3)();
      }
      puVar18 = puVar12 + 1;
      puStack_78 = (undefined *)0x0;
      uStack_90 = 0x101bb5d10;
      puStack_88 = (undefined *)0x0;
      uStack_a8 = 0x42000000;
      ppuStack_a0 = (undefined **)&UNK_100fe4708;
      puStack_98 = &UNK_110451490;
      ppuVar8 = &puStack_b0;
      puStack_b0 = puVar24;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c61574(puStack_88);
      puVar23 = &UNK_1104514c8;
      func_0x000107c613fc(&UNK_1104514c8,0x18,7);
      *(undefined ***)(puVar23 + 0x10) = &puStack_78;
      puVar25 = &UNK_1104514f0;
      uVar16 = 0x20;
      func_0x000107c613fc(&UNK_1104514f0,0x20,7);
      *(undefined8 *)(puVar25 + 0x10) = 0x101bb8da8;
      *(undefined **)(puVar25 + 0x18) = puVar23;
      uStack_90 = 0x101bb8dd4;
      uStack_a8 = 0x42000000;
      ppuStack_a0 = (undefined **)&UNK_100fe4704;
      puStack_98 = &UNK_110451508;
      ppuVar9 = &puStack_b0;
      puStack_b0 = puVar24;
      puStack_88 = puVar25;
      func_0x000107c60bc4(ppuVar9);
      puVar24 = puStack_88;
      func_0x000107c6157c(puVar25);
      func_0x000107c61574(puVar24);
      func_0x000107c4c5c4(puVar7);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c60bd0(ppuVar8);
      puVar24 = puStack_78;
      puVar22 = puVar7;
      if (puStack_78 == (undefined *)0x0) {
LAB_101bb860c:
        func_0x000107c61170(puVar22);
        puVar24 = (undefined *)0x0;
      }
      else {
        puVar22 = puStack_78;
        func_0x000107c61174();
        puVar10 = puVar22;
        func_0x000107c4b334();
        func_0x000107c61180();
        if (puVar10 == (undefined *)0x0) {
          func_0x000107c61170(puVar22);
          puVar22 = puVar7;
          goto LAB_101bb860c;
        }
        puVar11 = puVar10;
        func_0x000107c5c964();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        puVar10 = puVar11;
        func_0x000107c5faec();
        func_0x000107c61170(puVar11);
        func_0x000107c61170(puVar7);
        func_0x000107c6142c(uVar16);
        uVar19 = (ulong)puVar10 & 0xffffffffffff;
        if ((uVar16 & 0x2000000000000000) != 0) {
          uVar19 = uVar16 >> 0x38 & 0xf;
        }
        if (uVar19 == 0) goto LAB_101bb860c;
      }
      func_0x000107c61170(puStack_78);
      uVar16 = 0;
      func_0x000107c61544(0,"",0x6e,0x5e,0x21,1);
      func_0x000107c61574(puVar23);
      if ((uVar16 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8c8c);
        (*pcVar3)();
      }
      puVar7 = puVar25;
      func_0x000107c61544(puVar25,"",0x6e,0x5e,0x31,1);
      func_0x000107c61574(puVar25);
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8c90);
        (*pcVar3)();
      }
      puVar12 = puVar12 + 1;
      if (puVar24 != (undefined *)0x0) {
        puVar12 = puStack_b8;
        func_0x000107c61550();
        if ((((int)puVar12 == 0) || ((long)puStack_b8 < 0)) ||
           (((ulong)puStack_b8 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_b8 >> 0x3e == 0) {
            puVar12 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar12 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_b8) {
              puVar12 = puStack_b8;
            }
            func_0x000107c60480(puVar12);
          }
          puVar7 = (undefined *)0x0;
          FUN_101bb6ab4(0,puVar12 + 1,1,puStack_b8,0x112d4d630,&PTR_PTR_1126ae6a8,0x112d530b8,
                        &UNK_10d9db4e0);
          puStack_b8 = puVar7;
        }
        uVar19 = (ulong)puStack_b8 & 0xffffffffffffff8;
        uVar16 = *(ulong *)(uVar19 + 0x10);
        if (*(ulong *)(uVar19 + 0x18) >> 1 <= uVar16) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar19 + 0x18));
          FUN_101bb6ab4(puVar12,uVar16 + 1,1,puStack_b8,0x112d4d630,&PTR_PTR_1126ae6a8,0x112d530b8,
                        &UNK_10d9db4e0);
          uVar19 = (ulong)puVar12 & 0xffffffffffffff8;
          puStack_b8 = puVar12;
        }
        *(ulong *)(uVar19 + 0x10) = uVar16 + 1;
        *(undefined **)(uVar19 + uVar16 * 8 + 0x20) = puVar24;
        puVar12 = puVar18;
      }
    }
    func_0x000107c6142c(puVar6);
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101bb763c();
  uVar16 = (ulong)puStack_b8 >> 0x3e;
  puStack_78 = puVar4;
  if (uVar16 == 0) {
    puVar4 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
    if (((ulong)puStack_b8 & 0x8000000000000000) != 0) {
      puVar4 = puStack_b8;
    }
    func_0x000107c60480(puVar4);
  }
  uVar5 = 0x112e07208;
  func_0x0001000285a8(0x112e07208,&UNK_10d9db4d0);
  func_0x000107c5f9f8(puVar4,uVar5);
  if (uVar16 == 0) {
    puVar4 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
    if (((ulong)puStack_b8 & 0x8000000000000000) != 0) {
      puVar4 = puStack_b8;
    }
    func_0x000107c60480();
  }
  if (puVar4 != (undefined *)0x0) {
    uVar19 = 0;
    do {
      puVar6 = puStack_b8;
      if (((ulong)puStack_b8 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8ca0);
          (*pcVar3)();
        }
        uVar13 = *(ulong *)(puStack_b8 + uVar19 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar13 = uVar19;
        FUN_101bb71cc(uVar19,puStack_b8,&PTR_PTR_1126ae6a8,0x112d4d630);
      }
      if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8c7c);
        (*pcVar3)();
      }
      puVar24 = (undefined *)(uVar19 + 1);
      uVar14 = uVar13;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar15 = uVar14;
      func_0x000107c5faec();
      func_0x000107c61170(uVar14);
      func_0x000107c61174();
      puVar21 = puStack_78;
      puVar12 = puStack_78;
      func_0x000107c61558();
      puStack_b0 = puVar21;
      uVar14 = uVar15;
      puVar7 = puVar6;
      func_0x000100029284();
      uVar20 = (ulong)~(uint)puVar7 & 1;
      lVar1 = *(long *)(puVar21 + 0x10) + uVar20;
      if (SCARRY8(*(long *)(puVar21 + 0x10),uVar20)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8c80);
        (*pcVar3)();
      }
      if (*(long *)(puVar21 + 0x18) < lVar1) {
        FUN_101bb6f30(lVar1,puVar12);
        puVar21 = puStack_b0;
        uVar14 = uVar15;
        puVar12 = puVar6;
        func_0x000100029284();
        if (((uint)puVar7 & 1) != ((uint)puVar12 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8d64);
          (*pcVar3)();
        }
joined_r0x000101bb89f0:
        if (((ulong)puVar7 & 1) != 0) goto LAB_101bb8850;
LAB_101bb8998:
        *(ulong *)(puVar21 + (uVar14 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar21 + (uVar14 >> 6) * 8 + 0x40) | 1L << (uVar14 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar21 + 0x30) + uVar14 * 0x10);
        *puVar2 = uVar15;
        puVar2[1] = (ulong)puVar6;
        *(ulong *)(*(long *)(puVar21 + 0x38) + uVar14 * 8) = uVar13;
        func_0x000107c61170(uVar13);
        if (SCARRY8(*(long *)(puVar21 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8c94);
          (*pcVar3)();
        }
        *(long *)(puVar21 + 0x10) = *(long *)(puVar21 + 0x10) + 1;
      }
      else {
        if (((ulong)puVar12 & 1) == 0) {
          func_0x000101bb6dc0();
          puVar21 = puStack_b0;
          goto joined_r0x000101bb89f0;
        }
        if (((ulong)puVar7 & 1) == 0) goto LAB_101bb8998;
LAB_101bb8850:
        uVar5 = *(undefined8 *)(*(long *)(puVar21 + 0x38) + uVar14 * 8);
        *(ulong *)(*(long *)(puVar21 + 0x38) + uVar14 * 8) = uVar13;
        func_0x000107c61170(uVar13);
        func_0x000107c6142c(puVar6);
        func_0x000107c61170(uVar5);
      }
      uVar19 = uVar19 + 1;
      puStack_78 = puVar21;
    } while (puVar24 != puVar4);
  }
  uVar5 = *(undefined8 *)(lVar17 + 0x10);
  ppuStack_a0 = &puStack_78;
  func_0x000107c6157c(uVar5);
  func_0x000100075034(FUN_101bb8d64,&puStack_b0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar5);
  func_0x000107c6142c(puStack_78);
  if (uVar16 == 0) {
    puVar4 = *(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar4 = (undefined *)((ulong)puStack_b8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_b8) {
      puVar4 = puStack_b8;
    }
    func_0x000107c60480();
  }
  if (puVar4 == (undefined *)0x0) {
    func_0x000107c6142c(puStack_b8);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_101bb7388(0,(ulong)puVar4 & ((long)puVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8d54);
      (*pcVar3)();
    }
    puVar21 = (undefined *)0x0;
    do {
      puVar6 = puStack_b0;
      puVar12 = puStack_b8;
      if (((ulong)puStack_b8 & 0xc000000000000001) == 0) {
        if ((long)puVar21 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8c98);
          (*pcVar3)();
        }
        if (*(undefined **)(((ulong)puStack_b8 & 0xffffffffffffff8) + 0x10) <= puVar21) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101bb8c9c);
          (*pcVar3)();
        }
        puVar7 = *(undefined **)(puStack_b8 + (long)puVar21 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar7 = puVar21;
        FUN_101bb71cc(puVar21,puStack_b8,&PTR_PTR_1126ae6a8,0x112d4d630);
      }
      puVar24 = puVar7;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      puVar23 = puVar12;
      if (puVar24 == (undefined *)0x0) {
        func_0x000107c5faec();
        puVar23 = puVar12;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar12);
      }
      puVar12 = puVar7;
      func_0x000107c4d3e4();
      func_0x000107c61180();
      if (puVar12 == (undefined *)0x0) {
        puVar25 = (undefined *)0x0;
        puVar12 = (undefined *)0xe000000000000000;
        puVar22 = puVar23;
      }
      else {
        puVar25 = puVar12;
        func_0x000107c5faec();
        puVar22 = puVar23;
        func_0x000107c61170(puVar12);
        puVar12 = puVar23;
      }
      puVar23 = puVar7;
      func_0x000107c4b334();
      func_0x000107c61180();
      if (puVar23 == (undefined *)0x0) {
        puVar23 = (undefined *)0x0;
        puVar22 = (undefined *)0xe000000000000000;
      }
      else {
        puVar18 = puVar23;
        func_0x000107c5c964();
        func_0x000107c61180();
        func_0x000107c61170(puVar23);
        puVar23 = puVar18;
        func_0x000107c5faec(puVar18);
        func_0x000107c61170(puVar18);
      }
      puVar18 = PTR_PTR_1126a8bd8;
      func_0x000107c610f8();
      func_0x000107c5fadc(puVar25,puVar12);
      func_0x000107c6142c(puVar12);
      func_0x000107c5fadc(puVar23,puVar22);
      func_0x000107c6142c(puVar22);
      func_0x000107c47308();
      func_0x000107c61170(puVar23);
      func_0x000107c61170(puVar25);
      func_0x000107c61170(puVar24);
      func_0x000107c61170(puVar7);
      uVar16 = *(ulong *)(puVar6 + 0x10);
      puStack_b0 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar16) {
        FUN_101bb7388(1 < *(ulong *)(puVar6 + 0x18),uVar16 + 1,1);
      }
      puVar6 = puStack_b0;
      puVar21 = puVar21 + 1;
      *(ulong *)(puStack_b0 + 0x10) = uVar16 + 1;
      *(undefined **)(puStack_b0 + uVar16 * 8 + 0x20) = puVar18;
    } while (puVar4 != puVar21);
    func_0x000107c6142c(puStack_b8);
  }
  uVar5 = 0;
  func_0x000101bb8df4(0,0x112e071f8,&PTR_PTR_1126a8bd8);
  puVar4 = puVar6;
  func_0x000107c5fc48(puVar6,uVar5);
  func_0x000107c6142c(puVar6);
  *param_1 = puVar4;
  return;
}



/* Entry: 101bb8d64; end: 101bb8da7;  */

void FUN_101bb8d64(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000107c6142c(*param_1);
  *param_1 = *puVar1;
  func_0x000107c61434();
  return;
}



/* Entry: 101bb8da8; end: 101bb8e33;  */

void FUN_101bb8da8(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101bb8e34; end: 101bb8e6f;  */

void FUN_101bb8e34(long param_1,long param_2)

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



/* Entry: 101bb8e70; end: 101bb8ecf; -[_TtC29MemoriesValdiDataServicesImpl21BackupServiceProvider init] */

void FUN_101bb8e70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesValdiDataServicesImpl.BackupServiceProvider",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bb8e9c);
  (*pcVar1)();
}



/* Entry: 101bb8ed0; end: 101bb8edf; -[_TtC29MemoriesValdiDataServicesImpl21BackupServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb8ed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e07218));
  return;
}



/* Entry: 101bb8ee0; end: 101bb8eff;  */

void FUN_101bb8ee0(void)

{
  func_0x000107c61168(&PTR_PTR_1127fbe88);
  return;
}



/* Entry: 101bb8f00; end: 101bb8f63; -[_TtC29MemoriesValdiDataServicesImpl21BackupServiceProvider getBackupService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb8f00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001000d224c(&uStack_38);
  func_0x000103edf0bc();
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101bb8f64; end: 101bb8f73;  */

undefined1  [16] FUN_101bb8f64(void)

{
  return ZEXT816(0x1104515f0);
}



/* Entry: 101bb8f74; end: 101bb8fbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb8f74(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(*param_2 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (lVar2 != 0) {
    *param_1 = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bb8fbc);
  (*pcVar1)();
}



/* Entry: 101bb8fbc; end: 101bb90c3;  */

void FUN_101bb8fbc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001000285a8(0x112e07258,&UNK_10d9db570);
  puVar1 = &UNK_110451638;
  func_0x000107c613fc(&UNK_110451638,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  uVar2 = 0x81;
  func_0x000104887c7c(0x81,0,0x48,4,0xd0000000000000be,0x800000010f002150,&UNK_10d9db580,puVar1);
  func_0x000107c61574(puVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101bb90c4; end: 101bb90cf;  */

void FUN_101bb90c4(void)

{
  long unaff_x20;
  
  FUN_101bb8fbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 101bb90d0; end: 101bb913f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb90d0(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  long *plVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 unaff_x19;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  long *unaff_x22;
  long *plVar22;
  undefined8 *puVar23;
  undefined *puVar24;
  undefined8 uVar25;
  ulong unaff_x29;
  ulong *puVar26;
  code *pcVar27;
  long lStack_1a0;
  undefined8 *puStack_198;
  ulong uStack_190;
  code *pcStack_188;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  long *plStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined8 *puStack_128;
  ulong uStack_120;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_e0;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_78;
  code *pcStack_70;
  ulong uStack_60;
  code *pcStack_58;
  long lStack_48;
  ulong uStack_30;
  code *pcStack_28;
  long lStack_20;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  plVar5 = &lStack_20;
  lStack_20 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x19] = param_6;
  unaff_x22[0x1a] = param_7;
  unaff_x22[0x17] = param_4;
  unaff_x22[0x18] = param_5;
  unaff_x22[0x15] = param_2;
  unaff_x22[0x16] = param_3;
  unaff_x22[0x14] = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_20) {
    UNRECOVERED_JUMPTABLE = FUN_101bb9140;
    uVar16 = 0;
    uVar17 = 0;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  uStack_30 = (ulong)&uStack_10 | 0x1000000000000000;
  pcStack_28 = FUN_101bb9140;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100083b20(unaff_x22 + 0xd);
  lVar18 = unaff_x22[0xd];
  pcVar19 = *(code **)(lVar18 + _DAT_112ff82c0);
  unaff_x22[0x1b] = (long)pcVar19;
  func_0x000107c615f0(pcVar19);
  func_0x000107c61170(lVar18);
  UNRECOVERED_JUMPTABLE = pcVar19;
  func_0x000107c614f0();
  puVar7 = (undefined8 *)0x80;
  func_0x000107c615b8();
  unaff_x22[0x1c] = (long)puVar7;
  *puVar7 = unaff_x22;
  puVar7[1] = FUN_101bb91fc;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    puVar26 = (ulong *)(uStack_30 & 0xefffffffffffffff);
    pcVar27 = pcStack_28;
code_r0x000101bb9934:
    *(undefined8 *)((long)plVar5 + -0x20) = unaff_x19;
    *(ulong *)((long)plVar5 + -0x10) = (ulong)puVar26 | 0x1000000000000000;
    *(code **)((long)plVar5 + -8) = pcVar27;
    *(undefined8 **)((long)plVar5 + -0x18) = puVar7;
    puVar7[8] = UNRECOVERED_JUMPTABLE;
    puVar7[9] = pcVar19;
    uVar16 = 0;
    func_0x000107c5fcec();
    uVar17 = uVar16;
    func_0x000107c5fce8();
    puVar7[10] = uVar17;
    func_0x000100eea164();
    func_0x000107c5fca8();
    puVar7[0xb] = uVar16;
    puVar7[0xc] = uVar17;
    UNRECOVERED_JUMPTABLE = FUN_101bb99a0;
  }
  else {
    func_0x000107c60e78();
    uStack_60 = (ulong)&uStack_30 | 0x1000000000000000;
    pcStack_58 = FUN_101bb91fc;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar18 = *unaff_x22;
    uVar17 = *(undefined8 *)(lVar18 + 0xd8);
    plVar22 = (long *)*unaff_x22;
    *(undefined8 **)(lVar18 + 0xe8) = puVar7;
    *(code **)(lVar18 + 0xf0) = pcVar19;
    pcStack_70 = UNRECOVERED_JUMPTABLE;
    func_0x000107c615c0(*(undefined8 *)(lVar18 + 0xe0));
    func_0x000107c615e8(uVar17);
    if (pcVar19 == (code *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) goto LAB_101bb92ac;
      UNRECOVERED_JUMPTABLE = FUN_101bb92b0;
    }
    else {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
LAB_101bb92ac:
        func_0x000107c60e78();
        uStack_90 = (ulong)&uStack_60 | 0x1000000000000000;
        pcStack_88 = FUN_101bb92b0;
        lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar21 = plVar22[0x1a];
        lVar18 = plVar22[0x17];
        func_0x000100083b20(plVar22 + 0xe);
        lVar20 = plVar22[0xe];
        uVar17 = *(undefined8 *)(lVar20 + _DAT_112fd9138);
        func_0x000107c6157c(uVar17);
        func_0x000107c61170(lVar20);
        lVar8 = 0;
        FUN_101bb8ee0();
        lVar20 = lVar8;
        func_0x000107c610f8();
        *(undefined8 *)(lVar20 + _DAT_112e07218) = uVar17;
        plVar9 = plVar22 + 0xb;
        *plVar9 = lVar20;
        plVar22[0xc] = lVar8;
        func_0x000107c61154(plVar9,PTR_s_init_1125d9248);
        plVar22[0x1f] = (long)plVar9;
        puVar10 = PTR_PTR_1126b1678;
        func_0x000107c610f8();
        plVar22[6] = (long)FUN_101bb9cf4;
        plVar22[7] = lVar18;
        plVar11 = plVar22 + 2;
        *plVar11 = (long)PTR___NSConcreteStackBlock_11034bd00;
        plVar22[3] = 0x42000000;
        plVar22[4] = (long)&UNK_101016bdc;
        plVar22[5] = (long)&UNK_110451650;
        func_0x000107c60bc4();
        func_0x000107c6157c(lVar18);
        func_0x000107c46b38();
        plVar22[0x20] = (long)puVar10;
        func_0x000107c60bd0(plVar11);
        func_0x000107c61574(plVar22[7]);
        func_0x000100083b20(plVar22 + 0xf);
        lVar20 = plVar22[0xf];
        uVar17 = *(undefined8 *)(lVar20 + _DAT_112e28060);
        func_0x000107c6157c(uVar17);
        func_0x000107c61170();
        FUN_1022a68cc();
        plVar22[0x21] = lVar20;
        func_0x000107c61574(uVar17);
        func_0x000100083b20(plVar22 + 0x10);
        lVar8 = plVar22[0x10];
        uVar17 = *(undefined8 *)(lVar8 + _DAT_112ebc1a0);
        func_0x000107c6157c(uVar17);
        func_0x000107c61170();
        FUN_1022a68cc();
        plVar22[0x22] = lVar8;
        func_0x000107c61574(uVar17);
        puVar24 = &UNK_110451688;
        func_0x000107c613fc(&UNK_110451688,0x38,7);
        *(long *)(puVar24 + 0x10) = lVar21;
        *(long **)(puVar24 + 0x18) = plVar9;
        *(undefined **)(puVar24 + 0x20) = puVar10;
        *(long *)(puVar24 + 0x28) = lVar20;
        *(long *)(puVar24 + 0x30) = lVar8;
        lVar18 = 0x112e07260;
        func_0x0001000285a8(0x112e07260,&UNK_10d9db590);
        func_0x000107c61534();
        plVar22[0x23] = lVar18;
        func_0x000107c6157c(lVar21);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar21 = 0x101bb9e70;
        func_0x0001000bdd8c(0x101bb9e70,puVar24);
        plVar22[0x24] = lVar21;
        uVar15 = 0x68;
        lVar12 = 0;
        func_0x00010079aa64(0,0x112e07268,&PTR_PTR_1126c65c8);
        func_0x000107c614e8();
        plVar22[0x11] = 0;
        func_0x000107c505d0();
        func_0x000107c61180();
        plVar22[0x25] = lVar12;
        puVar13 = (undefined *)plVar22[0x11];
        if (lVar12 == 0) {
          puVar24 = (undefined *)plVar22[0x1d];
          puVar14 = puVar13;
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(puVar14);
          func_0x000107c61654();
          func_0x000107c61170(plVar9);
          func_0x000107c61170(puVar10);
          func_0x000107c61170(lVar20);
          func_0x000107c61170(lVar8);
          func_0x000107c61574(lVar21);
          func_0x000107c615e8(puVar24);
          UNRECOVERED_JUMPTABLE = (code *)plVar22[1];
          puVar14 = puVar13;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
                    /* WARNING: Could not recover jumptable at 0x000101bb96ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
        }
        else {
          func_0x000107c61174();
          func_0x0001000d224c(plVar22 + 0x12);
          lVar21 = plVar22[0x12];
          func_0x000107c44138();
          func_0x000107c61180();
          plVar22[0x26] = lVar12;
          func_0x000107c61170(lVar21);
          uVar15 = 0x70;
          func_0x0001000285a8(0x112e07258);
          func_0x000103edf20c();
          plVar22[0x27] = lVar12;
          puVar13 = &UNK_10d9db0d0;
          UNRECOVERED_JUMPTABLE = (code *)0x80;
          func_0x000107c615b8();
          plVar22[0x28] = (long)UNRECOVERED_JUMPTABLE;
          *(long **)UNRECOVERED_JUMPTABLE = plVar22;
          *(code **)(UNRECOVERED_JUMPTABLE + 8) = FUN_101bb96b4;
          puVar14 = (undefined *)0xfffffffff41d949c;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
            *(long *)(UNRECOVERED_JUMPTABLE + 0x70) = lVar12;
            UNRECOVERED_JUMPTABLE = FUN_101bb4584;
            uVar16 = 0;
            uVar17 = 0;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        uStack_100 = (ulong)&uStack_90 | 0x1000000000000000;
        pcStack_f8 = FUN_101bb96b4;
        lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_108 = *plVar22;
        puVar7 = (undefined8 *)*plVar22;
        *(code **)(lStack_108 + 0x148) = UNRECOVERED_JUMPTABLE;
        *(undefined1 *)(lStack_108 + 0x150) = uVar15;
        func_0x000107c615c0(*(undefined8 *)(lStack_108 + 0x140));
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
          UNRECOVERED_JUMPTABLE = FUN_101bb9734;
          uVar16 = 0;
          uVar17 = 0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_120 = (ulong)&uStack_100 | 0x1000000000000000;
        pcStack_118 = FUN_101bb9734;
        lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar17 = puVar7[0x29];
        lStack_168 = lVar18;
        puStack_160 = puVar24;
        lStack_158 = lVar8;
        lStack_150 = lVar20;
        puStack_148 = puVar10;
        plStack_140 = plVar9;
        puStack_138 = puVar14;
        puStack_130 = puVar13;
        puStack_128 = puVar7;
        if (*(char *)(puVar7 + 0x2a) == '\x01') {
          puVar7[0x13] = uVar17;
          iVar6 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar6 != 0) {
            uVar17 = 0x112d393f0;
            func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
            func_0x000107c61658(puVar7 + 0x13,uVar17,PTR___ss5ErrorWS_11034ee10);
          }
          unaff_x19 = puVar7[0x26];
          uVar17 = puVar7[0x24];
          uVar2 = puVar7[0x25];
          uVar16 = puVar7[0x21];
          uVar3 = puVar7[0x22];
          uVar1 = puVar7[0x1f];
          uVar4 = puVar7[0x20];
          uVar25 = puVar7[0x1d];
          func_0x000107c61574(puVar7[0x27]);
          func_0x000107c61170(uVar1);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar16);
          func_0x000107c61170(uVar3);
          func_0x000107c615e8(uVar25);
          func_0x000107c61170(unaff_x19);
          func_0x000107c61170(uVar2);
          func_0x000107c61574(uVar17);
          UNRECOVERED_JUMPTABLE = (code *)puVar7[1];
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
LAB_101bb98b8:
                    /* WARNING: Could not recover jumptable at 0x000101bb98d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
        }
        else {
          unaff_x19 = puVar7[0x26];
          uStack_178 = puVar7[0x24];
          uVar2 = puVar7[0x25];
          uVar16 = puVar7[0x21];
          uVar3 = puVar7[0x22];
          uVar1 = puVar7[0x1f];
          uVar4 = puVar7[0x20];
          uVar25 = puVar7[0x1d];
          puVar23 = (undefined8 *)puVar7[0x14];
          func_0x000107c61574(puVar7[0x27]);
          *puVar23 = uVar17;
          func_0x000107c61170(uVar1);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar16);
          func_0x000107c61170(uVar3);
          func_0x000107c615e8(uVar25);
          func_0x000107c61170(unaff_x19);
          func_0x000107c61170(uVar2);
          func_0x000107c61574(uStack_178);
          UNRECOVERED_JUMPTABLE = (code *)puVar7[1];
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) goto LAB_101bb98b8;
        }
        func_0x000107c60e78();
        uStack_190 = (ulong)&uStack_120 | 0x1000000000000000;
        plVar5 = &lStack_1a0;
        pcStack_188 = FUN_101bb98dc;
        puVar26 = &uStack_190;
        lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar19 = (code *)puVar7[0x1e];
        UNRECOVERED_JUMPTABLE = (code *)puVar7[1];
        puStack_198 = puVar7;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
                    /* WARNING: Could not recover jumptable at 0x000101bb992c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        pcVar27 = FUN_101bb9934;
        func_0x000107c60e78();
        goto code_r0x000101bb9934;
      }
      UNRECOVERED_JUMPTABLE = FUN_101bb98dc;
    }
    uVar16 = 0;
    uVar17 = 0;
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,uVar16,uVar17);
  return;
}



/* Entry: 101bb9140; end: 101bb91fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb9140(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  undefined8 unaff_x19;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long *unaff_x22;
  long *plVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  ulong unaff_x29;
  ulong *puVar25;
  code *unaff_x30;
  long lStack_180;
  undefined8 *puStack_178;
  ulong uStack_170;
  code *pcStack_168;
  undefined8 uStack_158;
  long lStack_150;
  long lStack_148;
  undefined *puStack_140;
  long lStack_138;
  long lStack_130;
  undefined *puStack_128;
  long *plStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined8 *puStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  code *pcStack_d8;
  long lStack_c0;
  ulong uStack_70;
  code *pcStack_68;
  long lStack_58;
  code *pcStack_50;
  ulong uStack_40;
  code *pcStack_38;
  long lStack_28;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100083b20(unaff_x22 + 0xd);
  lVar17 = unaff_x22[0xd];
  pcVar18 = *(code **)(lVar17 + _DAT_112ff82c0);
  unaff_x22[0x1b] = (long)pcVar18;
  func_0x000107c615f0(pcVar18);
  func_0x000107c61170(lVar17);
  UNRECOVERED_JUMPTABLE = pcVar18;
  func_0x000107c614f0();
  puVar6 = (undefined8 *)0x80;
  func_0x000107c615b8();
  unaff_x22[0x1c] = (long)puVar6;
  *puVar6 = unaff_x22;
  puVar6[1] = FUN_101bb91fc;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    puVar25 = (ulong *)(uStack_10 & 0xefffffffffffffff);
    plVar21 = (long *)register0x00000008;
code_r0x000101bb9934:
    *(undefined8 *)((long)plVar21 + -0x20) = unaff_x19;
    *(ulong *)((long)plVar21 + -0x10) = (ulong)puVar25 | 0x1000000000000000;
    *(code **)((long)plVar21 + -8) = unaff_x30;
    *(undefined8 **)((long)plVar21 + -0x18) = puVar6;
    puVar6[8] = UNRECOVERED_JUMPTABLE;
    puVar6[9] = pcVar18;
    uVar14 = 0;
    func_0x000107c5fcec();
    uVar16 = uVar14;
    func_0x000107c5fce8();
    puVar6[10] = uVar16;
    func_0x000100eea164();
    func_0x000107c5fca8();
    puVar6[0xb] = uVar14;
    puVar6[0xc] = uVar16;
    UNRECOVERED_JUMPTABLE = FUN_101bb99a0;
  }
  else {
    func_0x000107c60e78();
    uStack_40 = (ulong)&uStack_10 | 0x1000000000000000;
    pcStack_38 = FUN_101bb91fc;
    lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar17 = *unaff_x22;
    uVar16 = *(undefined8 *)(lVar17 + 0xd8);
    plVar21 = (long *)*unaff_x22;
    *(undefined8 **)(lVar17 + 0xe8) = puVar6;
    *(code **)(lVar17 + 0xf0) = pcVar18;
    pcStack_50 = UNRECOVERED_JUMPTABLE;
    func_0x000107c615c0(*(undefined8 *)(lVar17 + 0xe0));
    func_0x000107c615e8(uVar16);
    if (pcVar18 == (code *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) goto LAB_101bb92ac;
      UNRECOVERED_JUMPTABLE = FUN_101bb92b0;
    }
    else {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
LAB_101bb92ac:
        func_0x000107c60e78();
        uStack_70 = (ulong)&uStack_40 | 0x1000000000000000;
        pcStack_68 = FUN_101bb92b0;
        lStack_c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar20 = plVar21[0x1a];
        lVar17 = plVar21[0x17];
        func_0x000100083b20(plVar21 + 0xe);
        lVar19 = plVar21[0xe];
        uVar16 = *(undefined8 *)(lVar19 + _DAT_112fd9138);
        func_0x000107c6157c(uVar16);
        func_0x000107c61170(lVar19);
        lVar7 = 0;
        FUN_101bb8ee0();
        lVar19 = lVar7;
        func_0x000107c610f8();
        *(undefined8 *)(lVar19 + _DAT_112e07218) = uVar16;
        plVar8 = plVar21 + 0xb;
        *plVar8 = lVar19;
        plVar21[0xc] = lVar7;
        func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
        plVar21[0x1f] = (long)plVar8;
        puVar9 = PTR_PTR_1126b1678;
        func_0x000107c610f8();
        plVar21[6] = (long)FUN_101bb9cf4;
        plVar21[7] = lVar17;
        plVar10 = plVar21 + 2;
        *plVar10 = (long)PTR___NSConcreteStackBlock_11034bd00;
        plVar21[3] = 0x42000000;
        plVar21[4] = (long)&UNK_101016bdc;
        plVar21[5] = (long)&UNK_110451650;
        func_0x000107c60bc4();
        func_0x000107c6157c(lVar17);
        func_0x000107c46b38();
        plVar21[0x20] = (long)puVar9;
        func_0x000107c60bd0(plVar10);
        func_0x000107c61574(plVar21[7]);
        func_0x000100083b20(plVar21 + 0xf);
        lVar19 = plVar21[0xf];
        uVar16 = *(undefined8 *)(lVar19 + _DAT_112e28060);
        func_0x000107c6157c(uVar16);
        func_0x000107c61170();
        FUN_1022a68cc();
        plVar21[0x21] = lVar19;
        func_0x000107c61574(uVar16);
        func_0x000100083b20(plVar21 + 0x10);
        lVar7 = plVar21[0x10];
        uVar16 = *(undefined8 *)(lVar7 + _DAT_112ebc1a0);
        func_0x000107c6157c(uVar16);
        func_0x000107c61170();
        FUN_1022a68cc();
        plVar21[0x22] = lVar7;
        func_0x000107c61574(uVar16);
        puVar23 = &UNK_110451688;
        func_0x000107c613fc(&UNK_110451688,0x38,7);
        *(long *)(puVar23 + 0x10) = lVar20;
        *(long **)(puVar23 + 0x18) = plVar8;
        *(undefined **)(puVar23 + 0x20) = puVar9;
        *(long *)(puVar23 + 0x28) = lVar19;
        *(long *)(puVar23 + 0x30) = lVar7;
        lVar17 = 0x112e07260;
        func_0x0001000285a8(0x112e07260,&UNK_10d9db590);
        func_0x000107c61534();
        plVar21[0x23] = lVar17;
        func_0x000107c6157c(lVar20);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar20 = 0x101bb9e70;
        func_0x0001000bdd8c(0x101bb9e70,puVar23);
        plVar21[0x24] = lVar20;
        uVar15 = 0x68;
        lVar11 = 0;
        func_0x00010079aa64(0,0x112e07268,&PTR_PTR_1126c65c8);
        func_0x000107c614e8();
        plVar21[0x11] = 0;
        func_0x000107c505d0();
        func_0x000107c61180();
        plVar21[0x25] = lVar11;
        puVar12 = (undefined *)plVar21[0x11];
        if (lVar11 == 0) {
          puVar23 = (undefined *)plVar21[0x1d];
          puVar13 = puVar12;
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(puVar13);
          func_0x000107c61654();
          func_0x000107c61170(plVar8);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(lVar19);
          func_0x000107c61170(lVar7);
          func_0x000107c61574(lVar20);
          func_0x000107c615e8(puVar23);
          UNRECOVERED_JUMPTABLE = (code *)plVar21[1];
          puVar13 = puVar12;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
                    /* WARNING: Could not recover jumptable at 0x000101bb96ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
        }
        else {
          func_0x000107c61174();
          func_0x0001000d224c(plVar21 + 0x12);
          lVar20 = plVar21[0x12];
          func_0x000107c44138();
          func_0x000107c61180();
          plVar21[0x26] = lVar11;
          func_0x000107c61170(lVar20);
          uVar15 = 0x70;
          func_0x0001000285a8(0x112e07258);
          func_0x000103edf20c();
          plVar21[0x27] = lVar11;
          puVar12 = &UNK_10d9db0d0;
          UNRECOVERED_JUMPTABLE = (code *)0x80;
          func_0x000107c615b8();
          plVar21[0x28] = (long)UNRECOVERED_JUMPTABLE;
          *(long **)UNRECOVERED_JUMPTABLE = plVar21;
          *(code **)(UNRECOVERED_JUMPTABLE + 8) = FUN_101bb96b4;
          puVar13 = (undefined *)0xfffffffff41d949c;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c0) {
            *(long *)(UNRECOVERED_JUMPTABLE + 0x70) = lVar11;
            UNRECOVERED_JUMPTABLE = FUN_101bb4584;
            uVar14 = 0;
            uVar16 = 0;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        uStack_e0 = (ulong)&uStack_70 | 0x1000000000000000;
        pcStack_d8 = FUN_101bb96b4;
        lStack_f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_e8 = *plVar21;
        puVar6 = (undefined8 *)*plVar21;
        *(code **)(lStack_e8 + 0x148) = UNRECOVERED_JUMPTABLE;
        *(undefined1 *)(lStack_e8 + 0x150) = uVar15;
        func_0x000107c615c0(*(undefined8 *)(lStack_e8 + 0x140));
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_f0) {
          UNRECOVERED_JUMPTABLE = FUN_101bb9734;
          uVar14 = 0;
          uVar16 = 0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_100 = (ulong)&uStack_e0 | 0x1000000000000000;
        pcStack_f8 = FUN_101bb9734;
        lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar16 = puVar6[0x29];
        lStack_148 = lVar17;
        puStack_140 = puVar23;
        lStack_138 = lVar7;
        lStack_130 = lVar19;
        puStack_128 = puVar9;
        plStack_120 = plVar8;
        puStack_118 = puVar13;
        puStack_110 = puVar12;
        puStack_108 = puVar6;
        if (*(char *)(puVar6 + 0x2a) == '\x01') {
          puVar6[0x13] = uVar16;
          iVar5 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar5 != 0) {
            uVar16 = 0x112d393f0;
            func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
            func_0x000107c61658(puVar6 + 0x13,uVar16,PTR___ss5ErrorWS_11034ee10);
          }
          unaff_x19 = puVar6[0x26];
          uVar16 = puVar6[0x24];
          uVar2 = puVar6[0x25];
          uVar14 = puVar6[0x21];
          uVar3 = puVar6[0x22];
          uVar1 = puVar6[0x1f];
          uVar4 = puVar6[0x20];
          uVar24 = puVar6[0x1d];
          func_0x000107c61574(puVar6[0x27]);
          func_0x000107c61170(uVar1);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar14);
          func_0x000107c61170(uVar3);
          func_0x000107c615e8(uVar24);
          func_0x000107c61170(unaff_x19);
          func_0x000107c61170(uVar2);
          func_0x000107c61574(uVar16);
          UNRECOVERED_JUMPTABLE = (code *)puVar6[1];
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
LAB_101bb98b8:
                    /* WARNING: Could not recover jumptable at 0x000101bb98d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
        }
        else {
          unaff_x19 = puVar6[0x26];
          uStack_158 = puVar6[0x24];
          uVar2 = puVar6[0x25];
          uVar14 = puVar6[0x21];
          uVar3 = puVar6[0x22];
          uVar1 = puVar6[0x1f];
          uVar4 = puVar6[0x20];
          uVar24 = puVar6[0x1d];
          puVar22 = (undefined8 *)puVar6[0x14];
          func_0x000107c61574(puVar6[0x27]);
          *puVar22 = uVar16;
          func_0x000107c61170(uVar1);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar14);
          func_0x000107c61170(uVar3);
          func_0x000107c615e8(uVar24);
          func_0x000107c61170(unaff_x19);
          func_0x000107c61170(uVar2);
          func_0x000107c61574(uStack_158);
          UNRECOVERED_JUMPTABLE = (code *)puVar6[1];
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) goto LAB_101bb98b8;
        }
        func_0x000107c60e78();
        uStack_170 = (ulong)&uStack_100 | 0x1000000000000000;
        plVar21 = &lStack_180;
        pcStack_168 = FUN_101bb98dc;
        puVar25 = &uStack_170;
        lStack_180 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar18 = (code *)puVar6[0x1e];
        UNRECOVERED_JUMPTABLE = (code *)puVar6[1];
        puStack_178 = puVar6;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_180) {
                    /* WARNING: Could not recover jumptable at 0x000101bb992c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        unaff_x30 = FUN_101bb9934;
        func_0x000107c60e78();
        goto code_r0x000101bb9934;
      }
      UNRECOVERED_JUMPTABLE = FUN_101bb98dc;
    }
    uVar14 = 0;
    uVar16 = 0;
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,uVar14,uVar16);
  return;
}



/* Entry: 101bb91fc; end: 101bb92af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb91fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long unaff_x20;
  long lVar19;
  long *unaff_x22;
  long *plVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *unaff_x22;
  uVar15 = *(undefined8 *)(lVar18 + 0xd8);
  plVar20 = (long *)*unaff_x22;
  *(undefined8 *)(lVar18 + 0xe8) = param_1;
  *(long *)(lVar18 + 0xf0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar18 + 0xe0));
  func_0x000107c615e8(uVar15);
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) goto LAB_101bb92ac;
    UNRECOVERED_JUMPTABLE = FUN_101bb92b0;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
LAB_101bb92ac:
      func_0x000107c60e78();
      lVar17 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = plVar20[0x1a];
      lVar16 = plVar20[0x17];
      func_0x000100083b20(plVar20 + 0xe);
      lVar19 = plVar20[0xe];
      uVar15 = *(undefined8 *)(lVar19 + _DAT_112fd9138);
      func_0x000107c6157c(uVar15);
      func_0x000107c61170(lVar19);
      lVar7 = 0;
      FUN_101bb8ee0();
      lVar19 = lVar7;
      func_0x000107c610f8();
      *(undefined8 *)(lVar19 + _DAT_112e07218) = uVar15;
      plVar8 = plVar20 + 0xb;
      *plVar8 = lVar19;
      plVar20[0xc] = lVar7;
      func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
      plVar20[0x1f] = (long)plVar8;
      puVar9 = PTR_PTR_1126b1678;
      func_0x000107c610f8();
      plVar20[6] = (long)FUN_101bb9cf4;
      plVar20[7] = lVar16;
      plVar10 = plVar20 + 2;
      *plVar10 = (long)PTR___NSConcreteStackBlock_11034bd00;
      plVar20[3] = 0x42000000;
      plVar20[4] = (long)&UNK_101016bdc;
      plVar20[5] = (long)&UNK_110451650;
      func_0x000107c60bc4();
      func_0x000107c6157c(lVar16);
      func_0x000107c46b38();
      plVar20[0x20] = (long)puVar9;
      func_0x000107c60bd0(plVar10);
      func_0x000107c61574(plVar20[7]);
      func_0x000100083b20(plVar20 + 0xf);
      lVar19 = plVar20[0xf];
      uVar15 = *(undefined8 *)(lVar19 + _DAT_112e28060);
      func_0x000107c6157c(uVar15);
      func_0x000107c61170();
      FUN_1022a68cc();
      plVar20[0x21] = lVar19;
      func_0x000107c61574(uVar15);
      func_0x000100083b20(plVar20 + 0x10);
      lVar7 = plVar20[0x10];
      uVar15 = *(undefined8 *)(lVar7 + _DAT_112ebc1a0);
      func_0x000107c6157c(uVar15);
      func_0x000107c61170();
      FUN_1022a68cc();
      plVar20[0x22] = lVar7;
      func_0x000107c61574(uVar15);
      puVar11 = &UNK_110451688;
      func_0x000107c613fc(&UNK_110451688,0x38,7);
      *(long *)(puVar11 + 0x10) = lVar18;
      *(long **)(puVar11 + 0x18) = plVar8;
      *(undefined **)(puVar11 + 0x20) = puVar9;
      *(long *)(puVar11 + 0x28) = lVar19;
      *(long *)(puVar11 + 0x30) = lVar7;
      lVar16 = 0x112e07260;
      func_0x0001000285a8(0x112e07260,&UNK_10d9db590);
      func_0x000107c61534();
      plVar20[0x23] = lVar16;
      func_0x000107c6157c(lVar18);
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      func_0x000107c61174();
      lVar16 = 0x101bb9e70;
      func_0x0001000bdd8c(0x101bb9e70,puVar11);
      plVar20[0x24] = lVar16;
      uVar13 = 0x68;
      lVar18 = 0;
      func_0x00010079aa64(0,0x112e07268,&PTR_PTR_1126c65c8);
      func_0x000107c614e8();
      plVar20[0x11] = 0;
      func_0x000107c505d0();
      func_0x000107c61180();
      plVar20[0x25] = lVar18;
      lVar12 = plVar20[0x11];
      if (lVar18 == 0) {
        lVar18 = plVar20[0x1d];
        func_0x000107c61174();
        func_0x000107c5ed30();
        func_0x000107c61170(lVar12);
        func_0x000107c61654();
        func_0x000107c61170(plVar8);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(lVar19);
        func_0x000107c61170(lVar7);
        func_0x000107c61574(lVar16);
        func_0x000107c615e8(lVar18);
        UNRECOVERED_JUMPTABLE = (code *)plVar20[1];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
                    /* WARNING: Could not recover jumptable at 0x000101bb96ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
      }
      else {
        func_0x000107c61174();
        func_0x0001000d224c(plVar20 + 0x12);
        lVar16 = plVar20[0x12];
        func_0x000107c44138();
        func_0x000107c61180();
        plVar20[0x26] = lVar18;
        func_0x000107c61170(lVar16);
        uVar13 = 0x70;
        func_0x0001000285a8(0x112e07258);
        func_0x000103edf20c();
        plVar20[0x27] = lVar18;
        UNRECOVERED_JUMPTABLE = (code *)0x80;
        func_0x000107c615b8();
        plVar20[0x28] = (long)UNRECOVERED_JUMPTABLE;
        *(long **)UNRECOVERED_JUMPTABLE = plVar20;
        *(code **)(UNRECOVERED_JUMPTABLE + 8) = FUN_101bb96b4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar17) {
          *(long *)(UNRECOVERED_JUMPTABLE + 0x70) = lVar18;
          UNRECOVERED_JUMPTABLE = FUN_101bb4584;
          uVar14 = 0;
          uVar15 = 0;
          goto LAB_107c615e0;
        }
      }
      func_0x000107c60e78();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = *plVar20;
      lVar19 = *plVar20;
      *(code **)(lVar18 + 0x148) = UNRECOVERED_JUMPTABLE;
      *(undefined1 *)(lVar18 + 0x150) = uVar13;
      func_0x000107c615c0(*(undefined8 *)(lVar18 + 0x140));
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
        UNRECOVERED_JUMPTABLE = FUN_101bb9734;
        uVar14 = 0;
        uVar15 = 0;
      }
      else {
        func_0x000107c60e78();
        lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
        uVar15 = *(undefined8 *)(lVar19 + 0x148);
        if (*(char *)(lVar19 + 0x150) == '\x01') {
          *(undefined8 *)(lVar19 + 0x98) = uVar15;
          iVar6 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar6 != 0) {
            uVar15 = 0x112d393f0;
            func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
            func_0x000107c61658(lVar19 + 0x98,uVar15,PTR___ss5ErrorWS_11034ee10);
          }
          uVar15 = *(undefined8 *)(lVar19 + 0x130);
          uVar14 = *(undefined8 *)(lVar19 + 0x120);
          uVar3 = *(undefined8 *)(lVar19 + 0x128);
          uVar1 = *(undefined8 *)(lVar19 + 0x108);
          uVar4 = *(undefined8 *)(lVar19 + 0x110);
          uVar2 = *(undefined8 *)(lVar19 + 0xf8);
          uVar5 = *(undefined8 *)(lVar19 + 0x100);
          uVar22 = *(undefined8 *)(lVar19 + 0xe8);
          func_0x000107c61574(*(undefined8 *)(lVar19 + 0x138));
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uVar5);
          func_0x000107c61170(uVar1);
          func_0x000107c61170(uVar4);
          func_0x000107c615e8(uVar22);
          func_0x000107c61170(uVar15);
          func_0x000107c61170(uVar3);
          func_0x000107c61574(uVar14);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar19 + 8);
          lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
        }
        else {
          uVar14 = *(undefined8 *)(lVar19 + 0x130);
          uVar1 = *(undefined8 *)(lVar19 + 0x120);
          uVar4 = *(undefined8 *)(lVar19 + 0x128);
          uVar2 = *(undefined8 *)(lVar19 + 0x108);
          uVar5 = *(undefined8 *)(lVar19 + 0x110);
          uVar3 = *(undefined8 *)(lVar19 + 0xf8);
          uVar22 = *(undefined8 *)(lVar19 + 0x100);
          uVar23 = *(undefined8 *)(lVar19 + 0xe8);
          puVar21 = *(undefined8 **)(lVar19 + 0xa0);
          func_0x000107c61574(*(undefined8 *)(lVar19 + 0x138));
          *puVar21 = uVar15;
          func_0x000107c61170(uVar3);
          func_0x000107c61170(uVar22);
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uVar5);
          func_0x000107c615e8(uVar23);
          func_0x000107c61170(uVar14);
          func_0x000107c61170(uVar4);
          func_0x000107c61574(uVar1);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar19 + 8);
          lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
        }
        if (lVar18 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101bb98d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        func_0x000107c60e78();
        uVar15 = *(undefined8 *)(lVar19 + 0xf0);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar19 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0)
        {
                    /* WARNING: Could not recover jumptable at 0x000101bb992c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        func_0x000107c60e78();
        *(code **)(lVar19 + 0x40) = UNRECOVERED_JUMPTABLE;
        *(undefined8 *)(lVar19 + 0x48) = uVar15;
        uVar14 = 0;
        func_0x000107c5fcec();
        uVar15 = uVar14;
        func_0x000107c5fce8();
        *(undefined8 *)(lVar19 + 0x50) = uVar15;
        func_0x000100eea164();
        func_0x000107c5fca8();
        *(undefined8 *)(lVar19 + 0x58) = uVar14;
        *(undefined8 *)(lVar19 + 0x60) = uVar15;
        UNRECOVERED_JUMPTABLE = FUN_101bb99a0;
      }
      goto LAB_107c615e0;
    }
    UNRECOVERED_JUMPTABLE = FUN_101bb98dc;
  }
  uVar14 = 0;
  uVar15 = 0;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,uVar14,uVar15);
  return;
}



/* Entry: 101bb92b0; end: 101bb96b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb92b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined *puVar9;
  long *plVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *unaff_x22;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = unaff_x22[0x1a];
  lVar18 = unaff_x22[0x17];
  func_0x000100083b20(unaff_x22 + 0xe);
  lVar17 = unaff_x22[0xe];
  uVar19 = *(undefined8 *)(lVar17 + _DAT_112fd9138);
  func_0x000107c6157c(uVar19);
  func_0x000107c61170(lVar17);
  lVar7 = 0;
  FUN_101bb8ee0();
  lVar17 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar17 + _DAT_112e07218) = uVar19;
  plVar8 = unaff_x22 + 0xb;
  *plVar8 = lVar17;
  unaff_x22[0xc] = lVar7;
  func_0x000107c61154(plVar8,PTR_s_init_1125d9248);
  unaff_x22[0x1f] = (long)plVar8;
  puVar9 = PTR_PTR_1126b1678;
  func_0x000107c610f8();
  unaff_x22[6] = (long)FUN_101bb9cf4;
  unaff_x22[7] = lVar18;
  plVar10 = unaff_x22 + 2;
  *plVar10 = (long)PTR___NSConcreteStackBlock_11034bd00;
  unaff_x22[3] = 0x42000000;
  unaff_x22[4] = (long)&UNK_101016bdc;
  unaff_x22[5] = (long)&UNK_110451650;
  func_0x000107c60bc4();
  func_0x000107c6157c(lVar18);
  func_0x000107c46b38();
  unaff_x22[0x20] = (long)puVar9;
  func_0x000107c60bd0(plVar10);
  func_0x000107c61574(unaff_x22[7]);
  func_0x000100083b20(unaff_x22 + 0xf);
  lVar17 = unaff_x22[0xf];
  uVar19 = *(undefined8 *)(lVar17 + _DAT_112e28060);
  func_0x000107c6157c(uVar19);
  func_0x000107c61170();
  FUN_1022a68cc();
  unaff_x22[0x21] = lVar17;
  func_0x000107c61574(uVar19);
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar7 = unaff_x22[0x10];
  uVar19 = *(undefined8 *)(lVar7 + _DAT_112ebc1a0);
  func_0x000107c6157c(uVar19);
  func_0x000107c61170();
  FUN_1022a68cc();
  unaff_x22[0x22] = lVar7;
  func_0x000107c61574(uVar19);
  puVar11 = &UNK_110451688;
  func_0x000107c613fc(&UNK_110451688,0x38,7);
  *(long *)(puVar11 + 0x10) = lVar12;
  *(long **)(puVar11 + 0x18) = plVar8;
  *(undefined **)(puVar11 + 0x20) = puVar9;
  *(long *)(puVar11 + 0x28) = lVar17;
  *(long *)(puVar11 + 0x30) = lVar7;
  lVar18 = 0x112e07260;
  func_0x0001000285a8(0x112e07260,&UNK_10d9db590);
  func_0x000107c61534();
  unaff_x22[0x23] = lVar18;
  func_0x000107c6157c(lVar12);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  lVar18 = 0x101bb9e70;
  func_0x0001000bdd8c(0x101bb9e70,puVar11);
  unaff_x22[0x24] = lVar18;
  uVar14 = 0x68;
  lVar12 = 0;
  func_0x00010079aa64(0,0x112e07268,&PTR_PTR_1126c65c8);
  func_0x000107c614e8();
  unaff_x22[0x11] = 0;
  func_0x000107c505d0();
  func_0x000107c61180();
  unaff_x22[0x25] = lVar12;
  lVar13 = unaff_x22[0x11];
  if (lVar12 == 0) {
    lVar12 = unaff_x22[0x1d];
    func_0x000107c61174();
    func_0x000107c5ed30();
    func_0x000107c61170(lVar13);
    func_0x000107c61654();
    func_0x000107c61170(plVar8);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar17);
    func_0x000107c61170(lVar7);
    func_0x000107c61574(lVar18);
    func_0x000107c615e8(lVar12);
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000101bb96ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    func_0x000107c61174();
    func_0x0001000d224c(unaff_x22 + 0x12);
    lVar18 = unaff_x22[0x12];
    func_0x000107c44138();
    func_0x000107c61180();
    unaff_x22[0x26] = lVar12;
    func_0x000107c61170(lVar18);
    uVar14 = 0x70;
    func_0x0001000285a8(0x112e07258);
    func_0x000103edf20c();
    unaff_x22[0x27] = lVar12;
    UNRECOVERED_JUMPTABLE = (code *)0x80;
    func_0x000107c615b8();
    unaff_x22[0x28] = (long)UNRECOVERED_JUMPTABLE;
    *(long **)UNRECOVERED_JUMPTABLE = unaff_x22;
    *(code **)(UNRECOVERED_JUMPTABLE + 8) = FUN_101bb96b4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar16) {
      *(long *)(UNRECOVERED_JUMPTABLE + 0x70) = lVar12;
      UNRECOVERED_JUMPTABLE = FUN_101bb4584;
      uVar15 = 0;
      uVar19 = 0;
      goto LAB_107c615e0;
    }
  }
  func_0x000107c60e78();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar12 = *unaff_x22;
  lVar17 = *unaff_x22;
  *(code **)(lVar12 + 0x148) = UNRECOVERED_JUMPTABLE;
  *(undefined1 *)(lVar12 + 0x150) = uVar14;
  func_0x000107c615c0(*(undefined8 *)(lVar12 + 0x140));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    UNRECOVERED_JUMPTABLE = FUN_101bb9734;
    uVar15 = 0;
    uVar19 = 0;
  }
  else {
    func_0x000107c60e78();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar19 = *(undefined8 *)(lVar17 + 0x148);
    if (*(char *)(lVar17 + 0x150) == '\x01') {
      *(undefined8 *)(lVar17 + 0x98) = uVar19;
      iVar6 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar6 != 0) {
        uVar19 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(lVar17 + 0x98,uVar19,PTR___ss5ErrorWS_11034ee10);
      }
      uVar19 = *(undefined8 *)(lVar17 + 0x130);
      uVar15 = *(undefined8 *)(lVar17 + 0x120);
      uVar3 = *(undefined8 *)(lVar17 + 0x128);
      uVar1 = *(undefined8 *)(lVar17 + 0x108);
      uVar4 = *(undefined8 *)(lVar17 + 0x110);
      uVar2 = *(undefined8 *)(lVar17 + 0xf8);
      uVar5 = *(undefined8 *)(lVar17 + 0x100);
      uVar21 = *(undefined8 *)(lVar17 + 0xe8);
      func_0x000107c61574(*(undefined8 *)(lVar17 + 0x138));
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(uVar21);
      func_0x000107c61170(uVar19);
      func_0x000107c61170(uVar3);
      func_0x000107c61574(uVar15);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 8);
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    else {
      uVar15 = *(undefined8 *)(lVar17 + 0x130);
      uVar1 = *(undefined8 *)(lVar17 + 0x120);
      uVar4 = *(undefined8 *)(lVar17 + 0x128);
      uVar2 = *(undefined8 *)(lVar17 + 0x108);
      uVar5 = *(undefined8 *)(lVar17 + 0x110);
      uVar3 = *(undefined8 *)(lVar17 + 0xf8);
      uVar21 = *(undefined8 *)(lVar17 + 0x100);
      uVar22 = *(undefined8 *)(lVar17 + 0xe8);
      puVar20 = *(undefined8 **)(lVar17 + 0xa0);
      func_0x000107c61574(*(undefined8 *)(lVar17 + 0x138));
      *puVar20 = uVar19;
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar21);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(uVar22);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar4);
      func_0x000107c61574(uVar1);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 8);
      lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    if (lVar12 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x000101bb98d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    func_0x000107c60e78();
    uVar19 = *(undefined8 *)(lVar17 + 0xf0);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101bb992c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    func_0x000107c60e78();
    *(code **)(lVar17 + 0x40) = UNRECOVERED_JUMPTABLE;
    *(undefined8 *)(lVar17 + 0x48) = uVar19;
    uVar15 = 0;
    func_0x000107c5fcec();
    uVar19 = uVar15;
    func_0x000107c5fce8();
    *(undefined8 *)(lVar17 + 0x50) = uVar19;
    func_0x000100eea164();
    func_0x000107c5fca8();
    *(undefined8 *)(lVar17 + 0x58) = uVar15;
    *(undefined8 *)(lVar17 + 0x60) = uVar19;
    UNRECOVERED_JUMPTABLE = FUN_101bb99a0;
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,uVar15,uVar19);
  return;
}



/* Entry: 101bb96b4; end: 101bb9733;  */

void FUN_101bb96b4(undefined8 param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *unaff_x22;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *unaff_x22;
  lVar11 = *unaff_x22;
  *(undefined8 *)(lVar10 + 0x148) = param_1;
  *(undefined1 *)(lVar10 + 0x150) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar10 + 0x140));
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    UNRECOVERED_JUMPTABLE_00 = FUN_101bb9734;
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    func_0x000107c60e78();
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar8 = *(undefined8 *)(lVar11 + 0x148);
    if (*(char *)(lVar11 + 0x150) == '\x01') {
      *(undefined8 *)(lVar11 + 0x98) = uVar8;
      iVar6 = 2;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar6 != 0) {
        uVar8 = 0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(lVar11 + 0x98,uVar8,PTR___ss5ErrorWS_11034ee10);
      }
      uVar8 = *(undefined8 *)(lVar11 + 0x130);
      uVar7 = *(undefined8 *)(lVar11 + 0x120);
      uVar3 = *(undefined8 *)(lVar11 + 0x128);
      uVar1 = *(undefined8 *)(lVar11 + 0x108);
      uVar4 = *(undefined8 *)(lVar11 + 0x110);
      uVar2 = *(undefined8 *)(lVar11 + 0xf8);
      uVar5 = *(undefined8 *)(lVar11 + 0x100);
      uVar13 = *(undefined8 *)(lVar11 + 0xe8);
      func_0x000107c61574(*(undefined8 *)(lVar11 + 0x138));
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar4);
      func_0x000107c615e8(uVar13);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar3);
      func_0x000107c61574(uVar7);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar11 + 8);
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar11 + 0x130);
      uVar1 = *(undefined8 *)(lVar11 + 0x120);
      uVar4 = *(undefined8 *)(lVar11 + 0x128);
      uVar2 = *(undefined8 *)(lVar11 + 0x108);
      uVar5 = *(undefined8 *)(lVar11 + 0x110);
      uVar3 = *(undefined8 *)(lVar11 + 0xf8);
      uVar13 = *(undefined8 *)(lVar11 + 0x100);
      uVar14 = *(undefined8 *)(lVar11 + 0xe8);
      puVar12 = *(undefined8 **)(lVar11 + 0xa0);
      func_0x000107c61574(*(undefined8 *)(lVar11 + 0x138));
      *puVar12 = uVar8;
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar5);
      func_0x000107c615e8(uVar14);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar4);
      func_0x000107c61574(uVar1);
      UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar11 + 8);
      lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    }
    if (lVar10 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000101bb98d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    func_0x000107c60e78();
    uVar8 = *(undefined8 *)(lVar11 + 0xf0);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar11 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101bb992c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    func_0x000107c60e78();
    *(code **)(lVar11 + 0x40) = UNRECOVERED_JUMPTABLE_00;
    *(undefined8 *)(lVar11 + 0x48) = uVar8;
    uVar7 = 0;
    func_0x000107c5fcec();
    uVar8 = uVar7;
    func_0x000107c5fce8();
    *(undefined8 *)(lVar11 + 0x50) = uVar8;
    func_0x000100eea164();
    func_0x000107c5fca8();
    *(undefined8 *)(lVar11 + 0x58) = uVar7;
    *(undefined8 *)(lVar11 + 0x60) = uVar8;
    UNRECOVERED_JUMPTABLE_00 = FUN_101bb99a0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,uVar7,uVar8);
  return;
}



/* Entry: 101bb9734; end: 101bb98db;  */

void FUN_101bb9734(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar10 = *(undefined8 *)(unaff_x22 + 0x148);
  if (*(char *)(unaff_x22 + 0x150) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x98) = uVar10;
    iVar6 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar6 != 0) {
      uVar10 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x98,uVar10,PTR___ss5ErrorWS_11034ee10);
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xe8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x138));
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(uVar12);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar3);
    func_0x000107c61574(uVar7);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
    puVar11 = *(undefined8 **)(unaff_x22 + 0xa0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x138));
    *puVar11 = uVar10;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(uVar13);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar4);
    func_0x000107c61574(uVar1);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
    lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  }
  if (lVar9 != lVar8) {
    func_0x000107c60e78();
    uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101bb992c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    func_0x000107c60e78();
    *(code **)(unaff_x22 + 0x40) = UNRECOVERED_JUMPTABLE_00;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar10;
    uVar7 = 0;
    func_0x000107c5fcec();
    uVar10 = uVar7;
    func_0x000107c5fce8();
    *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
    func_0x000100eea164();
    func_0x000107c5fca8();
    *(undefined8 *)(unaff_x22 + 0x58) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x60) = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb99a0,uVar7,uVar10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101bb98d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



/* Entry: 101bb98dc; end: 101bb9933;  */

void FUN_101bb98dc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
                    /* WARNING: Could not recover jumptable at 0x000101bb992c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  func_0x000107c60e78();
  *(code **)(unaff_x22 + 0x40) = UNRECOVERED_JUMPTABLE;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb99a0,uVar1,uVar2);
  return;
}



/* Entry: 101bb9934; end: 101bb999f;  */

void FUN_101bb9934(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb99a0,uVar1,uVar2);
  return;
}



/* Entry: 101bb99a0; end: 101bb9a57;  */

void FUN_101bb99a0(void)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = 0x112d3c270;
  func_0x0001000285a8(0x112d3c270,&UNK_10d9052f0);
  uVar6 = 0x101bb9ed0;
  func_0x00010488bc98(0x101bb9ed0,unaff_x22 + 0x10,uVar2);
  *(undefined8 *)(unaff_x22 + 0x68) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x70) = plVar3;
  lVar4 = 0x112e067b0;
  func_0x0001000285a8(0x112e067b0,&UNK_10d9db5a0);
  lVar5 = lVar4;
  FUN_101b86980();
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bb9a58;
  plVar3[3] = unaff_x22 + 0x38;
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,lVar5,lVar4,&UNK_10e821f58,&UNK_10e821f60);
  uVar2 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar7 = 0;
  __ss6ResultOMa(0,uVar6,uVar2,PTR___ss5ErrorWS_11034ee10);
  plVar3[4] = lVar7;
  uVar8 = *(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar3[5] = uVar8;
  piVar10 = *(int **)(lVar5 + 0x10);
  iVar1 = *piVar10;
  plVar9 = (long *)(ulong)(uint)piVar10[1];
  _swift_task_alloc();
  plVar3[6] = (long)plVar9;
  *plVar9 = (long)plVar3;
  plVar9[1] = (long)&UNK_10488e244;
                    /* WARNING: Could not recover jumptable at 0x00010488e240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(plVar9,uVar8,lVar4,lVar5);
  return;
}



/* Entry: 101bb9a58; end: 101bb9aaf;  */

void FUN_101bb9a58(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_101bb9ab0;
  }
  else {
    pcVar1 = (code *)0x101bb9af4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (pcVar1,*(undefined8 *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x60));
  return;
}



/* Entry: 101bb9ab0; end: 101bb9b33;  */

void FUN_101bb9ab0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x50));
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bb9af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Entry: 101bb9b34; end: 101bb9baf;  */

undefined8 FUN_101bb9b34(void)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000102758434(auStack_60);
  func_0x000107c61170(uStack_38);
  func_0x0001000a8868(auStack_60,uStack_48);
  uVar1 = uStack_48;
  (**(code **)(lStack_40 + 8))(uStack_48,lStack_40);
  func_0x0001000834e4(auStack_60);
  return uVar1;
}



/* Entry: 101bb9bb0; end: 101bb9c2b;  */

void FUN_101bb9bb0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  FUN_1022a68cc();
  puVar1 = PTR_PTR_1126a8be0;
  func_0x000107c610f8();
  func_0x000107c491d4();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 101bb9c2c; end: 101bb9cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb9c2c(long param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar11;
  undefined1 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long unaff_x19;
  code *pcVar16;
  long lVar17;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar18;
  undefined *puVar19;
  ulong *puVar20;
  ulong unaff_x29;
  code *pcVar21;
  long lStack_1a0;
  long *plStack_198;
  ulong uStack_190;
  code *pcStack_188;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  undefined *puStack_160;
  long lStack_158;
  long lStack_150;
  undefined *puStack_148;
  long *plStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  long *plStack_128;
  ulong uStack_120;
  code *pcStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  code *pcStack_f8;
  long lStack_e0;
  ulong uStack_90;
  code *pcStack_88;
  long lStack_78;
  code *pcStack_70;
  long lStack_68;
  ulong uStack_60;
  code *pcStack_58;
  ulong uStack_10;
  
  uStack_10 = unaff_x29 | 0x1000000000000000;
  lVar14 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar13 = *(long *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  lVar17 = *(long *)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  plVar11 = (long *)0x160;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_101bb9cb8;
  uStack_10 = uStack_10 & 0xefffffffffffffff | 0x1000000000000000;
  plVar2 = (long *)&stack0xffffffffffffffe0;
  lVar15 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar11[0x19] = lVar17;
  plVar11[0x1a] = lVar1;
  plVar11[0x17] = lVar13;
  plVar11[0x18] = lVar8;
  plVar11[0x15] = lVar14;
  plVar11[0x16] = lVar5;
  plVar11[0x14] = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar15) {
    UNRECOVERED_JUMPTABLE = FUN_101bb9140;
    lVar13 = 0;
    lVar14 = 0;
    goto LAB_107c615e0;
  }
  func_0x000107c60e78();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000100083b20(plVar11 + 0xd);
  lVar13 = plVar11[0xd];
  pcVar16 = *(code **)(lVar13 + _DAT_112ff82c0);
  plVar11[0x1b] = (long)pcVar16;
  func_0x000107c615f0(pcVar16);
  func_0x000107c61170(lVar13);
  UNRECOVERED_JUMPTABLE = pcVar16;
  func_0x000107c614f0();
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  plVar11[0x1c] = (long)plVar4;
  *plVar4 = (long)plVar11;
  plVar4[1] = (long)FUN_101bb91fc;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    pcVar21 = FUN_101bb9140;
    puVar20 = (ulong *)((ulong)&uStack_10 & 0xefffffffffffffff);
code_r0x000101bb9934:
    *(long *)((long)plVar2 + -0x20) = unaff_x19;
    *(ulong *)((long)plVar2 + -0x10) = (ulong)puVar20 | 0x1000000000000000;
    *(code **)((long)plVar2 + -8) = pcVar21;
    *(long **)((long)plVar2 + -0x18) = plVar4;
    plVar4[8] = (long)UNRECOVERED_JUMPTABLE;
    plVar4[9] = (long)pcVar16;
    lVar13 = 0;
    func_0x000107c5fcec();
    lVar14 = lVar13;
    func_0x000107c5fce8();
    plVar4[10] = lVar14;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar4[0xb] = lVar13;
    plVar4[0xc] = lVar14;
    UNRECOVERED_JUMPTABLE = FUN_101bb99a0;
  }
  else {
    func_0x000107c60e78();
    uStack_60 = (ulong)&stack0xffffffffffffffd0 | 0x1000000000000000;
    pcStack_58 = FUN_101bb91fc;
    lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_68 = *plVar11;
    uVar18 = *(undefined8 *)(lStack_68 + 0xd8);
    plVar11 = (long *)*plVar11;
    *(long **)(lStack_68 + 0xe8) = plVar4;
    *(code **)(lStack_68 + 0xf0) = pcVar16;
    pcStack_70 = UNRECOVERED_JUMPTABLE;
    func_0x000107c615c0(*(undefined8 *)(lStack_68 + 0xe0));
    func_0x000107c615e8(uVar18);
    if (pcVar16 == (code *)0x0) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) goto LAB_101bb92ac;
      UNRECOVERED_JUMPTABLE = FUN_101bb92b0;
    }
    else {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
LAB_101bb92ac:
        func_0x000107c60e78();
        uStack_90 = (ulong)&uStack_60 | 0x1000000000000000;
        pcStack_88 = FUN_101bb92b0;
        lStack_e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar13 = plVar11[0x1a];
        lVar14 = plVar11[0x17];
        func_0x000100083b20(plVar11 + 0xe);
        lVar17 = plVar11[0xe];
        uVar18 = *(undefined8 *)(lVar17 + _DAT_112fd9138);
        func_0x000107c6157c(uVar18);
        func_0x000107c61170(lVar17);
        lVar5 = 0;
        FUN_101bb8ee0();
        lVar17 = lVar5;
        func_0x000107c610f8();
        *(undefined8 *)(lVar17 + _DAT_112e07218) = uVar18;
        plVar6 = plVar11 + 0xb;
        *plVar6 = lVar17;
        plVar11[0xc] = lVar5;
        func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
        plVar11[0x1f] = (long)plVar6;
        puVar7 = PTR_PTR_1126b1678;
        func_0x000107c610f8();
        plVar11[6] = (long)FUN_101bb9cf4;
        plVar11[7] = lVar14;
        plVar4 = plVar11 + 2;
        *plVar4 = (long)PTR___NSConcreteStackBlock_11034bd00;
        plVar11[3] = 0x42000000;
        plVar11[4] = (long)&UNK_101016bdc;
        plVar11[5] = (long)&UNK_110451650;
        func_0x000107c60bc4();
        func_0x000107c6157c(lVar14);
        func_0x000107c46b38();
        plVar11[0x20] = (long)puVar7;
        func_0x000107c60bd0(plVar4);
        func_0x000107c61574(plVar11[7]);
        func_0x000100083b20(plVar11 + 0xf);
        lVar17 = plVar11[0xf];
        uVar18 = *(undefined8 *)(lVar17 + _DAT_112e28060);
        func_0x000107c6157c(uVar18);
        func_0x000107c61170();
        FUN_1022a68cc();
        plVar11[0x21] = lVar17;
        func_0x000107c61574(uVar18);
        func_0x000100083b20(plVar11 + 0x10);
        lVar5 = plVar11[0x10];
        uVar18 = *(undefined8 *)(lVar5 + _DAT_112ebc1a0);
        func_0x000107c6157c(uVar18);
        func_0x000107c61170();
        FUN_1022a68cc();
        plVar11[0x22] = lVar5;
        func_0x000107c61574(uVar18);
        puVar19 = &UNK_110451688;
        func_0x000107c613fc(&UNK_110451688,0x38,7);
        *(long *)(puVar19 + 0x10) = lVar13;
        *(long **)(puVar19 + 0x18) = plVar6;
        *(undefined **)(puVar19 + 0x20) = puVar7;
        *(long *)(puVar19 + 0x28) = lVar17;
        *(long *)(puVar19 + 0x30) = lVar5;
        lVar14 = 0x112e07260;
        func_0x0001000285a8(0x112e07260,&UNK_10d9db590);
        func_0x000107c61534();
        plVar11[0x23] = lVar14;
        func_0x000107c6157c(lVar13);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar13 = 0x101bb9e70;
        func_0x0001000bdd8c(0x101bb9e70,puVar19);
        plVar11[0x24] = lVar13;
        uVar12 = 0x68;
        lVar8 = 0;
        func_0x00010079aa64(0,0x112e07268,&PTR_PTR_1126c65c8);
        func_0x000107c614e8();
        plVar11[0x11] = 0;
        func_0x000107c505d0();
        func_0x000107c61180();
        plVar11[0x25] = lVar8;
        puVar9 = (undefined *)plVar11[0x11];
        if (lVar8 == 0) {
          puVar19 = (undefined *)plVar11[0x1d];
          puVar10 = puVar9;
          func_0x000107c61174();
          func_0x000107c5ed30();
          func_0x000107c61170(puVar10);
          func_0x000107c61654();
          func_0x000107c61170(plVar6);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(lVar17);
          func_0x000107c61170(lVar5);
          func_0x000107c61574(lVar13);
          func_0x000107c615e8(puVar19);
          UNRECOVERED_JUMPTABLE = (code *)plVar11[1];
          puVar10 = puVar9;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
                    /* WARNING: Could not recover jumptable at 0x000101bb96ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
        }
        else {
          func_0x000107c61174();
          func_0x0001000d224c(plVar11 + 0x12);
          lVar13 = plVar11[0x12];
          func_0x000107c44138();
          func_0x000107c61180();
          plVar11[0x26] = lVar8;
          func_0x000107c61170(lVar13);
          uVar12 = 0x70;
          func_0x0001000285a8(0x112e07258);
          func_0x000103edf20c();
          plVar11[0x27] = lVar8;
          puVar9 = &UNK_10d9db0d0;
          UNRECOVERED_JUMPTABLE = (code *)0x80;
          func_0x000107c615b8();
          plVar11[0x28] = (long)UNRECOVERED_JUMPTABLE;
          *(long **)UNRECOVERED_JUMPTABLE = plVar11;
          *(code **)(UNRECOVERED_JUMPTABLE + 8) = FUN_101bb96b4;
          puVar10 = (undefined *)0xfffffffff41d949c;
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e0) {
            *(long *)(UNRECOVERED_JUMPTABLE + 0x70) = lVar8;
            UNRECOVERED_JUMPTABLE = FUN_101bb4584;
            lVar13 = 0;
            lVar14 = 0;
            goto LAB_107c615e0;
          }
        }
        func_0x000107c60e78();
        uStack_100 = (ulong)&uStack_90 | 0x1000000000000000;
        pcStack_f8 = FUN_101bb96b4;
        lStack_110 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lStack_108 = *plVar11;
        plVar4 = (long *)*plVar11;
        *(code **)(lStack_108 + 0x148) = UNRECOVERED_JUMPTABLE;
        *(undefined1 *)(lStack_108 + 0x150) = uVar12;
        func_0x000107c615c0(*(undefined8 *)(lStack_108 + 0x140));
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_110) {
          UNRECOVERED_JUMPTABLE = FUN_101bb9734;
          lVar13 = 0;
          lVar14 = 0;
          goto LAB_107c615e0;
        }
        func_0x000107c60e78();
        uStack_120 = (ulong)&uStack_100 | 0x1000000000000000;
        pcStack_118 = FUN_101bb9734;
        lStack_170 = *(long *)PTR____stack_chk_guard_11034bdc0;
        lVar13 = plVar4[0x29];
        lStack_168 = lVar14;
        puStack_160 = puVar19;
        lStack_158 = lVar5;
        lStack_150 = lVar17;
        puStack_148 = puVar7;
        plStack_140 = plVar6;
        puStack_138 = puVar10;
        puStack_130 = puVar9;
        plStack_128 = plVar4;
        if ((char)plVar4[0x2a] == '\x01') {
          plVar4[0x13] = lVar13;
          iVar3 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar3 != 0) {
            uVar18 = 0x112d393f0;
            func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
            func_0x000107c61658(plVar4 + 0x13,uVar18,PTR___ss5ErrorWS_11034ee10);
          }
          unaff_x19 = plVar4[0x26];
          lVar14 = plVar4[0x24];
          lVar5 = plVar4[0x25];
          lVar13 = plVar4[0x21];
          lVar8 = plVar4[0x22];
          lVar17 = plVar4[0x1f];
          lVar1 = plVar4[0x20];
          lVar15 = plVar4[0x1d];
          func_0x000107c61574(plVar4[0x27]);
          func_0x000107c61170(lVar17);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar13);
          func_0x000107c61170(lVar8);
          func_0x000107c615e8(lVar15);
          func_0x000107c61170(unaff_x19);
          func_0x000107c61170(lVar5);
          func_0x000107c61574(lVar14);
          UNRECOVERED_JUMPTABLE = (code *)plVar4[1];
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) {
LAB_101bb98b8:
                    /* WARNING: Could not recover jumptable at 0x000101bb98d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
        }
        else {
          unaff_x19 = plVar4[0x26];
          lStack_178 = plVar4[0x24];
          lVar5 = plVar4[0x25];
          lVar14 = plVar4[0x21];
          lVar8 = plVar4[0x22];
          lVar17 = plVar4[0x1f];
          lVar1 = plVar4[0x20];
          lVar15 = plVar4[0x1d];
          plVar11 = (long *)plVar4[0x14];
          func_0x000107c61574(plVar4[0x27]);
          *plVar11 = lVar13;
          func_0x000107c61170(lVar17);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar14);
          func_0x000107c61170(lVar8);
          func_0x000107c615e8(lVar15);
          func_0x000107c61170(unaff_x19);
          func_0x000107c61170(lVar5);
          func_0x000107c61574(lStack_178);
          UNRECOVERED_JUMPTABLE = (code *)plVar4[1];
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_170) goto LAB_101bb98b8;
        }
        func_0x000107c60e78();
        uStack_190 = (ulong)&uStack_120 | 0x1000000000000000;
        plVar2 = &lStack_1a0;
        pcStack_188 = FUN_101bb98dc;
        puVar20 = &uStack_190;
        lStack_1a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pcVar16 = (code *)plVar4[0x1e];
        UNRECOVERED_JUMPTABLE = (code *)plVar4[1];
        plStack_198 = plVar4;
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a0) {
                    /* WARNING: Could not recover jumptable at 0x000101bb992c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)();
          return;
        }
        pcVar21 = FUN_101bb9934;
        func_0x000107c60e78();
        goto code_r0x000101bb9934;
      }
      UNRECOVERED_JUMPTABLE = FUN_101bb98dc;
    }
    lVar13 = 0;
    lVar14 = 0;
  }
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE,lVar13,lVar14);
  return;
}



/* Entry: 101bb9cb8; end: 101bb9cf3;  */

void FUN_101bb9cb8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bb9cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bb9cf4; end: 101bb9d0b;  */

undefined8 FUN_101bb9cf4(void)

{
  undefined8 uVar1;
  undefined1 auStack_60 [24];
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000102758434(auStack_60);
  func_0x000107c61170(uStack_38);
  func_0x0001000a8868(auStack_60,uStack_48);
  uVar1 = uStack_48;
  (**(code **)(lStack_40 + 8))(uStack_48,lStack_40);
  func_0x0001000834e4(auStack_60);
  return uVar1;
}



/* Entry: 101bb9d0c; end: 101bb9dcb;  */

void FUN_101bb9d0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  char *pcVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  uStack_40 = 0x101bb9ed8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1011eaae0;
  puStack_48 = &UNK_1104516a0;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  pcVar3 = "scopedJSRuntime()";
  func_0x0001000c10c0("scopedJSRuntime()");
  func_0x000107c61180();
  func_0x000107c44284(param_2);
  func_0x000107c615e8(pcVar3);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101bb9dcc; end: 101bb9e53;  */

void FUN_101bb9dcc(undefined *param_1)

{
  undefined *puVar1;
  undefined *puStack_30;
  undefined1 uStack_28;
  
  if (param_1 == (undefined *)0x0) {
    FUN_101bb9ee0();
    puVar1 = &UNK_1104516d8;
    func_0x000107c613f8(&UNK_1104516d8,param_1,0,0);
    uStack_28 = 1;
    puStack_30 = puVar1;
    func_0x00010488e5d4(&puStack_30);
    func_0x000107c614ac(puVar1);
  }
  else {
    uStack_28 = 0;
    puStack_30 = param_1;
    func_0x000107c615f0();
    func_0x00010488e5d4(&puStack_30);
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 101bb9e54; end: 101bb9e7f;  */

void FUN_101bb9e54(long param_1,long param_2)

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



/* Entry: 101bb9e80; end: 101bb9ebf;  */

void FUN_101bb9e80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb9ec0,0,0);
  return;
}



/* Entry: 101bb9ec0; end: 101bb9edf;  */

void FUN_101bb9ec0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101bb9ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 101bb9ee0; end: 101bb9f1f;  */

void FUN_101bb9ee0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e07270 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9db5d0;
  func_0x000107c61520(&UNK_10d9db5d0,&UNK_1104516d8);
  puRam0000000112e07270 = puVar1;
  return;
}



/* Entry: 101bb9f20; end: 101bb9f37;  */

undefined1  [16] FUN_101bb9f20(void)

{
  return ZEXT816(0x1104516d8);
}



/* Entry: 101bb9f38; end: 101bb9f97;  */

/* WARNING: Possible PIC construction at 0x000101bb9f80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bb9f84) */

void FUN_101bb9f38(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_101bbab10();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_1104517e0;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101bb9f98; end: 101bb9f9f;  */

/* WARNING: Possible PIC construction at 0x000101bb9f80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bb9f84) */

void FUN_101bb9f98(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = lVar1;
  FUN_101bbab10();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(long *)(lVar4 + 0x10) = lVar1;
  *(undefined8 *)(lVar4 + 0x18) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_1104517e0;
  *param_1 = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(lVar1);
  return;
}



/* Entry: 101bb9fa0; end: 101bb9fdb;  */

void FUN_101bb9fa0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101bb9fdc; end: 101bb9ffb;  */

void FUN_101bb9fdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bb9ffc,0,0);
  return;
}



/* Entry: 101bb9ffc; end: 101bba0a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bb9ffc(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  lVar3 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + _DAT_112fd9ce8);
  func_0x000107c6157c(uVar2);
  func_0x000107c61170(lVar3);
  func_0x0001000d224c(unaff_x22 + 0x18);
  func_0x000107c61574(uVar2);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x18);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x68) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101bba0a8;
                    /* WARNING: Could not recover jumptable at 0x000101bba0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_101bb456c();
  return;
}



/* Entry: 101bba0a8; end: 101bba0fb;  */

void FUN_101bba0a8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x70) = param_1;
  *(undefined1 *)(lVar1 + 0xb8) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bba0fc,0,0);
  return;
}



/* Entry: 101bba0fc; end: 101bba287;  */

void FUN_101bba0fc(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  if (*(char *)(unaff_x22 + 0xb8) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
    iVar2 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar2 != 0) {
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x20,uVar5,PTR___ss5ErrorWS_11034ee10);
    }
    puVar6 = *(undefined1 **)(unaff_x22 + 0x70);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
    FUN_101bb47ac(puVar6,1);
    func_0x000101bba9a0();
    func_0x000107c613f8(&UNK_1104519c8,puVar6,0,0);
    *puVar6 = 0;
    func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101bba1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  func_0x0001000285a8(0x112e06ff8,&UNK_10d9db110);
  func_0x000107c5fadc(uVar3,uVar1);
  func_0x000107c442ec();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar5;
  func_0x000103edf20c();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
  func_0x000107c61170(uVar5);
  plVar4 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bba288;
                    /* WARNING: Could not recover jumptable at 0x000101bba284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x101bb47c0)();
  return;
}



/* Entry: 101bba288; end: 101bba2db;  */

void FUN_101bba288(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x88) = param_1;
  *(undefined1 *)(lVar1 + 0xb9) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bba2dc,0,0);
  return;
}



/* Entry: 101bba2dc; end: 101bba5fb;  */

/* WARNING: Removing unreachable block (ram,0x000101bba414) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bba2dc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  puVar8 = *(undefined1 **)(unaff_x22 + 0x88);
  if (*(char *)(unaff_x22 + 0xb9) == '\x01') {
    *(undefined1 **)(unaff_x22 + 0x28) = puVar8;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar10 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x28,uVar10,PTR___ss5ErrorWS_11034ee10);
    }
    puVar8 = *(undefined1 **)(unaff_x22 + 0x88);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar6 = *(undefined1 *)(unaff_x22 + 0xb8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000100cc8768(puVar8,1);
    func_0x000101bba9a0();
    func_0x000107c613f8(&UNK_1104519c8,puVar8,0,0);
    *puVar8 = 1;
    func_0x000107c61654();
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c5b198();
    func_0x000107c61180();
    puVar4 = puVar8;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar8);
    func_0x000107c610f8(PTR_PTR_1126b25c0);
    puVar8 = puVar4;
    func_0x0001010282b0(puVar4,param_2);
    *(undefined1 **)(unaff_x22 + 0x90) = puVar8;
    func_0x00010006c090(puVar4,param_2);
    if (puVar8 == (undefined1 *)0x0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar2 = *(undefined1 *)(unaff_x22 + 0xb9);
      uVar6 = *(undefined1 *)(unaff_x22 + 0xb8);
      func_0x000101bba9a0();
      func_0x000107c613f8(&UNK_1104519c8,puVar4,0,0);
      *puVar4 = 9;
      func_0x000107c61654();
      func_0x000100cc8768(uVar7,uVar2);
    }
    else {
      func_0x000100083b20(unaff_x22 + 0x30);
      lVar9 = *(long *)(unaff_x22 + 0x30);
      puVar4 = *(undefined1 **)(lVar9 + _DAT_112ff73d0);
      func_0x000107c61174();
      func_0x000107c61170(lVar9);
      puVar8 = puVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      *(undefined1 **)(unaff_x22 + 0x98) = puVar8;
      func_0x000107c61170();
      if (puVar8 != (undefined1 *)0x0) {
        uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
        func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
        func_0x000107c5c92c(uVar10);
        func_0x000107c61180();
        puVar4 = puVar8;
        func_0x000100759c94();
        *(undefined1 **)(unaff_x22 + 0xa0) = puVar4;
        func_0x000107c61170(puVar8);
        plVar5 = (long *)0x80;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xa8) = plVar5;
        *plVar5 = unaff_x22;
        plVar5[1] = (long)FUN_101bba5fc;
                    /* WARNING: Could not recover jumptable at 0x000101bba598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)&UNK_100f96304)();
        return;
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar2 = *(undefined1 *)(unaff_x22 + 0xb9);
      uVar6 = *(undefined1 *)(unaff_x22 + 0xb8);
      func_0x000101bba9a0();
      func_0x000107c613f8(&UNK_1104519c8,puVar4,0,0);
      *puVar4 = 10;
      func_0x000107c61654();
      func_0x000107c61170(uVar1);
      func_0x000100cc8768(uVar7,uVar2);
    }
  }
  FUN_101bb47ac(uVar10,uVar6);
                    /* WARNING: Could not recover jumptable at 0x000101bba494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bba5fc; end: 101bba64f;  */

void FUN_101bba5fc(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xb0) = param_1;
  *(undefined1 *)(lVar1 + 0xba) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bba650,0,0);
  return;
}



/* Entry: 101bba650; end: 101bba7d7;  */

void FUN_101bba650(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  lVar5 = *(long *)(unaff_x22 + 0xb0);
  if (*(char *)(unaff_x22 + 0xba) == '\x01') {
    *(long *)(unaff_x22 + 0x38) = lVar5;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar6 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x38,uVar6,PTR___ss5ErrorWS_11034ee10);
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
    puVar4 = *(undefined1 **)(unaff_x22 + 0x98);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000100cc8768(uVar6,1);
    func_0x000107c615e8();
  }
  else {
    puVar4 = *(undefined1 **)(unaff_x22 + 0x98);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
    func_0x000107c615e8();
    if (lVar5 != 0) {
      uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar1 = *(undefined1 *)(unaff_x22 + 0xb9);
      uVar2 = *(undefined1 *)(unaff_x22 + 0xb8);
      func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x90));
      func_0x000100cc8768(uVar6,uVar1);
      FUN_101bb47ac(uVar8,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bba750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(uVar7);
      return;
    }
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar1 = *(undefined1 *)(unaff_x22 + 0xb9);
  uVar2 = *(undefined1 *)(unaff_x22 + 0xb8);
  func_0x000101bba9a0();
  func_0x000107c613f8(&UNK_1104519c8,puVar4,0,0);
  *puVar4 = 10;
  func_0x000107c61654();
  func_0x000107c61170(uVar7);
  func_0x000100cc8768(uVar6,uVar1);
  FUN_101bb47ac(uVar8,uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bba7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bba7d8; end: 101bba7e3;  */

void FUN_101bba7d8(void)

{
  undefined *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = PTR__swift_deallocClassInstance_11034f290;
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000101bba81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 101bba7e4; end: 101bba81f;  */

void FUN_101bba7e4(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000101bba81c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


