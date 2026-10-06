/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ff41a4; end: 100ff420f;  */

void FUN_100ff41a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff4210,uVar1,uVar2);
  return;
}



/* Entry: 100ff4210; end: 100ff42d7;  */

void FUN_100ff4210(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  puVar1 = &UNK_110375688;
  func_0x000107c613fc(&UNK_110375688,0x20,7);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  func_0x000107c615f0(uVar2);
  uVar2 = 0;
  func_0x0001048897a0(0,1,0,FUN_100ff44b0,puVar1);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000107c61574(puVar1);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100ff42d8;
                    /* WARNING: Could not recover jumptable at 0x000100ff42d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_100fab8ec();
  return;
}



/* Entry: 100ff42d8; end: 100ff432b;  */

void FUN_100ff42d8(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x50) = param_1;
  *(undefined1 *)(lVar1 + 0x58) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff432c,0,0);
  return;
}



/* Entry: 100ff432c; end: 100ff43e3;  */

void FUN_100ff432c(void)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x58) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x50);
    iVar1 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
    if (iVar1 != 0) {
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x10,uVar2,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(uVar4);
    func_0x000100fc38ac(uVar5,1);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    pcVar3 = (code *)0x100ff4824;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
    uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    pcVar3 = FUN_100ff43e4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,uVar4,uVar5);
  return;
}



/* Entry: 100ff43e4; end: 100ff4413;  */

void FUN_100ff43e4(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000100ff4410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff4414; end: 100ff44af;  */

void FUN_100ff4414(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  pcStack_40 = FUN_100ff4804;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_1103756f0;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c41864(param_2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100ff44b0; end: 100ff44b7;  */

void FUN_100ff44b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar3 = &puStack_60;
  pcStack_40 = FUN_100ff4804;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_1103756f0;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60,uVar1,*(undefined8 *)(unaff_x20 + 0x10));
  uVar2 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar2);
  func_0x000107c41864(uVar1);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 100ff44b8; end: 100ff4537;  */

void FUN_100ff44b8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100ff4828,0,0);
  return;
}



/* Entry: 100ff4538; end: 100ff454f;  */

void FUN_100ff4538(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff4550,0,0);
  return;
}



/* Entry: 100ff4550; end: 100ff4617;  */

void FUN_100ff4550(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000100ff4598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100ff4618;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_1103756b0;
  func_0x000107c613fc(&UNK_1103756b0,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x100ff4788,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100ff4618; end: 100ff4657;  */

void FUN_100ff4618(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100ff4830,0,0);
  return;
}



/* Entry: 100ff4658; end: 100ff466f;  */

void FUN_100ff4658(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff4670,0,0);
  return;
}



/* Entry: 100ff4670; end: 100ff4737;  */

void FUN_100ff4670(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x22;
  
  func_0x000104888eec(unaff_x22 + 0x60);
  if (*(char *)(unaff_x22 + 0x68) != -1) {
                    /* WARNING: Could not recover jumptable at 0x000100ff46b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100ff4738;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  puVar2 = &UNK_1103756d8;
  func_0x000107c613fc(&UNK_1103756d8,0x18,7);
  *(long *)(puVar2 + 0x10) = lVar1;
  func_0x00010075a04c(0,1,0x100ff4794,puVar2);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 100ff4738; end: 100ff4777;  */

void FUN_100ff4738(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff4778,0,0);
  return;
}



/* Entry: 100ff4778; end: 100ff47b3;  */

void FUN_100ff4778(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100ff4784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 100ff47b4; end: 100ff4803;  */

void FUN_100ff47b4(undefined8 *param_1,code *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  (*param_2)(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 100ff4804; end: 100ff4837;  */

void FUN_100ff4804(void)

{
  func_0x000100b5ff9c();
  return;
}



/* Entry: 100ff4838; end: 100ff4bc7;  */

void FUN_100ff4838(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_PTR_1126b6dd0;
  func_0x000107c610f8();
  uVar2 = 0x7475436b63697551;
  func_0x000107c5fadc(0x7475436b63697551,0xe800000000000000);
  func_0x000107c45d4c();
  func_0x000107c61170(uVar2);
  if (puVar1 != (undefined *)0x0) {
    lVar3 = *(long *)(unaff_x20 + 0x10);
    func_0x000107c4d2e4();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      func_0x000107c61170(puVar1);
      lVar3 = 0;
    }
    else {
      pcVar5 = "begin()";
      func_0x0001000c10c0("begin()");
      func_0x000107c61180();
      puVar6 = &UNK_110375728;
      func_0x000107c613fc(&UNK_110375728,0x18,7);
      func_0x000107c61644(puVar6 + 0x10);
      uStack_50 = 0x100ff4e00;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      uStack_60 = 0x100ff4e14;
      puStack_58 = &UNK_110375768;
      ppuVar7 = &puStack_70;
      puStack_48 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61574(puStack_48);
      lVar3 = lVar4;
      func_0x000107c40188();
      func_0x000107c61180();
      func_0x000107c61170(puVar1);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c615e8(lVar4);
      func_0x000107c615e8(pcVar5);
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    *(long *)(unaff_x20 + 0x40) = lVar3;
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 100ff4bc8; end: 100ff4d37;  */

void FUN_100ff4bc8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c602fc(0x30);
    func_0x000107c6142c(0xe000000000000000);
    bVar4 = param_1 == 0;
    uVar2 = 0x65757274;
    if (!bVar4) {
      uVar2 = 0x65736c6166;
    }
    uVar1 = 0xe400000000000000;
    if (!bVar4) {
      uVar1 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar2,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c602fc(0x29);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(0xd00000000000002e,0x800000010ef1f030);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    lVar3 = *(long *)(param_2 + 0x38);
    func_0x0001000a8868(param_2 + 0x18,uVar2);
    (**(code **)(*(long *)(lVar3 + 0x28) + 0x10))(bVar4,0xd000000000000027,0x800000010ef1f060,uVar2)
    ;
    func_0x000107c61574(param_2);
    func_0x000107c6142c(0x800000010ef1f030);
    func_0x000107c6142c(0x800000010ef1f060);
  }
  return;
}



/* Entry: 100ff4d38; end: 100ff4d87;  */

void FUN_100ff4d38(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 100ff4d88; end: 100ff4ddb;  */

void FUN_100ff4d88(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100ff4ddc; end: 100ff4e2b;  */

void FUN_100ff4ddc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar5 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar5 != 0) {
    func_0x000107c602fc(0x30);
    func_0x000107c6142c(0xe000000000000000);
    bVar4 = param_1 == 0;
    uVar2 = 0x65757274;
    if (!bVar4) {
      uVar2 = 0x65736c6166;
    }
    uVar1 = 0xe400000000000000;
    if (!bVar4) {
      uVar1 = 0xe500000000000000;
    }
    func_0x000107c5fb78(uVar2,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c602fc(0x29);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(0xd00000000000002e,0x800000010ef1f030);
    uVar2 = *(undefined8 *)(lVar5 + 0x30);
    lVar3 = *(long *)(lVar5 + 0x38);
    func_0x0001000a8868(lVar5 + 0x18,uVar2);
    (**(code **)(*(long *)(lVar3 + 0x28) + 0x10))(bVar4,0xd000000000000027,0x800000010ef1f060,uVar2)
    ;
    func_0x000107c61574(lVar5);
    func_0x000107c6142c(0x800000010ef1f030);
    func_0x000107c6142c(0x800000010ef1f060);
  }
  return;
}



/* Entry: 100ff4e2c; end: 100ff4ed7;  */

void FUN_100ff4e2c(void)

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



/* Entry: 100ff4ed8; end: 100ff4edb;  */

void FUN_100ff4ed8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d53c10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91a7b0;
  func_0x000107c61520(&UNK_10d91a7b0,&UNK_110375810);
  puRam0000000112d53c10 = puVar1;
  return;
}



/* Entry: 100ff4edc; end: 100ff4f1b;  */

void FUN_100ff4edc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d53c10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91a7b0;
  func_0x000107c61520(&UNK_10d91a7b0,&UNK_110375810);
  puRam0000000112d53c10 = puVar1;
  return;
}



/* Entry: 100ff4f1c; end: 100ff507f;  */

int FUN_100ff4f1c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100ff4f98;
        goto LAB_100ff4f7c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100ff4f7c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_100ff4f98:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100ff5080; end: 100ff50f3;  */

void FUN_100ff5080(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar1);
  }
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61610(unaff_x20 + 0x40);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100ff50f4; end: 100ff517f;  */

void FUN_100ff50f4(void)

{
  func_0x000107c61168(&PTR_PTR_112d53c58);
  return;
}



/* Entry: 100ff5180; end: 100ff5273;  */

void FUN_100ff5180(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar3 = *(long *)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = 0x112d53808;
  func_0x0001000285a8(0x112d53808,&UNK_10d91a100);
  uVar5 = uVar4;
  FUN_100ff5d78();
  func_0x00010410b100(uVar2,uVar8,uVar1,uVar4,uVar4,uVar5,uVar5);
  func_0x00010410b214();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar6;
  FUN_100ff5dc8(uVar2);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar6;
  func_0x000107c61428(lVar3 + 0x10,unaff_x22 + 0x10,0,0);
  plVar7 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x60) = plVar7;
  func_0x0001000285a8(0x112d53cd8,&UNK_10d91a8a0);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100ff5274;
  plVar7[2] = unaff_x22 + 0x118;
  plVar7[3] = unaff_x22 + 0x28;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10410b850,0,0);
  return;
}



/* Entry: 100ff5274; end: 100ff52d3;  */

void FUN_100ff5274(void)

{
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x60));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff52d4,0,0);
  return;
}



/* Entry: 100ff52d4; end: 100ff53d7;  */

void FUN_100ff52d4(void)

{
  ushort uVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long unaff_x22;
  
  uVar2 = *(ushort *)(unaff_x22 + 0x118);
  uVar1 = uVar2 & 0xff;
  if (uVar1 != 3) {
    uVar3 = *(long *)(unaff_x22 + 0x40) + 0x10;
    func_0x000107c61648();
    *(ulong *)(unaff_x22 + 0x68) = uVar3;
    if (uVar3 != 0) {
      uVar4 = uVar3;
      func_0x000107c5fd5c();
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        func_0x000107c5fcec();
        *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
        uVar6 = uVar5;
        func_0x000107c5fce8();
        *(undefined8 *)(unaff_x22 + 0x78) = uVar6;
        func_0x000107c5fce8();
        *(undefined8 *)(unaff_x22 + 0x80) = uVar6;
        func_0x000100eea164();
        *(undefined8 *)(unaff_x22 + 0x88) = uVar6;
        func_0x000107c5fca8();
        *(undefined8 *)(unaff_x22 + 0x90) = uVar5;
        *(undefined8 *)(unaff_x22 + 0x98) = uVar6;
        if ((uVar1 == 1) || ((uVar2 & 0xff00) == 0x100)) {
          pcVar7 = FUN_100ff53d8;
        }
        else {
          pcVar7 = FUN_100ff5930;
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(pcVar7,uVar5,uVar6);
        return;
      }
      func_0x000107c61574(uVar3);
    }
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x58));
  func_0x000107c615c0(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100ff5348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff53d8; end: 100ff54a7;  */

void FUN_100ff53d8(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x68) + 0x40;
  func_0x000107c61618();
  if (lVar2 == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar1 = *(long *)(unaff_x22 + 0x68);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    FUN_10100f06c();
    *(long *)(unaff_x22 + 0xa0) = lVar2;
    puVar3 = (undefined8 *)(lVar1 + 0x10);
    func_0x0001000a8868(puVar3,*(undefined8 *)(lVar1 + 0x28));
    *(undefined8 *)(unaff_x22 + 0xa8) = *puVar3;
    func_0x000107c5fce8();
    *(undefined8 **)(unaff_x22 + 0xb0) = puVar3;
    func_0x000107c5fca8();
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar4;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar6;
    pcVar5 = FUN_100ff54a8;
  }
  else {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
    func_0x000107c61170(lVar2);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c5fca8(uVar4,uVar6);
    pcVar5 = FUN_100ff5820;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar5,uVar4,uVar6);
  return;
}



/* Entry: 100ff54a8; end: 100ff551b;  */

void FUN_100ff54a8(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xa8) + 0x20;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar1 = *(long *)(unaff_x22 + 0xa8) + 0x28;
    func_0x000107c61618();
    if (lVar1 == 0) {
      pcVar2 = FUN_100ff551c;
      uVar4 = 0;
      uVar3 = 0;
      goto LAB_100ff54f8;
    }
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61170();
  func_0x000107c61574(uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  pcVar2 = FUN_100ff57b4;
LAB_100ff54f8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,uVar4,uVar3);
  return;
}



/* Entry: 100ff551c; end: 100ff55ef;  */

void FUN_100ff551c(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xa8) + 0x20;
  func_0x000107c61618();
  lVar4 = *(long *)(unaff_x22 + 0xa8);
  if (lVar1 == 0) {
    lVar4 = lVar4 + 0x28;
    func_0x000107c61618();
    if (lVar4 == 0) {
      lVar1 = *(long *)(unaff_x22 + 0xb8);
      lVar4 = *(long *)(unaff_x22 + 0xc0);
      pcVar3 = FUN_100ff5760;
      goto LAB_107c615e0;
    }
    lVar1 = *(long *)(unaff_x22 + 0xa8);
    func_0x000107c61170();
    lVar4 = *(long *)(lVar1 + 0x18);
    lVar1 = lVar4;
    func_0x000107c614f0();
    plVar2 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd0) = plVar2;
    pcVar3 = FUN_100ff56d8;
  }
  else {
    func_0x000107c61170();
    lVar4 = *(long *)(lVar4 + 0x10);
    lVar1 = lVar4;
    func_0x000107c614f0();
    plVar2 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 200) = plVar2;
    pcVar3 = FUN_100ff55f0;
  }
  *plVar2 = unaff_x22;
  plVar2[1] = (long)pcVar3;
  plVar2[3] = lVar1;
  plVar2[4] = lVar4;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar1;
  func_0x000107c5fce8();
  plVar2[5] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[6] = lVar1;
  plVar2[7] = lVar4;
  pcVar3 = FUN_100ff4210;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,lVar1,lVar4);
  return;
}



/* Entry: 100ff55f0; end: 100ff5637;  */

void FUN_100ff55f0(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff5638,0,0);
  return;
}



/* Entry: 100ff5638; end: 100ff56d7;  */

void FUN_100ff5638(void)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x000107c61604(*(long *)(unaff_x22 + 0xa8) + 0x20,0);
  lVar3 = *(long *)(unaff_x22 + 0xa8) + 0x28;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x22 + 0xb8);
    lVar4 = *(long *)(unaff_x22 + 0xc0);
    pcVar2 = FUN_100ff5760;
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0xa8);
    func_0x000107c61170();
    lVar4 = *(long *)(lVar3 + 0x18);
    lVar3 = lVar4;
    func_0x000107c614f0();
    plVar1 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd0) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100ff56d8;
    plVar1[3] = lVar3;
    plVar1[4] = lVar4;
    lVar3 = 0;
    func_0x000107c5fcec();
    lVar4 = lVar3;
    func_0x000107c5fce8();
    plVar1[5] = lVar4;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar1[6] = lVar3;
    plVar1[7] = lVar4;
    pcVar2 = FUN_100ff4210;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,lVar3,lVar4);
  return;
}



/* Entry: 100ff56d8; end: 100ff575f;  */

void FUN_100ff56d8(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100ff5720,0,0);
  return;
}



/* Entry: 100ff5760; end: 100ff57b3;  */

void FUN_100ff5760(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c3e2c0(*(undefined8 *)(lVar1 + 0x18));
  func_0x000107c61604(lVar1 + 0x28,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_100ff57b4,*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Entry: 100ff57b4; end: 100ff581f;  */

void FUN_100ff57b4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar2 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c61604(lVar2 + 0x40,uVar3);
  func_0x000107c61170(uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c5fca8(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff5820,uVar3,uVar1);
  return;
}



/* Entry: 100ff5820; end: 100ff585b;  */

void FUN_100ff5820(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff585c,0,0);
  return;
}



/* Entry: 100ff585c; end: 100ff58cf;  */

void FUN_100ff585c(void)

{
  long *plVar1;
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x68));
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xd8) = plVar1;
  func_0x0001000285a8(0x112d53cd8,&UNK_10d91a8a0);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100ff58d0;
  plVar1[2] = unaff_x22 + 0x118;
  plVar1[3] = unaff_x22 + 0x28;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(&UNK_10410b850,0,0);
  return;
}



/* Entry: 100ff58d0; end: 100ff592f;  */

void FUN_100ff58d0(void)

{
  long unaff_x20;
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xd8));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff52d4,0,0);
  return;
}



/* Entry: 100ff5930; end: 100ff59ef;  */

void FUN_100ff5930(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x68) + 0x40;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0xe0) = lVar1;
  if (lVar1 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x80));
    uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
    func_0x000107c5fca8(uVar3,uVar5);
    pcVar4 = FUN_100ff5e10;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
    puVar2 = (undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x10);
    func_0x0001000a8868(puVar2,*(undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x28));
    *(undefined8 *)(unaff_x22 + 0xe8) = *puVar2;
    func_0x000107c5fce8();
    *(undefined8 **)(unaff_x22 + 0xf0) = puVar2;
    func_0x000107c5fca8();
    *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x100) = uVar5;
    pcVar4 = FUN_100ff59f0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,uVar3,uVar5);
  return;
}



/* Entry: 100ff59f0; end: 100ff5a8f;  */

void FUN_100ff59f0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0xe8);
  lVar4 = lVar5 + 0x20;
  func_0x000107c61618();
  if (lVar4 == 0) {
    lVar4 = *(long *)(unaff_x22 + 0xe8) + 0x28;
    func_0x000107c61618();
    if (lVar4 != 0) goto LAB_100ff5a24;
  }
  else {
LAB_100ff5a24:
    func_0x000107c61170();
    lVar5 = lVar5 + 0x20;
    func_0x000107c61618();
    if (lVar5 == 0) {
      lVar5 = *(long *)(unaff_x22 + 0xe8) + 0x28;
      func_0x000107c61618();
      if (lVar5 == 0) goto LAB_100ff5a58;
    }
    lVar4 = *(long *)(unaff_x22 + 0xe0);
    func_0x000107c61170();
    if (lVar5 == lVar4) {
      pcVar1 = FUN_100ff5a90;
      uVar2 = 0;
      uVar3 = 0;
      goto LAB_100ff5a80;
    }
  }
LAB_100ff5a58:
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xf0));
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  pcVar1 = FUN_100ff5d0c;
LAB_100ff5a80:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 100ff5a90; end: 100ff5b63;  */

void FUN_100ff5a90(void)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0xe8) + 0x20;
  func_0x000107c61618();
  lVar4 = *(long *)(unaff_x22 + 0xe8);
  if (lVar1 == 0) {
    lVar4 = lVar4 + 0x28;
    func_0x000107c61618();
    if (lVar4 == 0) {
      lVar1 = *(long *)(unaff_x22 + 0xf8);
      lVar4 = *(long *)(unaff_x22 + 0x100);
      pcVar3 = (code *)0x100ff5cd4;
      goto LAB_107c615e0;
    }
    lVar1 = *(long *)(unaff_x22 + 0xe8);
    func_0x000107c61170();
    lVar4 = *(long *)(lVar1 + 0x18);
    lVar1 = lVar4;
    func_0x000107c614f0();
    plVar2 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x110) = plVar2;
    pcVar3 = FUN_100ff5c4c;
  }
  else {
    func_0x000107c61170();
    lVar4 = *(long *)(lVar4 + 0x10);
    lVar1 = lVar4;
    func_0x000107c614f0();
    plVar2 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x108) = plVar2;
    pcVar3 = FUN_100ff5b64;
  }
  *plVar2 = unaff_x22;
  plVar2[1] = (long)pcVar3;
  plVar2[3] = lVar1;
  plVar2[4] = lVar4;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar1;
  func_0x000107c5fce8();
  plVar2[5] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar2[6] = lVar1;
  plVar2[7] = lVar4;
  pcVar3 = FUN_100ff4210;
LAB_107c615e0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar3,lVar1,lVar4);
  return;
}



/* Entry: 100ff5b64; end: 100ff5bab;  */

void FUN_100ff5b64(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x108));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff5bac,0,0);
  return;
}



/* Entry: 100ff5bac; end: 100ff5c4b;  */

void FUN_100ff5bac(void)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  func_0x000107c61604(*(long *)(unaff_x22 + 0xe8) + 0x20,0);
  lVar3 = *(long *)(unaff_x22 + 0xe8) + 0x28;
  func_0x000107c61618();
  if (lVar3 == 0) {
    lVar3 = *(long *)(unaff_x22 + 0xf8);
    lVar4 = *(long *)(unaff_x22 + 0x100);
    pcVar2 = (code *)0x100ff5cd4;
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0xe8);
    func_0x000107c61170();
    lVar4 = *(long *)(lVar3 + 0x18);
    lVar3 = lVar4;
    func_0x000107c614f0();
    plVar1 = (long *)0x60;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x110) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100ff5c4c;
    plVar1[3] = lVar3;
    plVar1[4] = lVar4;
    lVar3 = 0;
    func_0x000107c5fcec();
    lVar4 = lVar3;
    func_0x000107c5fce8();
    plVar1[5] = lVar4;
    func_0x000100eea164();
    func_0x000107c5fca8();
    plVar1[6] = lVar3;
    plVar1[7] = lVar4;
    pcVar2 = FUN_100ff4210;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,lVar3,lVar4);
  return;
}



/* Entry: 100ff5c4c; end: 100ff5d0b;  */

void FUN_100ff5c4c(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x100ff5c94,0,0);
  return;
}



/* Entry: 100ff5d0c; end: 100ff5d77;  */

void FUN_100ff5d0c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar2 = *(long *)(unaff_x22 + 0x68);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xe0));
  func_0x000107c61574(uVar3);
  func_0x000107c61604(lVar2 + 0x40,0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c5fca8(uVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff5e10,uVar3,uVar1);
  return;
}



/* Entry: 100ff5d78; end: 100ff5dc7;  */

void FUN_100ff5d78(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d53cd0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d53808;
  func_0x00010002969c(0x112d53808,&UNK_10d91a100);
  puVar2 = PTR___sScSyxGScisMc_11034fdb0;
  func_0x000107c61520(PTR___sScSyxGScisMc_11034fdb0,uVar1);
  puRam0000000112d53cd0 = puVar2;
  return;
}



/* Entry: 100ff5dc8; end: 100ff5e0f;  */

undefined8 FUN_100ff5dc8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112d53cc8;
  func_0x0001000285a8(0x112d53cc8,&UNK_10d91a890);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 100ff5e10; end: 100ff5e13;  */

void FUN_100ff5e10(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff585c,0,0);
  return;
}



/* Entry: 100ff5e14; end: 100ff5ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100ff5e14(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d53d28;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d53d28);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x000107c61168(PTR__OBJC_CLASS___NSValue_1126afdf8);
    func_0x000107c5dc5c();
    func_0x000107c61180();
    func_0x000107c4d664(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100ff5ee8; end: 100ff5f6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100ff5ee8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d53d30;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d53d30);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = 0x112d53dc0;
    func_0x0001000285a8(0x112d53dc0,&UNK_10d91a990);
    func_0x000107c613fc();
    func_0x0001000c2754();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar3;
}



/* Entry: 100ff5f70; end: 100ff61e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff5f70(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar7;
  code *pcVar8;
  long unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = 0x112d53de0;
  uStack_98 = param_1;
  func_0x0001000285a8(0x112d53de0,&UNK_10d91a9d8);
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_a0 + -extraout_x8;
  lVar4 = 0x112d53dd0;
  func_0x0001000285a8(0x112d53dd0,&UNK_10d91a9b0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar9 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar9 - extraout_x12;
  lVar4 = 0x112d52e28;
  func_0x0001000285a8(0x112d52e28,&UNK_10d91ace0);
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _DAT_112d53d40;
  func_0x000107c61428(unaff_x20 + _DAT_112d53d40,auStack_78,0,0);
  FUN_100ff807c(unaff_x20 + lVar1,lVar11);
  lVar5 = lVar11;
  (**(code **)(lVar7 + 0x30))(lVar11,1,lVar4);
  if ((int)lVar5 == 1) {
    func_0x000100ff7fa4(lVar11,0x112d53dd0,&UNK_10d91a9b0);
    puVar6 = &UNK_110375868;
    func_0x000107c613fc(&UNK_110375868,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    (**(code **)(lVar12 + 0x68))
              (puVar10,*(undefined4 *)
                        PTR___sScS12ContinuationV15BufferingPolicyO9unboundedyADyx__GAFmlFWC_11034fd20
               ,lVar3);
    uVar2 = uStack_98;
    func_0x000107c5fd48(uStack_98,&UNK_110374a00,puVar10,FUN_100ff80cc,puVar6,&UNK_110374a00);
    func_0x000107c61574(puVar6);
    (**(code **)(lVar7 + 0x10))(lVar9,uVar2,lVar4);
    (**(code **)(lVar7 + 0x38))(lVar9,0,1,lVar4);
    func_0x000107c61428(unaff_x20 + lVar1,auStack_90,0x21,0);
    FUN_100ff80d4(lVar9,unaff_x20 + lVar1,0x112d53dd0,&UNK_10d91a9b0);
    func_0x000107c614a8(auStack_90);
  }
  else {
    pcVar8 = *(code **)(lVar7 + 0x20);
    (*pcVar8)(lVar11 - extraout_x8_01,lVar11,lVar4);
    (*pcVar8)(uStack_98,lVar11 - extraout_x8_01,lVar4);
  }
  return;
}



/* Entry: 100ff61e8; end: 100ff630f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff61e8(undefined8 param_1,long param_2)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d53dc8;
  func_0x0001000285a8(0x112d53dc8,&UNK_10d91a9a8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_70 + -extraout_x8;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = 0x112d53da0;
    func_0x0001000285a8(0x112d53da0,&UNK_10d91a970);
    lVar3 = *(long *)(lVar1 + -8);
    (**(code **)(lVar3 + 0x10))(puVar2,param_1,lVar1);
    (**(code **)(lVar3 + 0x38))(puVar2,0,1,lVar1);
    lVar1 = _DAT_112d53d38;
    func_0x000107c61428(param_2 + _DAT_112d53d38,auStack_70,0x21,0);
    FUN_100ff80d4(puVar2,param_2 + lVar1,0x112d53dc8,&UNK_10d91a9a8);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 100ff6310; end: 100ff649f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff6310(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long alStack_70 [2];
  
  lVar3 = 0x112d52e48;
  func_0x0001000285a8(0x112d52e48,&UNK_10d919718);
  lVar12 = *(long *)(lVar3 + -8);
  lVar9 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar2 = _DAT_112d53d48;
  puVar1 = PTR___sytN_11034f1b0;
  lVar11 = *(long *)(unaff_x20 + _DAT_112d53d48);
  if (lVar11 != 0) {
    func_0x000107c6157c(lVar11);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar11);
  }
  puVar4 = &UNK_110375868;
  func_0x000107c613fc(&UNK_110375868,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  (**(code **)(lVar12 + 0x10))(&stack0xffffffffffffffa0 + -extraout_x8,param_1,lVar3);
  uVar8 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar13 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar10 = lVar9 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar5 = &UNK_1103758b8;
  func_0x000107c613fc(&UNK_1103758b8,uVar10 + 8,uVar8 | 7);
  (**(code **)(lVar12 + 0x20))(puVar5 + uVar13,&stack0xffffffffffffffa0 + -extraout_x8,lVar3);
  *(undefined **)(puVar5 + uVar10) = puVar4;
  *(undefined **)((long)alStack_70 + -extraout_x8) = puVar1 + 8;
  uVar6 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d91a9c8,puVar5);
  func_0x000107c61574(puVar5);
  uVar7 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar6;
  func_0x000107c61574(uVar7);
  return;
}



/* Entry: 100ff64a0; end: 100ff650b;  */

void FUN_100ff64a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  lVar2 = 0x112d53dd8;
  func_0x0001000285a8(0x112d53dd8,&UNK_10d91a9d0);
  *(long *)(unaff_x22 + 0x70) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff650c,0,0);
  return;
}



/* Entry: 100ff650c; end: 100ff65a3;  */

void FUN_100ff650c(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar1 = *(long *)(unaff_x22 + 0x68);
  func_0x0001000285a8(0x112d52e48,&UNK_10d919718);
  func_0x000107c5fd34(uVar3);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x40,0,0);
  plVar2 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100ff65a4;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar2,unaff_x22 + 0x58,*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Entry: 100ff65a4; end: 100ff65eb;  */

void FUN_100ff65a4(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff65ec,0,0);
  return;
}



/* Entry: 100ff65ec; end: 100ff6713;  */

void FUN_100ff65ec(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x58);
  if (lVar5 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x68) + 0x10;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar5);
    }
    else {
      lVar3 = lVar2;
      FUN_100ff5ee8();
      *(long *)(unaff_x22 + 0x10) = lVar5;
      *(undefined8 *)(unaff_x22 + 0x20) = 1;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x94;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      func_0x000107c61174(lVar5);
      func_0x0001002a64a8(unaff_x22 + 0x10);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar5);
      func_0x000107c61574(lVar3);
    }
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100ff6714;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
              (plVar4,(long *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x70));
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100ff66bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff6714; end: 100ff675b;  */

void FUN_100ff6714(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff811c,0,0);
  return;
}



/* Entry: 100ff675c; end: 100ff6973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff675c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112d53d00);
  lVar3 = lVar8;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar8);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar3 = unaff_x20 + _DAT_112d53d10;
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  lVar4 = *(long *)(lVar3 + 0x20);
  func_0x0001000a8868(lVar3,uVar1);
  (**(code **)(lVar4 + 0x18))(uVar1,lVar4);
  lVar4 = unaff_x20 + _DAT_112d53d18;
  func_0x000107c61618();
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x30);
    lVar2 = *(long *)(lVar4 + 0x38);
    func_0x0001000a8868(lVar4 + 0x18,uVar1);
    (**(code **)(lVar2 + 0x10))(1,0xd00000000000003c,0x800000010ef1f0f0,uVar1,lVar2);
    func_0x000107c61428(lVar4 + 0x78,auStack_68,0,0);
    if (*(long *)(lVar4 + 0x90) != 0) {
      FUN_100fe9114(lVar4 + 0x78,auStack_90);
      func_0x0001000a8868(auStack_90,uStack_78);
      (**(code **)(lStack_70 + 0x18))(uStack_78,lStack_70);
      func_0x0001000834e4(auStack_90);
    }
    func_0x000107c615e8(lVar4);
  }
  puVar5 = PTR_PTR_1126c47c8;
  func_0x000107c610f8(PTR_PTR_1126c47c8);
  func_0x000107c488b4();
  puVar6 = PTR_PTR_1126b3008;
  func_0x000107c610f8(PTR_PTR_1126b3008);
  func_0x000107c488e8();
  puVar7 = PTR_PTR_1126c47d0;
  func_0x000107c610f8(PTR_PTR_1126c47d0);
  func_0x000107c48f34();
  func_0x000107c42c1c(lVar8);
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  lVar8 = *(long *)(lVar3 + 0x20);
  func_0x0001000a8868(lVar3,uVar1);
  (**(code **)(lVar8 + 8))(uVar1,lVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 100ff6974; end: 100ff6abf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_100ff6974(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c4161c();
  dVar5 = param_1;
  if (param_1 < 0.0) {
    dVar5 = 0.0;
  }
  func_0x000107c5cda4();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c2bb50();
  func_0x000107c61170(param_2);
  lVar2 = *(long *)(unaff_x20 + _DAT_112d53d58);
  dVar6 = dVar5;
  if (lVar2 != 0) {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c51cc8();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5cda4();
    func_0x000107c61170(lVar3);
    if (lVar4 == lVar1) {
      lVar1 = lVar2;
      func_0x000107c51cc8(lVar2);
      func_0x000107c61180();
      func_0x000107c3e400(auStack_58);
      func_0x000107c61170(lVar1);
      func_0x000107c60a3c(auStack_58);
      func_0x000107c61170(lVar2);
      dVar6 = param_1 * 1000.0;
      if (((0x7fffffffffffffff < (ulong)param_1 ||
           0x3fe < (long)ABS(param_1) + 0xfff0000000000000U >> 0x35) &&
          0xffffffffffffe < (long)param_1 - 1U) && ABS(param_1) != 0.0) {
        dVar6 = dVar5;
      }
    }
    else {
      func_0x000107c61170(lVar2);
    }
  }
  return dVar6;
}



/* Entry: 100ff6ac0; end: 100ff6b1f; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow init] */

void FUN_100ff6ac0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("QuickCutViewIntegration.QuickCutMusicPickerWorkflow",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ff6aec);
  (*pcVar1)();
}



/* Entry: 100ff6b20; end: 100ff6c5b; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ff6b6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ff6b8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ff6bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ff6c40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ff6bd4) */
/* WARNING: Removing unreachable block (ram,0x000100ff6b90) */
/* WARNING: Removing unreachable block (ram,0x000100ff6b70) */
/* WARNING: Removing unreachable block (ram,0x000100ff6c44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff6b20(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d53ce0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d53ce8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d53cf0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d53cf8));
  return;
}



/* Entry: 100ff6c5c; end: 100ff6c63;  */

void FUN_100ff6c5c(void)

{
  if (lRam0000000112d53d88 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e61dbb0);
  return;
}



/* Entry: 100ff6c64; end: 100ff6c9b;  */

void FUN_100ff6c64(undefined8 param_1)

{
  if (lRam0000000112d53d88 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61dbb0);
  return;
}



/* Entry: 100ff6c9c; end: 100ff6df3;  */

void FUN_100ff6c9c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_a0 = &UNK_10d91a910;
  puStack_98 = &UNK_10d91a910;
  puStack_88 = PTR___sBOWV_11034d658 + 0x40;
  puStack_90 = &UNK_10d91a910;
  puStack_70 = &UNK_10d91a928;
  puStack_68 = &UNK_10d91a940;
  puStack_60 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_58 = &UNK_10d91a958;
  puStack_50 = &UNK_10d91a958;
  uVar2 = 0x112d53d98;
  lVar1 = 0x13f;
  puStack_80 = puStack_88;
  puStack_78 = puStack_88;
  func_0x000100ff6da4(0x13f,0x112d53d98,0x112d53da0,&UNK_10d91a970);
  if (uVar2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    uVar2 = 0x112d53da8;
    lVar1 = 0x13f;
    func_0x000100ff6da4(0x13f,0x112d53da8,0x112d52e28,&UNK_10d91ace0);
    if (uVar2 < 0x40) {
      lStack_40 = *(long *)(lVar1 + -8) + 0x40;
      puStack_38 = &UNK_10d91a958;
      puStack_30 = &UNK_10d91a958;
      puStack_28 = &UNK_10d91a958;
      func_0x000107c61630(param_1,0x100,0x10,&puStack_a0,param_1 + 0x50);
    }
  }
  return;
}



/* Entry: 100ff6df4; end: 100ff6df7; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow addSoundPillScopeDidSelectRemoveTrack:] */

void FUN_100ff6df4(void)

{
  return;
}



/* Entry: 100ff6df8; end: 100ff6e1f; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow addSoundPillScope:didSelectAppliedTrack:] */

void FUN_100ff6df8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ff675c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ff6e20; end: 100ff6e47; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow addSoundPillScopeDidSelectAddSound:] */

void FUN_100ff6e20(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ff675c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ff6e48; end: 100ff6e4b; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow addSoundPillScope:didSelectRecommendedTrack:] */

void FUN_100ff6e48(void)

{
  return;
}



/* Entry: 100ff6e4c; end: 100ff6e4f; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow musicPickerDidUpdateSelection:] */

void FUN_100ff6e4c(void)

{
  return;
}



/* Entry: 100ff6e50; end: 100ff6ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff6e50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long alStack_60 [6];
  
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d53d50);
    *(long *)(unaff_x20 + _DAT_112d53d50) = param_1;
    lVar1 = param_1;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61170(uVar2);
    FUN_100ff5ee8();
    alStack_60[1] = 0x94;
    alStack_60[3] = 0;
    alStack_60[2] = 0;
    alStack_60[5] = 0;
    alStack_60[4] = 0;
    alStack_60[0] = param_1;
    func_0x000107c61174(lVar1);
    func_0x0001002a64a8(alStack_60);
    func_0x000107c61574(uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100ff6ee8; end: 100ff6f3b; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow musicPickerDidPreviewTrack:] */

/* WARNING: Possible PIC construction at 0x000100ff6f24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ff6f28) */

void FUN_100ff6ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100ff6e50(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100ff6f3c; end: 100ff6f6f; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow musicPickerDidDownloadTrack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff6f3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d53d58);
  *(undefined8 *)(param_1 + _DAT_112d53d58) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100ff6f70; end: 100ff7297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff6f70(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 auStack_b0 [8];
  long alStack_a8 [7];
  undefined8 uStack_70;
  
  lVar2 = 0x112d53da0;
  func_0x0001000285a8(0x112d53da0,&UNK_10d91a970);
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_b0 + -extraout_x8;
  lVar6 = 0x112d53db0;
  func_0x0001000285a8(0x112d53db0,&UNK_10d91a980);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = _DAT_112d53d50;
  lVar7 = (long)puVar8 - extraout_x8_00;
  lVar9 = *(long *)(unaff_x20 + _DAT_112d53d50);
  if (lVar9 == 0) {
    lVar2 = unaff_x20 + _DAT_112d53d18;
    func_0x000107c61618();
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)(lVar2 + 0x30);
      lVar6 = *(long *)(lVar2 + 0x38);
      func_0x0001000a8868(lVar2 + 0x18,uVar5);
      (**(code **)(lVar6 + 0x10))(1,0xd00000000000003e,0x800000010ef1f130,uVar5,lVar6);
      func_0x000107c61428(lVar2 + 0x78,alStack_a8 + 6,0,0);
      if (*(long *)(lVar2 + 0x90) != 0) {
        FUN_100fe9114(lVar2 + 0x78,alStack_a8);
        lVar7 = alStack_a8[4];
        lVar6 = alStack_a8[3];
        func_0x0001000a8868(alStack_a8,alStack_a8[3]);
        (**(code **)(lVar7 + 0x20))(lVar6,lVar7);
        func_0x0001000834e4(alStack_a8);
      }
      func_0x000107c615e8(lVar2);
    }
  }
  else {
    lVar3 = lVar9;
    func_0x000107c61174();
    lVar4 = lVar3;
    FUN_100ff5ee8();
    alStack_a8[1] = 0x94;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    alStack_a8[3] = 0;
    alStack_a8[2] = 0;
    alStack_a8[5] = 0;
    alStack_a8[4] = 0;
    alStack_a8[0] = lVar9;
    func_0x000107c61174();
    func_0x0001002a64a8(alStack_a8);
    func_0x000107c61170(lVar3);
    func_0x000107c61574(lVar4);
    lVar4 = _DAT_112d53d38;
    func_0x000107c61428(unaff_x20 + _DAT_112d53d38,alStack_a8,0,0);
    lVar9 = unaff_x20 + lVar4;
    (**(code **)(lVar10 + 0x30))(lVar9,1,lVar2);
    bVar1 = (int)lVar9 != 0;
    if (!bVar1) {
      (**(code **)(lVar10 + 0x10))(puVar8,unaff_x20 + lVar4,lVar2);
      FUN_100ff6974(lVar3);
      uStack_70 = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))));
      alStack_a8[6] = lVar3;
      func_0x000107c61174(lVar3);
      func_0x000107c5fd28(lVar7,alStack_a8 + 6,lVar2);
      (**(code **)(lVar10 + 8))(puVar8,lVar2);
    }
    lVar2 = 0x112d53db8;
    func_0x0001000285a8(0x112d53db8,&UNK_10d91a988);
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar7,bVar1,1,lVar2);
    func_0x000100ff7fa4(lVar7,0x112d53db0,&UNK_10d91a980);
    func_0x000107c61170(lVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar6);
    *(undefined8 *)(unaff_x20 + lVar6) = 0;
    func_0x000107c61170(uVar5);
  }
  lVar6 = *(long *)(unaff_x20 + _DAT_112d53d00);
  lVar2 = lVar6;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar6);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar2 = unaff_x20 + _DAT_112d53d10;
  uVar5 = *(undefined8 *)(lVar2 + 0x18);
  lVar6 = *(long *)(lVar2 + 0x20);
  func_0x0001000a8868(lVar2,uVar5);
  (**(code **)(lVar6 + 0x18))(uVar5,lVar6);
  return;
}



/* Entry: 100ff7298; end: 100ff72bf; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow musicPickerDidDismiss] */

void FUN_100ff7298(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ff6f70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ff72c0; end: 100ff75d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff72c0(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined1 auStack_b0 [8];
  undefined1 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  long alStack_90 [6];
  
  lVar7 = 0x112d53da0;
  func_0x0001000285a8(0x112d53da0,&UNK_10d91a970);
  lVar15 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0x112d53db0;
  func_0x0001000285a8(0x112d53db0,&UNK_10d91a980);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)(auStack_b0 + -extraout_x8) - extraout_x8_00;
  lVar13 = *(long *)(unaff_x20 + _DAT_112d53d00);
  lVar8 = lVar13;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar8 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar13);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar8 = unaff_x20 + _DAT_112d53d10;
  uVar2 = *(undefined8 *)(lVar8 + 0x18);
  lVar13 = *(long *)(lVar8 + 0x20);
  func_0x0001000a8868(lVar8,uVar2);
  (**(code **)(lVar13 + 0x18))(uVar2,lVar13);
  lVar8 = *(long *)(unaff_x20 + _DAT_112d53d58);
  if (lVar8 != 0) {
    lVar13 = *(long *)(unaff_x20 + _DAT_112d53d50);
    if (lVar13 != 0) {
      puStack_a8 = auStack_b0 + -extraout_x8;
      func_0x000107c61174();
      lVar9 = lVar13;
      func_0x000107c61174();
      lVar10 = lVar8;
      func_0x000107c51cc8();
      func_0x000107c61180();
      lVar11 = lVar10;
      func_0x000107c5cda4();
      func_0x000107c61170(lVar10);
      lVar10 = lVar9;
      func_0x000107c5cda4();
      func_0x000107c61180();
      lVar12 = lVar10;
      func_0x000107c2bb50();
      func_0x000107c61170(lVar10);
      if (lVar11 == lVar12) {
        FUN_100ff5ee8();
        alStack_90[1] = 0x94;
        uVar16 = 0;
        uVar17 = 0;
        uVar18 = 0;
        uVar19 = 0;
        uVar20 = 0;
        uVar21 = 0;
        uVar22 = 0;
        uVar23 = 0;
        alStack_90[3] = 0;
        alStack_90[2] = 0;
        alStack_90[5] = 0;
        alStack_90[4] = 0;
        alStack_90[0] = lVar13;
        func_0x000107c61174();
        func_0x0001002a64a8(alStack_90);
        func_0x000107c61170(lVar9);
        func_0x000107c61574(lVar10);
        lVar10 = _DAT_112d53d38;
        func_0x000107c61428(unaff_x20 + _DAT_112d53d38,alStack_90,0,0);
        lVar13 = unaff_x20 + lVar10;
        (**(code **)(lVar15 + 0x30))(lVar13,1,lVar7);
        puVar3 = puStack_a8;
        bVar1 = (int)lVar13 != 0;
        if (!bVar1) {
          (**(code **)(lVar15 + 0x10))(puStack_a8,unaff_x20 + lVar10,lVar7);
          FUN_100ff6974(lVar9);
          uStack_98 = CONCAT17(uVar23,CONCAT16(uVar22,CONCAT15(uVar21,CONCAT14(uVar20,CONCAT13(
                                                  uVar19,CONCAT12(uVar18,CONCAT11(uVar17,uVar16)))))
                                              ));
          lStack_a0 = lVar9;
          func_0x000107c61174(lVar9);
          func_0x000107c5fd28(lVar14,&lStack_a0,lVar7);
          (**(code **)(lVar15 + 8))(puVar3,lVar7);
        }
        lVar7 = 0x112d53db8;
        func_0x0001000285a8(0x112d53db8,&UNK_10d91a988);
        (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar14,bVar1,1,lVar7);
        func_0x000100ff7fa4(lVar14,0x112d53db0,&UNK_10d91a980);
        FUN_100ff75d4(lVar8);
        func_0x000107c61170(lVar8);
        func_0x000107c61170(lVar9);
        return;
      }
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar9);
    }
  }
  lVar8 = *(long *)(unaff_x20 + _DAT_112d53d00);
  lVar7 = lVar8;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar7 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar8);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  lVar7 = unaff_x20 + _DAT_112d53d10;
  uVar2 = *(undefined8 *)(lVar7 + 0x18);
  lVar13 = *(long *)(lVar7 + 0x20);
  func_0x0001000a8868(lVar7,uVar2);
  (**(code **)(lVar13 + 0x18))(uVar2,lVar13);
  lVar13 = unaff_x20 + _DAT_112d53d18;
  func_0x000107c61618();
  if (lVar13 != 0) {
    uVar2 = *(undefined8 *)(lVar13 + 0x30);
    lVar14 = *(long *)(lVar13 + 0x38);
    func_0x0001000a8868(lVar13 + 0x18,uVar2);
    (**(code **)(lVar14 + 0x10))(1,0xd00000000000003c,0x800000010ef1f0f0,uVar2,lVar14);
    func_0x000107c61428(lVar13 + 0x78,alStack_90 + 5,0,0);
    if (*(long *)(lVar13 + 0x90) != 0) {
      FUN_100fe9114(lVar13 + 0x78,alStack_90);
      func_0x0001000a8868(alStack_90,alStack_90[3]);
      (**(code **)(alStack_90[4] + 0x18))(alStack_90[3],alStack_90[4]);
      func_0x0001000834e4(alStack_90);
    }
    func_0x000107c615e8(lVar13);
  }
  puVar4 = PTR_PTR_1126c47c8;
  func_0x000107c610f8(PTR_PTR_1126c47c8);
  func_0x000107c488b4();
  puVar5 = PTR_PTR_1126b3008;
  func_0x000107c610f8(PTR_PTR_1126b3008);
  func_0x000107c488e8();
  puVar6 = PTR_PTR_1126c47d0;
  func_0x000107c610f8(PTR_PTR_1126c47d0);
  func_0x000107c48f34();
  func_0x000107c42c1c(lVar8);
  uVar2 = *(undefined8 *)(lVar7 + 0x18);
  lVar8 = *(long *)(lVar7 + 0x20);
  func_0x0001000a8868(lVar7,uVar2);
  (**(code **)(lVar8 + 8))(uVar2,lVar8);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  return;
}



/* Entry: 100ff75d4; end: 100ff76c7;  */

/* WARNING: Possible PIC construction at 0x000100ff76ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ff76b0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff75d4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112d53d08);
  lVar1 = lVar4;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar2 = &UNK_110375868;
  func_0x000107c613fc(&UNK_110375868,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110375890;
  func_0x000107c613fc(&UNK_110375890,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  func_0x000107c61174(param_1);
  func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d91a9a0,puVar3,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 100ff76c8; end: 100ff76ef; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow musicPickerDidDismissAndPresentEditor] */

void FUN_100ff76c8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ff72c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ff76f0; end: 100ff775b;  */

void FUN_100ff76f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff775c,uVar1,uVar2);
  return;
}



/* Entry: 100ff775c; end: 100ff7847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff775c(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,unaff_x22 + 0x10,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x50) = lVar4;
  if (lVar4 != 0) {
    piVar2 = *(int **)(lVar4 + _DAT_112d53d20);
    iVar1 = *piVar2;
    plVar3 = (long *)(ulong)(uint)piVar2[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x58) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = 0x100ff7800;
                    /* WARNING: Could not recover jumptable at 0x000100ff77e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar2))();
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100ff77fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff7848; end: 100ff7957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff7848(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar4 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
  puVar1 = PTR_PTR_1126b2f28;
  func_0x000107c610f8(PTR_PTR_1126b2f28);
  func_0x000107c47e98(uVar5);
  puVar2 = PTR_PTR_1126b3008;
  func_0x000107c610f8(PTR_PTR_1126b3008);
  func_0x000107c488e8();
  puVar3 = PTR_PTR_1126c47f8;
  func_0x000107c610f8(PTR_PTR_1126c47f8);
  func_0x000107c48f30();
  func_0x000107c591e0();
  func_0x000107c42c1c(*(undefined8 *)(lVar4 + _DAT_112d53d08),param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar4);
                    /* WARNING: Could not recover jumptable at 0x000100ff7954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff7958; end: 100ff79c7; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow musicEditorDidConfirmSelection:selectedMusicStickerData:] */

/* WARNING: Possible PIC construction at 0x000100ff79a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ff79ac) */

void FUN_100ff7958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_100ff7c6c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100ff79c8; end: 100ff7b93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff79c8(double param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  long lStack_88;
  double dStack_80;
  undefined1 auStack_78 [24];
  
  lVar1 = 0x112d53da0;
  func_0x0001000285a8(0x112d53da0,&UNK_10d91a970);
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_90 + -extraout_x8;
  lVar2 = 0x112d53db0;
  func_0x0001000285a8(0x112d53db0,&UNK_10d91a980);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _DAT_112d53d38;
  lVar4 = (long)puVar5 - extraout_x8_00;
  lVar6 = *(long *)(unaff_x20 + _DAT_112d53d50);
  if (lVar6 != 0 && (ulong)ABS(param_1) < 0x7ff0000000000000) {
    func_0x000107c61428(unaff_x20 + _DAT_112d53d38,auStack_78,0,0);
    uVar7 = 1;
    lVar3 = unaff_x20 + lVar2;
    (**(code **)(lVar8 + 0x30))(lVar3,1,lVar1);
    if ((int)lVar3 == 0) {
      param_1 = param_1 * 1000.0;
      if (param_1 < 0.0) {
        param_1 = 0.0;
      }
      (**(code **)(lVar8 + 0x10))(puVar5,unaff_x20 + lVar2,lVar1);
      lStack_88 = lVar6;
      dStack_80 = param_1;
      func_0x000107c61174(lVar6);
      func_0x000107c5fd28(lVar4,&lStack_88,lVar1);
      (**(code **)(lVar8 + 8))(puVar5,lVar1);
      uVar7 = 0;
    }
    lVar1 = 0x112d53db8;
    func_0x0001000285a8(0x112d53db8,&UNK_10d91a988);
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(lVar4,uVar7,1,lVar1);
    func_0x000100ff7fa4(lVar4,0x112d53db0,&UNK_10d91a980);
  }
  return;
}



/* Entry: 100ff7b94; end: 100ff7bcb; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow musicEditorDidUpdateStartOffset:] */

void FUN_100ff7b94(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_100ff79c8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100ff7bcc; end: 100ff7c37; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow musicEditorDidTapChangeMusicButton] */

/* WARNING: Possible PIC construction at 0x000100ff7c08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ff7c0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff7bcc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d53d08);
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    FUN_100ff675c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 100ff7c38; end: 100ff7c6b; -[_TtC23QuickCutViewIntegration27QuickCutMusicPickerWorkflow musicEditorCurrentTimeObservable] */

void FUN_100ff7c38(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100ff5e14();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100ff7c6c; end: 100ff7edf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff7c6c(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  long lStack_a0;
  undefined8 uStack_98;
  long alStack_90 [6];
  
  lVar3 = 0x112d53da0;
  func_0x0001000285a8(0x112d53da0,&UNK_10d91a970);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&lStack_a0 - extraout_x8;
  lVar7 = 0x112d53db0;
  func_0x0001000285a8(0x112d53db0,&UNK_10d91a980);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar8 - extraout_x8_00;
  if (param_1 != 0) {
    func_0x000107c4e71c();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d53d58);
      *(long *)(unaff_x20 + _DAT_112d53d58) = param_1;
      func_0x000107c61170(uVar6);
    }
  }
  lVar2 = _DAT_112d53d50;
  lVar9 = *(long *)(unaff_x20 + _DAT_112d53d50);
  if (lVar9 != 0) {
    lVar4 = lVar9;
    func_0x000107c61174();
    lVar5 = lVar4;
    FUN_100ff5ee8();
    alStack_90[1] = 0x94;
    uVar11 = 0;
    uVar12 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar18 = 0;
    alStack_90[3] = 0;
    alStack_90[2] = 0;
    alStack_90[5] = 0;
    alStack_90[4] = 0;
    alStack_90[0] = lVar9;
    func_0x000107c61174();
    func_0x0001002a64a8(alStack_90);
    func_0x000107c61170(lVar4);
    func_0x000107c61574(lVar5);
    lVar5 = _DAT_112d53d38;
    func_0x000107c61428(unaff_x20 + _DAT_112d53d38,alStack_90,0,0);
    lVar9 = unaff_x20 + lVar5;
    (**(code **)(lVar10 + 0x30))(lVar9,1,lVar3);
    bVar1 = (int)lVar9 != 0;
    if (!bVar1) {
      (**(code **)(lVar10 + 0x10))(lVar8,unaff_x20 + lVar5,lVar3);
      FUN_100ff6974(lVar4);
      uStack_98 = CONCAT17(uVar18,CONCAT16(uVar17,CONCAT15(uVar16,CONCAT14(uVar15,CONCAT13(uVar14,
                                                  CONCAT12(uVar13,CONCAT11(uVar12,uVar11)))))));
      lStack_a0 = lVar4;
      func_0x000107c61174(lVar4);
      func_0x000107c5fd28(lVar7,&lStack_a0,lVar3);
      (**(code **)(lVar10 + 8))(lVar8,lVar3);
    }
    lVar3 = 0x112d53db8;
    func_0x0001000285a8(0x112d53db8,&UNK_10d91a988);
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar7,bVar1,1,lVar3);
    func_0x000100ff7fa4(lVar7,0x112d53db0,&UNK_10d91a980);
    func_0x000107c61170(lVar4);
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_112d53d08);
  lVar3 = lVar7;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar7);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 100ff7ee0; end: 100ff7f43;  */

void FUN_100ff7ee0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100ff7f44;
  plVar3[5] = lVar2;
  plVar3[6] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[7] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar3[8] = lVar1;
  plVar3[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff775c,lVar1,lVar2);
  return;
}



/* Entry: 100ff7f44; end: 100ff7f7f;  */

void FUN_100ff7f44(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100ff7f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100ff7f80; end: 100ff7fe3;  */

undefined8 FUN_100ff7f80(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100ff7fe4; end: 100ff807b;  */

void FUN_100ff7fe4(void)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = 0x112d52e48;
  func_0x0001000285a8(0x112d52e48,&UNK_10d919718);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar2 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  lVar3 = *(long *)(unaff_x20 +
                   (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar2 + 7 & 0xffffffffffffff8));
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x100ff8120;
  plVar1[0xc] = unaff_x20 + uVar2;
  plVar1[0xd] = lVar3;
  lVar3 = 0x112d53dd8;
  func_0x0001000285a8(0x112d53dd8,&UNK_10d91a9d0);
  plVar1[0xe] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar1[0xf] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[0x10] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff650c,0,0);
  return;
}



/* Entry: 100ff807c; end: 100ff80cb;  */

undefined8 FUN_100ff807c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d53dd0;
  func_0x0001000285a8(0x112d53dd0,&UNK_10d91a9b0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100ff80cc; end: 100ff80d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ff80cc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = 0x112d53dc8;
  func_0x0001000285a8(0x112d53dc8,&UNK_10d91a9a8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_70 + -extraout_x8;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = 0x112d53da0;
    func_0x0001000285a8(0x112d53da0,&UNK_10d91a970);
    lVar4 = *(long *)(lVar2 + -8);
    (**(code **)(lVar4 + 0x10))(puVar3,param_1,lVar2);
    (**(code **)(lVar4 + 0x38))(puVar3,0,1,lVar2);
    lVar2 = _DAT_112d53d38;
    func_0x000107c61428(lVar1 + _DAT_112d53d38,auStack_70,0x21,0);
    FUN_100ff80d4(puVar3,lVar1 + lVar2,0x112d53dc8,&UNK_10d91a9a8);
    func_0x000107c614a8(auStack_70);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 100ff80d4; end: 100ff811b;  */

undefined8 FUN_100ff80d4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x28))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 100ff811c; end: 100ff8123;  */

void FUN_100ff811c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x58);
  if (lVar5 != 0) {
    lVar2 = *(long *)(unaff_x22 + 0x68) + 0x10;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar5);
    }
    else {
      lVar3 = lVar2;
      FUN_100ff5ee8();
      *(long *)(unaff_x22 + 0x10) = lVar5;
      *(undefined8 *)(unaff_x22 + 0x20) = 1;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x94;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      func_0x000107c61174(lVar5);
      func_0x0001002a64a8(unaff_x22 + 0x10);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(lVar5);
      func_0x000107c61574(lVar3);
    }
    plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100ff6714;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
              (plVar4,(long *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x70));
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x70));
  func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100ff66bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100ff8124; end: 100ff8347;  */

undefined1  [16] FUN_100ff8124(undefined8 param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar2 = *(long *)(unaff_x20 + 0x88);
  if (lVar2 == 0) {
    func_0x000108dfdbb4();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ff81ac);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5faec();
    func_0x000107c61170(lVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
    *(long *)(unaff_x20 + 0x80) = lVar3;
    *(long *)(unaff_x20 + 0x88) = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 0x80);
    param_2 = lVar2;
  }
  func_0x000107c61434(lVar2);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = lVar3;
  return auVar5;
}


