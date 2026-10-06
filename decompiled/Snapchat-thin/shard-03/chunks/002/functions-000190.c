/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1026c6db0; end: 1026c6e13;  */

void FUN_1026c6db0(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c73ac();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110538758;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c6e14; end: 1026c6e1b;  */

void FUN_1026c6e14(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c73ac();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_110538758;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c6e1c; end: 1026c6e4b;  */

void FUN_1026c6e1c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1026c6e4c; end: 1026c720f;  */

void FUN_1026c6e4c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  long unaff_x20;
  long lVar11;
  undefined *puStack_48;
  
  lVar11 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar11;
  func_0x000107c4b8d8();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
    func_0x000104886440();
    return;
  }
  func_0x000107c5d9dc();
  func_0x000107c61180();
  lVar2 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  func_0x0001000285a8(0x112eb07a0,&UNK_10dac4d00);
  lVar11 = lVar3;
  func_0x000107c4b930(lVar3);
  func_0x000107c61180();
  lVar4 = lVar11;
  func_0x0001000b637c();
  func_0x000107c61170(lVar11);
  uVar5 = 0x1026c70dc;
  func_0x0001000c0ebc(0x1026c70dc,0);
  func_0x000107c61574(lVar4);
  puVar6 = &UNK_110538738;
  func_0x000107c613fc(&UNK_110538738,0x20,7);
  *(long *)(puVar6 + 0x10) = lVar2;
  *(long *)(puVar6 + 0x18) = lVar3;
  uVar7 = 0;
  FUN_1026c2eb8(0);
  func_0x000107c615f0(lVar3);
  func_0x000107c615f0(lVar2);
  pcVar8 = FUN_1026c7314;
  func_0x0001000d5158(FUN_1026c7314,puVar6,uVar7);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar6);
  if (lVar2 != 0) {
    ppuVar9 = &PTR____CFConstantStringClassReference_110f72698;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    lVar11 = lVar2;
    func_0x000107c615f0();
    iVar1 = (int)lVar11;
    func_0x000107c49a70();
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(ppuVar9);
    if (iVar1 == 0) goto LAB_1026c70b0;
  }
  lVar11 = lVar3;
  func_0x000107c4b88c();
  func_0x000107c61180();
  if (lVar11 != 0) {
    puVar6 = PTR_PTR_1126bf1b8;
    func_0x000107c610f8(PTR_PTR_1126bf1b8);
    func_0x000107c61174(lVar11);
    func_0x000107c453e4(puVar6);
    func_0x000107c4077c(lVar11);
    func_0x000107c55ab8(puVar6);
    func_0x000107c4077c(lVar11);
    func_0x000107c55fc4(param_2,puVar6);
    func_0x000107c61170(lVar11);
    puVar10 = PTR_PTR_1126b1de8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a380();
    func_0x000107c61170(puVar6);
    puStack_48 = puVar10;
    func_0x0001006c71a4(&puStack_48);
    func_0x000107c61170(puVar10);
    func_0x000107c615e8(lVar3);
    func_0x000107c61574(pcVar8);
    func_0x000107c61170(lVar11);
    func_0x000107c615e8(lVar2);
    return;
  }
LAB_1026c70b0:
  func_0x000107c615e8(lVar3);
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 1026c7210; end: 1026c7313;  */

void FUN_1026c7210(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_5 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f72698;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    func_0x000107c49a70();
    func_0x000107c61170(ppuVar1);
    if ((int)param_5 == 0) {
      puVar3 = (undefined *)0x0;
      goto LAB_1026c7300;
    }
  }
  func_0x000107c4b88c();
  func_0x000107c61180();
  puVar3 = (undefined *)0x0;
  if (param_6 != 0) {
    puVar2 = PTR_PTR_1126bf1b8;
    func_0x000107c610f8(PTR_PTR_1126bf1b8);
    func_0x000107c61174(param_6);
    func_0x000107c453e4(puVar2);
    func_0x000107c4077c(param_6);
    func_0x000107c55ab8(puVar2);
    func_0x000107c4077c(param_6);
    func_0x000107c55fc4(param_3,puVar2);
    func_0x000107c61170(param_6);
    puVar3 = PTR_PTR_1126b1de8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a380();
    func_0x000107c61170(param_6);
    func_0x000107c61170(puVar2);
  }
LAB_1026c7300:
  *param_1 = puVar3;
  return;
}



/* Entry: 1026c7314; end: 1026c731b;  */

void FUN_1026c7314(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f72698;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f72698);
    func_0x000107c49a70();
    func_0x000107c61170(ppuVar1);
    if ((int)lVar2 == 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_1026c7300;
    }
  }
  func_0x000107c4b88c();
  func_0x000107c61180();
  puVar5 = (undefined *)0x0;
  if (lVar3 != 0) {
    puVar4 = PTR_PTR_1126bf1b8;
    func_0x000107c610f8(PTR_PTR_1126bf1b8);
    func_0x000107c61174(lVar3);
    func_0x000107c453e4(puVar4);
    func_0x000107c4077c(lVar3);
    func_0x000107c55ab8(puVar4);
    func_0x000107c4077c(lVar3);
    func_0x000107c55fc4(param_3,puVar4);
    func_0x000107c61170(lVar3);
    puVar5 = PTR_PTR_1126b1de8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a380();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar4);
  }
LAB_1026c7300:
  *param_1 = puVar5;
  return;
}



/* Entry: 1026c731c; end: 1026c733f;  */

void FUN_1026c731c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026c7340; end: 1026c735f;  */

void FUN_1026c7340(void)

{
  FUN_1026c6e4c();
  return;
}



/* Entry: 1026c7360; end: 1026c73ab;  */

undefined ** FUN_1026c7360(void)

{
  return &PTR_DAT_112eb9bc0;
}



/* Entry: 1026c73ac; end: 1026c73cb;  */

void FUN_1026c73ac(void)

{
  func_0x000107c61168(&PTR_PTR_112eb6088);
  return;
}



/* Entry: 1026c73cc; end: 1026c73db;  */

void FUN_1026c73cc(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 1026c73dc; end: 1026c73fb;  */

void FUN_1026c73dc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1026c73fc; end: 1026c7417;  */

void FUN_1026c73fc(long param_1,long param_2)

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



/* Entry: 1026c7418; end: 1026c752b;  */

undefined8 FUN_1026c7418(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar1 = PTR_PTR_1126c0308;
  func_0x000107c610f8(PTR_PTR_1126c0308);
  func_0x000107c61174(unaff_x20);
  func_0x000107c453e4(puVar1);
  func_0x000107c5a494();
  func_0x000107c54094(unaff_x20);
  puVar2 = PTR_PTR_1126c0308;
  func_0x000107c610f8(PTR_PTR_1126c0308);
  func_0x000107c453e4();
  func_0x000107c5a494();
  func_0x000107c52b70(unaff_x20);
  puVar3 = PTR_PTR_1126c0308;
  func_0x000107c610f8(PTR_PTR_1126c0308);
  func_0x000107c453e4();
  func_0x000107c5a494();
  func_0x000107c61174(puVar3);
  func_0x000107c57658(unaff_x20);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(unaff_x20);
  return unaff_x20;
}



/* Entry: 1026c752c; end: 1026c7577;  */

void FUN_1026c752c(undefined8 param_1)

{
  func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1026c75dc,param_1);
  return;
}



/* Entry: 1026c7578; end: 1026c75db;  */

void FUN_1026c7578(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c796c();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110538870;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c75dc; end: 1026c75e3;  */

void FUN_1026c75dc(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1026c796c();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_110538870;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c75e4; end: 1026c7613;  */

void FUN_1026c75e4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1026c7614; end: 1026c77c7;  */

void FUN_1026c7614(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long unaff_x20;
  undefined *puStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5d9dc();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    func_0x0001000285a8(0x112eb4f88,&UNK_10dacbaa8);
    func_0x000104886440();
  }
  else {
    func_0x0001000285a8(0x112eafb88,&UNK_10dac3fb0);
    lVar1 = lVar2;
    func_0x000107c4e640(lVar2);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    puVar4 = &UNK_110538850;
    func_0x000107c613fc(&UNK_110538850,0x18,7);
    func_0x000107c61614(puVar4 + 0x10,lVar2);
    uVar5 = 0;
    FUN_1026c789c(0,0x112eb5278,&PTR_PTR_1126b1de8);
    pcVar6 = FUN_1026c7894;
    func_0x0001000d5158(FUN_1026c7894,puVar4,uVar5);
    func_0x000107c61574(lVar3);
    func_0x000107c61574(puVar4);
    FUN_1026c789c(0,0x112eb60e8,&PTR_PTR_1126c60e0);
    lVar1 = lVar2;
    func_0x000107c407bc(lVar2);
    lVar3 = lVar2;
    func_0x000107c4b894(lVar2);
    FUN_1026c7418(lVar1,lVar3);
    puVar4 = PTR_PTR_1126b1de8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c540a0();
    func_0x000107c61170(lVar1);
    puStack_48 = puVar4;
    func_0x0001006c71a4(&puStack_48);
    func_0x000107c61170(puVar4);
    func_0x000107c615e8(lVar2);
    func_0x000107c61574(pcVar6);
  }
  return;
}



/* Entry: 1026c77c8; end: 1026c7893;  */

void FUN_1026c77c8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    FUN_1026c789c(0,0x112eb60e8,&PTR_PTR_1126c60e0);
    lVar1 = param_3;
    func_0x000107c407bc(param_3);
    lVar2 = param_3;
    func_0x000107c4b894(param_3);
    FUN_1026c7418(lVar1,lVar2);
    puVar3 = PTR_PTR_1126b1de8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c540a0();
    func_0x000107c615e8(param_3);
    func_0x000107c61170(lVar1);
  }
  *param_1 = puVar3;
  return;
}



/* Entry: 1026c7894; end: 1026c789b;  */

void FUN_1026c7894(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    FUN_1026c789c(0,0x112eb60e8,&PTR_PTR_1126c60e0);
    lVar2 = lVar1;
    func_0x000107c407bc(lVar1);
    lVar3 = lVar1;
    func_0x000107c4b894(lVar1);
    FUN_1026c7418(lVar2,lVar3);
    puVar4 = PTR_PTR_1126b1de8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c540a0();
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(lVar2);
  }
  *param_1 = puVar4;
  return;
}



/* Entry: 1026c789c; end: 1026c78db;  */

void FUN_1026c789c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1026c78dc; end: 1026c78ff;  */

void FUN_1026c78dc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026c7900; end: 1026c791f;  */

void FUN_1026c7900(void)

{
  FUN_1026c7614();
  return;
}



/* Entry: 1026c7920; end: 1026c796b;  */

undefined ** FUN_1026c7920(void)

{
  return &PTR_DAT_112eb9bc0;
}



/* Entry: 1026c796c; end: 1026c798b;  */

void FUN_1026c796c(void)

{
  func_0x000107c61168(&PTR_PTR_112eb6170);
  return;
}



/* Entry: 1026c798c; end: 1026c7adb;  */

void FUN_1026c798c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112eb5048,&UNK_10dacbb20);
  puVar1 = &UNK_1105388f0;
  func_0x000107c613fc(&UNK_1105388f0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1026c7adc,puVar1);
  return;
}



/* Entry: 1026c7adc; end: 1026c7ae7;  */

void FUN_1026c7adc(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_1026c8110();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x20) = uStack_50;
  *(undefined8 *)(lVar2 + 0x28) = uStack_48;
  *(undefined8 *)(lVar2 + 0x10) = uStack_60;
  *(undefined8 *)(lVar2 + 0x18) = uStack_58;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_110538938;
  *param_1 = lVar2;
  return;
}



/* Entry: 1026c7ae8; end: 1026c7f03;  */

void FUN_1026c7ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 1026c7f04; end: 1026c805f;  */

void FUN_1026c7f04(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_110538a60;
  func_0x000107c613fc(&UNK_110538a60,0x19,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar1[0x18] = param_1;
  uStack_40 = 0x1026c8204;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100ab47f8;
  puStack_48 = &UNK_110538a78;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c440c8(param_2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1026c8060; end: 1026c8067;  */

undefined1  [16] FUN_1026c8060(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long *plVar6;
  code *pcVar7;
  undefined *puVar8;
  long unaff_x20;
  code *pcVar9;
  undefined1 auVar10 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar6 = *(long **)(unaff_x20 + 0x18);
  ppuVar5 = &puStack_70;
  puVar2 = &UNK_110538998;
  func_0x000107c613fc(&UNK_110538998,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c6157c(param_1);
  func_0x000107c615f0(uVar1);
  plVar3 = plVar6;
  func_0x000107c44ae0();
  puVar4 = &UNK_1105389c0;
  func_0x000107c613fc(&UNK_1105389c0,0x19,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  puVar4[0x18] = (char)plVar3;
  uStack_50 = 0x1026c8170;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100ab47f8;
  puStack_58 = &UNK_1105389d8;
  puStack_48 = puVar4;
  func_0x000107c60bc4(&puStack_70);
  puVar4 = puStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(puVar4);
  func_0x000107c440c8(uVar1);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c5e2e0();
  func_0x000107c61180();
  if (plVar6 == (long *)0x0) {
    func_0x0001000b6d30();
    func_0x000107c613fc();
    pcVar9 = (code *)0x0;
    func_0x0001000b6d50(0,0);
  }
  else {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    plVar3 = plVar6;
    func_0x0001000b637c();
    puVar4 = &UNK_110538a10;
    func_0x000107c613fc(&UNK_110538a10,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_1026c8168;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    pcVar9 = *(code **)(*plVar3 + 0x60);
    func_0x000107c6157c(puVar2);
    pcVar7 = FUN_1026c8198;
    puVar8 = puVar4;
    (*pcVar9)();
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_110538a38;
    func_0x000107c613fc(&UNK_110538a38,0x20,7);
    *(code **)(puVar4 + 0x10) = pcVar7;
    *(undefined **)(puVar4 + 0x18) = puVar8;
    func_0x0001000b6d30(0);
    func_0x000107c613fc();
    func_0x000107c615f0(pcVar7);
    pcVar9 = FUN_1026c81c0;
    func_0x0001000b6d50(FUN_1026c81c0,puVar4);
    func_0x000107c61170(plVar6);
    func_0x000107c615e8(pcVar7);
  }
  func_0x000107c61574(puVar2);
  auVar10._8_8_ = &PTR_DAT_1107aaa40;
  auVar10._0_8_ = pcVar9;
  return auVar10;
}



/* Entry: 1026c8068; end: 1026c80a3;  */

void FUN_1026c8068(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026c80a4; end: 1026c80c3;  */

void FUN_1026c80a4(void)

{
  func_0x0001026c7b38();
  return;
}



/* Entry: 1026c80c4; end: 1026c810f;  */

undefined ** FUN_1026c80c4(void)

{
  return &PTR_DAT_112eb9bd8;
}



/* Entry: 1026c8110; end: 1026c812f;  */

void FUN_1026c8110(void)

{
  func_0x000107c61168(&PTR_PTR_112eb6250);
  return;
}



/* Entry: 1026c8130; end: 1026c8167;  */

void FUN_1026c8130(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1026c8168; end: 1026c8197;  */

void FUN_1026c8168(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_60;
  puVar3 = &UNK_110538a60;
  func_0x000107c613fc(&UNK_110538a60,0x19,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar2;
  puVar3[0x18] = param_1;
  uStack_40 = 0x1026c8204;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100ab47f8;
  puStack_48 = &UNK_110538a78;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c440c8(uVar1);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1026c8198; end: 1026c81bf;  */

void FUN_1026c8198(undefined8 *param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  func_0x000107c3ebcc(*param_1);
  (*pcVar1)();
  return;
}



/* Entry: 1026c81c0; end: 1026c81fb;  */

void FUN_1026c81c0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1026c81fc; end: 1026c8207;  */

void FUN_1026c81fc(long param_1,long param_2)

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



/* Entry: 1026c8208; end: 1026c8247;  */

void FUN_1026c8208(void)

{
  func_0x0001000285a8(0x112eb62c8,&UNK_10dacc990);
  func_0x0001000823a8(FUN_1026c8248,0);
  return;
}



/* Entry: 1026c8248; end: 1026c82a7;  */

void FUN_1026c8248(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_1026c8478();
  lVar1 = param_2;
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126aad80;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110538b48;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c82a8; end: 1026c82eb;  */

long FUN_1026c82a8(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126aad80;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 1026c82ec; end: 1026c8423;  */

/* WARNING: Possible PIC construction at 0x0001026c8344: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026c8378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026c83a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026c83d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026c83a8) */
/* WARNING: Removing unreachable block (ram,0x0001026c841c) */
/* WARNING: Removing unreachable block (ram,0x0001026c83b8) */
/* WARNING: Removing unreachable block (ram,0x0001026c837c) */
/* WARNING: Removing unreachable block (ram,0x0001026c8348) */
/* WARNING: Removing unreachable block (ram,0x0001026c8418) */
/* WARNING: Removing unreachable block (ram,0x0001026c835c) */
/* WARNING: Removing unreachable block (ram,0x0001026c83d4) */
/* WARNING: Removing unreachable block (ram,0x0001026c8420) */
/* WARNING: Removing unreachable block (ram,0x0001026c83e4) */

void FUN_1026c82ec(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  func_0x000107c4f2b0();
  func_0x000107c61180();
  func_0x000107c4a014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1026c8424; end: 1026c8447;  */

void FUN_1026c8424(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026c8448; end: 1026c8467;  */

void FUN_1026c8448(void)

{
  FUN_1026c82ec();
  return;
}



/* Entry: 1026c8468; end: 1026c8477;  */

undefined1  [16] FUN_1026c8468(void)

{
  return ZEXT816(0x110538b68);
}



/* Entry: 1026c8478; end: 1026c8497;  */

void FUN_1026c8478(void)

{
  func_0x000107c61168(&PTR_PTR_112eb6310);
  return;
}



/* Entry: 1026c8498; end: 1026c84d7;  */

void FUN_1026c8498(void)

{
  func_0x0001000285a8(0x112eb6370,&UNK_10dacca80);
  func_0x0001000823a8(FUN_1026c84d8,0);
  return;
}



/* Entry: 1026c84d8; end: 1026c8537;  */

void FUN_1026c84d8(long *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  
  FUN_1026c86d8();
  lVar1 = param_2;
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126aad88;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_110538b78;
  *param_1 = lVar1;
  return;
}



/* Entry: 1026c8538; end: 1026c857b;  */

long FUN_1026c8538(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR_PTR_1126aad88;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  return unaff_x20;
}



/* Entry: 1026c857c; end: 1026c8683;  */

/* WARNING: Possible PIC construction at 0x0001026c85cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026c863c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026c85d0) */
/* WARNING: Removing unreachable block (ram,0x0001026c860c) */
/* WARNING: Removing unreachable block (ram,0x0001026c867c) */
/* WARNING: Removing unreachable block (ram,0x0001026c85d4) */
/* WARNING: Removing unreachable block (ram,0x0001026c8680) */
/* WARNING: Removing unreachable block (ram,0x0001026c85d8) */
/* WARNING: Removing unreachable block (ram,0x0001026c8620) */
/* WARNING: Removing unreachable block (ram,0x0001026c8640) */

void FUN_1026c857c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  func_0x000107c4f2b0();
  func_0x000107c61180();
  func_0x000107c4a014();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1026c8684; end: 1026c86a7;  */

void FUN_1026c8684(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026c86a8; end: 1026c86c7;  */

void FUN_1026c86a8(void)

{
  FUN_1026c857c();
  return;
}



/* Entry: 1026c86c8; end: 1026c86d7;  */

undefined1  [16] FUN_1026c86c8(void)

{
  return ZEXT816(0x110538b98);
}



/* Entry: 1026c86d8; end: 1026c86f7;  */

void FUN_1026c86d8(void)

{
  func_0x000107c61168(&PTR_PTR_112eb63b8);
  return;
}



/* Entry: 1026c86f8; end: 1026c8893;  */

void FUN_1026c86f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110538bb8;
  func_0x000107c613fc(&UNK_110538bb8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x0001000285a8(0x112eae840,&UNK_10dac2ed0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001002acf1c(FUN_1026c8894,puVar1);
  return;
}



/* Entry: 1026c8894; end: 1026c88a3;  */

void FUN_1026c8894(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000100083b20(&uStack_58,lVar3,uVar1,*(undefined8 *)(unaff_x20 + 0x20),uVar2,
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_60);
  func_0x000100083b20(&uStack_68);
  FUN_1026c9398();
  lVar4 = lVar3;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x40) = 0;
  *(undefined8 *)(lVar4 + 0x38) = 0;
  *(undefined8 *)(lVar4 + 0x50) = 0;
  *(undefined8 *)(lVar4 + 0x48) = 0;
  *(undefined8 *)(lVar4 + 0x60) = 0;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  *(undefined8 *)(lVar4 + 0x68) = 0;
  *(undefined8 *)(lVar4 + 0x70) = 0xe000000000000000;
  *(undefined8 *)(lVar4 + 0x28) = uVar2;
  *(undefined8 *)(lVar4 + 0x30) = uVar1;
  *(undefined8 *)(lVar4 + 0x18) = uStack_60;
  *(undefined8 *)(lVar4 + 0x20) = uStack_58;
  *(undefined8 *)(lVar4 + 0x10) = uStack_68;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110538c98;
  *param_1 = lVar4;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  return;
}



/* Entry: 1026c88a4; end: 1026c8913;  */

void FUN_1026c88a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0xe000000000000000;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_5;
  return;
}



/* Entry: 1026c8914; end: 1026c8a03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026c8914(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_113083180);
  puVar1 = &UNK_110538be0;
  func_0x000107c613fc(&UNK_110538be0,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  pcStack_40 = FUN_1026c91c8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x1026c954c;
  puStack_48 = &UNK_110538bf8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174();
  func_0x000107c61574(puVar1);
  uVar3 = uVar4;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar3;
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 1026c8a04; end: 1026c8a6b;  */

void FUN_1026c8a04(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [24];
  
  puVar2 = auStack_38;
  func_0x000107c61428(param_2 + 0x10,puVar2,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000104515f78();
    uVar3 = *(undefined8 *)(param_2 + 0x70);
    *(long *)(param_2 + 0x68) = lVar1;
    *(undefined1 **)(param_2 + 0x70) = puVar2;
    func_0x000107c61574(param_2);
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 1026c8a6c; end: 1026c8da3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026c8a6c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  ppuVar9 = &puStack_90;
  ppuVar10 = &puStack_90;
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fecfb8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar3 = 0x655270616d3a4356;
    func_0x000107c5fadc(0x655270616d3a4356,0xeb00000000796461);
    puVar4 = PTR_PTR_1126bc330;
    func_0x000107c61168();
    puVar5 = puVar4;
    func_0x000107c5cd50();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined **)(unaff_x20 + 0x38) = puVar5;
    func_0x000107c61170(uVar3);
    if (*(long *)(unaff_x20 + 0x38) != 0) {
      func_0x000107c3e740();
    }
    lVar6 = lVar2;
    func_0x000107c4c3c8();
    func_0x000107c61180();
    puVar5 = &UNK_110538be0;
    func_0x000107c613fc(&UNK_110538be0,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = (code *)0x1026c91ec;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x1026c9548;
    puStack_78 = &UNK_110538c20;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    lVar8 = lVar6;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(lVar6);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    *(long *)(unaff_x20 + 0x48) = lVar8;
    func_0x000107c61170(uVar3);
    uVar3 = 0xd000000000000010;
    func_0x000107c5fadc(0xd000000000000010,0x800000010f0b61f0);
    func_0x000107c5cd50();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined **)(unaff_x20 + 0x40) = puVar4;
    func_0x000107c61170(uVar3);
    if (*(long *)(unaff_x20 + 0x40) != 0) {
      func_0x000107c3e740();
    }
    lVar6 = lVar2;
    func_0x000107c4c330();
    func_0x000107c61180();
    puVar4 = &UNK_110538be0;
    puVar5 = puVar4;
    func_0x000107c613fc(&UNK_110538be0,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    pcStack_70 = FUN_1026c91f4;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    uStack_80 = 0x1026c9550;
    puStack_78 = &UNK_110538c48;
    puStack_68 = puVar5;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    lVar8 = lVar6;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(lVar6);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
    *(long *)(unaff_x20 + 0x50) = lVar8;
    func_0x000107c61170(uVar3);
    lVar6 = lVar2;
    func_0x000107c4c304();
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_110538be0,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    pcStack_70 = FUN_1026c922c;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    uStack_80 = 0x1026c9548;
    puStack_78 = &UNK_110538c70;
    puStack_68 = puVar4;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    lVar8 = lVar6;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c61170(lVar6);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x58);
    *(long *)(unaff_x20 + 0x58) = lVar8;
    func_0x000107c61170(uVar3);
    func_0x000107c5bc00(lVar2);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1026c8da4; end: 1026c8e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026c8da4(long param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1026c8e0c(*(undefined8 *)(param_1 + _DAT_112fed1e8));
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 1026c8e0c; end: 1026c8f6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026c8e0c(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar2 = 0;
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    func_0x000107c427dc();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  }
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  func_0x000107c61170(uVar2);
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_1130831b0);
  if ((lVar4 == 0) || (*(char *)(lVar4 + _DAT_113083398) != '\x01')) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c4c448();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000107c4c300(lVar4);
      func_0x000107c615e8(lVar4);
    }
    uVar2 = 1;
  }
  uVar6 = *(ulong *)(unaff_x20 + 0x68);
  uVar5 = *(ulong *)(unaff_x20 + 0x70);
  uVar1 = uVar6 & 0xffffffffffff;
  if ((uVar5 & 0x2000000000000000) != 0) {
    uVar1 = uVar5 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar5 = 0xe900000000000045;
    uVar6 = 0x4352554f535f4f4e;
  }
  else {
    func_0x000107c61434(uVar5);
  }
  func_0x000100083b20(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 8))(param_1,uVar6,uVar5,uVar2,uStack_60,lStack_58);
  func_0x000107c6142c(uVar5);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 1026c8f6c; end: 1026c8fc3;  */

void FUN_1026c8f6c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    func_0x000107c61574();
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 1026c8fc4; end: 1026c9127;  */

void FUN_1026c8fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_48,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61648();
  if (param_5 != 0) {
    FUN_1026c93c8(param_1,param_2,param_3);
    func_0x000107c61574(param_5);
  }
  return;
}



/* Entry: 1026c9128; end: 1026c91c7;  */

/* WARNING: Possible PIC construction at 0x0001026c9180: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026c9198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001026c91b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001026c919c) */
/* WARNING: Removing unreachable block (ram,0x0001026c9184) */
/* WARNING: Removing unreachable block (ram,0x0001026c91b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026c9128(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if ((param_1 & 1) != 0) {
    return;
  }
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fecfb8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3f4f0();
    func_0x000107c615e8(lVar1);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1026c91c8; end: 1026c91f3;  */

void FUN_1026c91c8(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  puVar3 = auStack_38;
  func_0x000107c61428(unaff_x20 + 0x10,puVar3,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000104515f78();
    uVar4 = *(undefined8 *)(lVar1 + 0x70);
    *(long *)(lVar1 + 0x68) = lVar2;
    *(undefined1 **)(lVar1 + 0x70) = puVar3;
    func_0x000107c61574(lVar1);
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 1026c91f4; end: 1026c922b;  */

void FUN_1026c91f4(void)

{
  func_0x000103b36f94(FUN_1026c93b8);
  return;
}



/* Entry: 1026c922c; end: 1026c9233;  */

void FUN_1026c922c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x18);
    func_0x000107c4c448();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      func_0x000107c41bcc(lVar3);
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1026c9234; end: 1026c92c7;  */

void FUN_1026c9234(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1026c92c8; end: 1026c935f;  */

void FUN_1026c92c8(void)

{
  FUN_1026c8914();
  return;
}



/* Entry: 1026c9360; end: 1026c9367;  */

void FUN_1026c9360(void)

{
  return;
}



/* Entry: 1026c9368; end: 1026c9387;  */

void FUN_1026c9368(void)

{
  FUN_1026c9128();
  return;
}



/* Entry: 1026c9388; end: 1026c9397;  */

undefined1  [16] FUN_1026c9388(void)

{
  return ZEXT816(0x110538ce0);
}



/* Entry: 1026c9398; end: 1026c93b7;  */

void FUN_1026c9398(void)

{
  func_0x000107c61168(&PTR_PTR_112eb6458);
  return;
}



/* Entry: 1026c93b8; end: 1026c93c7;  */

void FUN_1026c93b8(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    *(undefined8 *)(lVar1 + 0x40) = 0;
    func_0x000107c61574();
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1026c93c8; end: 1026c952f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026c93c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  uVar2 = 0;
  if (*(long *)(unaff_x20 + 0x40) != 0) {
    func_0x000107c427dc();
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  }
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  func_0x000107c61170(uVar2);
  lVar4 = *(long *)(*(long *)(unaff_x20 + 0x20) + _DAT_1130831b0);
  if ((lVar4 != 0) && (*(char *)(lVar4 + _DAT_113083398) == '\x01')) {
    lVar3 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c4c448();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      func_0x000107c4c35c(lVar4);
      func_0x000107c615e8(lVar4);
    }
  }
  uVar6 = *(ulong *)(unaff_x20 + 0x68);
  uVar5 = *(ulong *)(unaff_x20 + 0x70);
  uVar1 = uVar6 & 0xffffffffffff;
  if ((uVar5 & 0x2000000000000000) != 0) {
    uVar1 = uVar5 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    uVar5 = 0xe900000000000045;
    uVar6 = 0x4352554f535f4f4e;
  }
  else {
    func_0x000107c61434(uVar5);
  }
  func_0x000100083b20(auStack_78);
  func_0x0001000a8868(auStack_78,uStack_60);
  (**(code **)(lStack_58 + 8))(param_1,param_2,param_3,uVar6,uVar5,uStack_60,lStack_58);
  func_0x000107c6142c(uVar5);
  func_0x0001000834e4(auStack_78);
  return;
}



/* Entry: 1026c9530; end: 1026c955b;  */

void FUN_1026c9530(long param_1,long param_2)

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



/* Entry: 1026c955c; end: 1026c9617;  */

void FUN_1026c955c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_110538de0;
  func_0x000107c613fc(&UNK_110538de0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1026c9834,puVar1);
  return;
}



/* Entry: 1026c9618; end: 1026c9833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026c9618(long *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  func_0x000100083b20(&lStack_70);
  func_0x000100083b20(&lStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1026c9f20();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  func_0x000107c61614(param_2 + 0x38,0);
  lVar1 = *(long *)(lStack_68 + _DAT_1130831b0);
  if ((lVar1 != 0) && (*(char *)(lVar1 + _DAT_113083398) == '\x01')) {
    lVar4 = *(long *)(lStack_70 + _DAT_112fecfb0);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      uVar2 = uStack_80;
      func_0x0001090219fc();
      if ((uVar2 & 1) == 0) {
        func_0x000107c61604(param_2 + 0x38,lStack_68);
        uVar5 = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(lStack_78 + _DAT_113097748);
        func_0x000107c615f0();
        func_0x000107c615e8(uVar5);
        uVar5 = *(undefined8 *)(param_2 + 0x20);
        *(ulong *)(param_2 + 0x20) = uStack_80;
        func_0x000107c615f0(uStack_80);
        func_0x000107c615e8(uVar5);
        uVar5 = *(undefined8 *)(param_2 + 0x30);
        *(undefined8 *)(param_2 + 0x30) = uStack_88;
        func_0x000107c6157c(uStack_88);
        func_0x000107c61574(uVar5);
        lVar3 = lVar4;
        func_0x000107c4c360(lVar4);
        func_0x000107c61180();
        FUN_1026c9a00();
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(lVar3);
      }
      else {
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar4);
      }
    }
  }
  func_0x000107c61170(lStack_68);
  func_0x000107c61170(lStack_70);
  func_0x000107c61170(lStack_78);
  func_0x000107c615e8(uStack_80);
  func_0x000107c61574(uStack_88);
  *param_1 = param_2;
  param_1[1] = (long)&PTR_DAT_110538e08;
  return;
}



/* Entry: 1026c9834; end: 1026c9843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026c9834(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_88;
  ulong uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&lStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&lStack_70);
  func_0x000100083b20(&lStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  FUN_1026c9f20();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  func_0x000107c61614(lVar1 + 0x38,0);
  lVar2 = *(long *)(lStack_68 + _DAT_1130831b0);
  if ((lVar2 != 0) && (*(char *)(lVar2 + _DAT_113083398) == '\x01')) {
    lVar5 = *(long *)(lStack_70 + _DAT_112fecfb0);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 == 0) {
      func_0x000107c61170(lVar2);
    }
    else {
      uVar3 = uStack_80;
      func_0x0001090219fc();
      if ((uVar3 & 1) == 0) {
        func_0x000107c61604(lVar1 + 0x38,lStack_68);
        uVar6 = *(undefined8 *)(lVar1 + 0x18);
        *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lStack_78 + _DAT_113097748);
        func_0x000107c615f0();
        func_0x000107c615e8(uVar6);
        uVar6 = *(undefined8 *)(lVar1 + 0x20);
        *(ulong *)(lVar1 + 0x20) = uStack_80;
        func_0x000107c615f0(uStack_80);
        func_0x000107c615e8(uVar6);
        uVar6 = *(undefined8 *)(lVar1 + 0x30);
        *(undefined8 *)(lVar1 + 0x30) = uStack_88;
        func_0x000107c6157c(uStack_88);
        func_0x000107c61574(uVar6);
        lVar4 = lVar5;
        func_0x000107c4c360(lVar5);
        func_0x000107c61180();
        FUN_1026c9a00();
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar5);
        func_0x000107c615e8(lVar4);
      }
      else {
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar5);
      }
    }
  }
  func_0x000107c61170(lStack_68);
  func_0x000107c61170(lStack_70);
  func_0x000107c61170(lStack_78);
  func_0x000107c615e8(uStack_80);
  func_0x000107c61574(uStack_88);
  *param_1 = lVar1;
  param_1[1] = (long)&PTR_DAT_110538e08;
  return;
}



/* Entry: 1026c9844; end: 1026c99ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1026c9844(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  func_0x000107c61614(unaff_x20 + 0x38,0);
  lVar1 = *(long *)(param_1 + _DAT_1130831b0);
  if ((lVar1 != 0) && (*(char *)(lVar1 + _DAT_113083398) == '\x01')) {
    lVar4 = *(long *)(param_2 + _DAT_112fecfb0);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      uVar2 = param_4;
      func_0x0001090219fc();
      if ((uVar2 & 1) == 0) {
        func_0x000107c61604(unaff_x20 + 0x38,param_1);
        uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
        *(undefined8 *)(unaff_x20 + 0x18) = *(undefined8 *)(param_3 + _DAT_113097748);
        func_0x000107c615f0();
        func_0x000107c615e8(uVar5);
        uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
        *(ulong *)(unaff_x20 + 0x20) = param_4;
        func_0x000107c615f0(param_4);
        func_0x000107c615e8(uVar5);
        uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
        *(undefined8 *)(unaff_x20 + 0x30) = param_5;
        func_0x000107c6157c(param_5);
        func_0x000107c61574(uVar5);
        lVar3 = lVar4;
        func_0x000107c4c360(lVar4);
        func_0x000107c61180();
        FUN_1026c9a00();
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar4);
        func_0x000107c615e8(lVar3);
      }
      else {
        func_0x000107c61170(lVar1);
        func_0x000107c61170(lVar4);
      }
    }
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61574(param_5);
  return unaff_x20;
}



/* Entry: 1026c9a00; end: 1026c9b73;  */

void FUN_1026c9a00(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  pbVar2 = param_1;
  func_0x0001000ad07c();
  if (((*pbVar2 & 1) != 0) || (func_0x0001005e3364(), *pbVar2 == 1)) {
    iVar1 = (int)pbVar2;
    func_0x0001090224d8();
    if (iVar1 == 0) {
      return;
    }
  }
  func_0x000107c4b7e0();
  func_0x000107c61180();
  puVar3 = &UNK_110538e88;
  func_0x000107c613fc(&UNK_110538e88,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcStack_40 = FUN_1026ca0b4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_101b6a7e4;
  puStack_48 = &UNK_110538ea0;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  pbVar2 = param_1;
  func_0x000107c5c320();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  *(byte **)(unaff_x20 + 0x28) = pbVar2;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 1026c9b74; end: 1026c9b77;  */

void FUN_1026c9b74(void)

{
  return;
}



/* Entry: 1026c9b78; end: 1026c9bcb;  */

void FUN_1026c9b78(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1026c9bcc();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1026c9bcc; end: 1026c9e67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1026c9bcc(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 uStack_88;
  undefined7 uStack_87;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x000107c4218c();
  }
  lVar10 = unaff_x20 + 0x38;
  func_0x000107c61618();
  lVar9 = _DAT_113083198;
  if (lVar10 != 0) {
    func_0x000107c61428(lVar10 + _DAT_113083198,auStack_78,0,0);
    lVar9 = lVar10 + lVar9;
    func_0x000107c61618();
    func_0x000107c61170(lVar10);
    if (lVar9 != 0) {
      lVar10 = lVar9;
      func_0x000107c4f078();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      if (lVar10 != 0) {
        func_0x000107c61170(lVar10);
        return;
      }
    }
  }
  if ((((*(long *)(unaff_x20 + 0x10) == 0) && (lVar10 = *(long *)(unaff_x20 + 0x18), lVar10 != 0))
      && (lVar9 = *(long *)(unaff_x20 + 0x20), lVar9 != 0)) &&
     (lVar11 = *(long *)(unaff_x20 + 0x30), lVar11 != 0)) {
    func_0x000107c615f0(lVar9);
    func_0x000107c6157c(lVar11);
    lVar3 = lVar10;
    func_0x000107c615f0();
    FUN_1026d7864();
    lVar12 = *(long *)(lVar3 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar12 != 0) {
      puVar13 = (undefined1 *)(lVar3 + 0x20);
      do {
        uStack_88 = *puVar13;
        func_0x00010008a7c8(&lStack_80,&uStack_88);
        lVar2 = lStack_80;
        if (lStack_80 != 0) {
          func_0x000100083b20(&uStack_88);
          func_0x000107c61574(lVar2);
          uVar7 = CONCAT71(uStack_87,uStack_88);
          puVar5 = puVar6;
          func_0x000107c61550();
          if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
             (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar6 >> 0x3e == 0) {
              puVar4 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar4 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar6) {
                puVar4 = puVar6;
              }
              func_0x000107c60480(puVar4);
            }
            puVar5 = (undefined *)0x0;
            FUN_1026ca11c(0,puVar4 + 1,1,puVar6);
          }
          uVar8 = (ulong)puVar5 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar8 + 0x10);
          puVar6 = puVar5;
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar1) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
            FUN_1026ca11c(puVar6,uVar1 + 1,1,puVar5);
            uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar8 + 0x10) = uVar1 + 1;
          *(undefined8 *)(uVar8 + uVar1 * 8 + 0x20) = uVar7;
        }
        lVar12 = lVar12 + -1;
        puVar13 = puVar13 + 1;
      } while (lVar12 != 0);
    }
    func_0x000107c6142c(lVar3);
    if ((ulong)puVar6 >> 0x3e == 0) {
      puVar5 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar6) {
        puVar5 = puVar6;
      }
      func_0x000107c60480();
    }
    if (puVar5 == (undefined *)0x0) {
      func_0x000107c615e8(lVar10);
      func_0x000107c615e8(lVar9);
      func_0x000107c61574(lVar11);
      func_0x000107c6142c(puVar6);
    }
    else {
      func_0x0001026cc210(0);
      func_0x000107c613fc();
      FUN_1026cc2ec(puVar6,lVar10);
      func_0x000107c61574(lVar11);
      func_0x000107c615e8(lVar10);
      func_0x000107c615e8(lVar9);
      uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
      *(undefined **)(unaff_x20 + 0x10) = puVar6;
      func_0x000107c61574(uVar7);
    }
  }
  return;
}



/* Entry: 1026c9e68; end: 1026c9e6b;  */

void FUN_1026c9e68(void)

{
  return;
}



/* Entry: 1026c9e6c; end: 1026c9ed3;  */

void FUN_1026c9e6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61610(unaff_x20 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1026c9ed4; end: 1026c9f1f;  */

void FUN_1026c9ed4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110538df8;
  return;
}



/* Entry: 1026c9f20; end: 1026c9f8f;  */

void FUN_1026c9f20(void)

{
  func_0x000107c61168(&PTR_PTR_112eb6590);
  return;
}



/* Entry: 1026c9f90; end: 1026c9f93;  */

void FUN_1026c9f90(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eb6620 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001026c9f40(0xff);
  puVar2 = &UNK_10daccd48;
  func_0x000107c61520(&UNK_10daccd48,uVar1);
  puRam0000000112eb6620 = puVar2;
  return;
}



/* Entry: 1026c9f94; end: 1026c9fd7;  */

void FUN_1026c9f94(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112eb6620 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x0001026c9f40(0xff);
  puVar2 = &UNK_10daccd48;
  func_0x000107c61520(&UNK_10daccd48,uVar1);
  puRam0000000112eb6620 = puVar2;
  return;
}



/* Entry: 1026c9fd8; end: 1026ca083;  */

void FUN_1026c9fd8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1026ca084; end: 1026ca0b3;  */

bool FUN_1026ca084(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1026ca0b4; end: 1026ca0f7;  */

void FUN_1026ca0b4(void)

{
  func_0x000103b364dc(FUN_1026c9b74,0,0x1026ca114);
  return;
}



/* Entry: 1026ca0f8; end: 1026ca11b;  */

void FUN_1026ca0f8(long param_1,long param_2)

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



/* Entry: 1026ca11c; end: 1026ca243;  */

ulong FUN_1026ca11c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ca244);
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
  FUN_1026ca244(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1026ca240);
      (*pcVar1)();
    }
    FUN_1026ca344(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1026ca244; end: 1026ca343;  */

undefined * FUN_1026ca244(undefined *param_1,undefined *param_2)

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
    FUN_1026ca468();
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



/* Entry: 1026ca344; end: 1026ca467;  */

long FUN_1026ca344(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1026ca464);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1026ca468);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112eb6628;
        func_0x0001000285a8(0x112eb6628,&UNK_10daccda8);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112eb6628;
      func_0x0001000285a8(0x112eb6628,&UNK_10daccda8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1026ca460);
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


